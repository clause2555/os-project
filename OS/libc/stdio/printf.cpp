#include <limits.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// Assuming you already have the print function for character arrays
static bool print(const char* data, size_t length) {
    const unsigned char* bytes = (const unsigned char*)data;
    for (size_t i = 0; i < length; i++)
        if (putchar(bytes[i]) == EOF)
            return false;
    return true;
}

static bool print_number(long num, int base, bool is_signed) {
    char buffer[20]; // Buffer to hold the number as a string
    const char* digits = "0123456789ABCDEF";  // Hexadecimal digits
    int pos = 19;
    bool negative = false;

    buffer[pos] = '\0';

    if (is_signed && num < 0) {
        negative = true;
        if (num == LONG_MIN) {
            num = -(num + 1);  // Avoid overflow
            num += 1;
        } else {
            num = -num;
        }
    }

    do {
        buffer[--pos] = digits[num % base];
        num /= base;
    } while (num > 0);

    if (negative) {
        buffer[--pos] = '-';
    }

    return print(&buffer[pos], 19 - pos);
}

int printf(const char* restrict format, ...) {
    va_list parameters;
    va_start(parameters, format);

    int written = 0;

    while (*format != '\0') {
        size_t maxrem = INT_MAX - written;

        if (format[0] != '%' || format[1] == '%') {
            if (format[0] == '%')
                format++;
            size_t amount = 1;
            while (format[amount] && format[amount] != '%')
                amount++;
            if (maxrem < amount) {
                return -1; // EOVERFLOW
            }
            if (!print(format, amount))
                return -1;
            format += amount;
            written += amount;
            continue;
        }

        const char* format_begun_at = format++;

        if (*format == 'c') {
            format++;
            char c = (char)va_arg(parameters, int);
            if (!maxrem) {
                return -1; // EOVERFLOW
            }
            if (!print(&c, sizeof(c)))
                return -1;
            written++;
        } else if (*format == 's') {
            format++;
            const char* str = va_arg(parameters, const char*);
            size_t len = strlen(str);
            if (maxrem < len) {
                return -1; // EOVERFLOW
            }
            if (!print(str, len))
                return -1;
            written += len;
        } else if (*format == 'p') {  // Handle pointers
    		format++;
    		unsigned long ptr_val = (unsigned long)va_arg(parameters, void*);
    		if (!maxrem) {
        		return -1; // EOVERFLOW
    		}
    		if (!print("0x", 2))  // Add "0x" prefix for pointers
        		return -1;
    		written += 2;
    		if (!print_number(ptr_val, 16, false))  // Print the number in base 16 (hex)
        		return -1;
	} else if (*format == 'x') {  // Handle hexadecimal
    		format++;
    		unsigned long hex_val = (unsigned long)va_arg(parameters, unsigned long);
    		if (!maxrem) {
        		return -1; // EOVERFLOW
    		}
    		if (!print_number(hex_val, 16, false))  // Print the number in base 16 (hex)
        		return -1;
	} else if (*format == 'u') {
            format++;
            unsigned int uval = va_arg(parameters, unsigned int);
            if (!maxrem) {
                return -1; // EOVERFLOW
            }
            if (!print_number(uval, 10, false))
                return -1;
        } else if (*format == 'd') {
            format++;
            int ival = va_arg(parameters, int);
            if (!maxrem) {
                return -1; // EOVERFLOW
            }
            if (!print_number(ival, 10, true))
                return -1;
        } else {
            format = format_begun_at;
            size_t len = strlen(format);
            if (maxrem < len) {
                return -1; // EOVERFLOW
            }
            if (!print(format, len))
                return -1;
            written += len;
            format += len;
        }
    }

    va_end(parameters);
    return written;
}


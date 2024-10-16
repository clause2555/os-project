// cpuid.h
#ifndef CPUID_H
#define CPUID_H

#include <stdint.h>

namespace CPUID {

    struct CPUInfo {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
    };

    // Execute CPUID with the given EAX input
    inline CPUInfo cpuid(uint32_t eax_input) {
        CPUInfo info;
        asm volatile (
            "cpuid"
            : "=a"(info.eax), "=b"(info.ebx), "=c"(info.ecx), "=d"(info.edx)
            : "a"(eax_input)
        );
        return info;
    }

} // namespace CPUID

#endif // CPUID_H


/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_zvl4096b -mabi=lp64d -O3 -mrvv-max-lmul=m8" } */

#include "def.h"

DEF_REPEAT (v16qi, int8_t, 16, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var0, var0, var0, var0, var0, var0)
DEF_REPEAT (v32qi, int8_t, 32, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var0, var0, var0, var0, var0, var0)
DEF_REPEAT (v64qi, int8_t, 64, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var0, var0, var0, var0)
DEF_REPEAT (v128qi, int8_t, 128, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
	    var1, var1, var1, var1, var1, var1, var1, var1, var0, var0, var0, var0, var0, var0)
DEF_REPEAT (
  v256qi, int8_t, 256, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var0, var0, var0, var0, var0, var0)
DEF_REPEAT (
  v512qi, int8_t, 512, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var0, var0, var0, var0, var0, var0)
DEF_REPEAT (
  v1024qi, int8_t, 1024, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var0,
  var0, var0, var0, var0, var0)
DEF_REPEAT (
  v2048qi, int8_t, 2048, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1, var1,
  var1, var1, var1, var1, var1, var1, var1, var1, var1, var0, var0, var0, var0, var0, var0)

/* { dg-final { scan-assembler-times {vmv\.v\.x} 8 } } */
/* { dg-final { scan-assembler-times {vid\.v} 8 } } */
/* { dg-final { scan-assembler-times {vmsgtu} 8 } } */
/* { dg-final { scan-assembler-times {vmerge\.vxm} 8 } } */
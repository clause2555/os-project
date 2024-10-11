/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"
#include "dfp.h"
#include "output.h"
#include "recog.h"
#include "df.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "target.h"

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v16si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v16si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v8di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v8di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v16hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v16hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v16hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v16hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v8si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v8si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v8si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v8si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v4di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v4di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v4di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v4di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v8hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uw_v8hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v8hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2w_v8hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v4si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2udq_v4si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v4si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2dq_v4si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v2di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2uqq_v2di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v2di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7214 */
rtx
gen_avx512fp16_vcvtph2qq_v2di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v8hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v8hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v8hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v8hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V16HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v16hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V16HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v16hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v16hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v16hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V32HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v32hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V32HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FLOAT (V32HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtw2ph_v32hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_FLOAT (V32HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V32HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v32hi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V32HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSIGNED_FLOAT (V32HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuw2ph_v32hi_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSIGNED_FLOAT (V32HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v8si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v8si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v8si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v8si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V16HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v16si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V16HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtdq2ph_v16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v16si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtudq2ph_v16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSIGNED_FLOAT (V16HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtqq2ph_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtqq2ph_v8di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtqq2ph_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtqq2ph_v8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuqq2ph_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuqq2ph_v8di_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuqq2ph_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7231 */
rtx
gen_avx512fp16_vcvtuqq2ph_v8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7393 */
rtx
gen_avx512fp16_vcvtsh2usi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7393 */
rtx
gen_avx512fp16_vcvtsh2usi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7393 */
rtx
gen_avx512fp16_vcvtsh2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7393 */
rtx
gen_avx512fp16_vcvtsh2si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7406 */
rtx
gen_avx512fp16_vcvtsh2usi_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7406 */
rtx
gen_avx512fp16_vcvtsh2si_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7419 */
rtx
gen_avx512fp16_vcvtsi2sh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT (HFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7419 */
rtx
gen_avx512fp16_vcvtsi2sh_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT (HFmode,
	operand2)),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7419 */
rtx
gen_avx512fp16_vcvtusi2sh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (HFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7419 */
rtx
gen_avx512fp16_vcvtusi2sh_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_UNSIGNED_FLOAT (HFmode,
	operand2)),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_FIX (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_FIX (V8HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSIGNED_FIX (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSIGNED_FIX (V8HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V16HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_FIX (V16HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_FIX (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_FIX (V16HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V16HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V16HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSIGNED_FIX (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSIGNED_FIX (V16HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv32hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V32HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv32hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		gen_rtx_FIX (V32HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv32hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_FIX (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv32hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_FIX (V32HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv32hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V32HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv32hi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V32HImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv32hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSIGNED_FIX (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv32hi2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSIGNED_FIX (V32HImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_FIX (V8SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_FIX (V16SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_FIX (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv16si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_FIX (V16SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv16si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fix_truncv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7439 */
rtx
gen_avx512fp16_fixuns_truncv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fix_truncv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4SImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fix_truncv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_FIX (V4SImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fixuns_truncv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V4SImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fixuns_truncv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSIGNED_FIX (V4SImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fix_truncv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4DImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fix_truncv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_FIX (V4DImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fixuns_truncv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7466 */
rtx
gen_avx512fp16_fixuns_truncv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7505 */
rtx
gen_avx512fp16_fix_truncv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7505 */
rtx
gen_avx512fp16_fix_truncv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7505 */
rtx
gen_avx512fp16_fixuns_truncv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7505 */
rtx
gen_avx512fp16_fixuns_truncv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7527 */
rtx
gen_avx512fp16_fix_truncsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7527 */
rtx
gen_avx512fp16_fix_truncsi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7527 */
rtx
gen_avx512fp16_fixuns_truncsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7527 */
rtx
gen_avx512fp16_fixuns_truncsi2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7539 */
rtx
gen_avx512fp16_fix_truncsi2_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7539 */
rtx
gen_avx512fp16_fixuns_truncsi2_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv16sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V16SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv16sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_EXTEND (V16SFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv16sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FLOAT_EXTEND (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv16sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FLOAT_EXTEND (V16SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_EXTEND (V8SFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7559 */
rtx
gen_avx512fp16_float_extend_phv8sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7586 */
rtx
gen_avx512fp16_float_extend_phv4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4DFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7586 */
rtx
gen_avx512fp16_float_extend_phv4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FLOAT_EXTEND (V4DFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7586 */
rtx
gen_avx512fp16_float_extend_phv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7586 */
rtx
gen_avx512fp16_float_extend_phv4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7625 */
rtx
gen_avx512fp16_float_extend_phv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7625 */
rtx
gen_avx512fp16_float_extend_phv2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtpd2ph_v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtpd2ph_v8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtpd2ph_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtpd2ph_v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V16HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_TRUNCATE (V16HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT_TRUNCATE (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_FLOAT_TRUNCATE (V16HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7653 */
rtx
gen_avx512fp16_vcvtps2ph_v8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (V8HFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2sd_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2sd_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2sd_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2ss_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2ss_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7820 */
rtx
gen_avx512fp16_vcvtsh2ss_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7836 */
rtx
gen_avx512fp16_vcvtsh2sd_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7836 */
rtx
gen_avx512fp16_vcvtsh2sd_mask_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7836 */
rtx
gen_avx512fp16_vcvtsh2ss_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7836 */
rtx
gen_avx512fp16_vcvtsh2ss_mask_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtsd2sh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtsd2sh_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtsd2sh_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtsd2sh_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtss2sh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtss2sh_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtss2sh_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7850 */
rtx
gen_avx512fp16_vcvtss2sh_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	operand3,
	operand4),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7866 */
rtx
gen_avx512fp16_vcvtss2sh_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	operand1)),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7866 */
rtx
gen_avx512fp16_vcvtss2sh_mask_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	operand1)),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7866 */
rtx
gen_avx512fp16_vcvtsd2sh_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	operand1)),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7866 */
rtx
gen_avx512fp16_vcvtsd2sh_mask_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_FLOAT_TRUNCATE (HFmode,
	operand1)),
	operand3,
	operand4),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7886 */
rtx
gen_sse_cvtpi2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (3)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7944 */
rtx
gen_sse_cvtps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:7977 */
rtx
gen_sse_cvttps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8010 */
rtx
gen_sse_cvtsi2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8010 */
rtx
gen_sse_cvtsi2ss_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8044 */
rtx
gen_sse_cvtss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8044 */
rtx
gen_sse_cvtss2si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8060 */
rtx
gen_sse_cvtss2si_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8074 */
rtx
gen_sse_cvttss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8074 */
rtx
gen_sse_cvttss2si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8090 */
rtx
gen_cvtusi2ss32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_UNSIGNED_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8090 */
rtx
gen_cvtusi2ss32_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_UNSIGNED_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8090 */
rtx
gen_cvtusi2sd32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_UNSIGNED_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv16siv16sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V16SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv16siv16sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V16SFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv16siv16sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FLOAT (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv16siv16sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_FLOAT (V16SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv8siv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv8siv8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv4siv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8118 */
rtx
gen_floatv4siv4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FLOAT (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv16siv16sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSIGNED_FLOAT (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv16siv16sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSIGNED_FLOAT (V16SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv8siv8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv8siv8sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv4siv4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSIGNED_FLOAT (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8131 */
rtx
gen_floatunsv4siv4sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSIGNED_FLOAT (V4SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8159 */
rtx
gen_avx_fix_notruncv8sfv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8159 */
rtx
gen_avx_fix_notruncv8sfv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8159 */
rtx
gen_sse2_fix_notruncv4sfv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8159 */
rtx
gen_sse2_fix_notruncv4sfv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8175 */
rtx
gen_avx512f_fix_notruncv16sfv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8175 */
rtx
gen_avx512f_fix_notruncv16sfv16si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8175 */
rtx
gen_avx512f_fix_notruncv16sfv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8175 */
rtx
gen_avx512f_fix_notruncv16sfv16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512f_fixuns_notruncv16sfv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512f_fixuns_notruncv16sfv16si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512vl_fixuns_notruncv8sfv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512vl_fixuns_notruncv8sfv8si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512vl_fixuns_notruncv4sfv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8186 */
rtx
gen_avx512vl_fixuns_notruncv4sfv4si_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8197 */
rtx
gen_avx512dq_cvtps2qqv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8197 */
rtx
gen_avx512dq_cvtps2qqv8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8197 */
rtx
gen_avx512dq_cvtps2qqv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8207 */
rtx
gen_avx512dq_cvtps2qqv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8220 */
rtx
gen_avx512dq_cvtps2uqqv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8220 */
rtx
gen_avx512dq_cvtps2uqqv8di_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8220 */
rtx
gen_avx512dq_cvtps2uqqv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8230 */
rtx
gen_avx512dq_cvtps2uqqv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fix_truncv16sfv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fix_truncv16sfv16si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_FIX (V16SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fix_truncv16sfv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_FIX (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fix_truncv16sfv16si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_FIX (V16SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fixuns_truncv16sfv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fixuns_truncv16sfv16si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fixuns_truncv16sfv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8243 */
rtx
gen_fixuns_truncv16sfv16si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSIGNED_FIX (V16SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8253 */
rtx
gen_fix_truncv8sfv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8253 */
rtx
gen_fix_truncv8sfv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8262 */
rtx
gen_fix_truncv4sfv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8262 */
rtx
gen_fix_truncv4sfv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8306 */
rtx
gen_sse2_cvtpi2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8335 */
rtx
gen_sse2_cvtpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8353 */
rtx
gen_sse2_cvttpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8385 */
rtx
gen_sse2_cvtsi2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8429 */
rtx
gen_avx512f_vcvtss2usi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8429 */
rtx
gen_avx512f_vcvtss2usi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8442 */
rtx
gen_avx512f_vcvttss2usi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8442 */
rtx
gen_avx512f_vcvttss2usi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8454 */
rtx
gen_avx512f_vcvtsd2usi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8454 */
rtx
gen_avx512f_vcvtsd2usi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8467 */
rtx
gen_avx512f_vcvttsd2usi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8467 */
rtx
gen_avx512f_vcvttsd2usi_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8479 */
rtx
gen_sse2_cvtsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8479 */
rtx
gen_sse2_cvtsd2si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8496 */
rtx
gen_sse2_cvtsd2si_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8510 */
rtx
gen_sse2_cvttsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8510 */
rtx
gen_sse2_cvttsd2si_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8533 */
rtx
gen_floatv8siv8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8533 */
rtx
gen_floatv8siv8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8533 */
rtx
gen_floatv4siv4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8533 */
rtx
gen_floatv4siv4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv8div8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv8div8df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V8DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv8div8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv8div8df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv8div8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv8div8df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv8div8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv8div8df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv4div4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv4div4df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V4DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv4div4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv4div4df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv4div4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv4div4df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv4div4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv4div4df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv2div2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv2div2df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V2DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv2div2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT (V2DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatv2div2df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT (V2DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv2div2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V2DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv2div2df2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V2DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv2div2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSIGNED_FLOAT (V2DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8542 */
rtx
gen_floatunsv2div2df2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSIGNED_FLOAT (V2DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv8div8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv8div8sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT (V8SFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv8div8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv8div8sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv8div8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv8div8sf2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv8div8sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv8div8sf2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSIGNED_FLOAT (V8SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv4div4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatv4div4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FLOAT (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv4div4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V4SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8566 */
rtx
gen_floatunsv4div4sf2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSIGNED_FLOAT (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8716 */
rtx
gen_floatunsv8siv8df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8716 */
rtx
gen_floatunsv8siv8df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSIGNED_FLOAT (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8716 */
rtx
gen_floatunsv4siv4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8716 */
rtx
gen_floatunsv4siv4df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSIGNED_FLOAT (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8726 */
rtx
gen_floatunsv2siv2df2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSIGNED_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8738 */
rtx
gen_avx512f_cvtdq2pd512_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V8DFmode,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8753 */
rtx
gen_avx_cvtdq2pd256_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V4DFmode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8766 */
rtx
gen_sse2_cvtdq2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8766 */
rtx
gen_sse2_cvtdq2pd_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8778 */
rtx
gen_avx512f_cvtpd2dq512 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8778 */
rtx
gen_avx512f_cvtpd2dq512_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8778 */
rtx
gen_avx512f_cvtpd2dq512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8778 */
rtx
gen_avx512f_cvtpd2dq512_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8789 */
rtx
gen_avx_cvtpd2dq256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8789 */
rtx
gen_avx_cvtpd2dq256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8821 */
rtx
gen_sse2_cvtpd2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	45),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8843 */
rtx
gen_sse2_cvtpd2dq_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	45),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv8dfv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv8dfv8si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv8dfv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv8dfv8si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv4dfv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv4dfv4si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv4dfv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8879 */
rtx
gen_fixuns_notruncv4dfv4si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8890 */
rtx
gen_fixuns_notruncv2dfv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	152),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8903 */
rtx
gen_fixuns_notruncv2dfv2si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	152),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fix_truncv8dfv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fix_truncv8dfv8si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fix_truncv8dfv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fix_truncv8dfv8si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_FIX (V8SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fixuns_truncv8dfv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fixuns_truncv8dfv8si2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fixuns_truncv8dfv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8937 */
rtx
gen_fixuns_truncv8dfv8si2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8958 */
rtx
gen_fixuns_truncv2dfv2si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_UNSIGNED_FIX (V2SImode,
	operand1),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8988 */
rtx
gen_fix_truncv4dfv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8988 */
rtx
gen_fix_truncv4dfv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8997 */
rtx
gen_fixuns_truncv4dfv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V4SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:8997 */
rtx
gen_fixuns_truncv4dfv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSIGNED_FIX (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv8dfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv8dfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv8dfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv8dfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv8dfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv8dfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv8dfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv8dfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv4dfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv4dfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_FIX (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv4dfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv4dfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv2dfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V2DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fix_truncv2dfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_FIX (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv2dfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9006 */
rtx
gen_fixuns_truncv2dfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv8dfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv8dfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv8dfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv8dfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv4dfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv4dfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv2dfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9016 */
rtx
gen_fix_notruncv2dfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	45),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv8dfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv8dfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv8dfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv8dfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv4dfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv4dfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv2dfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9027 */
rtx
gen_fixuns_notruncv2dfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	152),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv8sfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv8sfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv8sfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv8sfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv8sfv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv8sfv8di2_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv8sfv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv8sfv8di2_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSIGNED_FIX (V8DImode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv4sfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fix_truncv4sfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_FIX (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv4sfv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9038 */
rtx
gen_fixuns_truncv4sfv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSIGNED_FIX (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9048 */
rtx
gen_avx512dq_fix_truncv2sfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9048 */
rtx
gen_avx512dq_fix_truncv2sfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9048 */
rtx
gen_avx512dq_fixuns_truncv2sfv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9048 */
rtx
gen_avx512dq_fixuns_truncv2sfv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSIGNED_FIX (V2DImode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9187 */
rtx
gen_fixuns_truncv8sfv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSIGNED_FIX (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9187 */
rtx
gen_fixuns_truncv4sfv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSIGNED_FIX (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9205 */
rtx
gen_sse2_cvttpd2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9224 */
rtx
gen_sse2_cvttpd2dq_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V2SImode,
	gen_rtvec (2,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9254 */
rtx
gen_sse2_cvtsd2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9254 */
rtx
gen_sse2_cvtsd2ss_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9254 */
rtx
gen_sse2_cvtsd2ss_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9254 */
rtx
gen_sse2_cvtsd2ss_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9297 */
rtx
gen_sse2_cvtss2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9297 */
rtx
gen_sse2_cvtss2sd_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9297 */
rtx
gen_sse2_cvtss2sd_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9297 */
rtx
gen_sse2_cvtss2sd_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9341 */
rtx
gen_avx512f_cvtpd2ps512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT_TRUNCATE (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9341 */
rtx
gen_avx512f_cvtpd2ps512_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_FLOAT_TRUNCATE (V8SFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9351 */
rtx
gen_avx_cvtpd2ps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V4SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9351 */
rtx
gen_avx_cvtpd2ps256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx512f_cvtps2pd512 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx512f_cvtps2pd512_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx512f_cvtps2pd512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx512f_cvtps2pd512_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	operand1),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx_cvtps2pd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9475 */
rtx
gen_avx_cvtps2pd256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_FLOAT_EXTEND (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9498 */
rtx
gen_vec_unpacks_lo_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8DFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512bw_cvtb2maskv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512vl_cvtb2maskv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512vl_cvtb2maskv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512bw_cvtw2maskv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512vl_cvtw2maskv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9513 */
rtx
gen_avx512vl_cvtw2maskv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512f_cvtd2maskv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512vl_cvtd2maskv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512vl_cvtd2maskv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512f_cvtq2maskv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512vl_cvtq2maskv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9523 */
rtx
gen_avx512vl_cvtq2maskv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (1,
		operand1),
	190));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9623 */
rtx
gen_sse2_cvtps2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9623 */
rtx
gen_sse2_cvtps2pd_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9639 */
rtx
gen_sse2_cvtps2pd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:9639 */
rtx
gen_sse2_cvtps2pd_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10287 */
rtx
gen_sse_movhlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10332 */
rtx
gen_sse_movlhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10354 */
rtx
gen_sse_movlhps_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10354 */
rtx
gen_sse_movlhps_v8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HFmode,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10354 */
rtx
gen_sse_movlhps_v8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8BFmode,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10375 */
rtx
gen_avx512f_unpckhps512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10396 */
rtx
gen_avx_unpckhps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10396 */
rtx
gen_avx_unpckhps256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10446 */
rtx
gen_vec_interleave_highv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10446 */
rtx
gen_vec_interleave_highv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10463 */
rtx
gen_avx512f_unpcklps512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10484 */
rtx
gen_avx_unpcklps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10484 */
rtx
gen_avx_unpcklps256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10500 */
rtx
gen_unpcklps128_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10551 */
rtx
gen_vec_interleave_lowv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10570 */
rtx
gen_avx_movshdup256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10570 */
rtx
gen_avx_movshdup256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10586 */
rtx
gen_sse3_movshdup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10586 */
rtx
gen_sse3_movshdup_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10603 */
rtx
gen_avx512f_movshdup512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10623 */
rtx
gen_avx_movsldup256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10623 */
rtx
gen_avx_movsldup256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10639 */
rtx
gen_sse3_movsldup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10639 */
rtx
gen_sse3_movsldup_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10656 */
rtx
gen_avx512f_movsldup512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10700 */
rtx
gen_avx_shufps256_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED,
	rtx operand9 ATTRIBUTE_UNUSED,
	rtx operand10 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10700 */
rtx
gen_avx_shufps256_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED,
	rtx operand9 ATTRIBUTE_UNUSED,
	rtx operand10 ATTRIBUTE_UNUSED,
	rtx operand11 ATTRIBUTE_UNUSED,
	rtx operand12 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10))),
	operand11,
	operand12));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10754 */
rtx
gen_sse_shufps_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))),
	operand7,
	operand8));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10783 */
rtx
gen_sse_shufps_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10783 */
rtx
gen_sse_shufps_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10818 */
rtx
gen_sse_storehps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10852 */
rtx
gen_sse_loadhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10871 */
rtx
gen_sse_storelps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10905 */
rtx
gen_sse_loadlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10928 */
rtx
gen_sse_movss_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10928 */
rtx
gen_sse_movss_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10943 */
rtx
gen_avx2_vec_dupv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10943 */
rtx
gen_avx2_vec_dupv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10955 */
rtx
gen_avx2_vec_dupv8sf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10967 */
rtx
gen_avx512f_vec_dupv16sf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:10967 */
rtx
gen_avx512f_vec_dupv8df_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11109 */
rtx
gen_vec_setv4si_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11109 */
rtx
gen_vec_setv4sf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11185 */
rtx
gen_vec_setv8hi_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11185 */
rtx
gen_vec_setv8hf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11185 */
rtx
gen_vec_setv8bf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv16hi_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv32hi_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv16hf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv32hf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv16bf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11257 */
rtx
gen_vec_setv32bf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11312 */
rtx
gen_avx512fp16_movv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11312 */
rtx
gen_avx512fp16_movv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11312 */
rtx
gen_avx512fp16_movv8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11358 */
rtx
gen_vec_setv8si_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11358 */
rtx
gen_vec_setv8sf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11358 */
rtx
gen_vec_setv16si_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11358 */
rtx
gen_vec_setv16sf_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11422 */
rtx
gen_sse4_1_insertps_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	49));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11422 */
rtx
gen_sse4_1_insertps_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	49));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11472 */
rtx
gen_vec_setv2df_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11625 */
rtx
gen_avx512dq_vextractf64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand2,
		operand3))),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11625 */
rtx
gen_avx512dq_vextracti64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand2,
		operand3))),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11686 */
rtx
gen_avx512f_vextractf32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))),
	operand6,
	operand7));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11686 */
rtx
gen_avx512f_vextracti32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))),
	operand6,
	operand7));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11812 */
rtx
gen_vec_extract_lo_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11812 */
rtx
gen_vec_extract_lo_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11830 */
rtx
gen_vec_extract_lo_v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11830 */
rtx
gen_vec_extract_lo_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11849 */
rtx
gen_vec_extract_hi_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11849 */
rtx
gen_vec_extract_hi_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11866 */
rtx
gen_vec_extract_hi_v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11866 */
rtx
gen_vec_extract_hi_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11879 */
rtx
gen_vec_extract_hi_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11879 */
rtx
gen_vec_extract_hi_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11898 */
rtx
gen_vec_extract_hi_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11898 */
rtx
gen_vec_extract_hi_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11983 */
rtx
gen_vec_extract_lo_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_SELECT (V8SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:11983 */
rtx
gen_vec_extract_lo_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12003 */
rtx
gen_vec_extract_lo_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12003 */
rtx
gen_vec_extract_lo_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12056 */
rtx
gen_vec_extract_lo_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12056 */
rtx
gen_vec_extract_lo_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12074 */
rtx
gen_vec_extract_lo_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12074 */
rtx
gen_vec_extract_lo_v4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12093 */
rtx
gen_vec_extract_hi_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12093 */
rtx
gen_vec_extract_hi_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12110 */
rtx
gen_vec_extract_hi_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12110 */
rtx
gen_vec_extract_hi_v4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12146 */
rtx
gen_vec_extract_lo_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12146 */
rtx
gen_vec_extract_lo_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12163 */
rtx
gen_vec_extract_lo_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12163 */
rtx
gen_vec_extract_lo_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12178 */
rtx
gen_vec_extract_hi_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12178 */
rtx
gen_vec_extract_hi_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12195 */
rtx
gen_vec_extract_hi_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12195 */
rtx
gen_vec_extract_hi_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12212 */
rtx
gen_vec_extract_lo_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12212 */
rtx
gen_vec_extract_lo_v32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12212 */
rtx
gen_vec_extract_lo_v32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12253 */
rtx
gen_vec_extract_hi_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12253 */
rtx
gen_vec_extract_hi_v32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12253 */
rtx
gen_vec_extract_hi_v32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12272 */
rtx
gen_vec_extract_lo_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12272 */
rtx
gen_vec_extract_lo_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12272 */
rtx
gen_vec_extract_lo_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12286 */
rtx
gen_vec_extract_hi_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12286 */
rtx
gen_vec_extract_hi_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12286 */
rtx
gen_vec_extract_hi_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12306 */
rtx
gen_vec_extract_lo_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12355 */
rtx
gen_vec_extract_hi_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12382 */
rtx
gen_vec_extract_lo_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12400 */
rtx
gen_vec_extract_hi_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12513 */
rtx
gen_avx512f_unpckhpd512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12530 */
rtx
gen_avx_unpckhpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12530 */
rtx
gen_avx_unpckhpd256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12573 */
rtx
gen_avx512vl_unpckhpd128_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12627 */
rtx
gen_avx512f_movddup512 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12627 */
rtx
gen_avx512f_movddup512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12643 */
rtx
gen_avx512f_unpcklpd512 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12643 */
rtx
gen_avx512f_unpcklpd512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12660 */
rtx
gen_avx_movddup256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12660 */
rtx
gen_avx_movddup256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12674 */
rtx
gen_avx_unpcklpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12674 */
rtx
gen_avx_unpcklpd256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12716 */
rtx
gen_avx512vl_unpcklpd128_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12802 */
rtx
gen_avx512f_vmscalefv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512bw_scalefv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512bw_scalefv32hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512bw_scalefv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512bw_scalefv32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv16hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512fp16_scalefv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512fp16_scalefv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512fp16_scalefv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512fp16_scalefv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512f_scalefv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12816 */
rtx
gen_avx512vl_scalefv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	57),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512f_vternlogv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512f_vternlogv16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512f_vternlogv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512f_vternlogv8di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv4di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:12842 */
rtx
gen_avx512vl_vternlogv2di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	160),
	operand5,
	operand6));
}


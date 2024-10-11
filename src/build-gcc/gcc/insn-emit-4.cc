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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512f_vternlogv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512vl_vternlogv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512vl_vternlogv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512f_vternlogv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512vl_vternlogv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13163 */
rtx
gen_avx512vl_vternlogv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512bw_getexpv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512bw_getexpv32hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512bw_getexpv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512bw_getexpv32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv16hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512fp16_getexpv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512fp16_getexpv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512fp16_getexpv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512fp16_getexpv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512f_getexpv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	161));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	161),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13180 */
rtx
gen_avx512vl_getexpv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	161),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	161),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	161),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	161),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand1,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13189 */
rtx
gen_avx512f_sgetexpv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	161),
	operand3,
	operand4),
	operand1,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512f_alignv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512vl_alignv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512vl_alignv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512f_alignv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512vl_alignv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13203 */
rtx
gen_avx512vl_alignv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	163),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv16sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv8sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv8df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512f_fixupimmv8df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv4df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13291 */
rtx
gen_avx512vl_fixupimmv2df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512f_fixupimmv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512f_fixupimmv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512f_fixupimmv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512f_fixupimmv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13304 */
rtx
gen_avx512vl_fixupimmv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv4sf_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
	operand2,
	const1_rtx),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv2df_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13336 */
rtx
gen_avx512f_sfixupimmv2df_maskz_1_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand5,
	operand6),
	operand2,
	const1_rtx),
		operand7),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13352 */
rtx
gen_avx512f_sfixupimmv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13352 */
rtx
gen_avx512f_sfixupimmv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13352 */
rtx
gen_avx512f_sfixupimmv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
	operand1,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13352 */
rtx
gen_avx512f_sfixupimmv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	159),
	operand2,
	const1_rtx),
	operand1,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512bw_rndscalev32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512bw_rndscalev32hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512bw_rndscalev32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512bw_rndscalev32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev16hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512fp16_rndscalev8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512fp16_rndscalev8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512fp16_rndscalev8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512fp16_rndscalev8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev8df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512f_rndscalev8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13371 */
rtx
gen_avx512vl_rndscalev2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	92),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13383 */
rtx
gen_avx512f_rndscalev2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	92),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13415 */
rtx
gen_avx512f_shufps512_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13415 */
rtx
gen_avx512f_shufps512_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED,
	rtx operand19 ATTRIBUTE_UNUSED,
	rtx operand20 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))),
	operand19,
	operand20));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13488 */
rtx
gen_avx512f_shufpd512_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13488 */
rtx
gen_avx512f_shufpd512_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13541 */
rtx
gen_avx_shufpd256_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13541 */
rtx
gen_avx_shufpd256_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13582 */
rtx
gen_sse2_shufpd_v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))),
	operand5,
	operand6));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13608 */
rtx
gen_avx2_interleave_highv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13608 */
rtx
gen_avx2_interleave_highv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13624 */
rtx
gen_avx512f_interleave_highv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_SELECT (V8DImode,
	gen_rtx_VEC_CONCAT (V16DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13640 */
rtx
gen_vec_interleave_highv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13640 */
rtx
gen_vec_interleave_highv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13658 */
rtx
gen_avx2_interleave_lowv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13658 */
rtx
gen_avx2_interleave_lowv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13674 */
rtx
gen_avx512f_interleave_lowv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_SELECT (V8DImode,
	gen_rtx_VEC_CONCAT (V16DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13690 */
rtx
gen_vec_interleave_lowv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13690 */
rtx
gen_vec_interleave_lowv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13708 */
rtx
gen_sse2_shufpd_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13708 */
rtx
gen_sse2_shufpd_v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13741 */
rtx
gen_sse2_storehpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13798 */
rtx
gen_sse2_storelpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13871 */
rtx
gen_sse2_loadhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13930 */
rtx
gen_sse2_loadlpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand2,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13991 */
rtx
gen_sse2_movsd_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:13991 */
rtx
gen_sse2_movsd_v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14033 */
rtx
gen_vec_dupv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14033 */
rtx
gen_vec_dupv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14055 */
rtx
gen_vec_concatv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14102 */
rtx
gen_vec_setv8df_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14102 */
rtx
gen_vec_setv4df_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_ss_truncatev16siv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_truncatev16siv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_us_truncatev16siv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_US_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_ss_truncatev16siv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_SS_TRUNCATE (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_truncatev16siv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_TRUNCATE (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_us_truncatev16siv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_US_TRUNCATE (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_ss_truncatev8div8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_SS_TRUNCATE (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_truncatev8div8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_TRUNCATE (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_us_truncatev8div8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_US_TRUNCATE (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_ss_truncatev8div8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_truncatev8div8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14279 */
rtx
gen_avx512f_us_truncatev8div8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_US_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14308 */
rtx
gen_avx512bw_ss_truncatev32hiv32qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14308 */
rtx
gen_avx512bw_truncatev32hiv32qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V32QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14308 */
rtx
gen_avx512bw_us_truncatev32hiv32qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_US_TRUNCATE (V32QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14351 */
rtx
gen_avx512bw_ss_truncatev32hiv32qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14351 */
rtx
gen_avx512bw_truncatev32hiv32qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_TRUNCATE (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14351 */
rtx
gen_avx512bw_us_truncatev32hiv32qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_US_TRUNCATE (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_ss_truncatev4div4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_SS_TRUNCATE (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_truncatev4div4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_TRUNCATE (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_us_truncatev4div4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_US_TRUNCATE (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_ss_truncatev8siv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_truncatev8siv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_us_truncatev8siv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_US_TRUNCATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_ss_truncatev16hiv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_truncatev16hiv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14439 */
rtx
gen_avx512vl_us_truncatev16hiv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_US_TRUNCATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_ss_truncatev4div4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_truncatev4div4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_us_truncatev4div4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_ss_truncatev2div2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V2QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_truncatev2div2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V2QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_us_truncatev2div2qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V2QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_ss_truncatev8siv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_truncatev8siv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_us_truncatev8siv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_ss_truncatev4siv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_truncatev4siv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_us_truncatev4siv4qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_ss_truncatev8hiv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_truncatev8hiv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14488 */
rtx
gen_avx512vl_us_truncatev8hiv8qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14546 */
rtx
gen_avx512vl_ss_truncatev2div2qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_SS_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V14QImode,
	gen_rtvec (14,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14546 */
rtx
gen_avx512vl_truncatev2div2qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V14QImode,
	gen_rtvec (14,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14546 */
rtx
gen_avx512vl_us_truncatev2div2qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_US_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V14QImode,
	gen_rtvec (14,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14604 */
rtx
gen_avx512vl_ss_truncatev2div2qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (HImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_SS_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	gen_rtx_SUBREG (V4QImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14604 */
rtx
gen_avx512vl_truncatev2div2qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (HImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	gen_rtx_SUBREG (V4QImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14604 */
rtx
gen_avx512vl_us_truncatev2div2qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (HImode,
	gen_rtx_VEC_MERGE (V2QImode,
	gen_rtx_US_TRUNCATE (V2QImode,
	operand1),
	gen_rtx_VEC_SELECT (V2QImode,
	gen_rtx_SUBREG (V4QImode,
	gen_rtx_VEC_CONCAT (V2HImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_ss_truncatev4siv4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_truncatev4siv4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_us_truncatev4siv4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_ss_truncatev4div4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_truncatev4div4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14650 */
rtx
gen_avx512vl_us_truncatev4div4qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V12QImode,
	gen_rtvec (12,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_ss_truncatev4siv4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_truncatev4siv4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_us_truncatev4siv4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_ss_truncatev4div4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_truncatev4div4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14708 */
rtx
gen_avx512vl_us_truncatev4div4qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V4QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_VEC_SELECT (V4QImode,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_ss_truncatev8hiv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_truncatev8hiv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_us_truncatev8hiv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_ss_truncatev8siv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_truncatev8siv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14758 */
rtx
gen_avx512vl_us_truncatev8siv8qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_ss_truncatev8hiv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_truncatev8hiv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_us_truncatev8hiv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_ss_truncatev8siv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_truncatev8siv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14816 */
rtx
gen_avx512vl_us_truncatev8siv8qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_ss_truncatev4div4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_truncatev4div4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_us_truncatev4div4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_ss_truncatev2div2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_truncatev2div2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_us_truncatev2div2hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_US_TRUNCATE (V2HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_ss_truncatev4siv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_truncatev4siv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14868 */
rtx
gen_avx512vl_us_truncatev4siv4hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_ss_truncatev4siv4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_truncatev4siv4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_us_truncatev4siv4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_ss_truncatev4div4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_truncatev4div4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14926 */
rtx
gen_avx512vl_us_truncatev4div4hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_ss_truncatev4siv4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_truncatev4siv4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_us_truncatev4siv4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_ss_truncatev4div4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_truncatev4div4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:14980 */
rtx
gen_avx512vl_us_truncatev4div4hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_US_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_SUBREG (V8HImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15028 */
rtx
gen_avx512vl_ss_truncatev2div2hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V6HImode,
	gen_rtvec (6,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15028 */
rtx
gen_avx512vl_truncatev2div2hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V6HImode,
	gen_rtvec (6,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15028 */
rtx
gen_avx512vl_us_truncatev2div2hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_US_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand3),
	gen_rtx_CONST_VECTOR (V6HImode,
	gen_rtvec (6,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15078 */
rtx
gen_avx512vl_ss_truncatev2div2hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	gen_rtx_SUBREG (V4HImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15078 */
rtx
gen_avx512vl_truncatev2div2hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	gen_rtx_SUBREG (V4HImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15078 */
rtx
gen_avx512vl_us_truncatev2div2hi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (SImode,
	gen_rtx_VEC_MERGE (V2HImode,
	gen_rtx_US_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_VEC_SELECT (V2HImode,
	gen_rtx_SUBREG (V4HImode,
	gen_rtx_VEC_CONCAT (V2SImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15117 */
rtx
gen_avx512vl_ss_truncatev2div2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_SS_TRUNCATE (V2SImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15117 */
rtx
gen_avx512vl_truncatev2div2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_TRUNCATE (V2SImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15117 */
rtx
gen_avx512vl_us_truncatev2div2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_US_TRUNCATE (V2SImode,
	operand1),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15175 */
rtx
gen_avx512vl_ss_truncatev2div2si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_SS_TRUNCATE (V2SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15175 */
rtx
gen_avx512vl_truncatev2div2si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_TRUNCATE (V2SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15175 */
rtx
gen_avx512vl_us_truncatev2div2si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_US_TRUNCATE (V2SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15221 */
rtx
gen_avx512vl_ss_truncatev2div2si2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_SS_TRUNCATE (V2SImode,
	operand1),
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_SUBREG (V4SImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15221 */
rtx
gen_avx512vl_truncatev2div2si2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_TRUNCATE (V2SImode,
	operand1),
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_SUBREG (V4SImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15221 */
rtx
gen_avx512vl_us_truncatev2div2si2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_US_TRUNCATE (V2SImode,
	operand1),
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_SUBREG (V4SImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15259 */
rtx
gen_avx512f_ss_truncatev8div16qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15259 */
rtx
gen_avx512f_truncatev8div16qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15259 */
rtx
gen_avx512f_us_truncatev8div16qi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15297 */
rtx
gen_avx512f_ss_truncatev8div16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15297 */
rtx
gen_avx512f_truncatev8div16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15297 */
rtx
gen_avx512f_us_truncatev8div16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
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
	operand3),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx,
		const0_rtx))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15355 */
rtx
gen_avx512f_ss_truncatev8div16qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15355 */
rtx
gen_avx512f_truncatev8div16qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15355 */
rtx
gen_avx512f_us_truncatev8div16qi2_mask_store_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SUBREG (DImode,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_SUBREG (V16QImode,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand0,
	const0_rtx),
	0),
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
	operand2),
	0));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:15846 */
rtx
gen_avx512bw_pmaddwd512v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	187),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16270 */
rtx
gen_ashrv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_ASHIFTRT (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16270 */
rtx
gen_ashrv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16270 */
rtx
gen_ashrv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ASHIFTRT (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16270 */
rtx
gen_ashrv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16270 */
rtx
gen_ashrv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ASHIFTRT (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16284 */
rtx
gen_ashrv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16284 */
rtx
gen_ashrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16284 */
rtx
gen_ashrv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16284 */
rtx
gen_ashrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16303 */
rtx
gen_ashrv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_ASHIFTRT (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16303 */
rtx
gen_ashrv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ASHIFTRT (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16303 */
rtx
gen_ashrv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ASHIFTRT (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16303 */
rtx
gen_ashrv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ASHIFTRT (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_ASHIFT (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_LSHIFTRT (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ASHIFT (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_LSHIFTRT (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ASHIFT (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_LSHIFTRT (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_ashlv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16438 */
rtx
gen_lshrv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_ashlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16452 */
rtx
gen_lshrv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_ASHIFT (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_LSHIFTRT (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ASHIFT (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_LSHIFTRT (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_ashlv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ASHIFT (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16471 */
rtx
gen_lshrv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_LSHIFTRT (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_ashlv4ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_lshrv4ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_ashlv2ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_lshrv2ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_ashlv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16690 */
rtx
gen_avx512bw_lshrv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16705 */
rtx
gen_avx2_ashlv2ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16705 */
rtx
gen_avx2_lshrv2ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16705 */
rtx
gen_sse2_ashlv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16705 */
rtx
gen_sse2_lshrv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rolvv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rolvv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ROTATE (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rorvv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rorvv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ROTATERT (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ROTATE (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ROTATERT (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rolvv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rolvv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ROTATE (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rorvv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512f_rorvv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ROTATERT (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ROTATE (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ROTATERT (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rolvv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16732 */
rtx
gen_avx512vl_rorvv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rolv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rolv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ROTATE (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rorv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rorv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ROTATERT (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ROTATE (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ROTATERT (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rolv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rolv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ROTATE (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rorv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512f_rorv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ROTATERT (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ROTATE (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ROTATERT (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rolv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16742 */
rtx
gen_avx512vl_rorv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_SMAX (V64QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_SMIN (V64QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UMAX (V64QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UMIN (V64QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_SMAX (V32QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_SMIN (V32QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UMAX (V32QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UMIN (V32QImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_SMAX (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_SMIN (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UMAX (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UMIN (V32HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_SMAX (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_SMIN (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UMAX (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UMIN (V16HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_smaxv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_sminv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_umaxv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UMAX (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:16812 */
rtx
gen_uminv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17252 */
rtx
gen_sse4_2_gtv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17269 */
rtx
gen_avx2_gtv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V32QImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17269 */
rtx
gen_avx2_gtv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17269 */
rtx
gen_avx2_gtv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17269 */
rtx
gen_avx2_gtv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_GT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_XOR (V16SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_XOR (V8DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_XOR (V8SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_XOR (V4DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:17507 */
rtx
gen_one_cmplv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18071 */
rtx
gen_andv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18071 */
rtx
gen_iorv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18071 */
rtx
gen_xorv1ti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (V1TImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512bw_testmv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512bw_testmv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512bw_testmv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512bw_testmv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512f_testmv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512f_testmv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512f_testmv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512f_testmv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18192 */
rtx
gen_avx512vl_testmv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	154),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512bw_testnmv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512bw_testnmv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (DImode,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512bw_testnmv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512bw_testnmv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512f_testnmv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512f_testnmv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512f_testnmv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512f_testnmv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18203 */
rtx
gen_avx512vl_testnmv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	155),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18351 */
rtx
gen_sse2_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18351 */
rtx
gen_sse2_packsswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18368 */
rtx
gen_avx2_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand2)),
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
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18368 */
rtx
gen_avx2_packsswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V16QImode,
	operand2)),
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
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18398 */
rtx
gen_avx512bw_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18398 */
rtx
gen_avx512bw_packsswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V32QImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18445 */
rtx
gen_sse2_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18445 */
rtx
gen_sse2_packssdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18462 */
rtx
gen_avx2_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18462 */
rtx
gen_avx2_packssdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8HImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18484 */
rtx
gen_avx512bw_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	gen_rtx_SS_TRUNCATE (V16HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V16HImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18484 */
rtx
gen_avx512bw_packssdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	gen_rtx_SS_TRUNCATE (V16HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V16HImode,
	operand2)),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_avx512bw_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_avx512bw_packuswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_avx2_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_avx2_packuswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_sse2_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18516 */
rtx
gen_sse2_packuswb_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18532 */
rtx
gen_avx512bw_interleave_highv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V128QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		GEN_INT (72L),
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		GEN_INT (73L),
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		GEN_INT (74L),
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		GEN_INT (75L),
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		GEN_INT (76L),
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		GEN_INT (77L),
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		GEN_INT (78L),
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		GEN_INT (79L),
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		GEN_INT (88L),
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		GEN_INT (89L),
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		GEN_INT (90L),
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		GEN_INT (91L),
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		GEN_INT (92L),
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		GEN_INT (93L),
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		GEN_INT (94L),
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		GEN_INT (95L),
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		GEN_INT (104L),
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		GEN_INT (105L),
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		GEN_INT (106L),
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		GEN_INT (107L),
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		GEN_INT (108L),
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		GEN_INT (109L),
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		GEN_INT (110L),
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		GEN_INT (111L),
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		GEN_INT (120L),
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		GEN_INT (121L),
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		GEN_INT (122L),
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		GEN_INT (123L),
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		GEN_INT (124L),
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		GEN_INT (125L),
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		GEN_INT (126L),
		const_int_rtx[MAX_SAVED_CONST_INT + (63)],
		GEN_INT (127L)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18532 */
rtx
gen_avx512bw_interleave_highv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V128QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		GEN_INT (72L),
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		GEN_INT (73L),
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		GEN_INT (74L),
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		GEN_INT (75L),
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		GEN_INT (76L),
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		GEN_INT (77L),
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		GEN_INT (78L),
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		GEN_INT (79L),
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		GEN_INT (88L),
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		GEN_INT (89L),
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		GEN_INT (90L),
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		GEN_INT (91L),
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		GEN_INT (92L),
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		GEN_INT (93L),
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		GEN_INT (94L),
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		GEN_INT (95L),
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		GEN_INT (104L),
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		GEN_INT (105L),
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		GEN_INT (106L),
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		GEN_INT (107L),
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		GEN_INT (108L),
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		GEN_INT (109L),
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		GEN_INT (110L),
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		GEN_INT (111L),
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		GEN_INT (120L),
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		GEN_INT (121L),
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		GEN_INT (122L),
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		GEN_INT (123L),
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		GEN_INT (124L),
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		GEN_INT (125L),
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		GEN_INT (126L),
		const_int_rtx[MAX_SAVED_CONST_INT + (63)],
		GEN_INT (127L)))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18576 */
rtx
gen_avx2_interleave_highv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18576 */
rtx
gen_avx2_interleave_highv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18604 */
rtx
gen_vec_interleave_highv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18604 */
rtx
gen_vec_interleave_highv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18628 */
rtx
gen_avx512bw_interleave_lowv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V128QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (64)],
		const1_rtx,
		GEN_INT (65L),
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		GEN_INT (66L),
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		GEN_INT (67L),
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		GEN_INT (68L),
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		GEN_INT (69L),
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		GEN_INT (70L),
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		GEN_INT (71L),
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		GEN_INT (80L),
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		GEN_INT (81L),
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		GEN_INT (82L),
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		GEN_INT (83L),
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		GEN_INT (84L),
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		GEN_INT (85L),
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		GEN_INT (86L),
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		GEN_INT (87L),
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		GEN_INT (96L),
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		GEN_INT (97L),
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		GEN_INT (98L),
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		GEN_INT (99L),
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		GEN_INT (100L),
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		GEN_INT (101L),
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		GEN_INT (102L),
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		GEN_INT (103L),
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		GEN_INT (112L),
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		GEN_INT (113L),
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		GEN_INT (114L),
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		GEN_INT (115L),
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		GEN_INT (116L),
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		GEN_INT (117L),
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		GEN_INT (118L),
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		GEN_INT (119L)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18628 */
rtx
gen_avx512bw_interleave_lowv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_VEC_SELECT (V64QImode,
	gen_rtx_VEC_CONCAT (V128QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (64,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (64)],
		const1_rtx,
		GEN_INT (65L),
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		GEN_INT (66L),
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		GEN_INT (67L),
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		GEN_INT (68L),
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		GEN_INT (69L),
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		GEN_INT (70L),
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		GEN_INT (71L),
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		GEN_INT (80L),
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		GEN_INT (81L),
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		GEN_INT (82L),
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		GEN_INT (83L),
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		GEN_INT (84L),
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		GEN_INT (85L),
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		GEN_INT (86L),
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		GEN_INT (87L),
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		GEN_INT (96L),
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		GEN_INT (97L),
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		GEN_INT (98L),
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		GEN_INT (99L),
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		GEN_INT (100L),
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		GEN_INT (101L),
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		GEN_INT (102L),
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		GEN_INT (103L),
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		GEN_INT (112L),
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		GEN_INT (113L),
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		GEN_INT (114L),
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		GEN_INT (115L),
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		GEN_INT (116L),
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		GEN_INT (117L),
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		GEN_INT (118L),
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		GEN_INT (119L)))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18672 */
rtx
gen_avx2_interleave_lowv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18672 */
rtx
gen_avx2_interleave_lowv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_VEC_SELECT (V32QImode,
	gen_rtx_VEC_CONCAT (V64QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18700 */
rtx
gen_vec_interleave_lowv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18700 */
rtx
gen_vec_interleave_lowv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V64HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V64HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32HFmode,
	gen_rtx_VEC_CONCAT (V64HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_VEC_SELECT (V32HFmode,
	gen_rtx_VEC_CONCAT (V64HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32BFmode,
	gen_rtx_VEC_CONCAT (V64BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18724 */
rtx
gen_avx512bw_interleave_highv32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_SELECT (V32BFmode,
	gen_rtx_VEC_CONCAT (V64BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (36)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (37)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (38)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (39)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (44)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (45)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (46)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (47)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (52)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (53)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (54)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (55)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (60)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (61)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (62)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)],
		const_int_rtx[MAX_SAVED_CONST_INT + (63)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HFmode,
	gen_rtx_VEC_CONCAT (V32HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_VEC_SELECT (V16HFmode,
	gen_rtx_VEC_CONCAT (V32HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16BFmode,
	gen_rtx_VEC_CONCAT (V32BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18752 */
rtx
gen_avx2_interleave_highv16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_SELECT (V16BFmode,
	gen_rtx_VEC_CONCAT (V32BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8hi (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8hf (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_SELECT (V8HFmode,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8bf (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18772 */
rtx
gen_vec_interleave_highv8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_SELECT (V8BFmode,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18792 */
rtx
gen_avx512bw_interleave_lowv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V64HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18792 */
rtx
gen_avx512bw_interleave_lowv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_VEC_SELECT (V32HFmode,
	gen_rtx_VEC_CONCAT (V64HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18792 */
rtx
gen_avx512bw_interleave_lowv32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_SELECT (V32BFmode,
	gen_rtx_VEC_CONCAT (V64BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (32,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (32)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (33)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (34)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (35)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (40)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (41)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (42)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (43)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (48)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (49)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (50)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (51)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (56)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (57)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (58)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (59)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HFmode,
	gen_rtx_VEC_CONCAT (V32HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_VEC_SELECT (V16HFmode,
	gen_rtx_VEC_CONCAT (V32HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16BFmode,
	gen_rtx_VEC_CONCAT (V32BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18820 */
rtx
gen_avx2_interleave_lowv16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_SELECT (V16BFmode,
	gen_rtx_VEC_CONCAT (V32BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8hi (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8hf (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_SELECT (V8HFmode,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8bf (rtx operand0 ATTRIBUTE_UNUSED,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18840 */
rtx
gen_vec_interleave_lowv8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_SELECT (V8BFmode,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18860 */
rtx
gen_avx2_interleave_highv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18860 */
rtx
gen_avx2_interleave_highv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18876 */
rtx
gen_avx512f_interleave_highv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_SELECT (V16SImode,
	gen_rtx_VEC_CONCAT (V32SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18897 */
rtx
gen_vec_interleave_highv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18897 */
rtx
gen_vec_interleave_highv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18915 */
rtx
gen_avx2_interleave_lowv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18915 */
rtx
gen_avx2_interleave_lowv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18931 */
rtx
gen_avx512f_interleave_lowv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_SELECT (V16SImode,
	gen_rtx_VEC_CONCAT (V32SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18951 */
rtx
gen_vec_interleave_lowv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:18951 */
rtx
gen_vec_interleave_lowv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse4_1_pinsrb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse2_pinsrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse2_pinsrph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse2_pinsrbf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse4_1_pinsrd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19020 */
rtx
gen_sse4_1_pinsrq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	operand2),
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19178 */
rtx
gen_avx512dq_vinsertf64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_MERGE (V8DFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	operand2),
	operand3),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19178 */
rtx
gen_avx512dq_vinserti64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_MERGE (V8DImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	operand2),
	operand3),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19178 */
rtx
gen_avx512f_vinsertf32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_MERGE (V16SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	operand2),
	operand3),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19178 */
rtx
gen_avx512f_vinserti32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_MERGE (V16SImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	operand2),
	operand3),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19231 */
rtx
gen_vec_set_lo_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19231 */
rtx
gen_vec_set_lo_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19231 */
rtx
gen_vec_set_lo_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19231 */
rtx
gen_vec_set_lo_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19248 */
rtx
gen_vec_set_hi_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SFmode,
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
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19248 */
rtx
gen_vec_set_hi_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_CONCAT (V16SFmode,
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
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19248 */
rtx
gen_vec_set_hi_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SImode,
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
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19248 */
rtx
gen_vec_set_hi_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19265 */
rtx
gen_vec_set_lo_v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand2,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19265 */
rtx
gen_vec_set_lo_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand2,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19265 */
rtx
gen_vec_set_lo_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DImode,
	operand2,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19265 */
rtx
gen_vec_set_lo_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
	operand2,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19280 */
rtx
gen_vec_set_hi_v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19280 */
rtx
gen_vec_set_hi_v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19280 */
rtx
gen_vec_set_hi_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19280 */
rtx
gen_vec_set_hi_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19315 */
rtx
gen_avx512dq_shuf_i64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
	gen_rtx_VEC_CONCAT (V8DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19315 */
rtx
gen_avx512dq_shuf_f64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
	gen_rtx_VEC_CONCAT (V8DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19368 */
rtx
gen_avx512f_shuf_f64x2_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19368 */
rtx
gen_avx512f_shuf_f64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
	gen_rtx_VEC_CONCAT (V16DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19368 */
rtx
gen_avx512f_shuf_i64x2_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8DImode,
	gen_rtx_VEC_CONCAT (V16DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19368 */
rtx
gen_avx512f_shuf_i64x2_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_SELECT (V8DImode,
	gen_rtx_VEC_CONCAT (V16DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19466 */
rtx
gen_avx512vl_shuf_i32x4_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19466 */
rtx
gen_avx512vl_shuf_i32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19466 */
rtx
gen_avx512vl_shuf_f32x4_1 (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19466 */
rtx
gen_avx512vl_shuf_f32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19537 */
rtx
gen_avx512f_shuf_f32x4_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19537 */
rtx
gen_avx512f_shuf_f32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED,
	rtx operand19 ATTRIBUTE_UNUSED,
	rtx operand20 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_SELECT (V16SFmode,
	gen_rtx_VEC_CONCAT (V32SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))),
	operand19,
	operand20));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19537 */
rtx
gen_avx512f_shuf_i32x4_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16SImode,
	gen_rtx_VEC_CONCAT (V32SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19537 */
rtx
gen_avx512f_shuf_i32x4_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED,
	rtx operand19 ATTRIBUTE_UNUSED,
	rtx operand20 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_SELECT (V16SImode,
	gen_rtx_VEC_CONCAT (V32SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17,
		operand18))),
	operand19,
	operand20));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19673 */
rtx
gen_avx512f_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19673 */
rtx
gen_avx512f_pshufd_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand12 ATTRIBUTE_UNUSED,
	rtx operand13 ATTRIBUTE_UNUSED,
	rtx operand14 ATTRIBUTE_UNUSED,
	rtx operand15 ATTRIBUTE_UNUSED,
	rtx operand16 ATTRIBUTE_UNUSED,
	rtx operand17 ATTRIBUTE_UNUSED,
	rtx operand18 ATTRIBUTE_UNUSED,
	rtx operand19 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_SELECT (V16SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9,
		operand10,
		operand11,
		operand12,
		operand13,
		operand14,
		operand15,
		operand16,
		operand17))),
	operand18,
	operand19));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19762 */
rtx
gen_avx2_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED,
	rtx operand9 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19762 */
rtx
gen_avx2_pshufd_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand11 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6,
		operand7,
		operand8,
		operand9))),
	operand10,
	operand11));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19828 */
rtx
gen_sse2_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19828 */
rtx
gen_sse2_pshufd_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19853 */
rtx
gen_avx512bw_pshuflwv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	189),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19906 */
rtx
gen_avx2_pshuflw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED,
	rtx operand9 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		operand6,
		operand7,
		operand8,
		operand9,
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19906 */
rtx
gen_avx2_pshuflw_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand11 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		operand6,
		operand7,
		operand8,
		operand9,
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand10,
	operand11));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19980 */
rtx
gen_sse2_pshuflw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:19980 */
rtx
gen_sse2_pshuflw_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand6,
	operand7));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20029 */
rtx
gen_avx512bw_pshufhwv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	188),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20063 */
rtx
gen_avx2_pshufhw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED,
	rtx operand8 ATTRIBUTE_UNUSED,
	rtx operand9 ATTRIBUTE_UNUSED)
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
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		operand6,
		operand7,
		operand8,
		operand9))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20063 */
rtx
gen_avx2_pshufhw_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	rtx operand11 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		operand6,
		operand7,
		operand8,
		operand9))),
	operand10,
	operand11));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20137 */
rtx
gen_sse2_pshufhw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
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
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20137 */
rtx
gen_sse2_pshufhw_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		operand2,
		operand3,
		operand4,
		operand5))),
	operand6,
	operand7));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20177 */
rtx
gen_sse2_loadld (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20798 */
rtx
gen_vec_concatv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20885 */
rtx
gen_vec_setv8di_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:20885 */
rtx
gen_vec_setv4di_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21074 */
rtx
gen_avx_movmskps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21074 */
rtx
gen_sse_movmskps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21074 */
rtx
gen_avx_movmskpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21074 */
rtx
gen_sse2_movmskpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21175 */
rtx
gen_avx2_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21175 */
rtx
gen_sse2_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21422 */
rtx
gen_sse_ldmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	91);
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21434 */
rtx
gen_sse_stmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	92));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21446 */
rtx
gen_sse2_clflush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	93);
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21458 */
rtx
gen_sse3_mwait (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	95);
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21469 */
rtx
gen_sse3_monitor_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	94);
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21469 */
rtx
gen_sse3_monitor_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	94);
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21490 */
rtx
gen_avx2_phaddwv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)]))),
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21490 */
rtx
gen_avx2_phaddswv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)]))),
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21490 */
rtx
gen_avx2_phsubwv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)]))),
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21490 */
rtx
gen_avx2_phsubswv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V16HImode,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)]))),
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21517 */
rtx
gen_ssse3_phaddwv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21517 */
rtx
gen_ssse3_phaddswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21517 */
rtx
gen_ssse3_phsubwv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21517 */
rtx
gen_ssse3_phsubswv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V8HImode,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21544 */
rtx
gen_ssse3_phaddwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21544 */
rtx
gen_ssse3_phaddswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21544 */
rtx
gen_ssse3_phsubwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21544 */
rtx
gen_ssse3_phsubswv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_MINUS (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21584 */
rtx
gen_avx2_phadddv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21584 */
rtx
gen_avx2_phsubdv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V8SImode,
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))),
	gen_rtx_VEC_SELECT (V8SImode,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21607 */
rtx
gen_ssse3_phadddv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21607 */
rtx
gen_ssse3_phsubdv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))),
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21633 */
rtx
gen_ssse3_phadddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21633 */
rtx
gen_ssse3_phsubdv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21672 */
rtx
gen_avx2_pmaddubsw256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V16HImode,
	gen_rtx_MULT (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)])))),
	gen_rtx_SIGN_EXTEND (V16HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)]))))),
	gen_rtx_MULT (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))),
	gen_rtx_SIGN_EXTEND (V16HImode,
	gen_rtx_VEC_SELECT (V16QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21728 */
rtx
gen_avx512bw_pmaddubsw512v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	186),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21740 */
rtx
gen_avx512bw_umulhrswv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_TRUNCATE (V32HImode,
	gen_rtx_LSHIFTRT (V32SImode,
	gen_rtx_PLUS (V32SImode,
	gen_rtx_LSHIFTRT (V32SImode,
	gen_rtx_MULT (V32SImode,
	gen_rtx_SIGN_EXTEND (V32SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V32SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (14)]),
	gen_rtx_CONST_VECTOR (V32HImode,
	gen_rtvec (32,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21740 */
rtx
gen_avx512bw_umulhrswv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_TRUNCATE (V32HImode,
	gen_rtx_LSHIFTRT (V32SImode,
	gen_rtx_PLUS (V32SImode,
	gen_rtx_LSHIFTRT (V32SImode,
	gen_rtx_MULT (V32SImode,
	gen_rtx_SIGN_EXTEND (V32SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V32SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (14)]),
	gen_rtx_CONST_VECTOR (V32HImode,
	gen_rtvec (32,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21775 */
rtx
gen_ssse3_pmaddubsw128 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V8HImode,
	gen_rtx_MULT (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)]))))),
	gen_rtx_MULT (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))),
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:21818 */
rtx
gen_ssse3_pmaddubsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4HImode,
	gen_rtx_MULT (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4HImode,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_avx512bw_pshufbv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_avx512bw_pshufbv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_avx2_pshufbv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_avx2_pshufbv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_ssse3_pshufbv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22053 */
rtx
gen_ssse3_pshufbv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	51),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_avx2_psignv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_ssse3_psignv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_avx2_psignv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_ssse3_psignv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_avx2_psignv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22120 */
rtx
gen_ssse3_psignv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22137 */
rtx
gen_ssse3_psignv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22137 */
rtx
gen_ssse3_psignv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22137 */
rtx
gen_ssse3_psignv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	116));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22155 */
rtx
gen_avx512bw_palignrv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22155 */
rtx
gen_avx2_palignrv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22155 */
rtx
gen_ssse3_palignrv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22176 */
rtx
gen_avx512bw_palignrv4ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22176 */
rtx
gen_avx2_palignrv2ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22176 */
rtx
gen_ssse3_palignrv1ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V1TImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22206 */
rtx
gen_ssse3_palignrdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	117));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ABS (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ABS (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ABS (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ABS (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ABS (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22302 */
rtx
gen_absv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ABS (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv64qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_ABS (V64QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv16qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_ABS (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv32qi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_ABS (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv32hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_ABS (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_ABS (V16HImode,
	operand1),
	operand2,
	operand3));
}


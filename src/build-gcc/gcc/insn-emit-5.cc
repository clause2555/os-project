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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22315 */
rtx
gen_absv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_ABS (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22349 */
rtx
gen_sse4a_movntsf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22349 */
rtx
gen_sse4a_movntdf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	113));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22359 */
rtx
gen_sse4a_vmmovntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	113));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22359 */
rtx
gen_sse4a_vmmovntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	113));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22371 */
rtx
gen_sse4a_extrqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	118));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22384 */
rtx
gen_sse4a_extrq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	119));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22395 */
rtx
gen_sse4a_insertqi (rtx operand0 ATTRIBUTE_UNUSED,
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
	120));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22410 */
rtx
gen_sse4a_insertq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	121));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22432 */
rtx
gen_avx_blendps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22432 */
rtx
gen_sse4_1_blendps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22432 */
rtx
gen_avx_blendpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22432 */
rtx
gen_sse4_1_blendpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22452 */
rtx
gen_avx_blendvps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22452 */
rtx
gen_sse4_1_blendvps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22452 */
rtx
gen_avx_blendvpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22452 */
rtx
gen_sse4_1_blendvpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22479 */
rtx
gen_sse4_1_blendvss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22479 */
rtx
gen_sse4_1_blendvsd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22606 */
rtx
gen_avx_dpps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22606 */
rtx
gen_sse4_1_dpps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22606 */
rtx
gen_avx_dppd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22606 */
rtx
gen_sse4_1_dppd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	122));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22633 */
rtx
gen_avx512f_movntdqa (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	123));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22633 */
rtx
gen_avx2_movntdqa (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	123));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22633 */
rtx
gen_sse4_1_movntdqa (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	123));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22646 */
rtx
gen_avx2_mpsadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	124));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22646 */
rtx
gen_sse4_1_mpsadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	124));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_avx512bw_packusdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_avx512bw_packusdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_avx2_packusdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_avx2_packusdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_sse4_1_packusdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	56));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22668 */
rtx
gen_sse4_1_packusdw_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	56),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22686 */
rtx
gen_avx2_pblendvb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22686 */
rtx
gen_sse4_1_pblendvb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22782 */
rtx
gen_sse4_1_pblendw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22782 */
rtx
gen_sse4_1_pblendph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22782 */
rtx
gen_sse4_1_pblendbf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22873 */
rtx
gen_avx2_pblenddv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22873 */
rtx
gen_avx2_pblenddv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	operand2,
	operand1,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22887 */
rtx
gen_sse4_1_phminposuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		operand1),
	125));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22900 */
rtx
gen_avx2_sign_extendv16qiv16hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V16HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22900 */
rtx
gen_avx2_sign_extendv16qiv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_SIGN_EXTEND (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22900 */
rtx
gen_avx2_zero_extendv16qiv16hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22900 */
rtx
gen_avx2_zero_extendv16qiv16hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22954 */
rtx
gen_avx512bw_sign_extendv32qiv32hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V32HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22954 */
rtx
gen_avx512bw_sign_extendv32qiv32hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_SIGN_EXTEND (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22954 */
rtx
gen_avx512bw_zero_extendv32qiv32hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V32HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:22954 */
rtx
gen_avx512bw_zero_extendv32qiv32hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_ZERO_EXTEND (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23007 */
rtx
gen_sse4_1_sign_extendv8qiv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23007 */
rtx
gen_sse4_1_sign_extendv8qiv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23007 */
rtx
gen_sse4_1_zero_extendv8qiv8hi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23007 */
rtx
gen_sse4_1_zero_extendv8qiv8hi2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23149 */
rtx
gen_avx512f_sign_extendv16qiv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_SIGN_EXTEND (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23149 */
rtx
gen_avx512f_zero_extendv16qiv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ZERO_EXTEND (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23165 */
rtx
gen_avx2_sign_extendv8qiv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8SImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23165 */
rtx
gen_avx2_sign_extendv8qiv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23165 */
rtx
gen_avx2_zero_extendv8qiv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8SImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23165 */
rtx
gen_avx2_zero_extendv8qiv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23227 */
rtx
gen_sse4_1_sign_extendv4qiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23227 */
rtx
gen_sse4_1_sign_extendv4qiv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23227 */
rtx
gen_sse4_1_zero_extendv4qiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23227 */
rtx
gen_sse4_1_zero_extendv4qiv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23292 */
rtx
gen_avx512f_sign_extendv16hiv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23292 */
rtx
gen_avx512f_sign_extendv16hiv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_SIGN_EXTEND (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23292 */
rtx
gen_avx512f_zero_extendv16hiv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23292 */
rtx
gen_avx512f_zero_extendv16hiv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_ZERO_EXTEND (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23308 */
rtx
gen_avx512f_zero_extendv16hiv16si2_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V32HImode,
	gen_rtx_VEC_CONCAT (V64HImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23345 */
rtx
gen_avx2_sign_extendv8hiv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23345 */
rtx
gen_avx2_sign_extendv8hiv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23345 */
rtx
gen_avx2_zero_extendv8hiv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23345 */
rtx
gen_avx2_zero_extendv8hiv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23362 */
rtx
gen_avx2_zero_extendv8hiv8si2_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V16HImode,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23400 */
rtx
gen_sse4_1_sign_extendv4hiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23400 */
rtx
gen_sse4_1_sign_extendv4hiv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23400 */
rtx
gen_sse4_1_zero_extendv4hiv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23400 */
rtx
gen_sse4_1_zero_extendv4hiv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23531 */
rtx
gen_avx512f_sign_extendv8qiv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8DImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23531 */
rtx
gen_avx512f_sign_extendv8qiv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_SIGN_EXTEND (V8DImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23531 */
rtx
gen_avx512f_zero_extendv8qiv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8DImode,
	gen_rtx_VEC_SELECT (V8QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23531 */
rtx
gen_avx512f_zero_extendv8qiv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ZERO_EXTEND (V8DImode,
	gen_rtx_VEC_SELECT (V8QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23590 */
rtx
gen_avx2_sign_extendv4qiv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23590 */
rtx
gen_avx2_sign_extendv4qiv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_SIGN_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23590 */
rtx
gen_avx2_zero_extendv4qiv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23590 */
rtx
gen_avx2_zero_extendv4qiv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ZERO_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4QImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23652 */
rtx
gen_sse4_1_sign_extendv2qiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23652 */
rtx
gen_sse4_1_sign_extendv2qiv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23652 */
rtx
gen_sse4_1_zero_extendv2qiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23652 */
rtx
gen_sse4_1_zero_extendv2qiv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23717 */
rtx
gen_avx512f_sign_extendv8hiv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23717 */
rtx
gen_avx512f_sign_extendv8hiv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_SIGN_EXTEND (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23717 */
rtx
gen_avx512f_zero_extendv8hiv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23717 */
rtx
gen_avx512f_zero_extendv8hiv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ZERO_EXTEND (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23733 */
rtx
gen_avx2_sign_extendv4hiv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23733 */
rtx
gen_avx2_sign_extendv4hiv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_SIGN_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4HImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23733 */
rtx
gen_avx2_zero_extendv4hiv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23733 */
rtx
gen_avx2_zero_extendv4hiv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ZERO_EXTEND (V4DImode,
	gen_rtx_VEC_SELECT (V4HImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23791 */
rtx
gen_sse4_1_sign_extendv2hiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23791 */
rtx
gen_sse4_1_sign_extendv2hiv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23791 */
rtx
gen_sse4_1_zero_extendv2hiv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23791 */
rtx
gen_sse4_1_zero_extendv2hiv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23854 */
rtx
gen_avx512f_sign_extendv8siv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23854 */
rtx
gen_avx512f_sign_extendv8siv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_SIGN_EXTEND (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23854 */
rtx
gen_avx512f_zero_extendv8siv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23854 */
rtx
gen_avx512f_zero_extendv8siv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_ZERO_EXTEND (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23905 */
rtx
gen_avx2_sign_extendv4siv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23905 */
rtx
gen_avx2_sign_extendv4siv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_SIGN_EXTEND (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23905 */
rtx
gen_avx2_zero_extendv4siv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23905 */
rtx
gen_avx2_zero_extendv4siv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_ZERO_EXTEND (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23957 */
rtx
gen_sse4_1_sign_extendv2siv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23957 */
rtx
gen_sse4_1_sign_extendv2siv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23957 */
rtx
gen_sse4_1_zero_extendv2siv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:23957 */
rtx
gen_sse4_1_zero_extendv2siv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24082 */
rtx
gen_avx_vtestps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	144));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24082 */
rtx
gen_avx_vtestps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	144));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24082 */
rtx
gen_avx_vtestpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	144));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24082 */
rtx
gen_avx_vtestpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	144));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24140 */
rtx
gen_ptesttf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand0,
		operand1),
	126));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24257 */
rtx
gen_avx_roundps256 (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24257 */
rtx
gen_sse4_1_roundps (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24257 */
rtx
gen_avx_roundpd256 (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24257 */
rtx
gen_sse4_1_roundpd (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24350 */
rtx
gen_sse4_1_roundsh (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24350 */
rtx
gen_sse4_1_roundss (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24350 */
rtx
gen_sse4_1_roundsd (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24604 */
rtx
gen_sse4_2_pcmpestr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (5,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6),
	127)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4),
		copy_rtx (operand5),
		copy_rtx (operand6)),
	127)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4),
		copy_rtx (operand5),
		copy_rtx (operand6)),
	127))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24665 */
rtx
gen_sse4_2_pcmpestri (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	127)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4),
		copy_rtx (operand5)),
	127))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24693 */
rtx
gen_sse4_2_pcmpestrm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	127)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4),
		copy_rtx (operand5)),
	127))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24721 */
rtx
gen_sse4_2_pcmpestr_cconly (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (5,
		operand2,
		operand3,
		operand4,
		operand5,
		operand6),
	127)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V16QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24747 */
rtx
gen_sse4_2_pcmpistr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	128)),
		gen_rtx_SET (operand1,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	128)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		copy_rtx (operand2),
		copy_rtx (operand3),
		copy_rtx (operand4)),
	128))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24800 */
rtx
gen_sse4_2_pcmpistri (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	128)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3)),
	128))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24824 */
rtx
gen_sse4_2_pcmpistrm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	128)),
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		copy_rtx (operand1),
		copy_rtx (operand2),
		copy_rtx (operand3)),
	128))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:24848 */
rtx
gen_sse4_2_pcmpistr_cconly (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (3,
		operand2,
		operand3,
		operand4),
	128)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V16QImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	175));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	175),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	175),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	175),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	175));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	175),
		operand2),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	175),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25074 */
rtx
gen_avx512er_exp2v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	175),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25085 */
rtx
gen_avx512er_rcp28v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25085 */
rtx
gen_avx512er_rcp28v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	176),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25085 */
rtx
gen_avx512er_rcp28v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25085 */
rtx
gen_avx512er_rcp28v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	176),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25096 */
rtx
gen_avx512er_vmrcp28v2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (1,
		operand1),
	176),
	operand2,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25111 */
rtx
gen_avx512er_rsqrt28v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25111 */
rtx
gen_avx512er_rsqrt28v16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	177),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25111 */
rtx
gen_avx512er_rsqrt28v8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25111 */
rtx
gen_avx512er_rsqrt28v8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	177),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v2df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25122 */
rtx
gen_avx512er_vmrsqrt28v2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (1,
		operand1),
	177),
	operand2,
	const1_rtx),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25150 */
rtx
gen_xop_pmacsww (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25150 */
rtx
gen_xop_pmacssww (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V8HImode,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25150 */
rtx
gen_xop_pmacsdd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25150 */
rtx
gen_xop_pmacssdd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	operand1,
	operand2),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25163 */
rtx
gen_xop_pmacsdql (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25163 */
rtx
gen_xop_pmacssdql (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25182 */
rtx
gen_xop_pmacsdqh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25182 */
rtx
gen_xop_pmacssdqh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V2DImode,
	gen_rtx_MULT (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25202 */
rtx
gen_xop_pmacswd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25202 */
rtx
gen_xop_pmacsswd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25223 */
rtx
gen_xop_pmadcswd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25223 */
rtx
gen_xop_pmadcsswd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v32qi256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V32QImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v16hi256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16HImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v8si256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8SImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v4di256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4DImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2DImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v2ti256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2TImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v1ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V1TImode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v16hf256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16HFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8HFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v8sf256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8SFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4SFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v4df256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4DFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25257 */
rtx
gen_xop_pcmov_v2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2DFmode,
	operand3,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25295 */
rtx
gen_xop_phaddbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25295 */
rtx
gen_xop_phaddubw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V8HImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25319 */
rtx
gen_xop_phaddbd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))))),
	gen_rtx_PLUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25319 */
rtx
gen_xop_phaddubd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)])))),
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))))),
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25351 */
rtx
gen_xop_phaddbq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)])))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25351 */
rtx
gen_xop_phaddubq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)])))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25399 */
rtx
gen_xop_phaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25399 */
rtx
gen_xop_phadduwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_ZERO_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25419 */
rtx
gen_xop_phaddwq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25419 */
rtx
gen_xop_phadduwq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))))),
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25447 */
rtx
gen_xop_phadddq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25447 */
rtx
gen_xop_phaddudq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_PLUS (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25465 */
rtx
gen_xop_phsubbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V8HImode,
	gen_rtx_SIGN_EXTEND (V8HImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25489 */
rtx
gen_xop_phsubwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25509 */
rtx
gen_xop_phsubdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MINUS (V2DImode,
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25528 */
rtx
gen_xop_pperm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	52));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25541 */
rtx
gen_xop_pperm_pack_v2di_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_TRUNCATE (V2SImode,
	operand1),
	gen_rtx_TRUNCATE (V2SImode,
	operand2))),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25554 */
rtx
gen_xop_pperm_pack_v4si_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_TRUNCATE (V4HImode,
	operand2))),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25567 */
rtx
gen_xop_pperm_pack_v8hi_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_TRUNCATE (V8QImode,
	operand2))),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25645 */
rtx
gen_xop_rotlv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V16QImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25645 */
rtx
gen_xop_rotlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25645 */
rtx
gen_xop_rotlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25645 */
rtx
gen_xop_rotlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25658 */
rtx
gen_xop_rotrv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V16QImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25658 */
rtx
gen_xop_rotrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25658 */
rtx
gen_xop_rotrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25658 */
rtx
gen_xop_rotrv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25697 */
rtx
gen_xop_vrotlv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_GE (V16QImode,
	operand2,
	const0_rtx),
	gen_rtx_ROTATE (V16QImode,
	operand1,
	operand2),
	gen_rtx_ROTATERT (V16QImode,
	operand1,
	gen_rtx_NEG (V16QImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25697 */
rtx
gen_xop_vrotlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_GE (V8HImode,
	operand2,
	const0_rtx),
	gen_rtx_ROTATE (V8HImode,
	operand1,
	operand2),
	gen_rtx_ROTATERT (V8HImode,
	operand1,
	gen_rtx_NEG (V8HImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25697 */
rtx
gen_xop_vrotlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_GE (V4SImode,
	operand2,
	const0_rtx),
	gen_rtx_ROTATE (V4SImode,
	operand1,
	operand2),
	gen_rtx_ROTATERT (V4SImode,
	operand1,
	gen_rtx_NEG (V4SImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25697 */
rtx
gen_xop_vrotlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2DImode,
	gen_rtx_GE (V2DImode,
	operand2,
	const0_rtx),
	gen_rtx_ROTATE (V2DImode,
	operand1,
	operand2),
	gen_rtx_ROTATERT (V2DImode,
	operand1,
	gen_rtx_NEG (V2DImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25934 */
rtx
gen_xop_shav16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_GE (V16QImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V16QImode,
	operand1,
	operand2),
	gen_rtx_ASHIFTRT (V16QImode,
	operand1,
	gen_rtx_NEG (V16QImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25934 */
rtx
gen_xop_shav8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_GE (V8HImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2),
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	gen_rtx_NEG (V8HImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25934 */
rtx
gen_xop_shav4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_GE (V4SImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2),
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	gen_rtx_NEG (V4SImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25934 */
rtx
gen_xop_shav2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2DImode,
	gen_rtx_GE (V2DImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2),
	gen_rtx_ASHIFTRT (V2DImode,
	operand1,
	gen_rtx_NEG (V2DImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25953 */
rtx
gen_xop_shlv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_GE (V16QImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V16QImode,
	operand1,
	operand2),
	gen_rtx_LSHIFTRT (V16QImode,
	operand1,
	gen_rtx_NEG (V16QImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25953 */
rtx
gen_xop_shlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_GE (V8HImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2),
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	gen_rtx_NEG (V8HImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25953 */
rtx
gen_xop_shlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_GE (V4SImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2),
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	gen_rtx_NEG (V4SImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:25953 */
rtx
gen_xop_shlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (V2DImode,
	gen_rtx_GE (V2DImode,
	operand2,
	const0_rtx),
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2),
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	gen_rtx_NEG (V2DImode,
	operand2))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczv8sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26173 */
rtx
gen_xop_frczv4df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		operand1),
	132));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26211 */
rtx
gen_xop_maskcmpv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V16QImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26211 */
rtx
gen_xop_maskcmpv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V8HImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26211 */
rtx
gen_xop_maskcmpv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V4SImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26211 */
rtx
gen_xop_maskcmpv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V2DImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26221 */
rtx
gen_xop_maskcmp_unsv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V16QImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26221 */
rtx
gen_xop_maskcmp_unsv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V8HImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26221 */
rtx
gen_xop_maskcmp_unsv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V4SImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26221 */
rtx
gen_xop_maskcmp_unsv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), V2DImode,
		operand2,
		operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26234 */
rtx
gen_xop_maskcmp_uns2v16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		gen_rtx_fmt_ee (GET_CODE (operand1), V16QImode,
		operand2,
		operand3)),
	130));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26234 */
rtx
gen_xop_maskcmp_uns2v8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (1,
		gen_rtx_fmt_ee (GET_CODE (operand1), V8HImode,
		operand2,
		operand3)),
	130));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26234 */
rtx
gen_xop_maskcmp_uns2v4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		gen_rtx_fmt_ee (GET_CODE (operand1), V4SImode,
		operand2,
		operand3)),
	130));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26234 */
rtx
gen_xop_maskcmp_uns2v2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		gen_rtx_fmt_ee (GET_CODE (operand1), V2DImode,
		operand2,
		operand3)),
	130));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26248 */
rtx
gen_xop_pcom_tfv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	131));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26248 */
rtx
gen_xop_pcom_tfv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	131));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26248 */
rtx
gen_xop_pcom_tfv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	131));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26248 */
rtx
gen_xop_pcom_tfv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	131));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26264 */
rtx
gen_xop_vpermil2v8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
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
	141));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26264 */
rtx
gen_xop_vpermil2v4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
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
	141));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26264 */
rtx
gen_xop_vpermil2v4df3 (rtx operand0 ATTRIBUTE_UNUSED,
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
	141));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26264 */
rtx
gen_xop_vpermil2v2df3 (rtx operand0 ATTRIBUTE_UNUSED,
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
	141));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26279 */
rtx
gen_aesenc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	133));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26297 */
rtx
gen_aesenclast (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	134));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26315 */
rtx
gen_aesdec (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	135));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26333 */
rtx
gen_aesdeclast (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	136));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26351 */
rtx
gen_aesimc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	137));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26363 */
rtx
gen_aeskeygenassist (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	138));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26377 */
rtx
gen_pclmulqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	139));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26442 */
rtx
gen_avx_vzeroupper_callee_abi (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	const0_rtx),
	const0_rtx),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const1_rtx),
	102)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V64QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26463 */
rtx
gen_avx2_pbroadcastv8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv32qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv16hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv8si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv4di_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv16hf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26477 */
rtx
gen_avx2_pbroadcastv16bf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx512f_permvarv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26495 */
rtx
gen_avx2_permvarv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512bw_permvarv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512bw_permvarv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512vl_permvarv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512vl_permvarv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512vl_permvarv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26514 */
rtx
gen_avx512vl_permvarv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512fp16_permvarv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512fp16_permvarv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_UNSPEC (V8BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512vl_permvarv16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_UNSPEC (V16BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26526 */
rtx
gen_avx512bw_permvarv32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_UNSPEC (V32BFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	147),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26730 */
rtx
gen_avx2_permv4di_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26730 */
rtx
gen_avx2_permv4di_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_SELECT (V4DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26730 */
rtx
gen_avx2_permv4df_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26730 */
rtx
gen_avx2_permv4df_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED,
	rtx operand7 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_SELECT (V4DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26797 */
rtx
gen_avx512f_permv8df_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26797 */
rtx
gen_avx512f_permv8df_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_SELECT (V8DFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26797 */
rtx
gen_avx512f_permv8di_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_SELECT (V8DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26797 */
rtx
gen_avx512f_permv8di_1_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_SELECT (V8DImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26833 */
rtx
gen_avx2_permv2ti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	148));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26868 */
rtx
gen_avx2_vec_dupv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512f_vec_dupv16si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512f_vec_dupv8di_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512bw_vec_dupv32hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512bw_vec_dupv64qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V64QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512bw_vec_dupv32hf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26880 */
rtx
gen_avx512bw_vec_dupv32bf_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv16sf (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv8sf (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4sf (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv8df (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512f_vec_dupv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26894 */
rtx
gen_avx512vl_vec_dupv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V64QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_VEC_DUPLICATE (V64QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_VEC_DUPLICATE (V32QImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512fp16_vec_dupv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512fp16_vec_dupv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	gen_rtx_VEC_SELECT (HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512bw_vec_dupv32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26913 */
rtx
gen_avx512vl_vec_dupv8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	gen_rtx_VEC_SELECT (BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26925 */
rtx
gen_avx512f_broadcastv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26925 */
rtx
gen_avx512f_broadcastv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26937 */
rtx
gen_avx512f_broadcastv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26937 */
rtx
gen_avx512f_broadcastv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512bw_vec_dup_gprv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_VEC_DUPLICATE (V64QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_VEC_DUPLICATE (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_VEC_DUPLICATE (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512bw_vec_dup_gprv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_VEC_DUPLICATE (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_VEC_DUPLICATE (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512bw_vec_dup_gprv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_VEC_DUPLICATE (V32HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_VEC_DUPLICATE (V16HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512fp16_vec_dup_gprv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_VEC_DUPLICATE (V8HFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512bw_vec_dup_gprv32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_DUPLICATE (V32BFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_DUPLICATE (V16BFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26949 */
rtx
gen_avx512vl_vec_dup_gprv8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_DUPLICATE (V8BFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512f_vec_dup_gprv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512f_vec_dup_gprv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512f_vec_dup_gprv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512f_vec_dup_gprv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26961 */
rtx
gen_avx512vl_vec_dup_gprv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:26976 */
rtx
gen_vec_dupv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27068 */
rtx
gen_avx2_vbroadcasti128_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27068 */
rtx
gen_avx2_vbroadcasti128_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27068 */
rtx
gen_avx2_vbroadcasti128_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27068 */
rtx
gen_avx2_vbroadcasti128_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27087 */
rtx
gen_avx2_lddqu_inserti_to_bcasti (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	gen_rtx_SUBREG (V2DImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	115),
	0),
	gen_rtx_SUBREG (V2DImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	115),
	0)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27131 */
rtx
gen_vec_dupv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27131 */
rtx
gen_vec_dupv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27131 */
rtx
gen_vec_dupv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27131 */
rtx
gen_vec_dupv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27182 */
rtx
gen_avx_vbroadcastf128_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand1,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27219 */
rtx
gen_avx512dq_broadcastv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27219 */
rtx
gen_avx512dq_broadcastv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27219 */
rtx
gen_avx512dq_broadcastv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27219 */
rtx
gen_avx512dq_broadcastv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27219 */
rtx
gen_avx512dq_broadcastv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27232 */
rtx
gen_avx512vl_broadcastv8si_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27232 */
rtx
gen_avx512vl_broadcastv8sf_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27245 */
rtx
gen_avx512dq_broadcastv16sf_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_VEC_DUPLICATE (V16SFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27245 */
rtx
gen_avx512dq_broadcastv16si_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27263 */
rtx
gen_avx512dq_broadcastv8di_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27263 */
rtx
gen_avx512dq_broadcastv8df_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_VEC_DUPLICATE (V8DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27263 */
rtx
gen_avx512dq_broadcastv4di_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27263 */
rtx
gen_avx512dq_broadcastv4df_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_DUPLICATE (V4DFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27278 */
rtx
gen_avx512cd_maskb_vec_dupv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27278 */
rtx
gen_avx512cd_maskb_vec_dupv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27278 */
rtx
gen_avx512cd_maskb_vec_dupv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V2DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27290 */
rtx
gen_avx512cd_maskw_vec_dupv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V16SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27290 */
rtx
gen_avx512cd_maskw_vec_dupv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27290 */
rtx
gen_avx512cd_maskw_vec_dupv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	168)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx512f_vpermilvarv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx512f_vpermilvarv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx512f_vpermilvarv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx512f_vpermilvarv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	140));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27302 */
rtx
gen_avx_vpermilvarv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	140),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv16si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv16si3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv16sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv16sf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv8di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv8di3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv8df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512f_vpermt2varv8df3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8si3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8sf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4di3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4df3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4si3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv4sf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv2di3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv2df3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512bw_vpermt2varv32hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512bw_vpermt2varv32hi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv16hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv16hi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv8hi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512bw_vpermt2varv64qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512bw_vpermt2varv64qi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv32qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv32qi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27403 */
rtx
gen_avx512vl_vpermt2varv16qi3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512bw_vpermt2varv32hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512bw_vpermt2varv32hf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HFmode,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv16hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv16hf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HFmode,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512fp16_vpermt2varv8hf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512fp16_vpermt2varv8hf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512bw_vpermt2varv32bf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512bw_vpermt2varv32bf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_UNSPEC (V32BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv16bf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv16bf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_UNSPEC (V16BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv8bf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27418 */
rtx
gen_avx512vl_vpermt2varv8bf3_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_UNSPEC (V8BFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512f_vpermt2varv16si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512f_vpermt2varv16sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512f_vpermt2varv8di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512f_vpermt2varv8df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv8si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv8sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv4di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv4df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv4si3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv4sf3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv2di3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv2df3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512bw_vpermt2varv32hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv16hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv8hi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512bw_vpermt2varv64qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv32qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27433 */
rtx
gen_avx512vl_vpermt2varv16qi3_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	151),
	operand2,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27612 */
rtx
gen_vec_set_lo_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand2,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27612 */
rtx
gen_vec_set_lo_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand2,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27612 */
rtx
gen_vec_set_lo_v4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27612 */
rtx
gen_vec_set_lo_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27636 */
rtx
gen_vec_set_hi_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27636 */
rtx
gen_vec_set_hi_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	gen_rtx_VEC_SELECT (V2DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27636 */
rtx
gen_vec_set_hi_v4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27636 */
rtx
gen_vec_set_hi_v4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	gen_rtx_VEC_SELECT (V2DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27660 */
rtx
gen_vec_set_lo_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand2,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27660 */
rtx
gen_vec_set_lo_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand2,
	gen_rtx_VEC_SELECT (V4SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27660 */
rtx
gen_vec_set_lo_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27660 */
rtx
gen_vec_set_lo_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V4SFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27683 */
rtx
gen_vec_set_hi_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27683 */
rtx
gen_vec_set_hi_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	gen_rtx_VEC_SELECT (V4SImode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27683 */
rtx
gen_vec_set_hi_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27683 */
rtx
gen_vec_set_hi_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27706 */
rtx
gen_vec_set_lo_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27706 */
rtx
gen_vec_set_lo_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27706 */
rtx
gen_vec_set_lo_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27728 */
rtx
gen_vec_set_hi_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27728 */
rtx
gen_vec_set_hi_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27728 */
rtx
gen_vec_set_hi_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16BFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27750 */
rtx
gen_vec_set_lo_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand2,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (31)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27776 */
rtx
gen_vec_set_hi_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32QImode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))),
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx_maskloadps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx_maskloadpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx2_maskloadq256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx2_maskloadq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx_maskloadps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx_maskloadpd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx2_maskloadd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27802 */
rtx
gen_avx2_maskloadd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx_maskstoreps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx_maskstorepd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx2_maskstoreq256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx2_maskstoreq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx_maskstoreps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx_maskstorepd256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx2_maskstored256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27822 */
rtx
gen_avx2_maskstored (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512f_storev16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512f_storev8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512f_storev16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512f_storev8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27898 */
rtx
gen_avx512vl_storev2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512bw_storev64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512bw_storev32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512bw_storev32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512fp16_storev8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512bw_storev32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32BFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16BFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27927 */
rtx
gen_avx512vl_storev8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8BFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	46));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27958 */
rtx
gen_avx_si256_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27958 */
rtx
gen_avx_ps256_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:27958 */
rtx
gen_avx_pd256_pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx512f_ashrvv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx512f_ashrvv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx2_ashrvv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx512f_ashrvv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28048 */
rtx
gen_avx512f_ashrvv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512vl_ashrvv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512vl_ashrvv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512vl_ashrvv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512vl_ashrvv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512bw_ashrvv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28059 */
rtx
gen_avx512bw_ashrvv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_ashlvv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_ashlvv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_lshrvv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_lshrvv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_ashlvv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_ashlvv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_lshrvv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx512f_lshrvv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_ashlvv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28070 */
rtx
gen_avx2_lshrvv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_ashlvv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_ashlvv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_lshrvv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_lshrvv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_ashlvv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_ashlvv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_lshrvv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512vl_lshrvv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512bw_ashlvv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512bw_ashlvv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512bw_lshrvv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28081 */
rtx
gen_avx512bw_lshrvv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16HFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16BFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V64QImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32HImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32HFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32BFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DImode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28092 */
rtx
gen_avx_vec_concatv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	operand2));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28221 */
rtx
gen_vcvtph2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	145),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28221 */
rtx
gen_vcvtph2ps_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	145),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28244 */
rtx
gen_vcvtph2ps256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	145));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28244 */
rtx
gen_vcvtph2ps256_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		operand1),
	145),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28255 */
rtx
gen_avx512f_vcvtph2ps512_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (1,
		operand1),
	145),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28255 */
rtx
gen_avx512f_vcvtph2ps512_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	145),
	operand2,
	operand3),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28313 */
rtx
gen_vcvtps2ph256 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	146));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28313 */
rtx
gen_vcvtps2ph256_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	146),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28363 */
rtx
gen_avx512f_vcvtps2ph512_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	146),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28363 */
rtx
gen_avx512f_vcvtps2ph512_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	146),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512f_compressv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512f_compressv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512f_compressv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512f_compressv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28798 */
rtx
gen_avx512vl_compressv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28811 */
rtx
gen_compressv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	165));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512f_compressstorev16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512f_compressstorev16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512f_compressstorev8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512f_compressstorev8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28824 */
rtx
gen_avx512vl_compressstorev2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28838 */
rtx
gen_compressstorev8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand0,
		operand2),
	166));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28862 */
rtx
gen_expandv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28876 */
rtx
gen_expandv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	167));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8df_round (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DFmode,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DFmode,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28956 */
rtx
gen_avx512dq_rangepv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28976 */
rtx
gen_avx512dq_rangesv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	193),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:28999 */
rtx
gen_avx512dq_fpclassv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	192),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29012 */
rtx
gen_avx512dq_vmfpclassv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	192),
	const1_rtx),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512bw_getmantv32hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512bw_getmantv32hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512bw_getmantv32hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512bw_getmantv32hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv16hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv16hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv16hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512fp16_getmantv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512fp16_getmantv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512fp16_getmantv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512fp16_getmantv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv16sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv16sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv8sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv8sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv8df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv8df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv8df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512f_getmantv8df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv4df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	162));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
		operand3),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29027 */
rtx
gen_avx512vl_getmantv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	162),
	operand3,
	operand4),
		operand5),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HFmode,
	gen_rtx_UNSPEC (V8HFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv8hf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv8hf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv8hf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv4sf_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv4sf_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv2df_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv2df_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand1,
	const1_rtx),
		operand4),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29044 */
rtx
gen_avx512f_vgetmantv2df_mask_round (rtx operand0 ATTRIBUTE_UNUSED,
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
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	162),
	operand4,
	operand5),
	operand1,
	const1_rtx),
		operand6),
	172));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29068 */
rtx
gen_avx512bw_dbpsadbwv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	185),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29068 */
rtx
gen_avx512bw_dbpsadbwv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	185),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29068 */
rtx
gen_avx512bw_dbpsadbwv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	185),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv16si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv16si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_CLZ (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv8si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv8si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_CLZ (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv4si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V4SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv4si2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_CLZ (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv8di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv8di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_CLZ (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv4di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv4di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_CLZ (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv2di2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_CLZ (V2DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29082 */
rtx
gen_clzv2di2_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_CLZ (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29092 */
rtx
gen_conflictv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	164),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29103 */
rtx
gen_sha1msg1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	178));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29114 */
rtx
gen_sha1msg2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	179));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29125 */
rtx
gen_sha1nexte (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	180));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29136 */
rtx
gen_sha1rnds4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	181));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29149 */
rtx
gen_sha256msg1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	182));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29160 */
rtx
gen_sha256msg2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	183));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29171 */
rtx
gen_sha256rnds2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	184));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29184 */
rtx
gen_vsm3msg1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	227));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29196 */
rtx
gen_vsm3msg2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	228));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29208 */
rtx
gen_vsm3rnds2 (rtx operand0 ATTRIBUTE_UNUSED,
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
	229));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29222 */
rtx
gen_vsha512msg1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	242));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29233 */
rtx
gen_vsha512msg2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	243));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29244 */
rtx
gen_vsha512rnds2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	244));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29256 */
rtx
gen_vsm4key4_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	245));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29256 */
rtx
gen_vsm4key4_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	245));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29267 */
rtx
gen_vsm4rnds4_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	246));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29267 */
rtx
gen_vsm4rnds4_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	246));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29278 */
rtx
gen_avx512f_si512_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		const0_rtx),
	143)),
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29278 */
rtx
gen_avx512f_ps512_ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		const0_rtx),
	143)),
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29278 */
rtx
gen_avx512f_pd512_pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		const0_rtx),
	143)),
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29297 */
rtx
gen_avx512f_si512_256si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SImode,
	operand1,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29297 */
rtx
gen_avx512f_ps512_256ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16SFmode,
	operand1,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29297 */
rtx
gen_avx512f_pd512_256pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8DFmode,
	operand1,
	gen_rtx_UNSPEC (V4DFmode,
	gen_rtvec (1,
		const0_rtx),
	143)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29349 */
rtx
gen_vpmadd52luqv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29349 */
rtx
gen_vpmadd52huqv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29362 */
rtx
gen_vpmadd52luqv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29362 */
rtx
gen_vpmadd52huqv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29362 */
rtx
gen_vpmadd52luqv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29362 */
rtx
gen_vpmadd52huqv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52luqv8di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	194),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52huqv8di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	195),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52luqv4di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	194),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52huqv4di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	195),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52luqv2di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	194),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29378 */
rtx
gen_vpmadd52huqv2di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	195),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52luqv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52huqv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52luqv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52huqv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52luqv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	194),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29394 */
rtx
gen_vpmadd52huqv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	195),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	196));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	196),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	196));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	196),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	196));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29410 */
rtx
gen_vpmultishiftqbv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	196),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29461 */
rtx
gen_avx5124fmaddps_4fmaddps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	197));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29473 */
rtx
gen_avx5124fmaddps_4fmaddps_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	197),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29487 */
rtx
gen_avx5124fmaddps_4fmaddps_maskz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	197),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29502 */
rtx
gen_avx5124fmaddps_4fmaddss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	197));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29514 */
rtx
gen_avx5124fmaddps_4fmaddss_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	197),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29528 */
rtx
gen_avx5124fmaddps_4fmaddss_maskz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	197),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29543 */
rtx
gen_avx5124fmaddps_4fnmaddps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	198));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29555 */
rtx
gen_avx5124fmaddps_4fnmaddps_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	198),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29569 */
rtx
gen_avx5124fmaddps_4fnmaddps_maskz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	198),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29584 */
rtx
gen_avx5124fmaddps_4fnmaddss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	198));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29596 */
rtx
gen_avx5124fmaddps_4fnmaddss_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	198),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29610 */
rtx
gen_avx5124fmaddps_4fnmaddss_maskz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	198),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29625 */
rtx
gen_avx5124vnniw_vp4dpwssd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	199));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29637 */
rtx
gen_avx5124vnniw_vp4dpwssd_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	199),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29651 */
rtx
gen_avx5124vnniw_vp4dpwssd_maskz (rtx operand0 ATTRIBUTE_UNUSED,
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
	199),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29666 */
rtx
gen_avx5124vnniw_vp4dpwssds (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	200));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29678 */
rtx
gen_avx5124vnniw_vp4dpwssds_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	200),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29692 */
rtx
gen_avx5124vnniw_vp4dpwssds_maskz (rtx operand0 ATTRIBUTE_UNUSED,
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
	200),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V16SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_POPCOUNT (V16SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V8SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_POPCOUNT (V8SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V4SImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_POPCOUNT (V4SImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V8DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_POPCOUNT (V8DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V4DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_POPCOUNT (V4DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V2DImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29713 */
rtx
gen_vpopcountv2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_POPCOUNT (V2DImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V64QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V64QImode,
	gen_rtx_POPCOUNT (V64QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V16QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16QImode,
	gen_rtx_POPCOUNT (V16QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V32QImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32QImode,
	gen_rtx_POPCOUNT (V32QImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V32HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_POPCOUNT (V32HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V16HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_POPCOUNT (V16HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_POPCOUNT (V8HImode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29763 */
rtx
gen_vpopcountv8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_POPCOUNT (V8HImode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	201));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	201),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	201));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	201),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	201));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29770 */
rtx
gen_vgf2p8affineinvqb_v16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	201),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	202));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	202),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	202));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	202),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	202));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29787 */
rtx
gen_vgf2p8affineqb_v16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	202),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	203));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	203),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	203));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	203),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	203));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29804 */
rtx
gen_vgf2p8mulb_v16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	203),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	205));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29820 */
rtx
gen_vpshrd_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	205),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	204));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29831 */
rtx
gen_vpshld_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	204),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29842 */
rtx
gen_vpshrdv_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29854 */
rtx
gen_vpshrdv_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v32hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v8di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v16hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v4di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v8hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29884 */
rtx
gen_vpshrdv_v2di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	206),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v32hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v16hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v8hi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29899 */
rtx
gen_vpshldv_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v32hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v8di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8DImode,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v16hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v4di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4DImode,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v8hi_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29911 */
rtx
gen_vpshldv_v2di_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V2DImode,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v32hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32HImode,
	gen_rtx_UNSPEC (V32HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v8di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v16hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16HImode,
	gen_rtx_UNSPEC (V16HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v4di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v8hi_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_UNSPEC (V8HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29941 */
rtx
gen_vpshldv_v2di_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	207),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29976 */
rtx
gen_vpdpbusd_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29987 */
rtx
gen_vpdpbusd_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:29987 */
rtx
gen_vpdpbusd_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30001 */
rtx
gen_vpdpbusd_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30001 */
rtx
gen_vpdpbusd_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30001 */
rtx
gen_vpdpbusd_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	208),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30030 */
rtx
gen_vpdpbusd_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	208),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30030 */
rtx
gen_vpdpbusd_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	208),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30030 */
rtx
gen_vpdpbusd_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	208),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30044 */
rtx
gen_vpdpbusds_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30055 */
rtx
gen_vpdpbusds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30055 */
rtx
gen_vpdpbusds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30069 */
rtx
gen_vpdpbusds_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30069 */
rtx
gen_vpdpbusds_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30069 */
rtx
gen_vpdpbusds_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	209),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30098 */
rtx
gen_vpdpbusds_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	209),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30098 */
rtx
gen_vpdpbusds_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	209),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30098 */
rtx
gen_vpdpbusds_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	209),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30112 */
rtx
gen_vpdpwssd_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30123 */
rtx
gen_vpdpwssd_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30123 */
rtx
gen_vpdpwssd_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30137 */
rtx
gen_vpdpwssd_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30137 */
rtx
gen_vpdpwssd_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30137 */
rtx
gen_vpdpwssd_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	210),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30166 */
rtx
gen_vpdpwssd_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	210),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30166 */
rtx
gen_vpdpwssd_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	210),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30166 */
rtx
gen_vpdpwssd_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	210),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30180 */
rtx
gen_vpdpwssds_v16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30191 */
rtx
gen_vpdpwssds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30191 */
rtx
gen_vpdpwssds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30205 */
rtx
gen_vpdpwssds_v16si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SImode,
	gen_rtx_UNSPEC (V16SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30205 */
rtx
gen_vpdpwssds_v8si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SImode,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30205 */
rtx
gen_vpdpwssds_v4si_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	211),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30234 */
rtx
gen_vpdpwssds_v16si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	211),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30234 */
rtx
gen_vpdpwssds_v8si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	211),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30234 */
rtx
gen_vpdpwssds_v4si_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
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
	211),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30248 */
rtx
gen_vaesdec_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	212));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30248 */
rtx
gen_vaesdec_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	212));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30248 */
rtx
gen_vaesdec_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	212));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30262 */
rtx
gen_vaesdeclast_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	213));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30262 */
rtx
gen_vaesdeclast_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	213));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30262 */
rtx
gen_vaesdeclast_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	213));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30276 */
rtx
gen_vaesenc_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	214));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30276 */
rtx
gen_vaesenc_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	214));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30276 */
rtx
gen_vaesenc_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	214));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30290 */
rtx
gen_vaesenclast_v32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V32QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	215));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30290 */
rtx
gen_vaesenclast_v16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	215));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30290 */
rtx
gen_vaesenclast_v64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V64QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	215));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30304 */
rtx
gen_vpclmulqdq_v8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	216));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30304 */
rtx
gen_vpclmulqdq_v4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	216));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30304 */
rtx
gen_vpclmulqdq_v2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	216));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv64qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv64qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	217),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv16qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv16qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	217),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv32qi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	217));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30314 */
rtx
gen_avx512vl_vpshufbitqmbv32qi_mask (rtx operand0 ATTRIBUTE_UNUSED,
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
	217),
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30354 */
rtx
gen_avx512vp2intersect_2intersectv8di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30354 */
rtx
gen_avx512vp2intersect_2intersectv4di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30354 */
rtx
gen_avx512vp2intersect_2intersectv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30354 */
rtx
gen_avx512vp2intersect_2intersectv8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30354 */
rtx
gen_avx512vp2intersect_2intersectv4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30364 */
rtx
gen_avx512vp2intersect_2intersectv16si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (P2HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	218));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v32bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V32BFmode,
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v32bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V32BFmode,
	gen_rtx_VEC_CONCAT (V32BFmode,
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand1)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V16BFmode,
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v16bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_VEC_CONCAT (V16BFmode,
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand1)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8BFmode,
	gen_rtx_FLOAT_TRUNCATE (V4BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V4BFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30397 */
rtx
gen_avx512f_cvtne2ps2bf16_v8bf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_VEC_CONCAT (V8BFmode,
	gen_rtx_FLOAT_TRUNCATE (V4BFmode,
	operand2),
	gen_rtx_FLOAT_TRUNCATE (V4BFmode,
	operand1)),
	operand3,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30452 */
rtx
gen_avx512f_cvtneps2bf16_v4sf_mask_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_CONCAT (V8BFmode,
	gen_rtx_VEC_MERGE (V4BFmode,
	gen_rtx_FLOAT_TRUNCATE (V4BFmode,
	operand1),
	gen_rtx_VEC_SELECT (V4BFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))),
	operand3),
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30481 */
rtx
gen_vcvtneps2bf16_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30493 */
rtx
gen_avx512f_cvtneps2bf16_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30493 */
rtx
gen_avx512f_cvtneps2bf16_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16BFmode,
	gen_rtx_FLOAT_TRUNCATE (V16BFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30493 */
rtx
gen_avx512f_cvtneps2bf16_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand1));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30493 */
rtx
gen_avx512f_cvtneps2bf16_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8BFmode,
	gen_rtx_FLOAT_TRUNCATE (V8BFmode,
	operand1),
	operand2,
	operand3));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v16sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v16sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v8sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30513 */
rtx
gen_avx512f_dpbf16ps_v4sf_maskz_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand4,
	operand5));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30523 */
rtx
gen_avx512f_dpbf16ps_v16sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V16SFmode,
	gen_rtx_UNSPEC (V16SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30523 */
rtx
gen_avx512f_dpbf16ps_v8sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V8SFmode,
	gen_rtx_UNSPEC (V8SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30523 */
rtx
gen_avx512f_dpbf16ps_v4sf_mask (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	219),
	operand1,
	operand4));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30537 */
rtx
gen_loadiwkey (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (V2DImode,
	gen_rtvec (4,
		operand0,
		operand1,
		operand2,
		operand3),
	97),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30671 */
rtx
gen_aesdec128klu8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	98)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	98))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30671 */
rtx
gen_aesdec256klu8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	100)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	100))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30671 */
rtx
gen_aesenc128klu8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	99)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	99))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30671 */
rtx
gen_aesenc256klu8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (2,
		copy_rtx (operand1),
		copy_rtx (operand2)),
	101))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbssd_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	230));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbssds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	231));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbsud_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	232));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbsuds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	233));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbuud_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	234));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbuuds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	235));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbssd_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	230));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbssds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	231));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbsud_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	232));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbsuds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	233));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbuud_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	234));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30940 */
rtx
gen_vpdpbuuds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	235));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30951 */
rtx
gen_vbcstnebf162ps_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30951 */
rtx
gen_vbcstnebf162ps_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30961 */
rtx
gen_vbcstnesh2ps_v8sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V8SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30961 */
rtx
gen_vbcstnesh2ps_v4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_EXTEND (SFmode,
	operand1)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30975 */
rtx
gen_vcvtneeph2ps_v8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30975 */
rtx
gen_vcvtneebf162ps_v8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30987 */
rtx
gen_vcvtneeph2ps_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	gen_rtx_VEC_SELECT (V8HFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:30987 */
rtx
gen_vcvtneebf162ps_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	gen_rtx_VEC_SELECT (V8BFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (14)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31001 */
rtx
gen_vcvtneoph2ps_v8hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4HFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31001 */
rtx
gen_vcvtneobf162ps_v8bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V4SFmode,
	gen_rtx_VEC_SELECT (V4BFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31013 */
rtx
gen_vcvtneoph2ps_v16hf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	gen_rtx_VEC_SELECT (V8HFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31013 */
rtx
gen_vcvtneobf162ps_v16bf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_FLOAT_EXTEND (V8SFmode,
	gen_rtx_VEC_SELECT (V8BFmode,
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
		const_int_rtx[MAX_SAVED_CONST_INT + (15)])))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwusd_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	236));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwusds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	237));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwsud_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	238));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwsuds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	239));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwuud_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	240));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwuuds_v8si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V8SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	241));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwusd_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	236));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwusds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	237));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwsud_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	238));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwsuds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	239));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwuud_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	240));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sse.md:31076 */
rtx
gen_vpdpwuuds_v4si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	241));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:95 */
rtx
gen_mfence_sse2 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	249));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:105 */
rtx
gen_mfence_nosse (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		copy_rtx (operand0)),
	249)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:190 */
rtx
gen_atomic_loaddi_fpu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	254)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:271 */
rtx
gen_atomic_storeqi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	255));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:271 */
rtx
gen_atomic_storehi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	255));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:271 */
rtx
gen_atomic_storesi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	255));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:279 */
rtx
gen_atomic_storedi_fpu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	255)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:322 */
rtx
gen_loaddi_via_fpu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	250));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:332 */
rtx
gen_storedi_via_fpu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	251));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:345 */
rtx
gen_loaddi_via_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	252));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:358 */
rtx
gen_storedi_via_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	253));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:453 */
rtx
gen_atomic_compare_and_swapdi_doubleword (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (5,
		operand1,
		operand2,
		operand3,
		operand4,
		operand5),
	108)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		const0_rtx),
	108)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (1,
		const0_rtx),
	108))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:469 */
rtx
gen_atomic_compare_and_swapqi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	108)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		const0_rtx),
	108)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (1,
		const0_rtx),
	108))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:469 */
rtx
gen_atomic_compare_and_swaphi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	108)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		const0_rtx),
	108)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (1,
		const0_rtx),
	108))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:469 */
rtx
gen_atomic_compare_and_swapsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	108)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	108)),
		gen_rtx_SET (gen_rtx_REG (CCZmode,
	17),
	gen_rtx_UNSPEC_VOLATILE (CCZmode,
	gen_rtvec (1,
		const0_rtx),
	108))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:673 */
rtx
gen_atomic_fetch_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:673 */
rtx
gen_atomic_fetch_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_PLUS (HImode,
	copy_rtx (operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:673 */
rtx
gen_atomic_fetch_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:780 */
rtx
gen_atomic_exchangeqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:780 */
rtx
gen_atomic_exchangehi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:780 */
rtx
gen_atomic_exchangesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand3),
	109)),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:794 */
rtx
gen_rao_aandsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	operand0,
	operand1),
		const0_rtx),
	112));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:794 */
rtx
gen_rao_aorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_IOR (SImode,
	operand0,
	operand1),
		const0_rtx),
	112));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:794 */
rtx
gen_rao_axorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_XOR (SImode,
	operand0,
	operand1),
		const0_rtx),
	112));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:794 */
rtx
gen_rao_aaddsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1),
		const0_rtx),
	112));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:804 */
rtx
gen_atomic_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		gen_rtx_PLUS (QImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:804 */
rtx
gen_atomic_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:804 */
rtx
gen_atomic_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:831 */
rtx
gen_atomic_subqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		gen_rtx_MINUS (QImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:831 */
rtx
gen_atomic_subhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		gen_rtx_MINUS (HImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:831 */
rtx
gen_atomic_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_andqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		gen_rtx_AND (QImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_orqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		gen_rtx_IOR (QImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_xorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		gen_rtx_XOR (QImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_andhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		gen_rtx_AND (HImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_orhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		gen_rtx_IOR (HImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_xorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		gen_rtx_XOR (HImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_orsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:858 */
rtx
gen_atomic_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1),
		operand2),
	110)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:890 */
rtx
gen_atomic_bit_test_and_sethi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (HImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	const1_rtx)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:890 */
rtx
gen_atomic_bit_test_and_setsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	const1_rtx)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:927 */
rtx
gen_atomic_bit_test_and_complementhi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (HImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	gen_rtx_NOT (HImode,
	gen_rtx_ZERO_EXTRACT (HImode,
	copy_rtx (operand0),
	const1_rtx,
	copy_rtx (operand1))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:927 */
rtx
gen_atomic_bit_test_and_complementsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	gen_rtx_NOT (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const1_rtx,
	copy_rtx (operand1))))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:965 */
rtx
gen_atomic_bit_test_and_resethi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (HImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	const0_rtx)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:965 */
rtx
gen_atomic_bit_test_and_resetsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCCmode,
	17),
	gen_rtx_COMPARE (CCCmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	const0_rtx)),
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const1_rtx,
	operand1),
	const0_rtx)));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:998 */
rtx
gen_atomic_add_fetch_cmp_0qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_PLUS (QImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_PLUS (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:998 */
rtx
gen_atomic_add_fetch_cmp_0hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_PLUS (HImode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_PLUS (HImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:998 */
rtx
gen_atomic_add_fetch_cmp_0si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_PLUS (SImode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1026 */
rtx
gen_atomic_sub_fetch_cmp_0qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_MINUS (QImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_MINUS (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1026 */
rtx
gen_atomic_sub_fetch_cmp_0hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_MINUS (HImode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_MINUS (HImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1026 */
rtx
gen_atomic_sub_fetch_cmp_0si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCGOCmode,
	17),
	gen_rtx_COMPARE (CCGOCmode,
	gen_rtx_MINUS (SImode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_and_fetch_cmp_0qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (QImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_or_fetch_cmp_0qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_IOR (QImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_IOR (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_xor_fetch_cmp_0qi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (QImode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_XOR (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_and_fetch_cmp_0hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (HImode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_or_fetch_cmp_0hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_IOR (HImode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_IOR (HImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_xor_fetch_cmp_0hi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (HImode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_XOR (HImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_and_fetch_cmp_0si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_or_fetch_cmp_0si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_IOR (SImode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}

/* ../../../gcc/gcc-14.2.0/gcc/config/i386/sync.md:1069 */
rtx
gen_atomic_xor_fetch_cmp_0si_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand2),
	109),
	operand1),
	const0_rtx)),
		gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1)))));
}


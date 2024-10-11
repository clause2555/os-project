/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 8955:  /* atomic_xor_fetch_cmp_0si_1 */
    case 8954:  /* atomic_or_fetch_cmp_0si_1 */
    case 8953:  /* atomic_and_fetch_cmp_0si_1 */
    case 8952:  /* atomic_xor_fetch_cmp_0hi_1 */
    case 8951:  /* atomic_or_fetch_cmp_0hi_1 */
    case 8950:  /* atomic_and_fetch_cmp_0hi_1 */
    case 8949:  /* atomic_xor_fetch_cmp_0qi_1 */
    case 8948:  /* atomic_or_fetch_cmp_0qi_1 */
    case 8947:  /* atomic_and_fetch_cmp_0qi_1 */
    case 8946:  /* atomic_sub_fetch_cmp_0si_1 */
    case 8945:  /* atomic_sub_fetch_cmp_0hi_1 */
    case 8944:  /* atomic_sub_fetch_cmp_0qi_1 */
    case 8943:  /* atomic_add_fetch_cmp_0si_1 */
    case 8942:  /* atomic_add_fetch_cmp_0hi_1 */
    case 8941:  /* atomic_add_fetch_cmp_0qi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 8938:  /* atomic_bit_test_and_complementsi_1 */
    case 8937:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 8940:  /* atomic_bit_test_and_resetsi_1 */
    case 8939:  /* atomic_bit_test_and_resethi_1 */
    case 8936:  /* atomic_bit_test_and_setsi_1 */
    case 8935:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8934:  /* atomic_xorsi */
    case 8933:  /* atomic_orsi */
    case 8932:  /* atomic_andsi */
    case 8931:  /* atomic_xorhi */
    case 8930:  /* atomic_orhi */
    case 8929:  /* atomic_andhi */
    case 8928:  /* atomic_xorqi */
    case 8927:  /* atomic_orqi */
    case 8926:  /* atomic_andqi */
    case 8925:  /* atomic_subsi */
    case 8924:  /* atomic_subhi */
    case 8923:  /* atomic_subqi */
    case 8922:  /* atomic_addsi */
    case 8921:  /* atomic_addhi */
    case 8920:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8919:  /* rao_aaddsi */
    case 8918:  /* rao_axorsi */
    case 8917:  /* rao_aorsi */
    case 8916:  /* rao_aandsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8915:  /* atomic_exchangesi */
    case 8914:  /* atomic_exchangehi */
    case 8913:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8912:  /* *atomic_fetch_add_cmpsi */
    case 8911:  /* *atomic_fetch_add_cmphi */
    case 8910:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 8909:  /* atomic_fetch_addsi */
    case 8908:  /* atomic_fetch_addhi */
    case 8907:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8906:  /* atomic_compare_and_swapsi_1 */
    case 8905:  /* atomic_compare_and_swaphi_1 */
    case 8904:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8903:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 8893:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 8853:  /* *aesencwide256klu8 */
    case 8852:  /* *aesencwide128klu8 */
    case 8851:  /* *aesdecwide256klu8 */
    case 8850:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 8849:  /* aesenc256klu8 */
    case 8848:  /* aesenc128klu8 */
    case 8847:  /* aesdec256klu8 */
    case 8846:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 8845:  /* *encodekey256u32 */
    case 8844:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 8843:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 8826:  /* avx512f_cvtne2ps2bf16_v8bf_mask */
    case 8824:  /* avx512f_cvtne2ps2bf16_v16bf_mask */
    case 8822:  /* avx512f_cvtne2ps2bf16_v32bf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8825:  /* avx512f_cvtne2ps2bf16_v8bf */
    case 8823:  /* avx512f_cvtne2ps2bf16_v16bf */
    case 8821:  /* avx512f_cvtne2ps2bf16_v32bf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 8478:  /* avx512dq_vmfpclassv2df_mask */
    case 8476:  /* avx512dq_vmfpclassv4sf_mask */
    case 8474:  /* avx512dq_vmfpclassv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8358:  /* *avx512f_scatterdiv2df */
    case 8357:  /* *avx512f_scatterdiv2df */
    case 8356:  /* *avx512f_scatterdiv2di */
    case 8355:  /* *avx512f_scatterdiv2di */
    case 8354:  /* *avx512f_scatterdiv4sf */
    case 8353:  /* *avx512f_scatterdiv4sf */
    case 8352:  /* *avx512f_scatterdiv4si */
    case 8351:  /* *avx512f_scatterdiv4si */
    case 8350:  /* *avx512f_scatterdiv4df */
    case 8349:  /* *avx512f_scatterdiv4df */
    case 8348:  /* *avx512f_scatterdiv4di */
    case 8347:  /* *avx512f_scatterdiv4di */
    case 8346:  /* *avx512f_scatterdiv8sf */
    case 8345:  /* *avx512f_scatterdiv8sf */
    case 8344:  /* *avx512f_scatterdiv8si */
    case 8343:  /* *avx512f_scatterdiv8si */
    case 8342:  /* *avx512f_scatterdiv8df */
    case 8341:  /* *avx512f_scatterdiv8df */
    case 8340:  /* *avx512f_scatterdiv8di */
    case 8339:  /* *avx512f_scatterdiv8di */
    case 8338:  /* *avx512f_scatterdiv16sf */
    case 8337:  /* *avx512f_scatterdiv16sf */
    case 8336:  /* *avx512f_scatterdiv16si */
    case 8335:  /* *avx512f_scatterdiv16si */
    case 8334:  /* *avx512f_scattersiv2df */
    case 8333:  /* *avx512f_scattersiv2df */
    case 8332:  /* *avx512f_scattersiv2di */
    case 8331:  /* *avx512f_scattersiv2di */
    case 8330:  /* *avx512f_scattersiv4sf */
    case 8329:  /* *avx512f_scattersiv4sf */
    case 8328:  /* *avx512f_scattersiv4si */
    case 8327:  /* *avx512f_scattersiv4si */
    case 8326:  /* *avx512f_scattersiv4df */
    case 8325:  /* *avx512f_scattersiv4df */
    case 8324:  /* *avx512f_scattersiv4di */
    case 8323:  /* *avx512f_scattersiv4di */
    case 8322:  /* *avx512f_scattersiv8sf */
    case 8321:  /* *avx512f_scattersiv8sf */
    case 8320:  /* *avx512f_scattersiv8si */
    case 8319:  /* *avx512f_scattersiv8si */
    case 8318:  /* *avx512f_scattersiv8df */
    case 8317:  /* *avx512f_scattersiv8df */
    case 8316:  /* *avx512f_scattersiv8di */
    case 8315:  /* *avx512f_scattersiv8di */
    case 8314:  /* *avx512f_scattersiv16sf */
    case 8313:  /* *avx512f_scattersiv16sf */
    case 8312:  /* *avx512f_scattersiv16si */
    case 8311:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 8310:  /* *avx512f_gatherdiv2df_2 */
    case 8309:  /* *avx512f_gatherdiv2df_2 */
    case 8308:  /* *avx512f_gatherdiv2di_2 */
    case 8307:  /* *avx512f_gatherdiv2di_2 */
    case 8306:  /* *avx512f_gatherdiv4sf_2 */
    case 8305:  /* *avx512f_gatherdiv4sf_2 */
    case 8304:  /* *avx512f_gatherdiv4si_2 */
    case 8303:  /* *avx512f_gatherdiv4si_2 */
    case 8302:  /* *avx512f_gatherdiv4df_2 */
    case 8301:  /* *avx512f_gatherdiv4df_2 */
    case 8300:  /* *avx512f_gatherdiv4di_2 */
    case 8299:  /* *avx512f_gatherdiv4di_2 */
    case 8298:  /* *avx512f_gatherdiv8sf_2 */
    case 8297:  /* *avx512f_gatherdiv8sf_2 */
    case 8296:  /* *avx512f_gatherdiv8si_2 */
    case 8295:  /* *avx512f_gatherdiv8si_2 */
    case 8294:  /* *avx512f_gatherdiv8df_2 */
    case 8293:  /* *avx512f_gatherdiv8df_2 */
    case 8292:  /* *avx512f_gatherdiv8di_2 */
    case 8291:  /* *avx512f_gatherdiv8di_2 */
    case 8290:  /* *avx512f_gatherdiv16sf_2 */
    case 8289:  /* *avx512f_gatherdiv16sf_2 */
    case 8288:  /* *avx512f_gatherdiv16si_2 */
    case 8287:  /* *avx512f_gatherdiv16si_2 */
    case 8262:  /* *avx512f_gathersiv2df_2 */
    case 8261:  /* *avx512f_gathersiv2df_2 */
    case 8260:  /* *avx512f_gathersiv2di_2 */
    case 8259:  /* *avx512f_gathersiv2di_2 */
    case 8258:  /* *avx512f_gathersiv4sf_2 */
    case 8257:  /* *avx512f_gathersiv4sf_2 */
    case 8256:  /* *avx512f_gathersiv4si_2 */
    case 8255:  /* *avx512f_gathersiv4si_2 */
    case 8254:  /* *avx512f_gathersiv4df_2 */
    case 8253:  /* *avx512f_gathersiv4df_2 */
    case 8252:  /* *avx512f_gathersiv4di_2 */
    case 8251:  /* *avx512f_gathersiv4di_2 */
    case 8250:  /* *avx512f_gathersiv8sf_2 */
    case 8249:  /* *avx512f_gathersiv8sf_2 */
    case 8248:  /* *avx512f_gathersiv8si_2 */
    case 8247:  /* *avx512f_gathersiv8si_2 */
    case 8246:  /* *avx512f_gathersiv8df_2 */
    case 8245:  /* *avx512f_gathersiv8df_2 */
    case 8244:  /* *avx512f_gathersiv8di_2 */
    case 8243:  /* *avx512f_gathersiv8di_2 */
    case 8242:  /* *avx512f_gathersiv16sf_2 */
    case 8241:  /* *avx512f_gathersiv16sf_2 */
    case 8240:  /* *avx512f_gathersiv16si_2 */
    case 8239:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8286:  /* *avx512f_gatherdiv2df */
    case 8285:  /* *avx512f_gatherdiv2df */
    case 8284:  /* *avx512f_gatherdiv2di */
    case 8283:  /* *avx512f_gatherdiv2di */
    case 8282:  /* *avx512f_gatherdiv4sf */
    case 8281:  /* *avx512f_gatherdiv4sf */
    case 8280:  /* *avx512f_gatherdiv4si */
    case 8279:  /* *avx512f_gatherdiv4si */
    case 8278:  /* *avx512f_gatherdiv4df */
    case 8277:  /* *avx512f_gatherdiv4df */
    case 8276:  /* *avx512f_gatherdiv4di */
    case 8275:  /* *avx512f_gatherdiv4di */
    case 8274:  /* *avx512f_gatherdiv8sf */
    case 8273:  /* *avx512f_gatherdiv8sf */
    case 8272:  /* *avx512f_gatherdiv8si */
    case 8271:  /* *avx512f_gatherdiv8si */
    case 8270:  /* *avx512f_gatherdiv8df */
    case 8269:  /* *avx512f_gatherdiv8df */
    case 8268:  /* *avx512f_gatherdiv8di */
    case 8267:  /* *avx512f_gatherdiv8di */
    case 8266:  /* *avx512f_gatherdiv16sf */
    case 8265:  /* *avx512f_gatherdiv16sf */
    case 8264:  /* *avx512f_gatherdiv16si */
    case 8263:  /* *avx512f_gatherdiv16si */
    case 8238:  /* *avx512f_gathersiv2df */
    case 8237:  /* *avx512f_gathersiv2df */
    case 8236:  /* *avx512f_gathersiv2di */
    case 8235:  /* *avx512f_gathersiv2di */
    case 8234:  /* *avx512f_gathersiv4sf */
    case 8233:  /* *avx512f_gathersiv4sf */
    case 8232:  /* *avx512f_gathersiv4si */
    case 8231:  /* *avx512f_gathersiv4si */
    case 8230:  /* *avx512f_gathersiv4df */
    case 8229:  /* *avx512f_gathersiv4df */
    case 8228:  /* *avx512f_gathersiv4di */
    case 8227:  /* *avx512f_gathersiv4di */
    case 8226:  /* *avx512f_gathersiv8sf */
    case 8225:  /* *avx512f_gathersiv8sf */
    case 8224:  /* *avx512f_gathersiv8si */
    case 8223:  /* *avx512f_gathersiv8si */
    case 8222:  /* *avx512f_gathersiv8df */
    case 8221:  /* *avx512f_gathersiv8df */
    case 8220:  /* *avx512f_gathersiv8di */
    case 8219:  /* *avx512f_gathersiv8di */
    case 8218:  /* *avx512f_gathersiv16sf */
    case 8217:  /* *avx512f_gathersiv16sf */
    case 8216:  /* *avx512f_gathersiv16si */
    case 8215:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8214:  /* *avx2_gatherdiv8sf_4 */
    case 8213:  /* *avx2_gatherdiv8sf_4 */
    case 8212:  /* *avx2_gatherdiv8si_4 */
    case 8211:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8210:  /* *avx2_gatherdiv8sf_3 */
    case 8209:  /* *avx2_gatherdiv8sf_3 */
    case 8208:  /* *avx2_gatherdiv8si_3 */
    case 8207:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8206:  /* *avx2_gatherdiv8sf_2 */
    case 8205:  /* *avx2_gatherdiv8si_2 */
    case 8204:  /* *avx2_gatherdiv4sf_2 */
    case 8203:  /* *avx2_gatherdiv4si_2 */
    case 8202:  /* *avx2_gatherdiv4df_2 */
    case 8201:  /* *avx2_gatherdiv4di_2 */
    case 8200:  /* *avx2_gatherdiv2df_2 */
    case 8199:  /* *avx2_gatherdiv2di_2 */
    case 8198:  /* *avx2_gatherdiv8sf_2 */
    case 8197:  /* *avx2_gatherdiv8si_2 */
    case 8196:  /* *avx2_gatherdiv4sf_2 */
    case 8195:  /* *avx2_gatherdiv4si_2 */
    case 8194:  /* *avx2_gatherdiv4df_2 */
    case 8193:  /* *avx2_gatherdiv4di_2 */
    case 8192:  /* *avx2_gatherdiv2df_2 */
    case 8191:  /* *avx2_gatherdiv2di_2 */
    case 8174:  /* *avx2_gathersiv8sf_2 */
    case 8173:  /* *avx2_gathersiv8si_2 */
    case 8172:  /* *avx2_gathersiv4sf_2 */
    case 8171:  /* *avx2_gathersiv4si_2 */
    case 8170:  /* *avx2_gathersiv4df_2 */
    case 8169:  /* *avx2_gathersiv4di_2 */
    case 8168:  /* *avx2_gathersiv2df_2 */
    case 8167:  /* *avx2_gathersiv2di_2 */
    case 8166:  /* *avx2_gathersiv8sf_2 */
    case 8165:  /* *avx2_gathersiv8si_2 */
    case 8164:  /* *avx2_gathersiv4sf_2 */
    case 8163:  /* *avx2_gathersiv4si_2 */
    case 8162:  /* *avx2_gathersiv4df_2 */
    case 8161:  /* *avx2_gathersiv4di_2 */
    case 8160:  /* *avx2_gathersiv2df_2 */
    case 8159:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8190:  /* *avx2_gatherdiv8sf */
    case 8189:  /* *avx2_gatherdiv8si */
    case 8188:  /* *avx2_gatherdiv4sf */
    case 8187:  /* *avx2_gatherdiv4si */
    case 8186:  /* *avx2_gatherdiv4df */
    case 8185:  /* *avx2_gatherdiv4di */
    case 8184:  /* *avx2_gatherdiv2df */
    case 8183:  /* *avx2_gatherdiv2di */
    case 8182:  /* *avx2_gatherdiv8sf */
    case 8181:  /* *avx2_gatherdiv8si */
    case 8180:  /* *avx2_gatherdiv4sf */
    case 8179:  /* *avx2_gatherdiv4si */
    case 8178:  /* *avx2_gatherdiv4df */
    case 8177:  /* *avx2_gatherdiv4di */
    case 8176:  /* *avx2_gatherdiv2df */
    case 8175:  /* *avx2_gatherdiv2di */
    case 8158:  /* *avx2_gathersiv8sf */
    case 8157:  /* *avx2_gathersiv8si */
    case 8156:  /* *avx2_gathersiv4sf */
    case 8155:  /* *avx2_gathersiv4si */
    case 8154:  /* *avx2_gathersiv4df */
    case 8153:  /* *avx2_gathersiv4di */
    case 8152:  /* *avx2_gathersiv2df */
    case 8151:  /* *avx2_gathersiv2di */
    case 8150:  /* *avx2_gathersiv8sf */
    case 8149:  /* *avx2_gathersiv8si */
    case 8148:  /* *avx2_gathersiv4sf */
    case 8147:  /* *avx2_gathersiv4si */
    case 8146:  /* *avx2_gathersiv4df */
    case 8145:  /* *avx2_gathersiv4di */
    case 8144:  /* *avx2_gathersiv2df */
    case 8143:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8142:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 8136:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8131:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8121:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8394:  /* compressstorev8hi_mask */
    case 8393:  /* compressstorev16hi_mask */
    case 8392:  /* compressstorev32hi_mask */
    case 8391:  /* compressstorev32qi_mask */
    case 8390:  /* compressstorev16qi_mask */
    case 8389:  /* compressstorev64qi_mask */
    case 8388:  /* avx512vl_compressstorev2df_mask */
    case 8387:  /* avx512vl_compressstorev2di_mask */
    case 8386:  /* avx512vl_compressstorev4sf_mask */
    case 8385:  /* avx512vl_compressstorev4si_mask */
    case 8384:  /* avx512vl_compressstorev4df_mask */
    case 8383:  /* avx512vl_compressstorev4di_mask */
    case 8382:  /* avx512vl_compressstorev8sf_mask */
    case 8381:  /* avx512vl_compressstorev8si_mask */
    case 8380:  /* avx512f_compressstorev8df_mask */
    case 8379:  /* avx512f_compressstorev8di_mask */
    case 8378:  /* avx512f_compressstorev16sf_mask */
    case 8377:  /* avx512f_compressstorev16si_mask */
    case 8025:  /* avx512vl_storev8bf_mask */
    case 8024:  /* avx512vl_storev16bf_mask */
    case 8023:  /* avx512bw_storev32bf_mask */
    case 8022:  /* avx512fp16_storev8hf_mask */
    case 8021:  /* avx512vl_storev16hf_mask */
    case 8020:  /* avx512bw_storev32hf_mask */
    case 8019:  /* avx512vl_storev8hi_mask */
    case 8018:  /* avx512vl_storev16hi_mask */
    case 8017:  /* avx512bw_storev32hi_mask */
    case 8016:  /* avx512vl_storev32qi_mask */
    case 8015:  /* avx512vl_storev16qi_mask */
    case 8014:  /* avx512bw_storev64qi_mask */
    case 8013:  /* avx512vl_storev2df_mask */
    case 8012:  /* avx512vl_storev4df_mask */
    case 8011:  /* avx512f_storev8df_mask */
    case 8010:  /* avx512vl_storev4sf_mask */
    case 8009:  /* avx512vl_storev8sf_mask */
    case 8008:  /* avx512f_storev16sf_mask */
    case 8007:  /* avx512vl_storev2di_mask */
    case 8006:  /* avx512vl_storev4di_mask */
    case 8005:  /* avx512f_storev8di_mask */
    case 8004:  /* avx512vl_storev4si_mask */
    case 8003:  /* avx512vl_storev8si_mask */
    case 8002:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8001:  /* avx2_maskstored */
    case 8000:  /* avx2_maskstored256 */
    case 7999:  /* avx_maskstorepd256 */
    case 7998:  /* avx_maskstoreps256 */
    case 7997:  /* avx2_maskstoreq */
    case 7996:  /* avx2_maskstoreq256 */
    case 7995:  /* avx_maskstorepd */
    case 7994:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 7993:  /* avx2_maskloadd */
    case 7992:  /* avx2_maskloadd256 */
    case 7991:  /* avx_maskloadpd256 */
    case 7990:  /* avx_maskloadps256 */
    case 7989:  /* avx2_maskloadq */
    case 7988:  /* avx2_maskloadq256 */
    case 7987:  /* avx_maskloadpd */
    case 7986:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 7947:  /* avx512vl_vpermt2varv16qi3_mask */
    case 7946:  /* avx512vl_vpermt2varv32qi3_mask */
    case 7945:  /* avx512bw_vpermt2varv64qi3_mask */
    case 7944:  /* avx512vl_vpermt2varv8hi3_mask */
    case 7943:  /* avx512vl_vpermt2varv16hi3_mask */
    case 7942:  /* avx512bw_vpermt2varv32hi3_mask */
    case 7941:  /* avx512vl_vpermt2varv2df3_mask */
    case 7940:  /* avx512vl_vpermt2varv2di3_mask */
    case 7939:  /* avx512vl_vpermt2varv4sf3_mask */
    case 7938:  /* avx512vl_vpermt2varv4si3_mask */
    case 7937:  /* avx512vl_vpermt2varv4df3_mask */
    case 7936:  /* avx512vl_vpermt2varv4di3_mask */
    case 7935:  /* avx512vl_vpermt2varv8sf3_mask */
    case 7934:  /* avx512vl_vpermt2varv8si3_mask */
    case 7933:  /* avx512f_vpermt2varv8df3_mask */
    case 7932:  /* avx512f_vpermt2varv8di3_mask */
    case 7931:  /* avx512f_vpermt2varv16sf3_mask */
    case 7930:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7881:  /* *avx512vl_vpermi2varv2df3_mask */
    case 7880:  /* *avx512vl_vpermi2varv4df3_mask */
    case 7879:  /* *avx512f_vpermi2varv8df3_mask */
    case 7878:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 7877:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 7876:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 7875:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 7874:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 7873:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 7872:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 7871:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 7870:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 7869:  /* *avx512vl_vpermi2varv2di3_mask */
    case 7868:  /* *avx512vl_vpermi2varv4di3_mask */
    case 7867:  /* *avx512vl_vpermi2varv4si3_mask */
    case 7866:  /* *avx512vl_vpermi2varv8si3_mask */
    case 7865:  /* *avx512f_vpermi2varv8di3_mask */
    case 7864:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 7797:  /* avx2_lddqu_inserti_to_bcasti */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7819:  /* avx_vbroadcastf128_v16bf */
    case 7818:  /* avx_vbroadcastf128_v16hf */
    case 7817:  /* avx_vbroadcastf128_v4df */
    case 7816:  /* avx_vbroadcastf128_v8sf */
    case 7815:  /* avx_vbroadcastf128_v4di */
    case 7814:  /* avx_vbroadcastf128_v8si */
    case 7813:  /* avx_vbroadcastf128_v16hi */
    case 7812:  /* avx_vbroadcastf128_v32qi */
    case 7796:  /* avx2_vbroadcasti128_v4di */
    case 7795:  /* avx2_vbroadcasti128_v8si */
    case 7794:  /* avx2_vbroadcasti128_v16hi */
    case 7793:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7669:  /* *avx_vpermilpv2df_mask */
    case 7667:  /* *avx_vpermilpv4df_mask */
    case 7665:  /* *avx512f_vpermilpv8df_mask */
    case 7663:  /* *avx_vpermilpv4sf_mask */
    case 7661:  /* *avx_vpermilpv8sf_mask */
    case 7659:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7961:  /* *ssse3_palignrv2df_perm */
    case 7960:  /* *ssse3_palignrv4sf_perm */
    case 7959:  /* *ssse3_palignrv2di_perm */
    case 7958:  /* *ssse3_palignrv4si_perm */
    case 7957:  /* *ssse3_palignrv8bf_perm */
    case 7956:  /* *ssse3_palignrv8hf_perm */
    case 7955:  /* *ssse3_palignrv8hi_perm */
    case 7954:  /* *ssse3_palignrv16qi_perm */
    case 7668:  /* *avx_vpermilpv2df */
    case 7666:  /* *avx_vpermilpv4df */
    case 7664:  /* *avx512f_vpermilpv8df */
    case 7662:  /* *avx_vpermilpv4sf */
    case 7660:  /* *avx_vpermilpv8sf */
    case 7658:  /* *avx512f_vpermilpv16sf */
    case 7657:  /* *avx_vperm_broadcast_v4df */
    case 7656:  /* *avx_vperm_broadcast_v8sf */
    case 7655:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7589:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 7573:  /* xop_maskcmp_uns2v2di3 */
    case 7572:  /* xop_maskcmp_uns2v4si3 */
    case 7571:  /* xop_maskcmp_uns2v8hi3 */
    case 7570:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 7553:  /* xop_shlv2di3 */
    case 7552:  /* xop_shlv4si3 */
    case 7551:  /* xop_shlv8hi3 */
    case 7550:  /* xop_shlv16qi3 */
    case 7549:  /* xop_shav2di3 */
    case 7548:  /* xop_shav4si3 */
    case 7547:  /* xop_shav8hi3 */
    case 7546:  /* xop_shav16qi3 */
    case 7545:  /* xop_vrotlv2di3 */
    case 7544:  /* xop_vrotlv4si3 */
    case 7543:  /* xop_vrotlv8hi3 */
    case 7542:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 7533:  /* xop_pperm_pack_v8hi_v16qi */
    case 7532:  /* xop_pperm_pack_v4si_v8hi */
    case 7531:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7520:  /* xop_phaddubq */
    case 7519:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 7524:  /* xop_phadduwq */
    case 7523:  /* xop_phaddwq */
    case 7518:  /* xop_phaddubd */
    case 7517:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7529:  /* xop_phsubdq */
    case 7528:  /* xop_phsubwd */
    case 7527:  /* xop_phsubbw */
    case 7526:  /* xop_phaddudq */
    case 7525:  /* xop_phadddq */
    case 7522:  /* xop_phadduwd */
    case 7521:  /* xop_phaddwd */
    case 7516:  /* xop_phaddubw */
    case 7515:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7498:  /* xop_pmadcsswd */
    case 7497:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7496:  /* xop_pmacsswd */
    case 7495:  /* xop_pmacswd */
    case 7494:  /* xop_pmacssdqh */
    case 7493:  /* xop_pmacsdqh */
    case 7492:  /* xop_pmacssdql */
    case 7491:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7486:  /* avx512er_vmrsqrt28v2df_mask_round */
    case 7482:  /* avx512er_vmrsqrt28v4sf_mask_round */
    case 7470:  /* avx512er_vmrcp28v2df_mask_round */
    case 7466:  /* avx512er_vmrcp28v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7485:  /* avx512er_vmrsqrt28v2df_mask */
    case 7481:  /* avx512er_vmrsqrt28v4sf_mask */
    case 7469:  /* avx512er_vmrcp28v2df_mask */
    case 7465:  /* avx512er_vmrcp28v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7484:  /* avx512er_vmrsqrt28v2df_round */
    case 7480:  /* avx512er_vmrsqrt28v4sf_round */
    case 7468:  /* avx512er_vmrcp28v2df_round */
    case 7464:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7446:  /* *avx512pf_scatterpfv8didf_mask */
    case 7445:  /* *avx512pf_scatterpfv8didf_mask */
    case 7444:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7443:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7442:  /* *avx512pf_scatterpfv8disf_mask */
    case 7441:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7440:  /* *avx512pf_scatterpfv8disf_mask */
    case 7439:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7438:  /* *avx512pf_gatherpfv8didf_mask */
    case 7437:  /* *avx512pf_gatherpfv8didf_mask */
    case 7436:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7435:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7434:  /* *avx512pf_gatherpfv8disf_mask */
    case 7433:  /* *avx512pf_gatherpfv16sisf_mask */
    case 7432:  /* *avx512pf_gatherpfv8disf_mask */
    case 7431:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 7430:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7429:  /* sse4_2_pcmpistrm */
    case 7428:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7427:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 7426:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 7425:  /* sse4_2_pcmpestrm */
    case 7424:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 7423:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 7412:  /* *ptestv4df_and */
    case 7411:  /* *ptestv8sf_and */
    case 7410:  /* *ptestv2ti_and */
    case 7409:  /* *ptestv4di_and */
    case 7408:  /* *ptestv8si_and */
    case 7407:  /* *ptestv16hi_and */
    case 7406:  /* *ptestv32qi_and */
    case 7405:  /* *ptestv2df_and */
    case 7404:  /* *ptestv4sf_and */
    case 7403:  /* *ptestv1ti_and */
    case 7402:  /* *ptestv2di_and */
    case 7401:  /* *ptestv4si_and */
    case 7400:  /* *ptestv8hi_and */
    case 7399:  /* *ptestv16qi_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 7379:  /* *sse4_1_zero_extendv2siv2di2_4 */
    case 7365:  /* *avx2_zero_extendv4siv4di2_2 */
    case 7359:  /* *avx512f_zero_extendv8siv8di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7325:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7324:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7323:  /* *sse4_1_zero_extendv2qiv2di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7353:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 7351:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 7314:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 7312:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 7258:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 7256:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7352:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 7350:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 7313:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 7311:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 7257:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 7255:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 7377:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 7375:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 7341:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 7339:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 7302:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 7300:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 7286:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 7284:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 7246:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 7244:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 7226:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 7224:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7376:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 7374:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 7340:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 7338:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 7301:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 7299:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 7285:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 7283:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 7245:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 7243:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 7225:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 7223:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 7290:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7289:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7288:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7274:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7273:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7272:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7266:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7265:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7264:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7230:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7229:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7228:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7214:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7213:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7212:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7206:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7205:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7204:  /* *avx2_zero_extendv16qiv16hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8119:  /* *vec_concatv2df_0_1 */
    case 8118:  /* *vec_concatv4df_0_1 */
    case 8117:  /* *vec_concatv8df_0_1 */
    case 8116:  /* *vec_concatv4sf_0_1 */
    case 8115:  /* *vec_concatv8sf_0_1 */
    case 8114:  /* *vec_concatv16sf_0_1 */
    case 8113:  /* *vec_concatv8hf_0_1 */
    case 8112:  /* *vec_concatv16hf_0_1 */
    case 8111:  /* *vec_concatv32hf_0_1 */
    case 8110:  /* *vec_concatv2di_0_1 */
    case 8109:  /* *vec_concatv4di_0_1 */
    case 8108:  /* *vec_concatv8di_0_1 */
    case 8107:  /* *vec_concatv4si_0_1 */
    case 8106:  /* *vec_concatv8si_0_1 */
    case 8105:  /* *vec_concatv16si_0_1 */
    case 8104:  /* *vec_concatv8hi_0_1 */
    case 8103:  /* *vec_concatv16hi_0_1 */
    case 8102:  /* *vec_concatv32hi_0_1 */
    case 8101:  /* *vec_concatv16qi_0_1 */
    case 8100:  /* *vec_concatv32qi_0_1 */
    case 8099:  /* *vec_concatv64qi_0_1 */
    case 7953:  /* *avx_vperm2f128v4df_nozero */
    case 7952:  /* *avx_vperm2f128v8sf_nozero */
    case 7951:  /* *avx_vperm2f128v8si_nozero */
    case 7378:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 7364:  /* *avx2_zero_extendv4siv4di2_1 */
    case 7358:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 7287:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 7271:  /* avx2_zero_extendv8hiv8si2_1 */
    case 7263:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 7227:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 7211:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 7203:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7189:  /* *sse4_1_pblendvb_lt_subreg_not */
    case 7188:  /* *avx2_pblendvb_lt_subreg_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7168:  /* *avx_blendvpd256_not_ltint */
    case 7167:  /* *avx_blendvps256_not_ltint */
    case 7166:  /* *sse4_1_blendvpd_not_ltint */
    case 7165:  /* *sse4_1_blendvps_not_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7164:  /* *avx_blendvpd256_ltint */
    case 7163:  /* *avx_blendvps256_ltint */
    case 7162:  /* *sse4_1_blendvpd_ltint */
    case 7161:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7098:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7089:  /* *ssse3_pmulhrswv8hi3_mask */
    case 7087:  /* *avx2_pmulhrswv16hi3_mask */
    case 7085:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7091:  /* *smulhrsv2hi3 */
    case 7090:  /* *ssse3_pmulhrswv4hi3 */
    case 7088:  /* *ssse3_pmulhrswv8hi3 */
    case 7086:  /* *avx2_pmulhrswv16hi3 */
    case 7084:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7081:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7080:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 7072:  /* ssse3_phsubdv2si3 */
    case 7071:  /* ssse3_phadddv2si3 */
    case 7070:  /* ssse3_phsubdv4si3 */
    case 7069:  /* ssse3_phadddv4si3 */
    case 7068:  /* avx2_phsubdv8si3 */
    case 7067:  /* avx2_phadddv8si3 */
    case 7066:  /* ssse3_phsubswv4hi3 */
    case 7065:  /* ssse3_phsubwv4hi3 */
    case 7064:  /* ssse3_phaddswv4hi3 */
    case 7063:  /* ssse3_phaddwv4hi3 */
    case 7062:  /* ssse3_phsubswv8hi3 */
    case 7061:  /* ssse3_phsubwv8hi3 */
    case 7060:  /* ssse3_phaddswv8hi3 */
    case 7059:  /* ssse3_phaddwv8hi3 */
    case 7058:  /* avx2_phsubswv16hi3 */
    case 7057:  /* avx2_phsubwv16hi3 */
    case 7056:  /* avx2_phaddswv16hi3 */
    case 7055:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 7044:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 7041:  /* *sse2_movmskpd_shift */
    case 7040:  /* *avx_movmskpd256_shift */
    case 7039:  /* *sse_movmskps_shift */
    case 7038:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 7026:  /* *sse2_uavgv8hi3_mask */
    case 7024:  /* *avx2_uavgv16hi3_mask */
    case 7022:  /* *avx512bw_uavgv32hi3_mask */
    case 7020:  /* *sse2_uavgv16qi3_mask */
    case 7018:  /* *avx2_uavgv32qi3_mask */
    case 7016:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7025:  /* *sse2_uavgv8hi3 */
    case 7023:  /* *avx2_uavgv16hi3 */
    case 7021:  /* *avx512bw_uavgv32hi3 */
    case 7019:  /* *sse2_uavgv16qi3 */
    case 7017:  /* *avx2_uavgv32qi3 */
    case 7015:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7007:  /* *vec_concatv8hi_permt2 */
    case 7006:  /* *vec_concatv16qi_permt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 6983:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6982:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 6981:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6980:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 6975:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6974:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 6967:  /* avx512f_pshufd_1_mask */
    case 6965:  /* *avx512f_shuf_i32x4_1_mask_1 */
    case 6963:  /* *avx512f_shuf_f32x4_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6966:  /* avx512f_pshufd_1 */
    case 6964:  /* *avx512f_shuf_i32x4_1_1 */
    case 6962:  /* *avx512f_shuf_f32x4_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7677:  /* avx512f_permv8di_1_mask */
    case 7675:  /* avx512f_permv8df_1_mask */
    case 6969:  /* avx2_pshufd_1_mask */
    case 6953:  /* *avx512f_shuf_i64x2_1_mask_1 */
    case 6951:  /* *avx512f_shuf_f64x2_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7676:  /* avx512f_permv8di_1 */
    case 7674:  /* avx512f_permv8df_1 */
    case 6968:  /* avx2_pshufd_1 */
    case 6952:  /* *avx512f_shuf_i64x2_1_1 */
    case 6950:  /* *avx512f_shuf_f64x2_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 7973:  /* vec_set_lo_v8sf_mask */
    case 7971:  /* vec_set_lo_v8si_mask */
    case 7965:  /* vec_set_lo_v4df_mask */
    case 7963:  /* vec_set_lo_v4di_mask */
    case 6937:  /* vec_set_lo_v8di_mask */
    case 6935:  /* vec_set_lo_v8df_mask */
    case 6929:  /* vec_set_lo_v16si_mask */
    case 6927:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6925:  /* avx512f_vinserti32x4_1_mask */
    case 6923:  /* avx512f_vinsertf32x4_1_mask */
    case 6921:  /* avx512dq_vinserti64x2_1_mask */
    case 6919:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6924:  /* *avx512f_vinserti32x4_1 */
    case 6922:  /* *avx512f_vinsertf32x4_1 */
    case 6920:  /* *avx512dq_vinserti64x2_1 */
    case 6918:  /* *avx512dq_vinsertf64x2_1 */
    case 6917:  /* *avx512f_vinserti32x4_0 */
    case 6916:  /* *avx512f_vinsertf32x4_0 */
    case 6915:  /* *avx512dq_vinserti64x2_0 */
    case 6914:  /* *avx512dq_vinsertf64x2_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6841:  /* avx512bw_packssdw_mask */
    case 6839:  /* avx2_packssdw_mask */
    case 6835:  /* avx512bw_packsswb_mask */
    case 6833:  /* avx2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6840:  /* avx512bw_packssdw */
    case 6838:  /* avx2_packssdw */
    case 6834:  /* avx512bw_packsswb */
    case 6832:  /* avx2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 6837:  /* sse2_packssdw_mask */
    case 6831:  /* sse2_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6829:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6828:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6827:  /* *avx512vl_testnmv2di3_zext_mask */
    case 6826:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6825:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6824:  /* *avx512vl_testnmv4di3_zext_mask */
    case 6823:  /* *avx512f_testnmv8di3_zext_mask */
    case 6822:  /* *avx512f_testnmv8di3_zext_mask */
    case 6821:  /* *avx512f_testnmv8di3_zext_mask */
    case 6820:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6819:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6818:  /* *avx512vl_testnmv4si3_zext_mask */
    case 6817:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6816:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6815:  /* *avx512vl_testnmv8si3_zext_mask */
    case 6814:  /* *avx512f_testnmv16si3_zext_mask */
    case 6813:  /* *avx512f_testnmv16si3_zext_mask */
    case 6812:  /* *avx512f_testnmv16si3_zext_mask */
    case 6811:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6810:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6809:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 6808:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6807:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6806:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 6805:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6804:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6803:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 6802:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6801:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6800:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 6799:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6798:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6797:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 6796:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6795:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6794:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6757:  /* *avx512vl_testmv2di3_zext_mask */
    case 6756:  /* *avx512vl_testmv2di3_zext_mask */
    case 6755:  /* *avx512vl_testmv2di3_zext_mask */
    case 6754:  /* *avx512vl_testmv4di3_zext_mask */
    case 6753:  /* *avx512vl_testmv4di3_zext_mask */
    case 6752:  /* *avx512vl_testmv4di3_zext_mask */
    case 6751:  /* *avx512f_testmv8di3_zext_mask */
    case 6750:  /* *avx512f_testmv8di3_zext_mask */
    case 6749:  /* *avx512f_testmv8di3_zext_mask */
    case 6748:  /* *avx512vl_testmv4si3_zext_mask */
    case 6747:  /* *avx512vl_testmv4si3_zext_mask */
    case 6746:  /* *avx512vl_testmv4si3_zext_mask */
    case 6745:  /* *avx512vl_testmv8si3_zext_mask */
    case 6744:  /* *avx512vl_testmv8si3_zext_mask */
    case 6743:  /* *avx512vl_testmv8si3_zext_mask */
    case 6742:  /* *avx512f_testmv16si3_zext_mask */
    case 6741:  /* *avx512f_testmv16si3_zext_mask */
    case 6740:  /* *avx512f_testmv16si3_zext_mask */
    case 6739:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6738:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6737:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6736:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6735:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6734:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6733:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6732:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6731:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6730:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6729:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6728:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6727:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6726:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6725:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6724:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6723:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6722:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 6514:  /* *one_cmplv2di2_pternlog_false_dep */
    case 6513:  /* *one_cmplv4di2_pternlog_false_dep */
    case 6512:  /* *one_cmplv4si2_pternlog_false_dep */
    case 6511:  /* *one_cmplv8si2_pternlog_false_dep */
    case 6510:  /* *one_cmplv8hi2_pternlog_false_dep */
    case 6509:  /* *one_cmplv16hi2_pternlog_false_dep */
    case 6508:  /* *one_cmplv32hi2_pternlog_false_dep */
    case 6507:  /* *one_cmplv16qi2_pternlog_false_dep */
    case 6506:  /* *one_cmplv32qi2_pternlog_false_dep */
    case 6505:  /* *one_cmplv64qi2_pternlog_false_dep */
    case 6504:  /* *one_cmplv8di2_pternlog_false_dep */
    case 6503:  /* *one_cmplv16si2_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 6472:  /* *avx2_pcmpv16qi3_5 */
    case 6471:  /* *avx2_pcmpv32qi3_5 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6170:  /* *sse4_1_mulv2siv2di3_mask */
    case 6168:  /* *vec_widen_smult_even_v8si_mask */
    case 6166:  /* *vec_widen_smult_even_v16si_mask */
    case 6164:  /* *vec_widen_umult_even_v4si_mask */
    case 6162:  /* *vec_widen_umult_even_v8si_mask */
    case 6160:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6158:  /* *umulv8hi3_highpart_mask */
    case 6156:  /* *smulv8hi3_highpart_mask */
    case 6154:  /* *umulv16hi3_highpart_mask */
    case 6152:  /* *smulv16hi3_highpart_mask */
    case 6150:  /* *umulv32hi3_highpart_mask */
    case 6148:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6044:  /* avx512f_us_truncatev8div16qi2_mask_store_2 */
    case 6043:  /* avx512f_truncatev8div16qi2_mask_store_2 */
    case 6042:  /* avx512f_ss_truncatev8div16qi2_mask_store_2 */
    case 6023:  /* avx512vl_us_truncatev2div2si2_mask_store_2 */
    case 6022:  /* avx512vl_truncatev2div2si2_mask_store_2 */
    case 6021:  /* avx512vl_ss_truncatev2div2si2_mask_store_2 */
    case 6001:  /* avx512vl_us_truncatev2div2hi2_mask_store_2 */
    case 6000:  /* avx512vl_truncatev2div2hi2_mask_store_2 */
    case 5999:  /* avx512vl_ss_truncatev2div2hi2_mask_store_2 */
    case 5983:  /* avx512vl_us_truncatev4div4hi2_mask_store_2 */
    case 5982:  /* avx512vl_truncatev4div4hi2_mask_store_2 */
    case 5981:  /* avx512vl_ss_truncatev4div4hi2_mask_store_2 */
    case 5980:  /* avx512vl_us_truncatev4siv4hi2_mask_store_2 */
    case 5979:  /* avx512vl_truncatev4siv4hi2_mask_store_2 */
    case 5978:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_2 */
    case 5937:  /* avx512vl_us_truncatev8siv8qi2_mask_store_2 */
    case 5936:  /* avx512vl_truncatev8siv8qi2_mask_store_2 */
    case 5935:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_2 */
    case 5934:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_2 */
    case 5933:  /* avx512vl_truncatev8hiv8qi2_mask_store_2 */
    case 5932:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_2 */
    case 5901:  /* avx512vl_us_truncatev4div4qi2_mask_store_2 */
    case 5900:  /* avx512vl_truncatev4div4qi2_mask_store_2 */
    case 5899:  /* avx512vl_ss_truncatev4div4qi2_mask_store_2 */
    case 5898:  /* avx512vl_us_truncatev4siv4qi2_mask_store_2 */
    case 5897:  /* avx512vl_truncatev4siv4qi2_mask_store_2 */
    case 5896:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_2 */
    case 5865:  /* avx512vl_us_truncatev2div2qi2_mask_store_2 */
    case 5864:  /* avx512vl_truncatev2div2qi2_mask_store_2 */
    case 5863:  /* avx512vl_ss_truncatev2div2qi2_mask_store_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6041:  /* *avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 6040:  /* *avx512f_truncatev8div16qi2_mask_store_1 */
    case 6039:  /* *avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 6020:  /* *avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 6019:  /* *avx512vl_truncatev2div2si2_mask_store_1 */
    case 6018:  /* *avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 5998:  /* *avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 5997:  /* *avx512vl_truncatev2div2hi2_mask_store_1 */
    case 5996:  /* *avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 5977:  /* *avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 5976:  /* *avx512vl_truncatev4div4hi2_mask_store_1 */
    case 5975:  /* *avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 5974:  /* *avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 5973:  /* *avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 5972:  /* *avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 5931:  /* *avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 5930:  /* *avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 5929:  /* *avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 5928:  /* *avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 5927:  /* *avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 5926:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 5895:  /* *avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 5894:  /* *avx512vl_truncatev4div4qi2_mask_store_1 */
    case 5893:  /* *avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 5892:  /* *avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 5891:  /* *avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 5890:  /* *avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 5862:  /* *avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 5861:  /* *avx512vl_truncatev2div2qi2_mask_store_1 */
    case 5860:  /* *avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 5947:  /* *avx512f_pshufb_truncv4siv4hi_1 */
    case 5847:  /* *avx512f_pshufb_truncv8hiv8qi_1 */
    case 5791:  /* *avx512f_permvar_truncv8siv8hi_1_hf */
    case 5789:  /* *avx512bw_permvar_truncv16siv16hi_1_hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 8477:  /* avx512dq_vmfpclassv2df */
    case 8475:  /* avx512dq_vmfpclassv4sf */
    case 8473:  /* avx512dq_vmfpclassv8hf */
    case 6793:  /* *avx512vl_testnmv2di3_zext */
    case 6792:  /* *avx512vl_testnmv2di3_zext */
    case 6791:  /* *avx512vl_testnmv2di3_zext */
    case 6790:  /* *avx512vl_testnmv4di3_zext */
    case 6789:  /* *avx512vl_testnmv4di3_zext */
    case 6788:  /* *avx512vl_testnmv4di3_zext */
    case 6787:  /* *avx512f_testnmv8di3_zext */
    case 6786:  /* *avx512f_testnmv8di3_zext */
    case 6785:  /* *avx512f_testnmv8di3_zext */
    case 6784:  /* *avx512vl_testnmv4si3_zext */
    case 6783:  /* *avx512vl_testnmv4si3_zext */
    case 6782:  /* *avx512vl_testnmv4si3_zext */
    case 6781:  /* *avx512vl_testnmv8si3_zext */
    case 6780:  /* *avx512vl_testnmv8si3_zext */
    case 6779:  /* *avx512vl_testnmv8si3_zext */
    case 6778:  /* *avx512f_testnmv16si3_zext */
    case 6777:  /* *avx512f_testnmv16si3_zext */
    case 6776:  /* *avx512f_testnmv16si3_zext */
    case 6775:  /* *avx512vl_testnmv8hi3_zext */
    case 6774:  /* *avx512vl_testnmv8hi3_zext */
    case 6773:  /* *avx512vl_testnmv8hi3_zext */
    case 6772:  /* *avx512vl_testnmv16hi3_zext */
    case 6771:  /* *avx512vl_testnmv16hi3_zext */
    case 6770:  /* *avx512vl_testnmv16hi3_zext */
    case 6769:  /* *avx512bw_testnmv32hi3_zext */
    case 6768:  /* *avx512bw_testnmv32hi3_zext */
    case 6767:  /* *avx512bw_testnmv32hi3_zext */
    case 6766:  /* *avx512vl_testnmv16qi3_zext */
    case 6765:  /* *avx512vl_testnmv16qi3_zext */
    case 6764:  /* *avx512vl_testnmv16qi3_zext */
    case 6763:  /* *avx512vl_testnmv32qi3_zext */
    case 6762:  /* *avx512vl_testnmv32qi3_zext */
    case 6761:  /* *avx512vl_testnmv32qi3_zext */
    case 6760:  /* *avx512bw_testnmv64qi3_zext */
    case 6759:  /* *avx512bw_testnmv64qi3_zext */
    case 6758:  /* *avx512bw_testnmv64qi3_zext */
    case 6721:  /* *avx512vl_testmv2di3_zext */
    case 6720:  /* *avx512vl_testmv2di3_zext */
    case 6719:  /* *avx512vl_testmv2di3_zext */
    case 6718:  /* *avx512vl_testmv4di3_zext */
    case 6717:  /* *avx512vl_testmv4di3_zext */
    case 6716:  /* *avx512vl_testmv4di3_zext */
    case 6715:  /* *avx512f_testmv8di3_zext */
    case 6714:  /* *avx512f_testmv8di3_zext */
    case 6713:  /* *avx512f_testmv8di3_zext */
    case 6712:  /* *avx512vl_testmv4si3_zext */
    case 6711:  /* *avx512vl_testmv4si3_zext */
    case 6710:  /* *avx512vl_testmv4si3_zext */
    case 6709:  /* *avx512vl_testmv8si3_zext */
    case 6708:  /* *avx512vl_testmv8si3_zext */
    case 6707:  /* *avx512vl_testmv8si3_zext */
    case 6706:  /* *avx512f_testmv16si3_zext */
    case 6705:  /* *avx512f_testmv16si3_zext */
    case 6704:  /* *avx512f_testmv16si3_zext */
    case 6703:  /* *avx512vl_testmv8hi3_zext */
    case 6702:  /* *avx512vl_testmv8hi3_zext */
    case 6701:  /* *avx512vl_testmv8hi3_zext */
    case 6700:  /* *avx512vl_testmv16hi3_zext */
    case 6699:  /* *avx512vl_testmv16hi3_zext */
    case 6698:  /* *avx512vl_testmv16hi3_zext */
    case 6697:  /* *avx512bw_testmv32hi3_zext */
    case 6696:  /* *avx512bw_testmv32hi3_zext */
    case 6695:  /* *avx512bw_testmv32hi3_zext */
    case 6694:  /* *avx512vl_testmv16qi3_zext */
    case 6693:  /* *avx512vl_testmv16qi3_zext */
    case 6692:  /* *avx512vl_testmv16qi3_zext */
    case 6691:  /* *avx512vl_testmv32qi3_zext */
    case 6690:  /* *avx512vl_testmv32qi3_zext */
    case 6689:  /* *avx512vl_testmv32qi3_zext */
    case 6688:  /* *avx512bw_testmv64qi3_zext */
    case 6687:  /* *avx512bw_testmv64qi3_zext */
    case 6686:  /* *avx512bw_testmv64qi3_zext */
    case 5822:  /* *avx512f_permvar_truncv4div4si_1 */
    case 5821:  /* *avx512f_permvar_truncv16hiv16qi_1 */
    case 5808:  /* *avx512f_permvar_truncv32hiv32qi_1 */
    case 5792:  /* *avx512f_vpermvar_truncv8div8si_1 */
    case 5790:  /* *avx512f_permvar_truncv8siv8hi_1 */
    case 5788:  /* *avx512bw_permvar_truncv16siv16hi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5748:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6961:  /* avx512f_shuf_i32x4_1_mask */
    case 6959:  /* avx512f_shuf_f32x4_1_mask */
    case 5743:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6960:  /* avx512f_shuf_i32x4_1 */
    case 6958:  /* avx512f_shuf_f32x4_1 */
    case 5742:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 5741:  /* *avx512f_rndscalev2df_round */
    case 5739:  /* *avx512f_rndscalev4sf_round */
    case 5737:  /* *avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7422:  /* *sse4_1_roundsd */
    case 7421:  /* *sse4_1_roundss */
    case 7420:  /* *sse4_1_roundsh */
    case 5740:  /* *avx512f_rndscalev2df */
    case 5738:  /* *avx512f_rndscalev4sf */
    case 5736:  /* *avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 5735:  /* avx512f_rndscalev2df_mask_round */
    case 5731:  /* avx512f_rndscalev4sf_mask_round */
    case 5727:  /* avx512f_rndscalev8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5734:  /* avx512f_rndscalev2df_round */
    case 5730:  /* avx512f_rndscalev4sf_round */
    case 5726:  /* avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5733:  /* avx512f_rndscalev2df_mask */
    case 5729:  /* avx512f_rndscalev4sf_mask */
    case 5725:  /* avx512f_rndscalev8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 7419:  /* sse4_1_roundsd */
    case 7418:  /* sse4_1_roundss */
    case 7417:  /* sse4_1_roundsh */
    case 5732:  /* avx512f_rndscalev2df */
    case 5728:  /* avx512f_rndscalev4sf */
    case 5724:  /* avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5687:  /* avx512f_sfixupimmv2df_mask_round */
    case 5685:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5686:  /* avx512f_sfixupimmv2df_mask */
    case 5684:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5683:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 5679:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5682:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 5678:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5681:  /* avx512f_sfixupimmv2df_round */
    case 5677:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5680:  /* avx512f_sfixupimmv2df */
    case 5676:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5675:  /* avx512vl_fixupimmv2df_mask_round */
    case 5673:  /* avx512vl_fixupimmv4df_mask_round */
    case 5671:  /* avx512f_fixupimmv8df_mask_round */
    case 5669:  /* avx512vl_fixupimmv4sf_mask_round */
    case 5667:  /* avx512vl_fixupimmv8sf_mask_round */
    case 5665:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5663:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 5659:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 5655:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 5651:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 5647:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 5643:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5661:  /* avx512vl_fixupimmv2df_round */
    case 5657:  /* avx512vl_fixupimmv4df_round */
    case 5653:  /* avx512f_fixupimmv8df_round */
    case 5649:  /* avx512vl_fixupimmv4sf_round */
    case 5645:  /* avx512vl_fixupimmv8sf_round */
    case 5641:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5674:  /* avx512vl_fixupimmv2df_mask */
    case 5672:  /* avx512vl_fixupimmv4df_mask */
    case 5670:  /* avx512f_fixupimmv8df_mask */
    case 5668:  /* avx512vl_fixupimmv4sf_mask */
    case 5666:  /* avx512vl_fixupimmv8sf_mask */
    case 5664:  /* avx512f_fixupimmv16sf_mask */
    case 5571:  /* avx512vl_vternlogv2di_mask */
    case 5570:  /* avx512vl_vternlogv4di_mask */
    case 5569:  /* avx512f_vternlogv8di_mask */
    case 5568:  /* avx512vl_vternlogv4si_mask */
    case 5567:  /* avx512vl_vternlogv8si_mask */
    case 5566:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4809:  /* *avx512vl_vpternlogv2df_1 */
    case 4808:  /* *avx512vl_vpternlogv2df_1 */
    case 4807:  /* *avx512vl_vpternlogv2df_1 */
    case 4806:  /* *avx512vl_vpternlogv2df_1 */
    case 4805:  /* *avx512vl_vpternlogv2df_1 */
    case 4804:  /* *avx512vl_vpternlogv2df_1 */
    case 4803:  /* *avx512vl_vpternlogv2df_1 */
    case 4802:  /* *avx512vl_vpternlogv2df_1 */
    case 4801:  /* *avx512vl_vpternlogv2df_1 */
    case 4800:  /* *avx512vl_vpternlogv2df_1 */
    case 4799:  /* *avx512vl_vpternlogv2df_1 */
    case 4798:  /* *avx512vl_vpternlogv2df_1 */
    case 4797:  /* *avx512vl_vpternlogv2df_1 */
    case 4796:  /* *avx512vl_vpternlogv2df_1 */
    case 4795:  /* *avx512vl_vpternlogv2df_1 */
    case 4794:  /* *avx512vl_vpternlogv2df_1 */
    case 4793:  /* *avx512vl_vpternlogv2df_1 */
    case 4792:  /* *avx512vl_vpternlogv2df_1 */
    case 4791:  /* *avx512vl_vpternlogv2df_1 */
    case 4790:  /* *avx512vl_vpternlogv2df_1 */
    case 4789:  /* *avx512vl_vpternlogv2df_1 */
    case 4788:  /* *avx512vl_vpternlogv2df_1 */
    case 4787:  /* *avx512vl_vpternlogv2df_1 */
    case 4786:  /* *avx512vl_vpternlogv2df_1 */
    case 4785:  /* *avx512vl_vpternlogv2df_1 */
    case 4784:  /* *avx512vl_vpternlogv2df_1 */
    case 4783:  /* *avx512vl_vpternlogv2df_1 */
    case 4782:  /* *avx512vl_vpternlogv4df_1 */
    case 4781:  /* *avx512vl_vpternlogv4df_1 */
    case 4780:  /* *avx512vl_vpternlogv4df_1 */
    case 4779:  /* *avx512vl_vpternlogv4df_1 */
    case 4778:  /* *avx512vl_vpternlogv4df_1 */
    case 4777:  /* *avx512vl_vpternlogv4df_1 */
    case 4776:  /* *avx512vl_vpternlogv4df_1 */
    case 4775:  /* *avx512vl_vpternlogv4df_1 */
    case 4774:  /* *avx512vl_vpternlogv4df_1 */
    case 4773:  /* *avx512vl_vpternlogv4df_1 */
    case 4772:  /* *avx512vl_vpternlogv4df_1 */
    case 4771:  /* *avx512vl_vpternlogv4df_1 */
    case 4770:  /* *avx512vl_vpternlogv4df_1 */
    case 4769:  /* *avx512vl_vpternlogv4df_1 */
    case 4768:  /* *avx512vl_vpternlogv4df_1 */
    case 4767:  /* *avx512vl_vpternlogv4df_1 */
    case 4766:  /* *avx512vl_vpternlogv4df_1 */
    case 4765:  /* *avx512vl_vpternlogv4df_1 */
    case 4764:  /* *avx512vl_vpternlogv4df_1 */
    case 4763:  /* *avx512vl_vpternlogv4df_1 */
    case 4762:  /* *avx512vl_vpternlogv4df_1 */
    case 4761:  /* *avx512vl_vpternlogv4df_1 */
    case 4760:  /* *avx512vl_vpternlogv4df_1 */
    case 4759:  /* *avx512vl_vpternlogv4df_1 */
    case 4758:  /* *avx512vl_vpternlogv4df_1 */
    case 4757:  /* *avx512vl_vpternlogv4df_1 */
    case 4756:  /* *avx512vl_vpternlogv4df_1 */
    case 4755:  /* *avx512f_vpternlogv8df_1 */
    case 4754:  /* *avx512f_vpternlogv8df_1 */
    case 4753:  /* *avx512f_vpternlogv8df_1 */
    case 4752:  /* *avx512f_vpternlogv8df_1 */
    case 4751:  /* *avx512f_vpternlogv8df_1 */
    case 4750:  /* *avx512f_vpternlogv8df_1 */
    case 4749:  /* *avx512f_vpternlogv8df_1 */
    case 4748:  /* *avx512f_vpternlogv8df_1 */
    case 4747:  /* *avx512f_vpternlogv8df_1 */
    case 4746:  /* *avx512f_vpternlogv8df_1 */
    case 4745:  /* *avx512f_vpternlogv8df_1 */
    case 4744:  /* *avx512f_vpternlogv8df_1 */
    case 4743:  /* *avx512f_vpternlogv8df_1 */
    case 4742:  /* *avx512f_vpternlogv8df_1 */
    case 4741:  /* *avx512f_vpternlogv8df_1 */
    case 4740:  /* *avx512f_vpternlogv8df_1 */
    case 4739:  /* *avx512f_vpternlogv8df_1 */
    case 4738:  /* *avx512f_vpternlogv8df_1 */
    case 4737:  /* *avx512f_vpternlogv8df_1 */
    case 4736:  /* *avx512f_vpternlogv8df_1 */
    case 4735:  /* *avx512f_vpternlogv8df_1 */
    case 4734:  /* *avx512f_vpternlogv8df_1 */
    case 4733:  /* *avx512f_vpternlogv8df_1 */
    case 4732:  /* *avx512f_vpternlogv8df_1 */
    case 4731:  /* *avx512f_vpternlogv8df_1 */
    case 4730:  /* *avx512f_vpternlogv8df_1 */
    case 4729:  /* *avx512f_vpternlogv8df_1 */
    case 4728:  /* *avx512vl_vpternlogv4sf_1 */
    case 4727:  /* *avx512vl_vpternlogv4sf_1 */
    case 4726:  /* *avx512vl_vpternlogv4sf_1 */
    case 4725:  /* *avx512vl_vpternlogv4sf_1 */
    case 4724:  /* *avx512vl_vpternlogv4sf_1 */
    case 4723:  /* *avx512vl_vpternlogv4sf_1 */
    case 4722:  /* *avx512vl_vpternlogv4sf_1 */
    case 4721:  /* *avx512vl_vpternlogv4sf_1 */
    case 4720:  /* *avx512vl_vpternlogv4sf_1 */
    case 4719:  /* *avx512vl_vpternlogv4sf_1 */
    case 4718:  /* *avx512vl_vpternlogv4sf_1 */
    case 4717:  /* *avx512vl_vpternlogv4sf_1 */
    case 4716:  /* *avx512vl_vpternlogv4sf_1 */
    case 4715:  /* *avx512vl_vpternlogv4sf_1 */
    case 4714:  /* *avx512vl_vpternlogv4sf_1 */
    case 4713:  /* *avx512vl_vpternlogv4sf_1 */
    case 4712:  /* *avx512vl_vpternlogv4sf_1 */
    case 4711:  /* *avx512vl_vpternlogv4sf_1 */
    case 4710:  /* *avx512vl_vpternlogv4sf_1 */
    case 4709:  /* *avx512vl_vpternlogv4sf_1 */
    case 4708:  /* *avx512vl_vpternlogv4sf_1 */
    case 4707:  /* *avx512vl_vpternlogv4sf_1 */
    case 4706:  /* *avx512vl_vpternlogv4sf_1 */
    case 4705:  /* *avx512vl_vpternlogv4sf_1 */
    case 4704:  /* *avx512vl_vpternlogv4sf_1 */
    case 4703:  /* *avx512vl_vpternlogv4sf_1 */
    case 4702:  /* *avx512vl_vpternlogv4sf_1 */
    case 4701:  /* *avx512vl_vpternlogv8sf_1 */
    case 4700:  /* *avx512vl_vpternlogv8sf_1 */
    case 4699:  /* *avx512vl_vpternlogv8sf_1 */
    case 4698:  /* *avx512vl_vpternlogv8sf_1 */
    case 4697:  /* *avx512vl_vpternlogv8sf_1 */
    case 4696:  /* *avx512vl_vpternlogv8sf_1 */
    case 4695:  /* *avx512vl_vpternlogv8sf_1 */
    case 4694:  /* *avx512vl_vpternlogv8sf_1 */
    case 4693:  /* *avx512vl_vpternlogv8sf_1 */
    case 4692:  /* *avx512vl_vpternlogv8sf_1 */
    case 4691:  /* *avx512vl_vpternlogv8sf_1 */
    case 4690:  /* *avx512vl_vpternlogv8sf_1 */
    case 4689:  /* *avx512vl_vpternlogv8sf_1 */
    case 4688:  /* *avx512vl_vpternlogv8sf_1 */
    case 4687:  /* *avx512vl_vpternlogv8sf_1 */
    case 4686:  /* *avx512vl_vpternlogv8sf_1 */
    case 4685:  /* *avx512vl_vpternlogv8sf_1 */
    case 4684:  /* *avx512vl_vpternlogv8sf_1 */
    case 4683:  /* *avx512vl_vpternlogv8sf_1 */
    case 4682:  /* *avx512vl_vpternlogv8sf_1 */
    case 4681:  /* *avx512vl_vpternlogv8sf_1 */
    case 4680:  /* *avx512vl_vpternlogv8sf_1 */
    case 4679:  /* *avx512vl_vpternlogv8sf_1 */
    case 4678:  /* *avx512vl_vpternlogv8sf_1 */
    case 4677:  /* *avx512vl_vpternlogv8sf_1 */
    case 4676:  /* *avx512vl_vpternlogv8sf_1 */
    case 4675:  /* *avx512vl_vpternlogv8sf_1 */
    case 4674:  /* *avx512f_vpternlogv16sf_1 */
    case 4673:  /* *avx512f_vpternlogv16sf_1 */
    case 4672:  /* *avx512f_vpternlogv16sf_1 */
    case 4671:  /* *avx512f_vpternlogv16sf_1 */
    case 4670:  /* *avx512f_vpternlogv16sf_1 */
    case 4669:  /* *avx512f_vpternlogv16sf_1 */
    case 4668:  /* *avx512f_vpternlogv16sf_1 */
    case 4667:  /* *avx512f_vpternlogv16sf_1 */
    case 4666:  /* *avx512f_vpternlogv16sf_1 */
    case 4665:  /* *avx512f_vpternlogv16sf_1 */
    case 4664:  /* *avx512f_vpternlogv16sf_1 */
    case 4663:  /* *avx512f_vpternlogv16sf_1 */
    case 4662:  /* *avx512f_vpternlogv16sf_1 */
    case 4661:  /* *avx512f_vpternlogv16sf_1 */
    case 4660:  /* *avx512f_vpternlogv16sf_1 */
    case 4659:  /* *avx512f_vpternlogv16sf_1 */
    case 4658:  /* *avx512f_vpternlogv16sf_1 */
    case 4657:  /* *avx512f_vpternlogv16sf_1 */
    case 4656:  /* *avx512f_vpternlogv16sf_1 */
    case 4655:  /* *avx512f_vpternlogv16sf_1 */
    case 4654:  /* *avx512f_vpternlogv16sf_1 */
    case 4653:  /* *avx512f_vpternlogv16sf_1 */
    case 4652:  /* *avx512f_vpternlogv16sf_1 */
    case 4651:  /* *avx512f_vpternlogv16sf_1 */
    case 4650:  /* *avx512f_vpternlogv16sf_1 */
    case 4649:  /* *avx512f_vpternlogv16sf_1 */
    case 4648:  /* *avx512f_vpternlogv16sf_1 */
    case 4647:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4646:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4645:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4644:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4643:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4642:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4641:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4640:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4639:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4638:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4637:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4636:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4635:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4634:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4633:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4632:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4631:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4630:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4629:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4628:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4627:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4626:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4625:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4624:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4623:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4622:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4621:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4620:  /* *avx512vl_vpternlogv16hf_1 */
    case 4619:  /* *avx512vl_vpternlogv16hf_1 */
    case 4618:  /* *avx512vl_vpternlogv16hf_1 */
    case 4617:  /* *avx512vl_vpternlogv16hf_1 */
    case 4616:  /* *avx512vl_vpternlogv16hf_1 */
    case 4615:  /* *avx512vl_vpternlogv16hf_1 */
    case 4614:  /* *avx512vl_vpternlogv16hf_1 */
    case 4613:  /* *avx512vl_vpternlogv16hf_1 */
    case 4612:  /* *avx512vl_vpternlogv16hf_1 */
    case 4611:  /* *avx512vl_vpternlogv16hf_1 */
    case 4610:  /* *avx512vl_vpternlogv16hf_1 */
    case 4609:  /* *avx512vl_vpternlogv16hf_1 */
    case 4608:  /* *avx512vl_vpternlogv16hf_1 */
    case 4607:  /* *avx512vl_vpternlogv16hf_1 */
    case 4606:  /* *avx512vl_vpternlogv16hf_1 */
    case 4605:  /* *avx512vl_vpternlogv16hf_1 */
    case 4604:  /* *avx512vl_vpternlogv16hf_1 */
    case 4603:  /* *avx512vl_vpternlogv16hf_1 */
    case 4602:  /* *avx512vl_vpternlogv16hf_1 */
    case 4601:  /* *avx512vl_vpternlogv16hf_1 */
    case 4600:  /* *avx512vl_vpternlogv16hf_1 */
    case 4599:  /* *avx512vl_vpternlogv16hf_1 */
    case 4598:  /* *avx512vl_vpternlogv16hf_1 */
    case 4597:  /* *avx512vl_vpternlogv16hf_1 */
    case 4596:  /* *avx512vl_vpternlogv16hf_1 */
    case 4595:  /* *avx512vl_vpternlogv16hf_1 */
    case 4594:  /* *avx512vl_vpternlogv16hf_1 */
    case 4593:  /* *avx512bw_vpternlogv32hf_1 */
    case 4592:  /* *avx512bw_vpternlogv32hf_1 */
    case 4591:  /* *avx512bw_vpternlogv32hf_1 */
    case 4590:  /* *avx512bw_vpternlogv32hf_1 */
    case 4589:  /* *avx512bw_vpternlogv32hf_1 */
    case 4588:  /* *avx512bw_vpternlogv32hf_1 */
    case 4587:  /* *avx512bw_vpternlogv32hf_1 */
    case 4586:  /* *avx512bw_vpternlogv32hf_1 */
    case 4585:  /* *avx512bw_vpternlogv32hf_1 */
    case 4584:  /* *avx512bw_vpternlogv32hf_1 */
    case 4583:  /* *avx512bw_vpternlogv32hf_1 */
    case 4582:  /* *avx512bw_vpternlogv32hf_1 */
    case 4581:  /* *avx512bw_vpternlogv32hf_1 */
    case 4580:  /* *avx512bw_vpternlogv32hf_1 */
    case 4579:  /* *avx512bw_vpternlogv32hf_1 */
    case 4578:  /* *avx512bw_vpternlogv32hf_1 */
    case 4577:  /* *avx512bw_vpternlogv32hf_1 */
    case 4576:  /* *avx512bw_vpternlogv32hf_1 */
    case 4575:  /* *avx512bw_vpternlogv32hf_1 */
    case 4574:  /* *avx512bw_vpternlogv32hf_1 */
    case 4573:  /* *avx512bw_vpternlogv32hf_1 */
    case 4572:  /* *avx512bw_vpternlogv32hf_1 */
    case 4571:  /* *avx512bw_vpternlogv32hf_1 */
    case 4570:  /* *avx512bw_vpternlogv32hf_1 */
    case 4569:  /* *avx512bw_vpternlogv32hf_1 */
    case 4568:  /* *avx512bw_vpternlogv32hf_1 */
    case 4567:  /* *avx512bw_vpternlogv32hf_1 */
    case 4566:  /* *avx512vl_vpternlogv2di_1 */
    case 4565:  /* *avx512vl_vpternlogv2di_1 */
    case 4564:  /* *avx512vl_vpternlogv2di_1 */
    case 4563:  /* *avx512vl_vpternlogv2di_1 */
    case 4562:  /* *avx512vl_vpternlogv2di_1 */
    case 4561:  /* *avx512vl_vpternlogv2di_1 */
    case 4560:  /* *avx512vl_vpternlogv2di_1 */
    case 4559:  /* *avx512vl_vpternlogv2di_1 */
    case 4558:  /* *avx512vl_vpternlogv2di_1 */
    case 4557:  /* *avx512vl_vpternlogv2di_1 */
    case 4556:  /* *avx512vl_vpternlogv2di_1 */
    case 4555:  /* *avx512vl_vpternlogv2di_1 */
    case 4554:  /* *avx512vl_vpternlogv2di_1 */
    case 4553:  /* *avx512vl_vpternlogv2di_1 */
    case 4552:  /* *avx512vl_vpternlogv2di_1 */
    case 4551:  /* *avx512vl_vpternlogv2di_1 */
    case 4550:  /* *avx512vl_vpternlogv2di_1 */
    case 4549:  /* *avx512vl_vpternlogv2di_1 */
    case 4548:  /* *avx512vl_vpternlogv2di_1 */
    case 4547:  /* *avx512vl_vpternlogv2di_1 */
    case 4546:  /* *avx512vl_vpternlogv2di_1 */
    case 4545:  /* *avx512vl_vpternlogv2di_1 */
    case 4544:  /* *avx512vl_vpternlogv2di_1 */
    case 4543:  /* *avx512vl_vpternlogv2di_1 */
    case 4542:  /* *avx512vl_vpternlogv2di_1 */
    case 4541:  /* *avx512vl_vpternlogv2di_1 */
    case 4540:  /* *avx512vl_vpternlogv2di_1 */
    case 4539:  /* *avx512vl_vpternlogv4di_1 */
    case 4538:  /* *avx512vl_vpternlogv4di_1 */
    case 4537:  /* *avx512vl_vpternlogv4di_1 */
    case 4536:  /* *avx512vl_vpternlogv4di_1 */
    case 4535:  /* *avx512vl_vpternlogv4di_1 */
    case 4534:  /* *avx512vl_vpternlogv4di_1 */
    case 4533:  /* *avx512vl_vpternlogv4di_1 */
    case 4532:  /* *avx512vl_vpternlogv4di_1 */
    case 4531:  /* *avx512vl_vpternlogv4di_1 */
    case 4530:  /* *avx512vl_vpternlogv4di_1 */
    case 4529:  /* *avx512vl_vpternlogv4di_1 */
    case 4528:  /* *avx512vl_vpternlogv4di_1 */
    case 4527:  /* *avx512vl_vpternlogv4di_1 */
    case 4526:  /* *avx512vl_vpternlogv4di_1 */
    case 4525:  /* *avx512vl_vpternlogv4di_1 */
    case 4524:  /* *avx512vl_vpternlogv4di_1 */
    case 4523:  /* *avx512vl_vpternlogv4di_1 */
    case 4522:  /* *avx512vl_vpternlogv4di_1 */
    case 4521:  /* *avx512vl_vpternlogv4di_1 */
    case 4520:  /* *avx512vl_vpternlogv4di_1 */
    case 4519:  /* *avx512vl_vpternlogv4di_1 */
    case 4518:  /* *avx512vl_vpternlogv4di_1 */
    case 4517:  /* *avx512vl_vpternlogv4di_1 */
    case 4516:  /* *avx512vl_vpternlogv4di_1 */
    case 4515:  /* *avx512vl_vpternlogv4di_1 */
    case 4514:  /* *avx512vl_vpternlogv4di_1 */
    case 4513:  /* *avx512vl_vpternlogv4di_1 */
    case 4512:  /* *avx512f_vpternlogv8di_1 */
    case 4511:  /* *avx512f_vpternlogv8di_1 */
    case 4510:  /* *avx512f_vpternlogv8di_1 */
    case 4509:  /* *avx512f_vpternlogv8di_1 */
    case 4508:  /* *avx512f_vpternlogv8di_1 */
    case 4507:  /* *avx512f_vpternlogv8di_1 */
    case 4506:  /* *avx512f_vpternlogv8di_1 */
    case 4505:  /* *avx512f_vpternlogv8di_1 */
    case 4504:  /* *avx512f_vpternlogv8di_1 */
    case 4503:  /* *avx512f_vpternlogv8di_1 */
    case 4502:  /* *avx512f_vpternlogv8di_1 */
    case 4501:  /* *avx512f_vpternlogv8di_1 */
    case 4500:  /* *avx512f_vpternlogv8di_1 */
    case 4499:  /* *avx512f_vpternlogv8di_1 */
    case 4498:  /* *avx512f_vpternlogv8di_1 */
    case 4497:  /* *avx512f_vpternlogv8di_1 */
    case 4496:  /* *avx512f_vpternlogv8di_1 */
    case 4495:  /* *avx512f_vpternlogv8di_1 */
    case 4494:  /* *avx512f_vpternlogv8di_1 */
    case 4493:  /* *avx512f_vpternlogv8di_1 */
    case 4492:  /* *avx512f_vpternlogv8di_1 */
    case 4491:  /* *avx512f_vpternlogv8di_1 */
    case 4490:  /* *avx512f_vpternlogv8di_1 */
    case 4489:  /* *avx512f_vpternlogv8di_1 */
    case 4488:  /* *avx512f_vpternlogv8di_1 */
    case 4487:  /* *avx512f_vpternlogv8di_1 */
    case 4486:  /* *avx512f_vpternlogv8di_1 */
    case 4485:  /* *avx512vl_vpternlogv4si_1 */
    case 4484:  /* *avx512vl_vpternlogv4si_1 */
    case 4483:  /* *avx512vl_vpternlogv4si_1 */
    case 4482:  /* *avx512vl_vpternlogv4si_1 */
    case 4481:  /* *avx512vl_vpternlogv4si_1 */
    case 4480:  /* *avx512vl_vpternlogv4si_1 */
    case 4479:  /* *avx512vl_vpternlogv4si_1 */
    case 4478:  /* *avx512vl_vpternlogv4si_1 */
    case 4477:  /* *avx512vl_vpternlogv4si_1 */
    case 4476:  /* *avx512vl_vpternlogv4si_1 */
    case 4475:  /* *avx512vl_vpternlogv4si_1 */
    case 4474:  /* *avx512vl_vpternlogv4si_1 */
    case 4473:  /* *avx512vl_vpternlogv4si_1 */
    case 4472:  /* *avx512vl_vpternlogv4si_1 */
    case 4471:  /* *avx512vl_vpternlogv4si_1 */
    case 4470:  /* *avx512vl_vpternlogv4si_1 */
    case 4469:  /* *avx512vl_vpternlogv4si_1 */
    case 4468:  /* *avx512vl_vpternlogv4si_1 */
    case 4467:  /* *avx512vl_vpternlogv4si_1 */
    case 4466:  /* *avx512vl_vpternlogv4si_1 */
    case 4465:  /* *avx512vl_vpternlogv4si_1 */
    case 4464:  /* *avx512vl_vpternlogv4si_1 */
    case 4463:  /* *avx512vl_vpternlogv4si_1 */
    case 4462:  /* *avx512vl_vpternlogv4si_1 */
    case 4461:  /* *avx512vl_vpternlogv4si_1 */
    case 4460:  /* *avx512vl_vpternlogv4si_1 */
    case 4459:  /* *avx512vl_vpternlogv4si_1 */
    case 4458:  /* *avx512vl_vpternlogv8si_1 */
    case 4457:  /* *avx512vl_vpternlogv8si_1 */
    case 4456:  /* *avx512vl_vpternlogv8si_1 */
    case 4455:  /* *avx512vl_vpternlogv8si_1 */
    case 4454:  /* *avx512vl_vpternlogv8si_1 */
    case 4453:  /* *avx512vl_vpternlogv8si_1 */
    case 4452:  /* *avx512vl_vpternlogv8si_1 */
    case 4451:  /* *avx512vl_vpternlogv8si_1 */
    case 4450:  /* *avx512vl_vpternlogv8si_1 */
    case 4449:  /* *avx512vl_vpternlogv8si_1 */
    case 4448:  /* *avx512vl_vpternlogv8si_1 */
    case 4447:  /* *avx512vl_vpternlogv8si_1 */
    case 4446:  /* *avx512vl_vpternlogv8si_1 */
    case 4445:  /* *avx512vl_vpternlogv8si_1 */
    case 4444:  /* *avx512vl_vpternlogv8si_1 */
    case 4443:  /* *avx512vl_vpternlogv8si_1 */
    case 4442:  /* *avx512vl_vpternlogv8si_1 */
    case 4441:  /* *avx512vl_vpternlogv8si_1 */
    case 4440:  /* *avx512vl_vpternlogv8si_1 */
    case 4439:  /* *avx512vl_vpternlogv8si_1 */
    case 4438:  /* *avx512vl_vpternlogv8si_1 */
    case 4437:  /* *avx512vl_vpternlogv8si_1 */
    case 4436:  /* *avx512vl_vpternlogv8si_1 */
    case 4435:  /* *avx512vl_vpternlogv8si_1 */
    case 4434:  /* *avx512vl_vpternlogv8si_1 */
    case 4433:  /* *avx512vl_vpternlogv8si_1 */
    case 4432:  /* *avx512vl_vpternlogv8si_1 */
    case 4431:  /* *avx512f_vpternlogv16si_1 */
    case 4430:  /* *avx512f_vpternlogv16si_1 */
    case 4429:  /* *avx512f_vpternlogv16si_1 */
    case 4428:  /* *avx512f_vpternlogv16si_1 */
    case 4427:  /* *avx512f_vpternlogv16si_1 */
    case 4426:  /* *avx512f_vpternlogv16si_1 */
    case 4425:  /* *avx512f_vpternlogv16si_1 */
    case 4424:  /* *avx512f_vpternlogv16si_1 */
    case 4423:  /* *avx512f_vpternlogv16si_1 */
    case 4422:  /* *avx512f_vpternlogv16si_1 */
    case 4421:  /* *avx512f_vpternlogv16si_1 */
    case 4420:  /* *avx512f_vpternlogv16si_1 */
    case 4419:  /* *avx512f_vpternlogv16si_1 */
    case 4418:  /* *avx512f_vpternlogv16si_1 */
    case 4417:  /* *avx512f_vpternlogv16si_1 */
    case 4416:  /* *avx512f_vpternlogv16si_1 */
    case 4415:  /* *avx512f_vpternlogv16si_1 */
    case 4414:  /* *avx512f_vpternlogv16si_1 */
    case 4413:  /* *avx512f_vpternlogv16si_1 */
    case 4412:  /* *avx512f_vpternlogv16si_1 */
    case 4411:  /* *avx512f_vpternlogv16si_1 */
    case 4410:  /* *avx512f_vpternlogv16si_1 */
    case 4409:  /* *avx512f_vpternlogv16si_1 */
    case 4408:  /* *avx512f_vpternlogv16si_1 */
    case 4407:  /* *avx512f_vpternlogv16si_1 */
    case 4406:  /* *avx512f_vpternlogv16si_1 */
    case 4405:  /* *avx512f_vpternlogv16si_1 */
    case 4404:  /* *avx512vl_vpternlogv8hi_1 */
    case 4403:  /* *avx512vl_vpternlogv8hi_1 */
    case 4402:  /* *avx512vl_vpternlogv8hi_1 */
    case 4401:  /* *avx512vl_vpternlogv8hi_1 */
    case 4400:  /* *avx512vl_vpternlogv8hi_1 */
    case 4399:  /* *avx512vl_vpternlogv8hi_1 */
    case 4398:  /* *avx512vl_vpternlogv8hi_1 */
    case 4397:  /* *avx512vl_vpternlogv8hi_1 */
    case 4396:  /* *avx512vl_vpternlogv8hi_1 */
    case 4395:  /* *avx512vl_vpternlogv8hi_1 */
    case 4394:  /* *avx512vl_vpternlogv8hi_1 */
    case 4393:  /* *avx512vl_vpternlogv8hi_1 */
    case 4392:  /* *avx512vl_vpternlogv8hi_1 */
    case 4391:  /* *avx512vl_vpternlogv8hi_1 */
    case 4390:  /* *avx512vl_vpternlogv8hi_1 */
    case 4389:  /* *avx512vl_vpternlogv8hi_1 */
    case 4388:  /* *avx512vl_vpternlogv8hi_1 */
    case 4387:  /* *avx512vl_vpternlogv8hi_1 */
    case 4386:  /* *avx512vl_vpternlogv8hi_1 */
    case 4385:  /* *avx512vl_vpternlogv8hi_1 */
    case 4384:  /* *avx512vl_vpternlogv8hi_1 */
    case 4383:  /* *avx512vl_vpternlogv8hi_1 */
    case 4382:  /* *avx512vl_vpternlogv8hi_1 */
    case 4381:  /* *avx512vl_vpternlogv8hi_1 */
    case 4380:  /* *avx512vl_vpternlogv8hi_1 */
    case 4379:  /* *avx512vl_vpternlogv8hi_1 */
    case 4378:  /* *avx512vl_vpternlogv8hi_1 */
    case 4377:  /* *avx512vl_vpternlogv16hi_1 */
    case 4376:  /* *avx512vl_vpternlogv16hi_1 */
    case 4375:  /* *avx512vl_vpternlogv16hi_1 */
    case 4374:  /* *avx512vl_vpternlogv16hi_1 */
    case 4373:  /* *avx512vl_vpternlogv16hi_1 */
    case 4372:  /* *avx512vl_vpternlogv16hi_1 */
    case 4371:  /* *avx512vl_vpternlogv16hi_1 */
    case 4370:  /* *avx512vl_vpternlogv16hi_1 */
    case 4369:  /* *avx512vl_vpternlogv16hi_1 */
    case 4368:  /* *avx512vl_vpternlogv16hi_1 */
    case 4367:  /* *avx512vl_vpternlogv16hi_1 */
    case 4366:  /* *avx512vl_vpternlogv16hi_1 */
    case 4365:  /* *avx512vl_vpternlogv16hi_1 */
    case 4364:  /* *avx512vl_vpternlogv16hi_1 */
    case 4363:  /* *avx512vl_vpternlogv16hi_1 */
    case 4362:  /* *avx512vl_vpternlogv16hi_1 */
    case 4361:  /* *avx512vl_vpternlogv16hi_1 */
    case 4360:  /* *avx512vl_vpternlogv16hi_1 */
    case 4359:  /* *avx512vl_vpternlogv16hi_1 */
    case 4358:  /* *avx512vl_vpternlogv16hi_1 */
    case 4357:  /* *avx512vl_vpternlogv16hi_1 */
    case 4356:  /* *avx512vl_vpternlogv16hi_1 */
    case 4355:  /* *avx512vl_vpternlogv16hi_1 */
    case 4354:  /* *avx512vl_vpternlogv16hi_1 */
    case 4353:  /* *avx512vl_vpternlogv16hi_1 */
    case 4352:  /* *avx512vl_vpternlogv16hi_1 */
    case 4351:  /* *avx512vl_vpternlogv16hi_1 */
    case 4350:  /* *avx512bw_vpternlogv32hi_1 */
    case 4349:  /* *avx512bw_vpternlogv32hi_1 */
    case 4348:  /* *avx512bw_vpternlogv32hi_1 */
    case 4347:  /* *avx512bw_vpternlogv32hi_1 */
    case 4346:  /* *avx512bw_vpternlogv32hi_1 */
    case 4345:  /* *avx512bw_vpternlogv32hi_1 */
    case 4344:  /* *avx512bw_vpternlogv32hi_1 */
    case 4343:  /* *avx512bw_vpternlogv32hi_1 */
    case 4342:  /* *avx512bw_vpternlogv32hi_1 */
    case 4341:  /* *avx512bw_vpternlogv32hi_1 */
    case 4340:  /* *avx512bw_vpternlogv32hi_1 */
    case 4339:  /* *avx512bw_vpternlogv32hi_1 */
    case 4338:  /* *avx512bw_vpternlogv32hi_1 */
    case 4337:  /* *avx512bw_vpternlogv32hi_1 */
    case 4336:  /* *avx512bw_vpternlogv32hi_1 */
    case 4335:  /* *avx512bw_vpternlogv32hi_1 */
    case 4334:  /* *avx512bw_vpternlogv32hi_1 */
    case 4333:  /* *avx512bw_vpternlogv32hi_1 */
    case 4332:  /* *avx512bw_vpternlogv32hi_1 */
    case 4331:  /* *avx512bw_vpternlogv32hi_1 */
    case 4330:  /* *avx512bw_vpternlogv32hi_1 */
    case 4329:  /* *avx512bw_vpternlogv32hi_1 */
    case 4328:  /* *avx512bw_vpternlogv32hi_1 */
    case 4327:  /* *avx512bw_vpternlogv32hi_1 */
    case 4326:  /* *avx512bw_vpternlogv32hi_1 */
    case 4325:  /* *avx512bw_vpternlogv32hi_1 */
    case 4324:  /* *avx512bw_vpternlogv32hi_1 */
    case 4323:  /* *avx512vl_vpternlogv16qi_1 */
    case 4322:  /* *avx512vl_vpternlogv16qi_1 */
    case 4321:  /* *avx512vl_vpternlogv16qi_1 */
    case 4320:  /* *avx512vl_vpternlogv16qi_1 */
    case 4319:  /* *avx512vl_vpternlogv16qi_1 */
    case 4318:  /* *avx512vl_vpternlogv16qi_1 */
    case 4317:  /* *avx512vl_vpternlogv16qi_1 */
    case 4316:  /* *avx512vl_vpternlogv16qi_1 */
    case 4315:  /* *avx512vl_vpternlogv16qi_1 */
    case 4314:  /* *avx512vl_vpternlogv16qi_1 */
    case 4313:  /* *avx512vl_vpternlogv16qi_1 */
    case 4312:  /* *avx512vl_vpternlogv16qi_1 */
    case 4311:  /* *avx512vl_vpternlogv16qi_1 */
    case 4310:  /* *avx512vl_vpternlogv16qi_1 */
    case 4309:  /* *avx512vl_vpternlogv16qi_1 */
    case 4308:  /* *avx512vl_vpternlogv16qi_1 */
    case 4307:  /* *avx512vl_vpternlogv16qi_1 */
    case 4306:  /* *avx512vl_vpternlogv16qi_1 */
    case 4305:  /* *avx512vl_vpternlogv16qi_1 */
    case 4304:  /* *avx512vl_vpternlogv16qi_1 */
    case 4303:  /* *avx512vl_vpternlogv16qi_1 */
    case 4302:  /* *avx512vl_vpternlogv16qi_1 */
    case 4301:  /* *avx512vl_vpternlogv16qi_1 */
    case 4300:  /* *avx512vl_vpternlogv16qi_1 */
    case 4299:  /* *avx512vl_vpternlogv16qi_1 */
    case 4298:  /* *avx512vl_vpternlogv16qi_1 */
    case 4297:  /* *avx512vl_vpternlogv16qi_1 */
    case 4296:  /* *avx512vl_vpternlogv32qi_1 */
    case 4295:  /* *avx512vl_vpternlogv32qi_1 */
    case 4294:  /* *avx512vl_vpternlogv32qi_1 */
    case 4293:  /* *avx512vl_vpternlogv32qi_1 */
    case 4292:  /* *avx512vl_vpternlogv32qi_1 */
    case 4291:  /* *avx512vl_vpternlogv32qi_1 */
    case 4290:  /* *avx512vl_vpternlogv32qi_1 */
    case 4289:  /* *avx512vl_vpternlogv32qi_1 */
    case 4288:  /* *avx512vl_vpternlogv32qi_1 */
    case 4287:  /* *avx512vl_vpternlogv32qi_1 */
    case 4286:  /* *avx512vl_vpternlogv32qi_1 */
    case 4285:  /* *avx512vl_vpternlogv32qi_1 */
    case 4284:  /* *avx512vl_vpternlogv32qi_1 */
    case 4283:  /* *avx512vl_vpternlogv32qi_1 */
    case 4282:  /* *avx512vl_vpternlogv32qi_1 */
    case 4281:  /* *avx512vl_vpternlogv32qi_1 */
    case 4280:  /* *avx512vl_vpternlogv32qi_1 */
    case 4279:  /* *avx512vl_vpternlogv32qi_1 */
    case 4278:  /* *avx512vl_vpternlogv32qi_1 */
    case 4277:  /* *avx512vl_vpternlogv32qi_1 */
    case 4276:  /* *avx512vl_vpternlogv32qi_1 */
    case 4275:  /* *avx512vl_vpternlogv32qi_1 */
    case 4274:  /* *avx512vl_vpternlogv32qi_1 */
    case 4273:  /* *avx512vl_vpternlogv32qi_1 */
    case 4272:  /* *avx512vl_vpternlogv32qi_1 */
    case 4271:  /* *avx512vl_vpternlogv32qi_1 */
    case 4270:  /* *avx512vl_vpternlogv32qi_1 */
    case 4269:  /* *avx512bw_vpternlogv64qi_1 */
    case 4268:  /* *avx512bw_vpternlogv64qi_1 */
    case 4267:  /* *avx512bw_vpternlogv64qi_1 */
    case 4266:  /* *avx512bw_vpternlogv64qi_1 */
    case 4265:  /* *avx512bw_vpternlogv64qi_1 */
    case 4264:  /* *avx512bw_vpternlogv64qi_1 */
    case 4263:  /* *avx512bw_vpternlogv64qi_1 */
    case 4262:  /* *avx512bw_vpternlogv64qi_1 */
    case 4261:  /* *avx512bw_vpternlogv64qi_1 */
    case 4260:  /* *avx512bw_vpternlogv64qi_1 */
    case 4259:  /* *avx512bw_vpternlogv64qi_1 */
    case 4258:  /* *avx512bw_vpternlogv64qi_1 */
    case 4257:  /* *avx512bw_vpternlogv64qi_1 */
    case 4256:  /* *avx512bw_vpternlogv64qi_1 */
    case 4255:  /* *avx512bw_vpternlogv64qi_1 */
    case 4254:  /* *avx512bw_vpternlogv64qi_1 */
    case 4253:  /* *avx512bw_vpternlogv64qi_1 */
    case 4252:  /* *avx512bw_vpternlogv64qi_1 */
    case 4251:  /* *avx512bw_vpternlogv64qi_1 */
    case 4250:  /* *avx512bw_vpternlogv64qi_1 */
    case 4249:  /* *avx512bw_vpternlogv64qi_1 */
    case 4248:  /* *avx512bw_vpternlogv64qi_1 */
    case 4247:  /* *avx512bw_vpternlogv64qi_1 */
    case 4246:  /* *avx512bw_vpternlogv64qi_1 */
    case 4245:  /* *avx512bw_vpternlogv64qi_1 */
    case 4244:  /* *avx512bw_vpternlogv64qi_1 */
    case 4243:  /* *avx512bw_vpternlogv64qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 5662:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 5658:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 5654:  /* avx512f_fixupimmv8df_maskz_1 */
    case 5650:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 5646:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 5642:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 4221:  /* avx512vl_vternlogv2di_maskz_1 */
    case 4219:  /* avx512vl_vternlogv4di_maskz_1 */
    case 4217:  /* avx512f_vternlogv8di_maskz_1 */
    case 4215:  /* avx512vl_vternlogv4si_maskz_1 */
    case 4213:  /* avx512vl_vternlogv8si_maskz_1 */
    case 4211:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8566:  /* vsm3rnds2 */
    case 7581:  /* xop_vpermil2v2df3 */
    case 7580:  /* xop_vpermil2v4df3 */
    case 7579:  /* xop_vpermil2v4sf3 */
    case 7578:  /* xop_vpermil2v8sf3 */
    case 7145:  /* sse4a_insertqi */
    case 5660:  /* avx512vl_fixupimmv2df */
    case 5656:  /* avx512vl_fixupimmv4df */
    case 5652:  /* avx512f_fixupimmv8df */
    case 5648:  /* avx512vl_fixupimmv4sf */
    case 5644:  /* avx512vl_fixupimmv8sf */
    case 5640:  /* avx512f_fixupimmv16sf */
    case 4242:  /* *avx512vl_vternlogv2df_all */
    case 4241:  /* *avx512vl_vternlogv4df_all */
    case 4240:  /* *avx512f_vternlogv8df_all */
    case 4239:  /* *avx512vl_vternlogv4sf_all */
    case 4238:  /* *avx512vl_vternlogv8sf_all */
    case 4237:  /* *avx512f_vternlogv16sf_all */
    case 4236:  /* *avx512fp16_vternlogv8hf_all */
    case 4235:  /* *avx512vl_vternlogv16hf_all */
    case 4234:  /* *avx512bw_vternlogv32hf_all */
    case 4233:  /* *avx512vl_vternlogv2di_all */
    case 4232:  /* *avx512vl_vternlogv4di_all */
    case 4231:  /* *avx512f_vternlogv8di_all */
    case 4230:  /* *avx512vl_vternlogv4si_all */
    case 4229:  /* *avx512vl_vternlogv8si_all */
    case 4228:  /* *avx512f_vternlogv16si_all */
    case 4227:  /* *avx512vl_vternlogv8hi_all */
    case 4226:  /* *avx512vl_vternlogv16hi_all */
    case 4225:  /* *avx512bw_vternlogv32hi_all */
    case 4224:  /* *avx512vl_vternlogv16qi_all */
    case 4223:  /* *avx512vl_vternlogv32qi_all */
    case 4222:  /* *avx512bw_vternlogv64qi_all */
    case 4220:  /* avx512vl_vternlogv2di */
    case 4218:  /* avx512vl_vternlogv4di */
    case 4216:  /* avx512f_vternlogv8di */
    case 4214:  /* avx512vl_vternlogv4si */
    case 4212:  /* avx512vl_vternlogv8si */
    case 4210:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 5619:  /* avx512f_sgetexpv2df_mask_round */
    case 5615:  /* avx512f_sgetexpv4sf_mask_round */
    case 5611:  /* avx512f_sgetexpv8hf_mask_round */
    case 4173:  /* avx512f_vmscalefv2df_mask_round */
    case 4169:  /* avx512f_vmscalefv4sf_mask_round */
    case 4165:  /* avx512f_vmscalefv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5617:  /* avx512f_sgetexpv2df_mask */
    case 5613:  /* avx512f_sgetexpv4sf_mask */
    case 5609:  /* avx512f_sgetexpv8hf_mask */
    case 4172:  /* avx512f_vmscalefv2df_mask */
    case 4168:  /* avx512f_vmscalefv4sf_mask */
    case 4164:  /* avx512f_vmscalefv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7673:  /* avx2_permv4df_1_mask */
    case 7671:  /* avx2_permv4di_1_mask */
    case 6977:  /* sse2_pshuflw_1_mask */
    case 6971:  /* sse2_pshufd_1_mask */
    case 4087:  /* avx512f_vextracti32x4_1_mask */
    case 4086:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4083:  /* avx512dq_vextracti64x2_1_mask */
    case 4082:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4077:  /* sse4_1_insertps_v4sf */
    case 4076:  /* sse4_1_insertps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7014:  /* vec_setv4di_0 */
    case 7013:  /* vec_setv8di_0 */
    case 6984:  /* sse2_loadld */
    case 5775:  /* vec_setv4df_0 */
    case 5774:  /* vec_setv8df_0 */
    case 4078:  /* vec_setv2df_0 */
    case 4071:  /* vec_setv16sf_0 */
    case 4070:  /* vec_setv16si_0 */
    case 4069:  /* vec_setv8sf_0 */
    case 4068:  /* vec_setv8si_0 */
    case 4056:  /* vec_setv32bf_0 */
    case 4055:  /* vec_setv16bf_0 */
    case 4054:  /* vec_setv32hf_0 */
    case 4053:  /* vec_setv16hf_0 */
    case 4052:  /* vec_setv32hi_0 */
    case 4051:  /* vec_setv16hi_0 */
    case 4050:  /* vec_setv8bf_0 */
    case 4049:  /* vec_setv8hf_0 */
    case 4048:  /* vec_setv8hi_0 */
    case 4047:  /* vec_setv4sf_0 */
    case 4046:  /* vec_setv4si_0 */
    case 4045:  /* *vec_concatv8hi_movss */
    case 4044:  /* *vec_concatv8bf_movss */
    case 4043:  /* *vec_concatv8hf_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 5770:  /* sse2_movsd_v2df */
    case 5769:  /* sse2_movsd_v2di */
    case 4066:  /* avx512fp16_movv8bf */
    case 4065:  /* avx512fp16_movv8hf */
    case 4064:  /* avx512fp16_movv8hi */
    case 4031:  /* sse_movss_v4sf */
    case 4030:  /* sse_movss_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7984:  /* vec_set_lo_v32qi */
    case 7980:  /* vec_set_lo_v16bf */
    case 7979:  /* vec_set_lo_v16hf */
    case 7978:  /* vec_set_lo_v16hi */
    case 7972:  /* vec_set_lo_v8sf */
    case 7970:  /* vec_set_lo_v8si */
    case 7964:  /* vec_set_lo_v4df */
    case 7962:  /* vec_set_lo_v4di */
    case 6936:  /* vec_set_lo_v8di */
    case 6934:  /* vec_set_lo_v8df */
    case 6928:  /* vec_set_lo_v16si */
    case 6926:  /* vec_set_lo_v16sf */
    case 5768:  /* sse2_loadlpd */
    case 4029:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 6944:  /* *avx512dq_shuf_f64x2_1 */
    case 6942:  /* *avx512dq_shuf_i64x2_1 */
    case 5746:  /* avx_shufpd256_1 */
    case 4025:  /* sse_shufps_v4sf */
    case 4024:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 6945:  /* avx512dq_shuf_f64x2_1_mask */
    case 6943:  /* avx512dq_shuf_i64x2_1_mask */
    case 5747:  /* avx_shufpd256_1_mask */
    case 4023:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6957:  /* avx512vl_shuf_f32x4_1_mask */
    case 6955:  /* avx512vl_shuf_i32x4_1_mask */
    case 6949:  /* avx512f_shuf_i64x2_1_mask */
    case 6947:  /* avx512f_shuf_f64x2_1_mask */
    case 5745:  /* avx512f_shufpd512_1_mask */
    case 4022:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6956:  /* avx512vl_shuf_f32x4_1 */
    case 6954:  /* avx512vl_shuf_i32x4_1 */
    case 6948:  /* avx512f_shuf_i64x2_1 */
    case 6946:  /* avx512f_shuf_f64x2_1 */
    case 5744:  /* avx512f_shufpd512_1 */
    case 4021:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4157:  /* avx_movddup256_mask */
    case 4153:  /* avx512f_movddup512_mask */
    case 4020:  /* avx512f_movsldup512_mask */
    case 4018:  /* sse3_movsldup_mask */
    case 4016:  /* avx_movsldup256_mask */
    case 4014:  /* avx512f_movshdup512_mask */
    case 4012:  /* sse3_movshdup_mask */
    case 4010:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4156:  /* avx_movddup256 */
    case 4152:  /* avx512f_movddup512 */
    case 4019:  /* *avx512f_movsldup512 */
    case 4017:  /* sse3_movsldup */
    case 4015:  /* avx_movsldup256 */
    case 4013:  /* *avx512f_movshdup512 */
    case 4011:  /* sse3_movshdup */
    case 4009:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6907:  /* vec_interleave_lowv4si_mask */
    case 6905:  /* avx512f_interleave_lowv16si_mask */
    case 6903:  /* avx2_interleave_lowv8si_mask */
    case 6901:  /* vec_interleave_highv4si_mask */
    case 6899:  /* avx512f_interleave_highv16si_mask */
    case 6897:  /* avx2_interleave_highv8si_mask */
    case 6895:  /* vec_interleave_lowv8bf_mask */
    case 6893:  /* vec_interleave_lowv8hf_mask */
    case 6891:  /* vec_interleave_lowv8hi_mask */
    case 6889:  /* avx2_interleave_lowv16bf_mask */
    case 6887:  /* avx2_interleave_lowv16hf_mask */
    case 6885:  /* avx2_interleave_lowv16hi_mask */
    case 6883:  /* avx512bw_interleave_lowv32bf_mask */
    case 6881:  /* avx512bw_interleave_lowv32hf_mask */
    case 6879:  /* avx512bw_interleave_lowv32hi_mask */
    case 6877:  /* vec_interleave_highv8bf_mask */
    case 6875:  /* vec_interleave_highv8hf_mask */
    case 6873:  /* vec_interleave_highv8hi_mask */
    case 6871:  /* avx2_interleave_highv16bf_mask */
    case 6869:  /* avx2_interleave_highv16hf_mask */
    case 6867:  /* avx2_interleave_highv16hi_mask */
    case 6865:  /* avx512bw_interleave_highv32bf_mask */
    case 6863:  /* avx512bw_interleave_highv32hf_mask */
    case 6861:  /* avx512bw_interleave_highv32hi_mask */
    case 6859:  /* vec_interleave_lowv16qi_mask */
    case 6857:  /* avx2_interleave_lowv32qi_mask */
    case 6855:  /* avx512bw_interleave_lowv64qi_mask */
    case 6853:  /* vec_interleave_highv16qi_mask */
    case 6851:  /* avx2_interleave_highv32qi_mask */
    case 6849:  /* avx512bw_interleave_highv64qi_mask */
    case 5760:  /* vec_interleave_lowv2di_mask */
    case 5758:  /* avx512f_interleave_lowv8di_mask */
    case 5756:  /* avx2_interleave_lowv4di_mask */
    case 5754:  /* vec_interleave_highv2di_mask */
    case 5752:  /* avx512f_interleave_highv8di_mask */
    case 5750:  /* avx2_interleave_highv4di_mask */
    case 4160:  /* avx512vl_unpcklpd128_mask */
    case 4159:  /* avx_unpcklpd256_mask */
    case 4155:  /* avx512f_unpcklpd512_mask */
    case 4150:  /* avx512vl_unpckhpd128_mask */
    case 4149:  /* avx_unpckhpd256_mask */
    case 4147:  /* avx512f_unpckhpd512_mask */
    case 4007:  /* unpcklps128_mask */
    case 4006:  /* avx_unpcklps256_mask */
    case 4004:  /* avx512f_unpcklps512_mask */
    case 4002:  /* vec_interleave_highv4sf_mask */
    case 4000:  /* avx_unpckhps256_mask */
    case 3998:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3987:  /* *avx512vl_cvtmask2qv2di_pternlog_false_dep */
    case 3986:  /* *avx512vl_cvtmask2qv4di_pternlog_false_dep */
    case 3985:  /* *avx512f_cvtmask2qv8di_pternlog_false_dep */
    case 3984:  /* *avx512vl_cvtmask2dv4si_pternlog_false_dep */
    case 3983:  /* *avx512vl_cvtmask2dv8si_pternlog_false_dep */
    case 3982:  /* *avx512f_cvtmask2dv16si_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 3981:  /* *avx512vl_cvtmask2qv2di */
    case 3980:  /* *avx512vl_cvtmask2qv4di */
    case 3979:  /* *avx512f_cvtmask2qv8di */
    case 3978:  /* *avx512vl_cvtmask2dv4si */
    case 3977:  /* *avx512vl_cvtmask2dv8si */
    case 3976:  /* *avx512f_cvtmask2dv16si */
    case 3975:  /* *avx512vl_cvtmask2wv8hi */
    case 3974:  /* *avx512vl_cvtmask2wv16hi */
    case 3973:  /* *avx512bw_cvtmask2wv32hi */
    case 3972:  /* *avx512vl_cvtmask2bv32qi */
    case 3971:  /* *avx512vl_cvtmask2bv16qi */
    case 3970:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3939:  /* sse2_cvtss2sd_mask_round */
    case 3934:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3938:  /* sse2_cvtss2sd_mask */
    case 3933:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6038:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 6037:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 6036:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 6017:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 6016:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 6015:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 5995:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 5994:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 5993:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 5971:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 5970:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 5969:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 5968:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 5967:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 5966:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 5925:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 5924:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 5923:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 5922:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 5921:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 5920:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 5889:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 5888:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 5887:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 5886:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 5885:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 5884:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 5859:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 5858:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 5857:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 3930:  /* *sse2_cvttpd2dq_mask_1 */
    case 3871:  /* *fixuns_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 6035:  /* avx512f_us_truncatev8div16qi2_mask */
    case 6034:  /* avx512f_truncatev8div16qi2_mask */
    case 6033:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 6014:  /* avx512vl_us_truncatev2div2si2_mask */
    case 6013:  /* avx512vl_truncatev2div2si2_mask */
    case 6012:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 5992:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 5991:  /* avx512vl_truncatev2div2hi2_mask */
    case 5990:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 5965:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 5964:  /* avx512vl_truncatev4div4hi2_mask */
    case 5963:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 5962:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 5961:  /* avx512vl_truncatev4siv4hi2_mask */
    case 5960:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 5919:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 5918:  /* avx512vl_truncatev8siv8qi2_mask */
    case 5917:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 5916:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 5915:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 5914:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 5883:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 5882:  /* avx512vl_truncatev4div4qi2_mask */
    case 5881:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 5880:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 5879:  /* avx512vl_truncatev4siv4qi2_mask */
    case 5878:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 5856:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 5855:  /* avx512vl_truncatev2div2qi2_mask */
    case 5854:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 3929:  /* sse2_cvttpd2dq_mask */
    case 3870:  /* fixuns_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3860:  /* *fixuns_notruncv2dfv2si2_mask_1 */
    case 3849:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3859:  /* fixuns_notruncv2dfv2si2_mask */
    case 3848:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3754:  /* avx512dq_cvtps2uqqv2di_mask */
    case 3746:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8120:  /* vcvtph2ps */
    case 3858:  /* fixuns_notruncv2dfv2si2 */
    case 3847:  /* sse2_cvtpd2dq */
    case 3687:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 3686:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3681:  /* avx512fp16_vcvtss2sh_mask_round */
    case 3677:  /* avx512fp16_vcvtsd2sh_mask_round */
    case 3669:  /* avx512fp16_vcvtsh2ss_mask_round */
    case 3665:  /* avx512fp16_vcvtsh2sd_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3679:  /* avx512fp16_vcvtss2sh_round */
    case 3675:  /* avx512fp16_vcvtsd2sh_round */
    case 3668:  /* avx512fp16_vcvtsh2ss_round */
    case 3664:  /* avx512fp16_vcvtsh2sd_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3680:  /* avx512fp16_vcvtss2sh_mask */
    case 3676:  /* avx512fp16_vcvtsd2sh_mask */
    case 3667:  /* avx512fp16_vcvtsh2ss_mask */
    case 3663:  /* avx512fp16_vcvtsh2sd_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3678:  /* avx512fp16_vcvtss2sh */
    case 3674:  /* avx512fp16_vcvtsd2sh */
    case 3666:  /* avx512fp16_vcvtsh2ss */
    case 3662:  /* avx512fp16_vcvtsh2sd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3783:  /* sse2_cvttsd2si_round */
    case 3778:  /* avx512f_vcvttsd2usi_round */
    case 3774:  /* avx512f_vcvttss2usi_round */
    case 3695:  /* sse_cvttss2si_round */
    case 3614:  /* avx512fp16_fixuns_truncsi2_round */
    case 3612:  /* avx512fp16_fix_truncsi2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7829:  /* avx512dq_broadcastv8sf_mask */
    case 7827:  /* avx512dq_broadcastv16sf_mask */
    case 7825:  /* avx512dq_broadcastv4si_mask */
    case 7823:  /* avx512dq_broadcastv8si_mask */
    case 7821:  /* avx512dq_broadcastv16si_mask */
    case 7733:  /* avx512vl_vec_dupv8bf_mask */
    case 7731:  /* avx512vl_vec_dupv16bf_mask */
    case 7729:  /* avx512bw_vec_dupv32bf_mask */
    case 7727:  /* avx512fp16_vec_dupv8hf_mask */
    case 7725:  /* avx512vl_vec_dupv16hf_mask */
    case 7723:  /* avx512bw_vec_dupv32hf_mask */
    case 7721:  /* avx512vl_vec_dupv8hi_mask */
    case 7719:  /* avx512vl_vec_dupv16hi_mask */
    case 7717:  /* avx512bw_vec_dupv32hi_mask */
    case 7715:  /* avx512vl_vec_dupv32qi_mask */
    case 7713:  /* avx512vl_vec_dupv16qi_mask */
    case 7711:  /* avx512bw_vec_dupv64qi_mask */
    case 7709:  /* avx512vl_vec_dupv2df_mask */
    case 7707:  /* avx512vl_vec_dupv4df_mask */
    case 7705:  /* avx512f_vec_dupv8df_mask */
    case 7703:  /* avx512vl_vec_dupv4sf_mask */
    case 7701:  /* avx512vl_vec_dupv8sf_mask */
    case 7699:  /* avx512f_vec_dupv16sf_mask */
    case 7697:  /* avx512vl_vec_dupv2di_mask */
    case 7695:  /* avx512vl_vec_dupv4di_mask */
    case 7693:  /* avx512f_vec_dupv8di_mask */
    case 7691:  /* avx512vl_vec_dupv4si_mask */
    case 7689:  /* avx512vl_vec_dupv8si_mask */
    case 7687:  /* avx512f_vec_dupv16si_mask */
    case 7369:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 7367:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 7345:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 7343:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 7333:  /* avx2_zero_extendv4hiv4di2_mask */
    case 7331:  /* avx2_sign_extendv4hiv4di2_mask */
    case 7318:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 7316:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 7306:  /* avx2_zero_extendv4qiv4di2_mask */
    case 7304:  /* avx2_sign_extendv4qiv4di2_mask */
    case 7294:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 7292:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 7278:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 7276:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 7250:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 7248:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 7238:  /* avx2_zero_extendv8qiv8si2_mask */
    case 7236:  /* avx2_sign_extendv8qiv8si2_mask */
    case 7218:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 7216:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 3989:  /* sse2_cvtps2pd_mask */
    case 3923:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 3921:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 3839:  /* sse2_cvtdq2pd_mask */
    case 3835:  /* floatunsv2siv2df2_mask */
    case 3638:  /* avx512fp16_float_extend_phv2df2_mask */
    case 3632:  /* avx512fp16_float_extend_phv4sf2_mask */
    case 3630:  /* avx512fp16_float_extend_phv4df2_mask */
    case 3606:  /* avx512fp16_fixuns_truncv2di2_mask */
    case 3604:  /* avx512fp16_fix_truncv2di2_mask */
    case 3594:  /* avx512fp16_fixuns_truncv4di2_mask */
    case 3592:  /* avx512fp16_fix_truncv4di2_mask */
    case 3590:  /* avx512fp16_fixuns_truncv4si2_mask */
    case 3588:  /* avx512fp16_fix_truncv4si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3937:  /* sse2_cvtss2sd_round */
    case 3932:  /* sse2_cvtsd2ss_round */
    case 3697:  /* cvtusi2ss32_round */
    case 3690:  /* sse_cvtsi2ss_round */
    case 3538:  /* avx512fp16_vcvtusi2sh_round */
    case 3536:  /* avx512fp16_vcvtsi2sh_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3940:  /* *sse2_vd_cvtss2sd */
    case 3936:  /* sse2_cvtss2sd */
    case 3935:  /* *sse2_vd_cvtsd2ss */
    case 3931:  /* sse2_cvtsd2ss */
    case 3770:  /* sse2_cvtsi2sd */
    case 3698:  /* cvtusi2sd32 */
    case 3696:  /* cvtusi2ss32 */
    case 3689:  /* sse_cvtsi2ss */
    case 3537:  /* avx512fp16_vcvtusi2sh */
    case 3535:  /* avx512fp16_vcvtsi2sh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 3780:  /* sse2_cvtsd2si_round */
    case 3776:  /* avx512f_vcvtsd2usi_round */
    case 3772:  /* avx512f_vcvtss2usi_round */
    case 3692:  /* sse_cvtss2si_round */
    case 3532:  /* avx512fp16_vcvtsh2si_round */
    case 3530:  /* avx512fp16_vcvtsh2usi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3949:  /* *sse2_cvtpd2ps_mask_1 */
    case 3829:  /* *floatunsv2div2sf2_mask_1 */
    case 3828:  /* *floatv2div2sf2_mask_1 */
    case 3661:  /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */
    case 3658:  /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 3657:  /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 3528:  /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */
    case 3527:  /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */
    case 3522:  /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 3521:  /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 3520:  /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 3519:  /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8828:  /* avx512f_cvtneps2bf16_v4sf_mask_1 */
    case 3948:  /* *sse2_cvtpd2ps_mask */
    case 3827:  /* *floatunsv2div2sf2_mask */
    case 3826:  /* *floatv2div2sf2_mask */
    case 3660:  /* *avx512fp16_vcvtpd2ph_v2df_mask */
    case 3656:  /* *avx512fp16_vcvtps2ph_v4sf_mask */
    case 3655:  /* *avx512fp16_vcvtpd2ph_v4df_mask */
    case 3526:  /* *avx512fp16_vcvtuqq2ph_v2di_mask */
    case 3525:  /* *avx512fp16_vcvtqq2ph_v2di_mask */
    case 3518:  /* *avx512fp16_vcvtuqq2ph_v4di_mask */
    case 3517:  /* *avx512fp16_vcvtqq2ph_v4di_mask */
    case 3516:  /* *avx512fp16_vcvtudq2ph_v4si_mask */
    case 3515:  /* *avx512fp16_vcvtdq2ph_v4si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8129:  /* avx512f_vcvtph2ps512_mask_round */
    case 7478:  /* avx512er_rsqrt28v8df_mask_round */
    case 7474:  /* avx512er_rsqrt28v16sf_mask_round */
    case 7462:  /* avx512er_rcp28v8df_mask_round */
    case 7458:  /* avx512er_rcp28v16sf_mask_round */
    case 7454:  /* avx512er_exp2v8df_mask_round */
    case 7450:  /* avx512er_exp2v16sf_mask_round */
    case 5607:  /* avx512vl_getexpv2df_mask_round */
    case 5603:  /* avx512vl_getexpv4df_mask_round */
    case 5599:  /* avx512f_getexpv8df_mask_round */
    case 5595:  /* avx512vl_getexpv4sf_mask_round */
    case 5591:  /* avx512vl_getexpv8sf_mask_round */
    case 5587:  /* avx512f_getexpv16sf_mask_round */
    case 5583:  /* avx512fp16_getexpv8hf_mask_round */
    case 5579:  /* avx512vl_getexpv16hf_mask_round */
    case 5575:  /* avx512bw_getexpv32hf_mask_round */
    case 3903:  /* fixuns_notruncv8dfv8di2_mask_round */
    case 3895:  /* fix_notruncv8dfv8di2_mask_round */
    case 3857:  /* fixuns_notruncv4dfv4si2_mask_round */
    case 3853:  /* fixuns_notruncv8dfv8si2_mask_round */
    case 3843:  /* avx512f_cvtpd2dq512_mask_round */
    case 3750:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 3742:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 3738:  /* avx512vl_fixuns_notruncv4sfv4si_mask_round */
    case 3734:  /* avx512vl_fixuns_notruncv8sfv8si_mask_round */
    case 3730:  /* avx512f_fixuns_notruncv16sfv16si_mask_round */
    case 3726:  /* avx512f_fix_notruncv16sfv16si_mask_round */
    case 3462:  /* avx512fp16_vcvtph2qq_v2di_mask_round */
    case 3458:  /* avx512fp16_vcvtph2uqq_v2di_mask_round */
    case 3454:  /* avx512fp16_vcvtph2dq_v4si_mask_round */
    case 3450:  /* avx512fp16_vcvtph2udq_v4si_mask_round */
    case 3446:  /* avx512fp16_vcvtph2w_v8hi_mask_round */
    case 3442:  /* avx512fp16_vcvtph2uw_v8hi_mask_round */
    case 3438:  /* avx512fp16_vcvtph2qq_v4di_mask_round */
    case 3434:  /* avx512fp16_vcvtph2uqq_v4di_mask_round */
    case 3430:  /* avx512fp16_vcvtph2dq_v8si_mask_round */
    case 3426:  /* avx512fp16_vcvtph2udq_v8si_mask_round */
    case 3422:  /* avx512fp16_vcvtph2w_v16hi_mask_round */
    case 3418:  /* avx512fp16_vcvtph2uw_v16hi_mask_round */
    case 3414:  /* avx512fp16_vcvtph2qq_v8di_mask_round */
    case 3410:  /* avx512fp16_vcvtph2uqq_v8di_mask_round */
    case 3406:  /* avx512fp16_vcvtph2dq_v16si_mask_round */
    case 3402:  /* avx512fp16_vcvtph2udq_v16si_mask_round */
    case 3398:  /* avx512fp16_vcvtph2w_v32hi_mask_round */
    case 3394:  /* avx512fp16_vcvtph2uw_v32hi_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8127:  /* *avx512f_vcvtph2ps512_round */
    case 7476:  /* *avx512er_rsqrt28v8df_round */
    case 7472:  /* *avx512er_rsqrt28v16sf_round */
    case 7460:  /* *avx512er_rcp28v8df_round */
    case 7456:  /* *avx512er_rcp28v16sf_round */
    case 7452:  /* avx512er_exp2v8df_round */
    case 7448:  /* avx512er_exp2v16sf_round */
    case 5605:  /* avx512vl_getexpv2df_round */
    case 5601:  /* avx512vl_getexpv4df_round */
    case 5597:  /* avx512f_getexpv8df_round */
    case 5593:  /* avx512vl_getexpv4sf_round */
    case 5589:  /* avx512vl_getexpv8sf_round */
    case 5585:  /* avx512f_getexpv16sf_round */
    case 5581:  /* avx512fp16_getexpv8hf_round */
    case 5577:  /* avx512vl_getexpv16hf_round */
    case 5573:  /* avx512bw_getexpv32hf_round */
    case 3901:  /* fixuns_notruncv8dfv8di2_round */
    case 3893:  /* fix_notruncv8dfv8di2_round */
    case 3855:  /* fixuns_notruncv4dfv4si2_round */
    case 3851:  /* fixuns_notruncv8dfv8si2_round */
    case 3841:  /* avx512f_cvtpd2dq512_round */
    case 3748:  /* *avx512dq_cvtps2uqqv8di_round */
    case 3740:  /* *avx512dq_cvtps2qqv8di_round */
    case 3736:  /* *avx512vl_fixuns_notruncv4sfv4si_round */
    case 3732:  /* *avx512vl_fixuns_notruncv8sfv8si_round */
    case 3728:  /* *avx512f_fixuns_notruncv16sfv16si_round */
    case 3724:  /* avx512f_fix_notruncv16sfv16si_round */
    case 3460:  /* avx512fp16_vcvtph2qq_v2di_round */
    case 3456:  /* avx512fp16_vcvtph2uqq_v2di_round */
    case 3452:  /* avx512fp16_vcvtph2dq_v4si_round */
    case 3448:  /* avx512fp16_vcvtph2udq_v4si_round */
    case 3444:  /* avx512fp16_vcvtph2w_v8hi_round */
    case 3440:  /* avx512fp16_vcvtph2uw_v8hi_round */
    case 3436:  /* avx512fp16_vcvtph2qq_v4di_round */
    case 3432:  /* avx512fp16_vcvtph2uqq_v4di_round */
    case 3428:  /* avx512fp16_vcvtph2dq_v8si_round */
    case 3424:  /* avx512fp16_vcvtph2udq_v8si_round */
    case 3420:  /* avx512fp16_vcvtph2w_v16hi_round */
    case 3416:  /* avx512fp16_vcvtph2uw_v16hi_round */
    case 3412:  /* avx512fp16_vcvtph2qq_v8di_round */
    case 3408:  /* avx512fp16_vcvtph2uqq_v8di_round */
    case 3404:  /* avx512fp16_vcvtph2dq_v16si_round */
    case 3400:  /* avx512fp16_vcvtph2udq_v16si_round */
    case 3396:  /* avx512fp16_vcvtph2w_v32hi_round */
    case 3392:  /* avx512fp16_vcvtph2uw_v32hi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3390:  /* avx512fp16_fcmulcsh_v8hf_mask_round */
    case 3386:  /* avx512fp16_fmulcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3389:  /* avx512fp16_fcmulcsh_v8hf_mask */
    case 3385:  /* avx512fp16_fmulcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5618:  /* avx512f_sgetexpv2df_round */
    case 5614:  /* avx512f_sgetexpv4sf_round */
    case 5610:  /* avx512f_sgetexpv8hf_round */
    case 4171:  /* avx512f_vmscalefv2df_round */
    case 4167:  /* avx512f_vmscalefv4sf_round */
    case 4163:  /* avx512f_vmscalefv8hf_round */
    case 3388:  /* avx512fp16_fcmulcsh_v8hf_round */
    case 3384:  /* avx512fp16_fmulcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5616:  /* avx512f_sgetexpv2df */
    case 5612:  /* avx512f_sgetexpv4sf */
    case 5608:  /* avx512f_sgetexpv8hf */
    case 4170:  /* avx512f_vmscalefv2df */
    case 4166:  /* avx512f_vmscalefv4sf */
    case 4162:  /* avx512f_vmscalefv8hf */
    case 3387:  /* avx512fp16_fcmulcsh_v8hf */
    case 3383:  /* avx512fp16_fmulcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3382:  /* avx512fp16_fcmaddcsh_v8hf_mask_round */
    case 3380:  /* avx512fp16_fmaddcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3381:  /* avx512fp16_fcmaddcsh_v8hf_mask */
    case 3379:  /* avx512fp16_fmaddcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3378:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */
    case 3374:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3377:  /* avx512fp16_fma_fcmaddcsh_v8hf_round */
    case 3373:  /* avx512fp16_fma_fmaddcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3376:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */
    case 3372:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3375:  /* avx512fp16_fma_fcmaddcsh_v8hf */
    case 3371:  /* avx512fp16_fma_fmaddcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3362:  /* avx512bw_fcmulc_v32hf_mask_round */
    case 3358:  /* avx512bw_fmulc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3370:  /* avx512fp16_fcmulc_v8hf_mask */
    case 3368:  /* avx512fp16_fmulc_v8hf_mask */
    case 3366:  /* avx512vl_fcmulc_v16hf_mask */
    case 3364:  /* avx512vl_fmulc_v16hf_mask */
    case 3360:  /* avx512bw_fcmulc_v32hf_mask */
    case 3356:  /* avx512bw_fmulc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3350:  /* avx512bw_fcmaddc_v32hf_mask_round */
    case 3348:  /* avx512bw_fmaddc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3354:  /* avx512fp16_fcmaddc_v8hf_mask */
    case 3353:  /* avx512fp16_fmaddc_v8hf_mask */
    case 3352:  /* avx512vl_fcmaddc_v16hf_mask */
    case 3351:  /* avx512vl_fmaddc_v16hf_mask */
    case 3349:  /* avx512bw_fcmaddc_v32hf_mask */
    case 3347:  /* avx512bw_fmaddc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3346:  /* fma_v8hf_fcmaddc_bcst */
    case 3345:  /* fma_v16hf_fcmaddc_bcst */
    case 3344:  /* fma_v32hf_fcmaddc_bcst */
    case 3343:  /* fma_v8hf_fmaddc_bcst */
    case 3342:  /* fma_v16hf_fmaddc_bcst */
    case 3341:  /* fma_v32hf_fmaddc_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3314:  /* fma_fcmaddc_v32hf_maskz_1_round */
    case 3310:  /* fma_fmaddc_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3322:  /* fma_fcmaddc_v8hf_maskz_1 */
    case 3320:  /* fma_fmaddc_v8hf_maskz_1 */
    case 3318:  /* fma_fcmaddc_v16hf_maskz_1 */
    case 3316:  /* fma_fmaddc_v16hf_maskz_1 */
    case 3313:  /* fma_fcmaddc_v32hf_maskz_1 */
    case 3309:  /* fma_fmaddc_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3306:  /* *fma4i_vmfnmsub_v2df */
    case 3305:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3302:  /* *fma4i_vmfmsub_v2df */
    case 3301:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3300:  /* *fma4i_vmfmadd_v2df */
    case 3299:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3298:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 3296:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
    case 3294:  /* *avx512f_vmfnmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3297:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 3295:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
    case 3293:  /* *avx512f_vmfnmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3292:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 3290:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
    case 3288:  /* *avx512f_vmfnmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3291:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 3289:  /* *avx512f_vmfnmsub_v4sf_mask3 */
    case 3287:  /* *avx512f_vmfnmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3286:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 3284:  /* *avx512f_vmfnmsub_v4sf_mask_round */
    case 3282:  /* *avx512f_vmfnmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3285:  /* *avx512f_vmfnmsub_v2df_mask */
    case 3283:  /* *avx512f_vmfnmsub_v4sf_mask */
    case 3281:  /* *avx512f_vmfnmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3280:  /* avx512f_vmfnmadd_v2df_maskz_1_round */
    case 3278:  /* avx512f_vmfnmadd_v4sf_maskz_1_round */
    case 3276:  /* avx512f_vmfnmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3279:  /* avx512f_vmfnmadd_v2df_maskz_1 */
    case 3277:  /* avx512f_vmfnmadd_v4sf_maskz_1 */
    case 3275:  /* avx512f_vmfnmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3274:  /* avx512f_vmfnmadd_v2df_mask3_round */
    case 3272:  /* avx512f_vmfnmadd_v4sf_mask3_round */
    case 3270:  /* avx512f_vmfnmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3273:  /* avx512f_vmfnmadd_v2df_mask3 */
    case 3271:  /* avx512f_vmfnmadd_v4sf_mask3 */
    case 3269:  /* avx512f_vmfnmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3268:  /* avx512f_vmfnmadd_v2df_mask_round */
    case 3266:  /* avx512f_vmfnmadd_v4sf_mask_round */
    case 3264:  /* avx512f_vmfnmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3267:  /* avx512f_vmfnmadd_v2df_mask */
    case 3265:  /* avx512f_vmfnmadd_v4sf_mask */
    case 3263:  /* avx512f_vmfnmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3262:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 3260:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
    case 3258:  /* *avx512f_vmfmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3261:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 3259:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
    case 3257:  /* *avx512f_vmfmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3256:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 3254:  /* avx512f_vmfmsub_v4sf_mask3_round */
    case 3252:  /* avx512f_vmfmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3255:  /* avx512f_vmfmsub_v2df_mask3 */
    case 3253:  /* avx512f_vmfmsub_v4sf_mask3 */
    case 3251:  /* avx512f_vmfmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3250:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 3248:  /* *avx512f_vmfmsub_v4sf_mask_round */
    case 3246:  /* *avx512f_vmfmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3249:  /* *avx512f_vmfmsub_v2df_mask */
    case 3247:  /* *avx512f_vmfmsub_v4sf_mask */
    case 3245:  /* *avx512f_vmfmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3244:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 3242:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
    case 3240:  /* avx512f_vmfmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3243:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 3241:  /* avx512f_vmfmadd_v4sf_maskz_1 */
    case 3239:  /* avx512f_vmfmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3238:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 3236:  /* avx512f_vmfmadd_v4sf_mask3_round */
    case 3234:  /* avx512f_vmfmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3237:  /* avx512f_vmfmadd_v2df_mask3 */
    case 3235:  /* avx512f_vmfmadd_v4sf_mask3 */
    case 3233:  /* avx512f_vmfmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3232:  /* avx512f_vmfmadd_v2df_mask_round */
    case 3230:  /* avx512f_vmfmadd_v4sf_mask_round */
    case 3228:  /* avx512f_vmfmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3231:  /* avx512f_vmfmadd_v2df_mask */
    case 3229:  /* avx512f_vmfmadd_v4sf_mask */
    case 3227:  /* avx512f_vmfmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3226:  /* *fmai_fnmsub_v2df_round */
    case 3224:  /* *fmai_fnmsub_v4sf_round */
    case 3222:  /* *fmai_fnmsub_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3225:  /* *fmai_fnmsub_v2df */
    case 3223:  /* *fmai_fnmsub_v4sf */
    case 3221:  /* *fmai_fnmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3220:  /* *fmai_fnmadd_v2df_round */
    case 3218:  /* *fmai_fnmadd_v4sf_round */
    case 3216:  /* *fmai_fnmadd_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3219:  /* *fmai_fnmadd_v2df */
    case 3217:  /* *fmai_fnmadd_v4sf */
    case 3215:  /* *fmai_fnmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3214:  /* *fmai_fmsub_v2df */
    case 3212:  /* *fmai_fmsub_v4sf */
    case 3210:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3213:  /* *fmai_fmsub_v2df */
    case 3211:  /* *fmai_fmsub_v4sf */
    case 3209:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3208:  /* *fmai_fmadd_v2df */
    case 3206:  /* *fmai_fmadd_v4sf */
    case 3204:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3207:  /* *fmai_fmadd_v2df */
    case 3205:  /* *fmai_fmadd_v4sf */
    case 3203:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3202:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 3200:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 3198:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 3196:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 3194:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 3192:  /* avx512f_fmsubadd_v16sf_mask3_round */
    case 3190:  /* avx512fp16_fmsubadd_v8hf_mask3_round */
    case 3188:  /* avx512vl_fmsubadd_v16hf_mask3_round */
    case 3186:  /* avx512bw_fmsubadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3201:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 3199:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 3197:  /* avx512f_fmsubadd_v8df_mask3 */
    case 3195:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 3193:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 3191:  /* avx512f_fmsubadd_v16sf_mask3 */
    case 3189:  /* avx512fp16_fmsubadd_v8hf_mask3 */
    case 3187:  /* avx512vl_fmsubadd_v16hf_mask3 */
    case 3185:  /* avx512bw_fmsubadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3184:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 3182:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 3180:  /* avx512f_fmsubadd_v8df_mask_round */
    case 3178:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 3176:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 3174:  /* avx512f_fmsubadd_v16sf_mask_round */
    case 3172:  /* avx512fp16_fmsubadd_v8hf_mask_round */
    case 3170:  /* avx512vl_fmsubadd_v16hf_mask_round */
    case 3168:  /* avx512bw_fmsubadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3183:  /* avx512vl_fmsubadd_v2df_mask */
    case 3181:  /* avx512vl_fmsubadd_v4df_mask */
    case 3179:  /* avx512f_fmsubadd_v8df_mask */
    case 3177:  /* avx512vl_fmsubadd_v4sf_mask */
    case 3175:  /* avx512vl_fmsubadd_v8sf_mask */
    case 3173:  /* avx512f_fmsubadd_v16sf_mask */
    case 3171:  /* avx512fp16_fmsubadd_v8hf_mask */
    case 3169:  /* avx512vl_fmsubadd_v16hf_mask */
    case 3167:  /* avx512bw_fmsubadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3162:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 3154:  /* fma_fmsubadd_v16sf_maskz_1_round */
    case 3146:  /* fma_fmsubadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3161:  /* *fma_fmsubadd_v8df_round */
    case 3153:  /* *fma_fmsubadd_v16sf_round */
    case 3145:  /* *fma_fmsubadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3166:  /* fma_fmsubadd_v2df_maskz_1 */
    case 3164:  /* fma_fmsubadd_v4df_maskz_1 */
    case 3160:  /* fma_fmsubadd_v8df_maskz_1 */
    case 3158:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 3156:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 3152:  /* fma_fmsubadd_v16sf_maskz_1 */
    case 3150:  /* fma_fmsubadd_v8hf_maskz_1 */
    case 3148:  /* fma_fmsubadd_v16hf_maskz_1 */
    case 3144:  /* fma_fmsubadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3165:  /* *fma_fmsubadd_v2df */
    case 3163:  /* *fma_fmsubadd_v4df */
    case 3159:  /* *fma_fmsubadd_v8df */
    case 3157:  /* *fma_fmsubadd_v4sf */
    case 3155:  /* *fma_fmsubadd_v8sf */
    case 3151:  /* *fma_fmsubadd_v16sf */
    case 3149:  /* *fma_fmsubadd_v8hf */
    case 3147:  /* *fma_fmsubadd_v16hf */
    case 3143:  /* *fma_fmsubadd_v32hf */
    case 3142:  /* *fma_fmsubadd_v2df */
    case 3141:  /* *fma_fmsubadd_v4df */
    case 3140:  /* *fma_fmsubadd_v4sf */
    case 3139:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 3138:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 3136:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 3134:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 3132:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 3130:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 3128:  /* avx512f_fmaddsub_v16sf_mask3_round */
    case 3126:  /* avx512fp16_fmaddsub_v8hf_mask3_round */
    case 3124:  /* avx512vl_fmaddsub_v16hf_mask3_round */
    case 3122:  /* avx512bw_fmaddsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3137:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 3135:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 3133:  /* avx512f_fmaddsub_v8df_mask3 */
    case 3131:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 3129:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 3127:  /* avx512f_fmaddsub_v16sf_mask3 */
    case 3125:  /* avx512fp16_fmaddsub_v8hf_mask3 */
    case 3123:  /* avx512vl_fmaddsub_v16hf_mask3 */
    case 3121:  /* avx512bw_fmaddsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3120:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 3118:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 3116:  /* avx512f_fmaddsub_v8df_mask_round */
    case 3114:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 3112:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 3110:  /* avx512f_fmaddsub_v16sf_mask_round */
    case 3108:  /* avx512fp16_fmaddsub_v8hf_mask_round */
    case 3106:  /* avx512vl_fmaddsub_v16hf_mask_round */
    case 3104:  /* avx512bw_fmaddsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8842:  /* avx512f_dpbf16ps_v4sf_mask */
    case 8841:  /* avx512f_dpbf16ps_v8sf_mask */
    case 8840:  /* avx512f_dpbf16ps_v16sf_mask */
    case 8788:  /* vpdpwssds_v4si_mask */
    case 8787:  /* vpdpwssds_v8si_mask */
    case 8786:  /* vpdpwssds_v16si_mask */
    case 8779:  /* vpdpwssd_v4si_mask */
    case 8778:  /* vpdpwssd_v8si_mask */
    case 8777:  /* vpdpwssd_v16si_mask */
    case 8770:  /* vpdpbusds_v4si_mask */
    case 8769:  /* vpdpbusds_v8si_mask */
    case 8768:  /* vpdpbusds_v16si_mask */
    case 8761:  /* vpdpbusd_v4si_mask */
    case 8760:  /* vpdpbusd_v8si_mask */
    case 8759:  /* vpdpbusd_v16si_mask */
    case 8746:  /* vpshldv_v2di_mask */
    case 8745:  /* vpshldv_v4si_mask */
    case 8744:  /* vpshldv_v8hi_mask */
    case 8743:  /* vpshldv_v4di_mask */
    case 8742:  /* vpshldv_v8si_mask */
    case 8741:  /* vpshldv_v16hi_mask */
    case 8740:  /* vpshldv_v8di_mask */
    case 8739:  /* vpshldv_v16si_mask */
    case 8738:  /* vpshldv_v32hi_mask */
    case 8719:  /* vpshrdv_v2di_mask */
    case 8718:  /* vpshrdv_v4si_mask */
    case 8717:  /* vpshrdv_v8hi_mask */
    case 8716:  /* vpshrdv_v4di_mask */
    case 8715:  /* vpshrdv_v8si_mask */
    case 8714:  /* vpshrdv_v16hi_mask */
    case 8713:  /* vpshrdv_v8di_mask */
    case 8712:  /* vpshrdv_v16si_mask */
    case 8711:  /* vpshrdv_v32hi_mask */
    case 8597:  /* vpmadd52huqv2di_mask */
    case 8596:  /* vpmadd52luqv2di_mask */
    case 8595:  /* vpmadd52huqv4di_mask */
    case 8594:  /* vpmadd52luqv4di_mask */
    case 8593:  /* vpmadd52huqv8di_mask */
    case 8592:  /* vpmadd52luqv8di_mask */
    case 3119:  /* avx512vl_fmaddsub_v2df_mask */
    case 3117:  /* avx512vl_fmaddsub_v4df_mask */
    case 3115:  /* avx512f_fmaddsub_v8df_mask */
    case 3113:  /* avx512vl_fmaddsub_v4sf_mask */
    case 3111:  /* avx512vl_fmaddsub_v8sf_mask */
    case 3109:  /* avx512f_fmaddsub_v16sf_mask */
    case 3107:  /* avx512fp16_fmaddsub_v8hf_mask */
    case 3105:  /* avx512vl_fmaddsub_v16hf_mask */
    case 3103:  /* avx512bw_fmaddsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8442:  /* avx512dq_rangepv8df_mask_round */
    case 8434:  /* avx512dq_rangepv16sf_mask_round */
    case 3098:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 3090:  /* fma_fmaddsub_v16sf_maskz_1_round */
    case 3082:  /* fma_fmaddsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8839:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 8837:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 8835:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 8791:  /* vpdpwssds_v4si_maskz_1 */
    case 8790:  /* vpdpwssds_v8si_maskz_1 */
    case 8789:  /* vpdpwssds_v16si_maskz_1 */
    case 8782:  /* vpdpwssd_v4si_maskz_1 */
    case 8781:  /* vpdpwssd_v8si_maskz_1 */
    case 8780:  /* vpdpwssd_v16si_maskz_1 */
    case 8773:  /* vpdpbusds_v4si_maskz_1 */
    case 8772:  /* vpdpbusds_v8si_maskz_1 */
    case 8771:  /* vpdpbusds_v16si_maskz_1 */
    case 8764:  /* vpdpbusd_v4si_maskz_1 */
    case 8763:  /* vpdpbusd_v8si_maskz_1 */
    case 8762:  /* vpdpbusd_v16si_maskz_1 */
    case 8755:  /* vpshldv_v2di_maskz_1 */
    case 8754:  /* vpshldv_v4si_maskz_1 */
    case 8753:  /* vpshldv_v8hi_maskz_1 */
    case 8752:  /* vpshldv_v4di_maskz_1 */
    case 8751:  /* vpshldv_v8si_maskz_1 */
    case 8750:  /* vpshldv_v16hi_maskz_1 */
    case 8749:  /* vpshldv_v8di_maskz_1 */
    case 8748:  /* vpshldv_v16si_maskz_1 */
    case 8747:  /* vpshldv_v32hi_maskz_1 */
    case 8728:  /* vpshrdv_v2di_maskz_1 */
    case 8727:  /* vpshrdv_v4si_maskz_1 */
    case 8726:  /* vpshrdv_v8hi_maskz_1 */
    case 8725:  /* vpshrdv_v4di_maskz_1 */
    case 8724:  /* vpshrdv_v8si_maskz_1 */
    case 8723:  /* vpshrdv_v16hi_maskz_1 */
    case 8722:  /* vpshrdv_v8di_maskz_1 */
    case 8721:  /* vpshrdv_v16si_maskz_1 */
    case 8720:  /* vpshrdv_v32hi_maskz_1 */
    case 8701:  /* vpshld_v2di_mask */
    case 8699:  /* vpshld_v4si_mask */
    case 8697:  /* vpshld_v8hi_mask */
    case 8695:  /* vpshld_v4di_mask */
    case 8693:  /* vpshld_v8si_mask */
    case 8691:  /* vpshld_v16hi_mask */
    case 8689:  /* vpshld_v8di_mask */
    case 8687:  /* vpshld_v16si_mask */
    case 8685:  /* vpshld_v32hi_mask */
    case 8683:  /* vpshrd_v2di_mask */
    case 8681:  /* vpshrd_v4si_mask */
    case 8679:  /* vpshrd_v8hi_mask */
    case 8677:  /* vpshrd_v4di_mask */
    case 8675:  /* vpshrd_v8si_mask */
    case 8673:  /* vpshrd_v16hi_mask */
    case 8671:  /* vpshrd_v8di_mask */
    case 8669:  /* vpshrd_v16si_mask */
    case 8667:  /* vpshrd_v32hi_mask */
    case 8659:  /* vgf2p8affineqb_v16qi_mask */
    case 8657:  /* vgf2p8affineqb_v32qi_mask */
    case 8655:  /* vgf2p8affineqb_v64qi_mask */
    case 8653:  /* vgf2p8affineinvqb_v16qi_mask */
    case 8651:  /* vgf2p8affineinvqb_v32qi_mask */
    case 8649:  /* vgf2p8affineinvqb_v64qi_mask */
    case 8623:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 8620:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 8617:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 8614:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 8611:  /* avx5124fmaddps_4fmaddss_maskz */
    case 8608:  /* avx5124fmaddps_4fmaddps_maskz */
    case 8591:  /* vpmadd52huqv2di_maskz_1 */
    case 8590:  /* vpmadd52luqv2di_maskz_1 */
    case 8589:  /* vpmadd52huqv4di_maskz_1 */
    case 8588:  /* vpmadd52luqv4di_maskz_1 */
    case 8587:  /* vpmadd52huqv8di_maskz_1 */
    case 8586:  /* vpmadd52luqv8di_maskz_1 */
    case 8532:  /* avx512bw_dbpsadbwv32hi_mask */
    case 8530:  /* avx512bw_dbpsadbwv16hi_mask */
    case 8528:  /* avx512bw_dbpsadbwv8hi_mask */
    case 8446:  /* avx512dq_rangepv2df_mask */
    case 8444:  /* avx512dq_rangepv4df_mask */
    case 8441:  /* avx512dq_rangepv8df_mask */
    case 8438:  /* avx512dq_rangepv4sf_mask */
    case 8436:  /* avx512dq_rangepv8sf_mask */
    case 8433:  /* avx512dq_rangepv16sf_mask */
    case 7929:  /* avx512vl_vpermt2varv8bf3_maskz_1 */
    case 7927:  /* avx512vl_vpermt2varv16bf3_maskz_1 */
    case 7925:  /* avx512bw_vpermt2varv32bf3_maskz_1 */
    case 7923:  /* avx512fp16_vpermt2varv8hf3_maskz_1 */
    case 7921:  /* avx512vl_vpermt2varv16hf3_maskz_1 */
    case 7919:  /* avx512bw_vpermt2varv32hf3_maskz_1 */
    case 7917:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 7915:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 7913:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 7911:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 7909:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 7907:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 7905:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 7903:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 7901:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 7899:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 7897:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 7895:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 7893:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 7891:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 7889:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 7887:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 7885:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 7883:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 7110:  /* ssse3_palignrv16qi_mask */
    case 7109:  /* avx2_palignrv32qi_mask */
    case 7108:  /* avx512bw_palignrv64qi_mask */
    case 5631:  /* avx512vl_alignv2di_mask */
    case 5629:  /* avx512vl_alignv4di_mask */
    case 5627:  /* avx512f_alignv8di_mask */
    case 5625:  /* avx512vl_alignv4si_mask */
    case 5623:  /* avx512vl_alignv8si_mask */
    case 5621:  /* avx512f_alignv16si_mask */
    case 3102:  /* fma_fmaddsub_v2df_maskz_1 */
    case 3100:  /* fma_fmaddsub_v4df_maskz_1 */
    case 3096:  /* fma_fmaddsub_v8df_maskz_1 */
    case 3094:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 3092:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 3088:  /* fma_fmaddsub_v16sf_maskz_1 */
    case 3086:  /* fma_fmaddsub_v8hf_maskz_1 */
    case 3084:  /* fma_fmaddsub_v16hf_maskz_1 */
    case 3080:  /* fma_fmaddsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3074:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 3072:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 3070:  /* avx512f_fnmsub_v8df_mask3_round */
    case 3068:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 3066:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 3064:  /* avx512f_fnmsub_v16sf_mask3_round */
    case 3062:  /* avx512fp16_fnmsub_v8hf_mask3_round */
    case 3060:  /* avx512vl_fnmsub_v16hf_mask3_round */
    case 3058:  /* avx512bw_fnmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3073:  /* avx512vl_fnmsub_v2df_mask3 */
    case 3071:  /* avx512vl_fnmsub_v4df_mask3 */
    case 3069:  /* avx512f_fnmsub_v8df_mask3 */
    case 3067:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 3065:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 3063:  /* avx512f_fnmsub_v16sf_mask3 */
    case 3061:  /* avx512fp16_fnmsub_v8hf_mask3 */
    case 3059:  /* avx512vl_fnmsub_v16hf_mask3 */
    case 3057:  /* avx512bw_fnmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3054:  /* avx512f_fnmsub_v8df_mask_round */
    case 3050:  /* avx512f_fnmsub_v16sf_mask_round */
    case 3046:  /* avx512bw_fnmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3056:  /* avx512vl_fnmsub_v2df_mask */
    case 3055:  /* avx512vl_fnmsub_v4df_mask */
    case 3053:  /* avx512f_fnmsub_v8df_mask */
    case 3052:  /* avx512vl_fnmsub_v4sf_mask */
    case 3051:  /* avx512vl_fnmsub_v8sf_mask */
    case 3049:  /* avx512f_fnmsub_v16sf_mask */
    case 3048:  /* avx512fp16_fnmsub_v8hf_mask */
    case 3047:  /* avx512vl_fnmsub_v16hf_mask */
    case 3045:  /* avx512bw_fnmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3040:  /* fma_fnmsub_v8df_maskz_1_round */
    case 3031:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 3021:  /* fma_fnmsub_v32hf_maskz_1_round */
    case 3017:  /* *fma_fnmsub_v4df */
    case 3013:  /* *fma_fnmsub_v8sf */
    case 3009:  /* *fma_fnmsub_v2df */
    case 3005:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3044:  /* fma_fnmsub_v2df_maskz_1 */
    case 3042:  /* fma_fnmsub_v4df_maskz_1 */
    case 3038:  /* fma_fnmsub_v8df_maskz_1 */
    case 3035:  /* fma_fnmsub_v4sf_maskz_1 */
    case 3033:  /* fma_fnmsub_v8sf_maskz_1 */
    case 3029:  /* fma_fnmsub_v16sf_maskz_1 */
    case 3025:  /* fma_fnmsub_v8hf_maskz_1 */
    case 3023:  /* fma_fnmsub_v16hf_maskz_1 */
    case 3019:  /* fma_fnmsub_v32hf_maskz_1 */
    case 3015:  /* *fma_fnmsub_v4df */
    case 3011:  /* *fma_fnmsub_v8sf */
    case 3007:  /* *fma_fnmsub_v2df */
    case 3003:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3039:  /* *fma_fnmsub_v8df_round */
    case 3030:  /* *fma_fnmsub_v16sf_round */
    case 3020:  /* *fma_fnmsub_v32hf_round */
    case 3016:  /* *fma_fnmsub_v4df */
    case 3012:  /* *fma_fnmsub_v8sf */
    case 3008:  /* *fma_fnmsub_v2df */
    case 3004:  /* *fma_fnmsub_v4sf */
    case 3001:  /* *fma_fnmsub_df */
    case 2999:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3043:  /* *fma_fnmsub_v2df */
    case 3041:  /* *fma_fnmsub_v4df */
    case 3037:  /* *fma_fnmsub_v8df */
    case 3036:  /* *fma_fnmsub_df */
    case 3034:  /* *fma_fnmsub_v4sf */
    case 3032:  /* *fma_fnmsub_v8sf */
    case 3028:  /* *fma_fnmsub_v16sf */
    case 3027:  /* *fma_fnmsub_sf */
    case 3026:  /* *fma_fnmsub_hf */
    case 3024:  /* *fma_fnmsub_v8hf */
    case 3022:  /* *fma_fnmsub_v16hf */
    case 3018:  /* *fma_fnmsub_v32hf */
    case 3014:  /* *fma_fnmsub_v4df */
    case 3010:  /* *fma_fnmsub_v8sf */
    case 3006:  /* *fma_fnmsub_v2df */
    case 3002:  /* *fma_fnmsub_v4sf */
    case 3000:  /* *fma_fnmsub_df */
    case 2998:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2995:  /* avx512f_fnmadd_v8df_mask3_round */
    case 2991:  /* avx512f_fnmadd_v16sf_mask3_round */
    case 2987:  /* avx512bw_fnmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2997:  /* avx512vl_fnmadd_v2df_mask3 */
    case 2996:  /* avx512vl_fnmadd_v4df_mask3 */
    case 2994:  /* avx512f_fnmadd_v8df_mask3 */
    case 2993:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 2992:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 2990:  /* avx512f_fnmadd_v16sf_mask3 */
    case 2989:  /* avx512fp16_fnmadd_v8hf_mask3 */
    case 2988:  /* avx512vl_fnmadd_v16hf_mask3 */
    case 2986:  /* avx512bw_fnmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2983:  /* avx512f_fnmadd_v8df_mask_round */
    case 2979:  /* avx512f_fnmadd_v16sf_mask_round */
    case 2975:  /* avx512bw_fnmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2985:  /* avx512vl_fnmadd_v2df_mask */
    case 2984:  /* avx512vl_fnmadd_v4df_mask */
    case 2982:  /* avx512f_fnmadd_v8df_mask */
    case 2981:  /* avx512vl_fnmadd_v4sf_mask */
    case 2980:  /* avx512vl_fnmadd_v8sf_mask */
    case 2978:  /* avx512f_fnmadd_v16sf_mask */
    case 2977:  /* avx512fp16_fnmadd_v8hf_mask */
    case 2976:  /* avx512vl_fnmadd_v16hf_mask */
    case 2974:  /* avx512bw_fnmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2969:  /* fma_fnmadd_v8df_maskz_1_round */
    case 2960:  /* fma_fnmadd_v16sf_maskz_1_round */
    case 2950:  /* fma_fnmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2973:  /* fma_fnmadd_v2df_maskz_1 */
    case 2971:  /* fma_fnmadd_v4df_maskz_1 */
    case 2967:  /* fma_fnmadd_v8df_maskz_1 */
    case 2964:  /* fma_fnmadd_v4sf_maskz_1 */
    case 2962:  /* fma_fnmadd_v8sf_maskz_1 */
    case 2958:  /* fma_fnmadd_v16sf_maskz_1 */
    case 2954:  /* fma_fnmadd_v8hf_maskz_1 */
    case 2952:  /* fma_fnmadd_v16hf_maskz_1 */
    case 2948:  /* fma_fnmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2938:  /* avx512f_fmsub_v8df_mask3_round */
    case 2934:  /* avx512f_fmsub_v16sf_mask3_round */
    case 2930:  /* avx512bw_fmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2940:  /* avx512vl_fmsub_v2df_mask3 */
    case 2939:  /* avx512vl_fmsub_v4df_mask3 */
    case 2937:  /* avx512f_fmsub_v8df_mask3 */
    case 2936:  /* avx512vl_fmsub_v4sf_mask3 */
    case 2935:  /* avx512vl_fmsub_v8sf_mask3 */
    case 2933:  /* avx512f_fmsub_v16sf_mask3 */
    case 2932:  /* avx512fp16_fmsub_v8hf_mask3 */
    case 2931:  /* avx512vl_fmsub_v16hf_mask3 */
    case 2929:  /* avx512bw_fmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2928:  /* avx512vl_fmsub_v2df_mask_round */
    case 2926:  /* avx512vl_fmsub_v4df_mask_round */
    case 2924:  /* avx512f_fmsub_v8df_mask_round */
    case 2922:  /* avx512vl_fmsub_v4sf_mask_round */
    case 2920:  /* avx512vl_fmsub_v8sf_mask_round */
    case 2918:  /* avx512f_fmsub_v16sf_mask_round */
    case 2916:  /* avx512fp16_fmsub_v8hf_mask_round */
    case 2914:  /* avx512vl_fmsub_v16hf_mask_round */
    case 2912:  /* avx512bw_fmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2927:  /* avx512vl_fmsub_v2df_mask */
    case 2925:  /* avx512vl_fmsub_v4df_mask */
    case 2923:  /* avx512f_fmsub_v8df_mask */
    case 2921:  /* avx512vl_fmsub_v4sf_mask */
    case 2919:  /* avx512vl_fmsub_v8sf_mask */
    case 2917:  /* avx512f_fmsub_v16sf_mask */
    case 2915:  /* avx512fp16_fmsub_v8hf_mask */
    case 2913:  /* avx512vl_fmsub_v16hf_mask */
    case 2911:  /* avx512bw_fmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2906:  /* fma_fmsub_v8df_maskz_1_round */
    case 2897:  /* fma_fmsub_v16sf_maskz_1_round */
    case 2887:  /* fma_fmsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2905:  /* *fma_fmsub_v8df_round */
    case 2896:  /* *fma_fmsub_v16sf_round */
    case 2886:  /* *fma_fmsub_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2910:  /* fma_fmsub_v2df_maskz_1 */
    case 2908:  /* fma_fmsub_v4df_maskz_1 */
    case 2904:  /* fma_fmsub_v8df_maskz_1 */
    case 2901:  /* fma_fmsub_v4sf_maskz_1 */
    case 2899:  /* fma_fmsub_v8sf_maskz_1 */
    case 2895:  /* fma_fmsub_v16sf_maskz_1 */
    case 2891:  /* fma_fmsub_v8hf_maskz_1 */
    case 2889:  /* fma_fmsub_v16hf_maskz_1 */
    case 2885:  /* fma_fmsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2909:  /* *fma_fmsub_v2df */
    case 2907:  /* *fma_fmsub_v4df */
    case 2903:  /* *fma_fmsub_v8df */
    case 2902:  /* *fma_fmsub_df */
    case 2900:  /* *fma_fmsub_v4sf */
    case 2898:  /* *fma_fmsub_v8sf */
    case 2894:  /* *fma_fmsub_v16sf */
    case 2893:  /* *fma_fmsub_sf */
    case 2892:  /* *fma_fmsub_hf */
    case 2890:  /* *fma_fmsub_v8hf */
    case 2888:  /* *fma_fmsub_v16hf */
    case 2884:  /* *fma_fmsub_v32hf */
    case 2883:  /* *fma_fmsub_v4df */
    case 2882:  /* *fma_fmsub_v8sf */
    case 2881:  /* *fma_fmsub_v2df */
    case 2880:  /* *fma_fmsub_v4sf */
    case 2879:  /* *fma_fmsub_df */
    case 2878:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 2877:  /* avx512vl_fmadd_v2df_mask3_round */
    case 2875:  /* avx512vl_fmadd_v4df_mask3_round */
    case 2873:  /* avx512f_fmadd_v8df_mask3_round */
    case 2871:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 2869:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 2867:  /* avx512f_fmadd_v16sf_mask3_round */
    case 2865:  /* avx512fp16_fmadd_v8hf_mask3_round */
    case 2863:  /* avx512vl_fmadd_v16hf_mask3_round */
    case 2861:  /* avx512bw_fmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2876:  /* avx512vl_fmadd_v2df_mask3 */
    case 2874:  /* avx512vl_fmadd_v4df_mask3 */
    case 2872:  /* avx512f_fmadd_v8df_mask3 */
    case 2870:  /* avx512vl_fmadd_v4sf_mask3 */
    case 2868:  /* avx512vl_fmadd_v8sf_mask3 */
    case 2866:  /* avx512f_fmadd_v16sf_mask3 */
    case 2864:  /* avx512fp16_fmadd_v8hf_mask3 */
    case 2862:  /* avx512vl_fmadd_v16hf_mask3 */
    case 2860:  /* avx512bw_fmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2857:  /* avx512f_fmadd_v8df_mask_round */
    case 2853:  /* avx512f_fmadd_v16sf_mask_round */
    case 2849:  /* avx512bw_fmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2859:  /* avx512vl_fmadd_v2df_mask */
    case 2858:  /* avx512vl_fmadd_v4df_mask */
    case 2856:  /* avx512f_fmadd_v8df_mask */
    case 2855:  /* avx512vl_fmadd_v4sf_mask */
    case 2854:  /* avx512vl_fmadd_v8sf_mask */
    case 2852:  /* avx512f_fmadd_v16sf_mask */
    case 2851:  /* avx512fp16_fmadd_v8hf_mask */
    case 2850:  /* avx512vl_fmadd_v16hf_mask */
    case 2848:  /* avx512bw_fmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2843:  /* fma_fmadd_v8df_maskz_1_round */
    case 2834:  /* fma_fmadd_v16sf_maskz_1_round */
    case 2824:  /* fma_fmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2842:  /* *fma_fmadd_v8df_round */
    case 2833:  /* *fma_fmadd_v16sf_round */
    case 2823:  /* *fma_fmadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2847:  /* fma_fmadd_v2df_maskz_1 */
    case 2845:  /* fma_fmadd_v4df_maskz_1 */
    case 2841:  /* fma_fmadd_v8df_maskz_1 */
    case 2838:  /* fma_fmadd_v4sf_maskz_1 */
    case 2836:  /* fma_fmadd_v8sf_maskz_1 */
    case 2832:  /* fma_fmadd_v16sf_maskz_1 */
    case 2828:  /* fma_fmadd_v8hf_maskz_1 */
    case 2826:  /* fma_fmadd_v16hf_maskz_1 */
    case 2822:  /* fma_fmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7977:  /* vec_set_hi_v8sf_mask */
    case 7975:  /* vec_set_hi_v8si_mask */
    case 7969:  /* vec_set_hi_v4df_mask */
    case 7967:  /* vec_set_hi_v4di_mask */
    case 6941:  /* vec_set_hi_v8di_mask */
    case 6939:  /* vec_set_hi_v8df_mask */
    case 6933:  /* vec_set_hi_v16si_mask */
    case 6931:  /* vec_set_hi_v16sf_mask */
    case 6532:  /* *andnotv2di3_mask */
    case 6531:  /* *andnotv4di3_mask */
    case 6530:  /* *andnotv8di3_mask */
    case 6529:  /* *andnotv4si3_mask */
    case 6528:  /* *andnotv8si3_mask */
    case 6527:  /* *andnotv16si3_mask */
    case 2739:  /* avx512f_andnotv8df3_mask */
    case 2737:  /* avx512f_andnotv16sf3_mask */
    case 2734:  /* sse2_andnotv2df3_mask */
    case 2732:  /* avx_andnotv4df3_mask */
    case 2730:  /* sse_andnotv4sf3_mask */
    case 2728:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2724:  /* sse2_ucomi_round */
    case 2720:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2723:  /* sse2_ucomi */
    case 2719:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 2722:  /* sse2_comi_round */
    case 2718:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2721:  /* sse2_comi */
    case 2717:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2716:  /* avx512f_vmcmpv2df3_mask_round */
    case 2714:  /* avx512f_vmcmpv4sf3_mask_round */
    case 2712:  /* avx512f_vmcmpv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2715:  /* avx512f_vmcmpv2df3_mask */
    case 2713:  /* avx512f_vmcmpv4sf3_mask */
    case 2711:  /* avx512f_vmcmpv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2710:  /* avx512f_vmcmpv2df3_round */
    case 2708:  /* avx512f_vmcmpv4sf3_round */
    case 2706:  /* avx512f_vmcmpv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2704:  /* *avx512vl_ucmpv8hi3_1 */
    case 2703:  /* *avx512vl_ucmpv8hi3_1 */
    case 2702:  /* *avx512vl_ucmpv16hi3_1 */
    case 2701:  /* *avx512vl_ucmpv16hi3_1 */
    case 2700:  /* *avx512bw_ucmpv32hi3_1 */
    case 2699:  /* *avx512bw_ucmpv32hi3_1 */
    case 2698:  /* *avx512vl_ucmpv32qi3_1 */
    case 2697:  /* *avx512vl_ucmpv32qi3_1 */
    case 2696:  /* *avx512vl_ucmpv16qi3_1 */
    case 2695:  /* *avx512vl_ucmpv16qi3_1 */
    case 2694:  /* *avx512bw_ucmpv64qi3_1 */
    case 2693:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 8812:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 8810:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 8808:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 8472:  /* avx512dq_fpclassv2df_mask */
    case 8470:  /* avx512dq_fpclassv4df_mask */
    case 8468:  /* avx512dq_fpclassv8df_mask */
    case 8466:  /* avx512dq_fpclassv4sf_mask */
    case 8464:  /* avx512dq_fpclassv8sf_mask */
    case 8462:  /* avx512dq_fpclassv16sf_mask */
    case 8460:  /* avx512dq_fpclassv8hf_mask */
    case 8458:  /* avx512dq_fpclassv16hf_mask */
    case 8456:  /* avx512dq_fpclassv32hf_mask */
    case 8130:  /* *vcvtps2ph */
    case 6685:  /* avx512vl_testnmv2di3_mask */
    case 6683:  /* avx512vl_testnmv4di3_mask */
    case 6681:  /* avx512f_testnmv8di3_mask */
    case 6679:  /* avx512vl_testnmv4si3_mask */
    case 6677:  /* avx512vl_testnmv8si3_mask */
    case 6675:  /* avx512f_testnmv16si3_mask */
    case 6673:  /* avx512vl_testnmv8hi3_mask */
    case 6671:  /* avx512vl_testnmv16hi3_mask */
    case 6669:  /* avx512bw_testnmv32hi3_mask */
    case 6667:  /* avx512vl_testnmv16qi3_mask */
    case 6665:  /* avx512vl_testnmv32qi3_mask */
    case 6663:  /* avx512bw_testnmv64qi3_mask */
    case 6661:  /* avx512vl_testmv2di3_mask */
    case 6659:  /* avx512vl_testmv4di3_mask */
    case 6657:  /* avx512f_testmv8di3_mask */
    case 6655:  /* avx512vl_testmv4si3_mask */
    case 6653:  /* avx512vl_testmv8si3_mask */
    case 6651:  /* avx512f_testmv16si3_mask */
    case 6649:  /* avx512vl_testmv8hi3_mask */
    case 6647:  /* avx512vl_testmv16hi3_mask */
    case 6645:  /* avx512bw_testmv32hi3_mask */
    case 6643:  /* avx512vl_testmv16qi3_mask */
    case 6641:  /* avx512vl_testmv32qi3_mask */
    case 6639:  /* avx512bw_testmv64qi3_mask */
    case 3328:  /* fma_v8hf_fadd_fcmul */
    case 3327:  /* fma_v16hf_fadd_fcmul */
    case 3326:  /* fma_v32hf_fadd_fcmul */
    case 3325:  /* fma_v8hf_fadd_fmul */
    case 3324:  /* fma_v16hf_fadd_fmul */
    case 3323:  /* fma_v32hf_fadd_fmul */
    case 2638:  /* *avx512vl_eqv2di3_mask_1 */
    case 2636:  /* *avx512vl_eqv2di3_mask_1 */
    case 2634:  /* *avx512vl_eqv4di3_mask_1 */
    case 2632:  /* *avx512vl_eqv4di3_mask_1 */
    case 2630:  /* *avx512f_eqv8di3_mask_1 */
    case 2628:  /* *avx512f_eqv8di3_mask_1 */
    case 2626:  /* *avx512vl_eqv4si3_mask_1 */
    case 2624:  /* *avx512vl_eqv4si3_mask_1 */
    case 2622:  /* *avx512vl_eqv8si3_mask_1 */
    case 2620:  /* *avx512vl_eqv8si3_mask_1 */
    case 2618:  /* *avx512f_eqv16si3_mask_1 */
    case 2616:  /* *avx512f_eqv16si3_mask_1 */
    case 2566:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2564:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2562:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2560:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2558:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2556:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2554:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2552:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2550:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2548:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2546:  /* *avx512bw_eqv64qi3_mask_1 */
    case 2544:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2686:  /* *avx512vl_ucmpv2di3_zero_extenddi_2 */
    case 2685:  /* *avx512vl_ucmpv2di3_zero_extendsi_2 */
    case 2684:  /* *avx512vl_ucmpv2di3_zero_extendhi_2 */
    case 2683:  /* *avx512vl_ucmpv4di3_zero_extenddi_2 */
    case 2682:  /* *avx512vl_ucmpv4di3_zero_extendsi_2 */
    case 2681:  /* *avx512vl_ucmpv4di3_zero_extendhi_2 */
    case 2680:  /* *avx512f_ucmpv8di3_zero_extenddi_2 */
    case 2679:  /* *avx512f_ucmpv8di3_zero_extendsi_2 */
    case 2678:  /* *avx512f_ucmpv8di3_zero_extendhi_2 */
    case 2677:  /* *avx512vl_ucmpv4si3_zero_extenddi_2 */
    case 2676:  /* *avx512vl_ucmpv4si3_zero_extendsi_2 */
    case 2675:  /* *avx512vl_ucmpv4si3_zero_extendhi_2 */
    case 2674:  /* *avx512vl_ucmpv8si3_zero_extenddi_2 */
    case 2673:  /* *avx512vl_ucmpv8si3_zero_extendsi_2 */
    case 2672:  /* *avx512vl_ucmpv8si3_zero_extendhi_2 */
    case 2671:  /* *avx512f_ucmpv16si3_zero_extenddi_2 */
    case 2670:  /* *avx512f_ucmpv16si3_zero_extendsi_2 */
    case 2669:  /* *avx512f_ucmpv16si3_zero_extendhi_2 */
    case 2614:  /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */
    case 2613:  /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */
    case 2612:  /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */
    case 2611:  /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */
    case 2610:  /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */
    case 2609:  /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */
    case 2608:  /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */
    case 2607:  /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */
    case 2606:  /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */
    case 2605:  /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */
    case 2604:  /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */
    case 2603:  /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */
    case 2602:  /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */
    case 2601:  /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */
    case 2600:  /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */
    case 2599:  /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */
    case 2598:  /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */
    case 2597:  /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */
    case 2530:  /* *avx512vl_cmpv8hi3_zero_extenddi_2 */
    case 2529:  /* *avx512vl_cmpv8hi3_zero_extendsi_2 */
    case 2528:  /* *avx512vl_cmpv8hi3_zero_extendhi_2 */
    case 2527:  /* *avx512vl_cmpv16hi3_zero_extenddi_2 */
    case 2526:  /* *avx512vl_cmpv16hi3_zero_extendsi_2 */
    case 2525:  /* *avx512vl_cmpv16hi3_zero_extendhi_2 */
    case 2524:  /* *avx512bw_cmpv32hi3_zero_extenddi_2 */
    case 2523:  /* *avx512bw_cmpv32hi3_zero_extendsi_2 */
    case 2522:  /* *avx512bw_cmpv32hi3_zero_extendhi_2 */
    case 2521:  /* *avx512vl_cmpv32qi3_zero_extenddi_2 */
    case 2520:  /* *avx512vl_cmpv32qi3_zero_extendsi_2 */
    case 2519:  /* *avx512vl_cmpv32qi3_zero_extendhi_2 */
    case 2518:  /* *avx512vl_cmpv16qi3_zero_extenddi_2 */
    case 2517:  /* *avx512vl_cmpv16qi3_zero_extendsi_2 */
    case 2516:  /* *avx512vl_cmpv16qi3_zero_extendhi_2 */
    case 2515:  /* *avx512bw_cmpv64qi3_zero_extenddi_2 */
    case 2514:  /* *avx512bw_cmpv64qi3_zero_extendsi_2 */
    case 2513:  /* *avx512bw_cmpv64qi3_zero_extendhi_2 */
    case 2467:  /* *avx512vl_cmpv2df3_zero_extenddi_2 */
    case 2466:  /* *avx512vl_cmpv2df3_zero_extendsi_2 */
    case 2465:  /* *avx512vl_cmpv2df3_zero_extendhi_2 */
    case 2464:  /* *avx512vl_cmpv4df3_zero_extenddi_2 */
    case 2463:  /* *avx512vl_cmpv4df3_zero_extendsi_2 */
    case 2462:  /* *avx512vl_cmpv4df3_zero_extendhi_2 */
    case 2461:  /* *avx512f_cmpv8df3_zero_extenddi_2 */
    case 2460:  /* *avx512f_cmpv8df3_zero_extendsi_2 */
    case 2459:  /* *avx512f_cmpv8df3_zero_extendhi_2 */
    case 2458:  /* *avx512vl_cmpv4sf3_zero_extenddi_2 */
    case 2457:  /* *avx512vl_cmpv4sf3_zero_extendsi_2 */
    case 2456:  /* *avx512vl_cmpv4sf3_zero_extendhi_2 */
    case 2455:  /* *avx512vl_cmpv8sf3_zero_extenddi_2 */
    case 2454:  /* *avx512vl_cmpv8sf3_zero_extendsi_2 */
    case 2453:  /* *avx512vl_cmpv8sf3_zero_extendhi_2 */
    case 2452:  /* *avx512f_cmpv16sf3_zero_extenddi_2 */
    case 2451:  /* *avx512f_cmpv16sf3_zero_extendsi_2 */
    case 2450:  /* *avx512f_cmpv16sf3_zero_extendhi_2 */
    case 2449:  /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */
    case 2448:  /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */
    case 2447:  /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */
    case 2446:  /* *avx512vl_cmpv16hf3_zero_extenddi_2 */
    case 2445:  /* *avx512vl_cmpv16hf3_zero_extendsi_2 */
    case 2444:  /* *avx512vl_cmpv16hf3_zero_extendhi_2 */
    case 2443:  /* *avx512bw_cmpv32hf3_zero_extenddi_2 */
    case 2442:  /* *avx512bw_cmpv32hf3_zero_extendsi_2 */
    case 2441:  /* *avx512bw_cmpv32hf3_zero_extendhi_2 */
    case 2440:  /* *avx512vl_cmpv2di3_zero_extenddi_2 */
    case 2439:  /* *avx512vl_cmpv2di3_zero_extendsi_2 */
    case 2438:  /* *avx512vl_cmpv2di3_zero_extendhi_2 */
    case 2437:  /* *avx512vl_cmpv4di3_zero_extenddi_2 */
    case 2436:  /* *avx512vl_cmpv4di3_zero_extendsi_2 */
    case 2435:  /* *avx512vl_cmpv4di3_zero_extendhi_2 */
    case 2434:  /* *avx512f_cmpv8di3_zero_extenddi_2 */
    case 2433:  /* *avx512f_cmpv8di3_zero_extendsi_2 */
    case 2432:  /* *avx512f_cmpv8di3_zero_extendhi_2 */
    case 2431:  /* *avx512vl_cmpv4si3_zero_extenddi_2 */
    case 2430:  /* *avx512vl_cmpv4si3_zero_extendsi_2 */
    case 2429:  /* *avx512vl_cmpv4si3_zero_extendhi_2 */
    case 2428:  /* *avx512vl_cmpv8si3_zero_extenddi_2 */
    case 2427:  /* *avx512vl_cmpv8si3_zero_extendsi_2 */
    case 2426:  /* *avx512vl_cmpv8si3_zero_extendhi_2 */
    case 2425:  /* *avx512f_cmpv16si3_zero_extenddi_2 */
    case 2424:  /* *avx512f_cmpv16si3_zero_extendsi_2 */
    case 2423:  /* *avx512f_cmpv16si3_zero_extendhi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2709:  /* avx512f_vmcmpv2df3 */
    case 2707:  /* avx512f_vmcmpv4sf3 */
    case 2705:  /* avx512f_vmcmpv8hf3 */
    case 2692:  /* *avx512vl_ucmpv2di3 */
    case 2691:  /* *avx512vl_ucmpv4di3 */
    case 2690:  /* *avx512f_ucmpv8di3 */
    case 2689:  /* *avx512vl_ucmpv4si3 */
    case 2688:  /* *avx512vl_ucmpv8si3 */
    case 2687:  /* *avx512f_ucmpv16si3 */
    case 2668:  /* *avx512vl_ucmpv2di3_zero_extenddi */
    case 2667:  /* *avx512vl_ucmpv2di3_zero_extendsi */
    case 2666:  /* *avx512vl_ucmpv2di3_zero_extendhi */
    case 2665:  /* *avx512vl_ucmpv4di3_zero_extenddi */
    case 2664:  /* *avx512vl_ucmpv4di3_zero_extendsi */
    case 2663:  /* *avx512vl_ucmpv4di3_zero_extendhi */
    case 2662:  /* *avx512f_ucmpv8di3_zero_extenddi */
    case 2661:  /* *avx512f_ucmpv8di3_zero_extendsi */
    case 2660:  /* *avx512f_ucmpv8di3_zero_extendhi */
    case 2659:  /* *avx512vl_ucmpv4si3_zero_extenddi */
    case 2658:  /* *avx512vl_ucmpv4si3_zero_extendsi */
    case 2657:  /* *avx512vl_ucmpv4si3_zero_extendhi */
    case 2656:  /* *avx512vl_ucmpv8si3_zero_extenddi */
    case 2655:  /* *avx512vl_ucmpv8si3_zero_extendsi */
    case 2654:  /* *avx512vl_ucmpv8si3_zero_extendhi */
    case 2653:  /* *avx512f_ucmpv16si3_zero_extenddi */
    case 2652:  /* *avx512f_ucmpv16si3_zero_extendsi */
    case 2651:  /* *avx512f_ucmpv16si3_zero_extendhi */
    case 2596:  /* *avx512vl_ucmpv8hi3_zero_extenddi */
    case 2595:  /* *avx512vl_ucmpv8hi3_zero_extendsi */
    case 2594:  /* *avx512vl_ucmpv8hi3_zero_extendhi */
    case 2593:  /* *avx512vl_ucmpv16hi3_zero_extenddi */
    case 2592:  /* *avx512vl_ucmpv16hi3_zero_extendsi */
    case 2591:  /* *avx512vl_ucmpv16hi3_zero_extendhi */
    case 2590:  /* *avx512bw_ucmpv32hi3_zero_extenddi */
    case 2589:  /* *avx512bw_ucmpv32hi3_zero_extendsi */
    case 2588:  /* *avx512bw_ucmpv32hi3_zero_extendhi */
    case 2587:  /* *avx512vl_ucmpv32qi3_zero_extenddi */
    case 2586:  /* *avx512vl_ucmpv32qi3_zero_extendsi */
    case 2585:  /* *avx512vl_ucmpv32qi3_zero_extendhi */
    case 2584:  /* *avx512vl_ucmpv16qi3_zero_extenddi */
    case 2583:  /* *avx512vl_ucmpv16qi3_zero_extendsi */
    case 2582:  /* *avx512vl_ucmpv16qi3_zero_extendhi */
    case 2581:  /* *avx512bw_ucmpv64qi3_zero_extenddi */
    case 2580:  /* *avx512bw_ucmpv64qi3_zero_extendsi */
    case 2579:  /* *avx512bw_ucmpv64qi3_zero_extendhi */
    case 2542:  /* *avx512vl_cmpv8hi3 */
    case 2541:  /* *avx512vl_cmpv8hi3 */
    case 2540:  /* *avx512vl_cmpv16hi3 */
    case 2539:  /* *avx512vl_cmpv16hi3 */
    case 2538:  /* *avx512bw_cmpv32hi3 */
    case 2537:  /* *avx512bw_cmpv32hi3 */
    case 2536:  /* *avx512vl_cmpv32qi3 */
    case 2535:  /* *avx512vl_cmpv32qi3 */
    case 2534:  /* *avx512vl_cmpv16qi3 */
    case 2533:  /* *avx512vl_cmpv16qi3 */
    case 2532:  /* *avx512bw_cmpv64qi3 */
    case 2531:  /* *avx512bw_cmpv64qi3 */
    case 2512:  /* *avx512vl_cmpv8hi3_zero_extenddi */
    case 2511:  /* *avx512vl_cmpv8hi3_zero_extendsi */
    case 2510:  /* *avx512vl_cmpv8hi3_zero_extendhi */
    case 2509:  /* *avx512vl_cmpv16hi3_zero_extenddi */
    case 2508:  /* *avx512vl_cmpv16hi3_zero_extendsi */
    case 2507:  /* *avx512vl_cmpv16hi3_zero_extendhi */
    case 2506:  /* *avx512bw_cmpv32hi3_zero_extenddi */
    case 2505:  /* *avx512bw_cmpv32hi3_zero_extendsi */
    case 2504:  /* *avx512bw_cmpv32hi3_zero_extendhi */
    case 2503:  /* *avx512vl_cmpv32qi3_zero_extenddi */
    case 2502:  /* *avx512vl_cmpv32qi3_zero_extendsi */
    case 2501:  /* *avx512vl_cmpv32qi3_zero_extendhi */
    case 2500:  /* *avx512vl_cmpv16qi3_zero_extenddi */
    case 2499:  /* *avx512vl_cmpv16qi3_zero_extendsi */
    case 2498:  /* *avx512vl_cmpv16qi3_zero_extendhi */
    case 2497:  /* *avx512bw_cmpv64qi3_zero_extenddi */
    case 2496:  /* *avx512bw_cmpv64qi3_zero_extendsi */
    case 2495:  /* *avx512bw_cmpv64qi3_zero_extendhi */
    case 2482:  /* *avx512vl_cmpv2df3 */
    case 2481:  /* *avx512vl_cmpv4df3 */
    case 2480:  /* *avx512f_cmpv8df3 */
    case 2479:  /* *avx512vl_cmpv4sf3 */
    case 2478:  /* *avx512vl_cmpv8sf3 */
    case 2477:  /* *avx512f_cmpv16sf3 */
    case 2476:  /* *avx512fp16_cmpv8hf3 */
    case 2475:  /* *avx512vl_cmpv16hf3 */
    case 2474:  /* *avx512bw_cmpv32hf3 */
    case 2473:  /* *avx512vl_cmpv2di3 */
    case 2472:  /* *avx512vl_cmpv4di3 */
    case 2471:  /* *avx512f_cmpv8di3 */
    case 2470:  /* *avx512vl_cmpv4si3 */
    case 2469:  /* *avx512vl_cmpv8si3 */
    case 2468:  /* *avx512f_cmpv16si3 */
    case 2422:  /* *avx512vl_cmpv2df3_zero_extenddi */
    case 2421:  /* *avx512vl_cmpv2df3_zero_extendsi */
    case 2420:  /* *avx512vl_cmpv2df3_zero_extendhi */
    case 2419:  /* *avx512vl_cmpv4df3_zero_extenddi */
    case 2418:  /* *avx512vl_cmpv4df3_zero_extendsi */
    case 2417:  /* *avx512vl_cmpv4df3_zero_extendhi */
    case 2416:  /* *avx512f_cmpv8df3_zero_extenddi */
    case 2415:  /* *avx512f_cmpv8df3_zero_extendsi */
    case 2414:  /* *avx512f_cmpv8df3_zero_extendhi */
    case 2413:  /* *avx512vl_cmpv4sf3_zero_extenddi */
    case 2412:  /* *avx512vl_cmpv4sf3_zero_extendsi */
    case 2411:  /* *avx512vl_cmpv4sf3_zero_extendhi */
    case 2410:  /* *avx512vl_cmpv8sf3_zero_extenddi */
    case 2409:  /* *avx512vl_cmpv8sf3_zero_extendsi */
    case 2408:  /* *avx512vl_cmpv8sf3_zero_extendhi */
    case 2407:  /* *avx512f_cmpv16sf3_zero_extenddi */
    case 2406:  /* *avx512f_cmpv16sf3_zero_extendsi */
    case 2405:  /* *avx512f_cmpv16sf3_zero_extendhi */
    case 2404:  /* *avx512fp16_cmpv8hf3_zero_extenddi */
    case 2403:  /* *avx512fp16_cmpv8hf3_zero_extendsi */
    case 2402:  /* *avx512fp16_cmpv8hf3_zero_extendhi */
    case 2401:  /* *avx512vl_cmpv16hf3_zero_extenddi */
    case 2400:  /* *avx512vl_cmpv16hf3_zero_extendsi */
    case 2399:  /* *avx512vl_cmpv16hf3_zero_extendhi */
    case 2398:  /* *avx512bw_cmpv32hf3_zero_extenddi */
    case 2397:  /* *avx512bw_cmpv32hf3_zero_extendsi */
    case 2396:  /* *avx512bw_cmpv32hf3_zero_extendhi */
    case 2395:  /* *avx512vl_cmpv2di3_zero_extenddi */
    case 2394:  /* *avx512vl_cmpv2di3_zero_extendsi */
    case 2393:  /* *avx512vl_cmpv2di3_zero_extendhi */
    case 2392:  /* *avx512vl_cmpv4di3_zero_extenddi */
    case 2391:  /* *avx512vl_cmpv4di3_zero_extendsi */
    case 2390:  /* *avx512vl_cmpv4di3_zero_extendhi */
    case 2389:  /* *avx512f_cmpv8di3_zero_extenddi */
    case 2388:  /* *avx512f_cmpv8di3_zero_extendsi */
    case 2387:  /* *avx512f_cmpv8di3_zero_extendhi */
    case 2386:  /* *avx512vl_cmpv4si3_zero_extenddi */
    case 2385:  /* *avx512vl_cmpv4si3_zero_extendsi */
    case 2384:  /* *avx512vl_cmpv4si3_zero_extendhi */
    case 2383:  /* *avx512vl_cmpv8si3_zero_extenddi */
    case 2382:  /* *avx512vl_cmpv8si3_zero_extendsi */
    case 2381:  /* *avx512vl_cmpv8si3_zero_extendhi */
    case 2380:  /* *avx512f_cmpv16si3_zero_extenddi */
    case 2379:  /* *avx512f_cmpv16si3_zero_extendsi */
    case 2378:  /* *avx512f_cmpv16si3_zero_extendhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 2373:  /* avx512f_cmpv8df3_mask_round */
    case 2365:  /* avx512f_cmpv16sf3_mask_round */
    case 2357:  /* avx512bw_cmpv32hf3_mask_round */
    case 2349:  /* avx512f_cmpv8di3_mask_round */
    case 2341:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3334:  /* fma_fcmaddc_v8hf_fma_zero */
    case 3333:  /* fma_fmaddc_v8hf_fma_zero */
    case 3332:  /* fma_fcmaddc_v16hf_fma_zero */
    case 3331:  /* fma_fmaddc_v16hf_fma_zero */
    case 3330:  /* fma_fcmaddc_v32hf_fma_zero */
    case 3329:  /* fma_fmaddc_v32hf_fma_zero */
    case 2650:  /* avx512vl_ucmpv2di3_mask */
    case 2648:  /* avx512vl_ucmpv4di3_mask */
    case 2646:  /* avx512f_ucmpv8di3_mask */
    case 2644:  /* avx512vl_ucmpv4si3_mask */
    case 2642:  /* avx512vl_ucmpv8si3_mask */
    case 2640:  /* avx512f_ucmpv16si3_mask */
    case 2578:  /* avx512vl_ucmpv8hi3_mask */
    case 2576:  /* avx512vl_ucmpv16hi3_mask */
    case 2574:  /* avx512bw_ucmpv32hi3_mask */
    case 2572:  /* avx512vl_ucmpv32qi3_mask */
    case 2570:  /* avx512vl_ucmpv16qi3_mask */
    case 2568:  /* avx512bw_ucmpv64qi3_mask */
    case 2494:  /* avx512vl_cmpv8hi3_mask */
    case 2492:  /* avx512vl_cmpv16hi3_mask */
    case 2490:  /* avx512bw_cmpv32hi3_mask */
    case 2488:  /* avx512vl_cmpv32qi3_mask */
    case 2486:  /* avx512vl_cmpv16qi3_mask */
    case 2484:  /* avx512bw_cmpv64qi3_mask */
    case 2377:  /* avx512vl_cmpv2df3_mask */
    case 2375:  /* avx512vl_cmpv4df3_mask */
    case 2372:  /* avx512f_cmpv8df3_mask */
    case 2369:  /* avx512vl_cmpv4sf3_mask */
    case 2367:  /* avx512vl_cmpv8sf3_mask */
    case 2364:  /* avx512f_cmpv16sf3_mask */
    case 2361:  /* avx512fp16_cmpv8hf3_mask */
    case 2359:  /* avx512vl_cmpv16hf3_mask */
    case 2356:  /* avx512bw_cmpv32hf3_mask */
    case 2353:  /* avx512vl_cmpv2di3_mask */
    case 2351:  /* avx512vl_cmpv4di3_mask */
    case 2348:  /* avx512f_cmpv8di3_mask */
    case 2345:  /* avx512vl_cmpv4si3_mask */
    case 2343:  /* avx512vl_cmpv8si3_mask */
    case 2340:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8440:  /* avx512dq_rangepv8df_round */
    case 8432:  /* avx512dq_rangepv16sf_round */
    case 3312:  /* fma_fcmaddc_v32hf_round */
    case 3308:  /* fma_fmaddc_v32hf_round */
    case 3097:  /* *fma_fmaddsub_v8df_round */
    case 3089:  /* *fma_fmaddsub_v16sf_round */
    case 3081:  /* *fma_fmaddsub_v32hf_round */
    case 2371:  /* avx512f_cmpv8df3_round */
    case 2363:  /* avx512f_cmpv16sf3_round */
    case 2355:  /* avx512bw_cmpv32hf3_round */
    case 2347:  /* avx512f_cmpv8di3_round */
    case 2339:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2337:  /* sse2_vmmaskcmpv2df3 */
    case 2336:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6470:  /* *avx2_pcmpv16qi3_4 */
    case 6469:  /* *avx2_pcmpv32qi3_4 */
    case 2325:  /* *avx_cmpv4di3_ltint_not */
    case 2324:  /* *avx_cmpv8si3_ltint_not */
    case 2323:  /* *avx_cmpv2di3_ltint_not */
    case 2322:  /* *avx_cmpv4si3_ltint_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6466:  /* *avx2_pcmpv4di3_2 */
    case 6465:  /* *avx2_pcmpv8si3_2 */
    case 6464:  /* *avx2_pcmpv16hi3_2 */
    case 6463:  /* *avx2_pcmpv32qi3_2 */
    case 6462:  /* *avx2_pcmpv2di3_2 */
    case 6461:  /* *avx2_pcmpv4si3_2 */
    case 6460:  /* *avx2_pcmpv8hi3_2 */
    case 6459:  /* *avx2_pcmpv16qi3_2 */
    case 2313:  /* *avx_cmpv2df3_4 */
    case 2312:  /* *avx_cmpv4df3_4 */
    case 2311:  /* *avx_cmpv4sf3_4 */
    case 2310:  /* *avx_cmpv8sf3_4 */
    case 2305:  /* *avx_cmpv2df3_2 */
    case 2304:  /* *avx_cmpv4df3_2 */
    case 2303:  /* *avx_cmpv4sf3_2 */
    case 2302:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 6468:  /* *avx2_pcmpv16qi3_3 */
    case 6467:  /* *avx2_pcmpv32qi3_3 */
    case 6458:  /* *avx2_pcmpv4di3_1 */
    case 6457:  /* *avx2_pcmpv8si3_1 */
    case 6456:  /* *avx2_pcmpv16hi3_1 */
    case 6455:  /* *avx2_pcmpv32qi3_1 */
    case 6454:  /* *avx2_pcmpv2di3_1 */
    case 6453:  /* *avx2_pcmpv4si3_1 */
    case 6452:  /* *avx2_pcmpv8hi3_1 */
    case 6451:  /* *avx2_pcmpv16qi3_1 */
    case 2321:  /* *avx_cmpv4di3_ltint */
    case 2320:  /* *avx_cmpv8si3_ltint */
    case 2319:  /* *avx_cmpv2di3_ltint */
    case 2318:  /* *avx_cmpv4si3_ltint */
    case 2317:  /* *avx_cmpv2df3_lt */
    case 2316:  /* *avx_cmpv4df3_lt */
    case 2315:  /* *avx_cmpv4sf3_lt */
    case 2314:  /* *avx_cmpv8sf3_lt */
    case 2309:  /* *avx_cmpv2df3_3 */
    case 2308:  /* *avx_cmpv4df3_3 */
    case 2307:  /* *avx_cmpv4sf3_3 */
    case 2306:  /* *avx_cmpv8sf3_3 */
    case 2301:  /* *avx_cmpv2df3_1 */
    case 2300:  /* *avx_cmpv4df3_1 */
    case 2299:  /* *avx_cmpv4sf3_1 */
    case 2298:  /* *avx_cmpv8sf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 8526:  /* avx512f_vgetmantv2df_mask_round */
    case 8522:  /* avx512f_vgetmantv4sf_mask_round */
    case 8518:  /* avx512f_vgetmantv8hf_mask_round */
    case 8454:  /* avx512dq_rangesv2df_mask_round */
    case 8450:  /* avx512dq_rangesv4sf_mask_round */
    case 2293:  /* reducesv2df_mask_round */
    case 2289:  /* reducesv4sf_mask_round */
    case 2285:  /* reducesv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8525:  /* avx512f_vgetmantv2df_round */
    case 8521:  /* avx512f_vgetmantv4sf_round */
    case 8517:  /* avx512f_vgetmantv8hf_round */
    case 8453:  /* avx512dq_rangesv2df_round */
    case 8449:  /* avx512dq_rangesv4sf_round */
    case 2292:  /* reducesv2df_round */
    case 2288:  /* reducesv4sf_round */
    case 2284:  /* reducesv8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8524:  /* avx512f_vgetmantv2df_mask */
    case 8520:  /* avx512f_vgetmantv4sf_mask */
    case 8516:  /* avx512f_vgetmantv8hf_mask */
    case 8452:  /* avx512dq_rangesv2df_mask */
    case 8448:  /* avx512dq_rangesv4sf_mask */
    case 2291:  /* reducesv2df_mask */
    case 2287:  /* reducesv4sf_mask */
    case 2283:  /* reducesv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8523:  /* avx512f_vgetmantv2df */
    case 8519:  /* avx512f_vgetmantv4sf */
    case 8515:  /* avx512f_vgetmantv8hf */
    case 8451:  /* avx512dq_rangesv2df */
    case 8447:  /* avx512dq_rangesv4sf */
    case 2327:  /* avx_vmcmpv2df3 */
    case 2326:  /* avx_vmcmpv4sf3 */
    case 2290:  /* reducesv2df */
    case 2286:  /* reducesv4sf */
    case 2282:  /* reducesv8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2245:  /* sse3_hsubv4sf3 */
    case 2244:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2243:  /* avx_hsubv8sf3 */
    case 2242:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 2241:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2240:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2237:  /* avx_hsubv4df3 */
    case 2236:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2235:  /* vec_addsubv2df3 */
    case 2234:  /* vec_addsubv4df3 */
    case 2233:  /* vec_addsubv4sf3 */
    case 2232:  /* vec_addsubv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 2207:  /* *ieee_minv2df3 */
    case 2206:  /* *ieee_maxv2df3 */
    case 2205:  /* *ieee_minv4sf3 */
    case 2204:  /* *ieee_maxv4sf3 */
    case 2203:  /* *ieee_minv8hf3 */
    case 2202:  /* *ieee_maxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8514:  /* avx512vl_getmantv2df_mask_round */
    case 8510:  /* avx512vl_getmantv4df_mask_round */
    case 8506:  /* avx512f_getmantv8df_mask_round */
    case 8502:  /* avx512vl_getmantv4sf_mask_round */
    case 8498:  /* avx512vl_getmantv8sf_mask_round */
    case 8494:  /* avx512f_getmantv16sf_mask_round */
    case 8490:  /* avx512fp16_getmantv8hf_mask_round */
    case 8486:  /* avx512vl_getmantv16hf_mask_round */
    case 8482:  /* avx512bw_getmantv32hf_mask_round */
    case 8140:  /* avx512f_vcvtps2ph512_mask_round */
    case 5723:  /* avx512vl_rndscalev2df_mask_round */
    case 5719:  /* avx512vl_rndscalev4df_mask_round */
    case 5715:  /* avx512f_rndscalev8df_mask_round */
    case 5711:  /* avx512vl_rndscalev4sf_mask_round */
    case 5707:  /* avx512vl_rndscalev8sf_mask_round */
    case 5703:  /* avx512f_rndscalev16sf_mask_round */
    case 5699:  /* avx512fp16_rndscalev8hf_mask_round */
    case 5695:  /* avx512vl_rndscalev16hf_mask_round */
    case 5691:  /* avx512bw_rndscalev32hf_mask_round */
    case 4209:  /* avx512vl_scalefv2df_mask_round */
    case 4205:  /* avx512vl_scalefv4df_mask_round */
    case 4201:  /* avx512f_scalefv8df_mask_round */
    case 4197:  /* avx512vl_scalefv4sf_mask_round */
    case 4193:  /* avx512vl_scalefv8sf_mask_round */
    case 4189:  /* avx512f_scalefv16sf_mask_round */
    case 4185:  /* avx512fp16_scalefv8hf_mask_round */
    case 4181:  /* avx512vl_scalefv16hf_mask_round */
    case 4177:  /* avx512bw_scalefv32hf_mask_round */
    case 2281:  /* reducepv2df_mask_round */
    case 2277:  /* reducepv4df_mask_round */
    case 2273:  /* reducepv8df_mask_round */
    case 2269:  /* reducepv4sf_mask_round */
    case 2265:  /* reducepv8sf_mask_round */
    case 2261:  /* reducepv16sf_mask_round */
    case 2257:  /* reducepv8hf_mask_round */
    case 2253:  /* reducepv16hf_mask_round */
    case 2249:  /* reducepv32hf_mask_round */
    case 2193:  /* ieee_minv8df3_mask_round */
    case 2189:  /* ieee_maxv8df3_mask_round */
    case 2177:  /* ieee_minv16sf3_mask_round */
    case 2173:  /* ieee_maxv16sf3_mask_round */
    case 2161:  /* ieee_minv32hf3_mask_round */
    case 2157:  /* ieee_maxv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8665:  /* vgf2p8mulb_v16qi_mask */
    case 8663:  /* vgf2p8mulb_v32qi_mask */
    case 8661:  /* vgf2p8mulb_v64qi_mask */
    case 8622:  /* avx5124vnniw_vp4dpwssds_mask */
    case 8619:  /* avx5124vnniw_vp4dpwssd_mask */
    case 8616:  /* avx5124fmaddps_4fnmaddss_mask */
    case 8613:  /* avx5124fmaddps_4fnmaddps_mask */
    case 8610:  /* avx5124fmaddps_4fmaddss_mask */
    case 8607:  /* avx5124fmaddps_4fmaddps_mask */
    case 8603:  /* vpmultishiftqbv32qi_mask */
    case 8601:  /* vpmultishiftqbv16qi_mask */
    case 8599:  /* vpmultishiftqbv64qi_mask */
    case 8513:  /* avx512vl_getmantv2df_mask */
    case 8509:  /* avx512vl_getmantv4df_mask */
    case 8505:  /* avx512f_getmantv8df_mask */
    case 8501:  /* avx512vl_getmantv4sf_mask */
    case 8497:  /* avx512vl_getmantv8sf_mask */
    case 8493:  /* avx512f_getmantv16sf_mask */
    case 8489:  /* avx512fp16_getmantv8hf_mask */
    case 8485:  /* avx512vl_getmantv16hf_mask */
    case 8481:  /* avx512bw_getmantv32hf_mask */
    case 8139:  /* avx512f_vcvtps2ph512_mask */
    case 8134:  /* vcvtps2ph256_mask */
    case 7863:  /* avx_vpermilvarv2df3_mask */
    case 7861:  /* avx_vpermilvarv4df3_mask */
    case 7859:  /* avx512f_vpermilvarv8df3_mask */
    case 7857:  /* avx_vpermilvarv4sf3_mask */
    case 7855:  /* avx_vpermilvarv8sf3_mask */
    case 7853:  /* avx512f_vpermilvarv16sf3_mask */
    case 7654:  /* avx512bw_permvarv32bf_mask */
    case 7652:  /* avx512vl_permvarv16bf_mask */
    case 7650:  /* avx512vl_permvarv8bf_mask */
    case 7648:  /* avx512bw_permvarv32hf_mask */
    case 7646:  /* avx512vl_permvarv16hf_mask */
    case 7644:  /* avx512fp16_permvarv8hf_mask */
    case 7642:  /* avx512bw_permvarv32hi_mask */
    case 7640:  /* avx512vl_permvarv16hi_mask */
    case 7638:  /* avx512vl_permvarv8hi_mask */
    case 7636:  /* avx512vl_permvarv32qi_mask */
    case 7634:  /* avx512vl_permvarv16qi_mask */
    case 7632:  /* avx512bw_permvarv64qi_mask */
    case 7630:  /* avx2_permvarv4df_mask */
    case 7628:  /* avx2_permvarv4di_mask */
    case 7626:  /* avx512f_permvarv8df_mask */
    case 7624:  /* avx512f_permvarv8di_mask */
    case 7622:  /* avx512f_permvarv16sf_mask */
    case 7620:  /* avx512f_permvarv16si_mask */
    case 7618:  /* avx2_permvarv8sf_mask */
    case 7616:  /* avx2_permvarv8si_mask */
    case 7183:  /* sse4_1_packusdw_mask */
    case 7181:  /* avx2_packusdw_mask */
    case 7179:  /* avx512bw_packusdw_mask */
    case 7097:  /* ssse3_pshufbv16qi3_mask */
    case 7095:  /* avx2_pshufbv32qi3_mask */
    case 7093:  /* avx512bw_pshufbv64qi3_mask */
    case 7079:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 7077:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 7075:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 6979:  /* avx512bw_pshufhwv32hi_mask */
    case 6973:  /* avx512bw_pshuflwv32hi_mask */
    case 6847:  /* sse2_packuswb_mask */
    case 6845:  /* avx2_packuswb_mask */
    case 6843:  /* avx512bw_packuswb_mask */
    case 6176:  /* avx512bw_pmaddwd512v8hi_mask */
    case 6174:  /* avx512bw_pmaddwd512v16hi_mask */
    case 6172:  /* avx512bw_pmaddwd512v32hi_mask */
    case 5722:  /* avx512vl_rndscalev2df_mask */
    case 5718:  /* avx512vl_rndscalev4df_mask */
    case 5714:  /* avx512f_rndscalev8df_mask */
    case 5710:  /* avx512vl_rndscalev4sf_mask */
    case 5706:  /* avx512vl_rndscalev8sf_mask */
    case 5702:  /* avx512f_rndscalev16sf_mask */
    case 5698:  /* avx512fp16_rndscalev8hf_mask */
    case 5694:  /* avx512vl_rndscalev16hf_mask */
    case 5690:  /* avx512bw_rndscalev32hf_mask */
    case 4208:  /* avx512vl_scalefv2df_mask */
    case 4204:  /* avx512vl_scalefv4df_mask */
    case 4200:  /* avx512f_scalefv8df_mask */
    case 4196:  /* avx512vl_scalefv4sf_mask */
    case 4192:  /* avx512vl_scalefv8sf_mask */
    case 4188:  /* avx512f_scalefv16sf_mask */
    case 4184:  /* avx512fp16_scalefv8hf_mask */
    case 4180:  /* avx512vl_scalefv16hf_mask */
    case 4176:  /* avx512bw_scalefv32hf_mask */
    case 2280:  /* reducepv2df_mask */
    case 2276:  /* reducepv4df_mask */
    case 2272:  /* reducepv8df_mask */
    case 2268:  /* reducepv4sf_mask */
    case 2264:  /* reducepv8sf_mask */
    case 2260:  /* reducepv16sf_mask */
    case 2256:  /* reducepv8hf_mask */
    case 2252:  /* reducepv16hf_mask */
    case 2248:  /* reducepv32hf_mask */
    case 2201:  /* ieee_minv2df3_mask */
    case 2199:  /* ieee_maxv2df3_mask */
    case 2197:  /* ieee_minv4df3_mask */
    case 2195:  /* ieee_maxv4df3_mask */
    case 2192:  /* ieee_minv8df3_mask */
    case 2188:  /* ieee_maxv8df3_mask */
    case 2185:  /* ieee_minv4sf3_mask */
    case 2183:  /* ieee_maxv4sf3_mask */
    case 2181:  /* ieee_minv8sf3_mask */
    case 2179:  /* ieee_maxv8sf3_mask */
    case 2176:  /* ieee_minv16sf3_mask */
    case 2172:  /* ieee_maxv16sf3_mask */
    case 2169:  /* ieee_minv8hf3_mask */
    case 2167:  /* ieee_maxv8hf3_mask */
    case 2165:  /* ieee_minv16hf3_mask */
    case 2163:  /* ieee_maxv16hf3_mask */
    case 2160:  /* ieee_minv32hf3_mask */
    case 2156:  /* ieee_maxv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8512:  /* avx512vl_getmantv2df_round */
    case 8508:  /* avx512vl_getmantv4df_round */
    case 8504:  /* avx512f_getmantv8df_round */
    case 8500:  /* avx512vl_getmantv4sf_round */
    case 8496:  /* avx512vl_getmantv8sf_round */
    case 8492:  /* avx512f_getmantv16sf_round */
    case 8488:  /* avx512fp16_getmantv8hf_round */
    case 8484:  /* avx512vl_getmantv16hf_round */
    case 8480:  /* avx512bw_getmantv32hf_round */
    case 8138:  /* *avx512f_vcvtps2ph512_round */
    case 5721:  /* avx512vl_rndscalev2df_round */
    case 5717:  /* avx512vl_rndscalev4df_round */
    case 5713:  /* avx512f_rndscalev8df_round */
    case 5709:  /* avx512vl_rndscalev4sf_round */
    case 5705:  /* avx512vl_rndscalev8sf_round */
    case 5701:  /* avx512f_rndscalev16sf_round */
    case 5697:  /* avx512fp16_rndscalev8hf_round */
    case 5693:  /* avx512vl_rndscalev16hf_round */
    case 5689:  /* avx512bw_rndscalev32hf_round */
    case 4207:  /* avx512vl_scalefv2df_round */
    case 4203:  /* avx512vl_scalefv4df_round */
    case 4199:  /* avx512f_scalefv8df_round */
    case 4195:  /* avx512vl_scalefv4sf_round */
    case 4191:  /* avx512vl_scalefv8sf_round */
    case 4187:  /* avx512f_scalefv16sf_round */
    case 4183:  /* avx512fp16_scalefv8hf_round */
    case 4179:  /* avx512vl_scalefv16hf_round */
    case 4175:  /* avx512bw_scalefv32hf_round */
    case 3361:  /* avx512bw_fcmulc_v32hf_round */
    case 3357:  /* avx512bw_fmulc_v32hf_round */
    case 2279:  /* *reducepv2df_round */
    case 2275:  /* *reducepv4df_round */
    case 2271:  /* *reducepv8df_round */
    case 2267:  /* *reducepv4sf_round */
    case 2263:  /* *reducepv8sf_round */
    case 2259:  /* *reducepv16sf_round */
    case 2255:  /* *reducepv8hf_round */
    case 2251:  /* *reducepv16hf_round */
    case 2247:  /* *reducepv32hf_round */
    case 2191:  /* ieee_minv8df3_round */
    case 2187:  /* ieee_maxv8df3_round */
    case 2175:  /* ieee_minv16sf3_round */
    case 2171:  /* ieee_maxv16sf3_round */
    case 2159:  /* ieee_minv32hf3_round */
    case 2155:  /* ieee_maxv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2105:  /* *avx512fp16_vmrsqrtv8hf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2075:  /* *sse2_vmsqrtv2df2_mask_round */
    case 2071:  /* *sse_vmsqrtv4sf2_mask_round */
    case 2067:  /* *avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3685:  /* avx512fp16_vcvtsd2sh_mask_mem */
    case 3683:  /* avx512fp16_vcvtss2sh_mask_mem */
    case 3673:  /* avx512fp16_vcvtsh2ss_mask_mem */
    case 3671:  /* avx512fp16_vcvtsh2sd_mask_mem */
    case 2074:  /* *sse2_vmsqrtv2df2_mask */
    case 2070:  /* *sse_vmsqrtv4sf2_mask */
    case 2066:  /* *avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2073:  /* *sse2_vmsqrtv2df2_round */
    case 2069:  /* *sse_vmsqrtv4sf2_round */
    case 2065:  /* *avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2063:  /* sse2_vmsqrtv2df2_mask_round */
    case 2059:  /* sse_vmsqrtv4sf2_mask_round */
    case 2055:  /* avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2062:  /* sse2_vmsqrtv2df2_mask */
    case 2058:  /* sse_vmsqrtv4sf2_mask */
    case 2054:  /* avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2061:  /* sse2_vmsqrtv2df2_round */
    case 2057:  /* sse_vmsqrtv4sf2_round */
    case 2053:  /* avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3953:  /* avx512f_cvtps2pd512_mask_round */
    case 3944:  /* avx512f_cvtpd2ps512_mask_round */
    case 3915:  /* fixuns_truncv8sfv8di2_mask_round */
    case 3911:  /* fix_truncv8sfv8di2_mask_round */
    case 3883:  /* fixuns_truncv8dfv8di2_mask_round */
    case 3879:  /* fix_truncv8dfv8di2_mask_round */
    case 3868:  /* fixuns_truncv8dfv8si2_mask_round */
    case 3864:  /* fix_truncv8dfv8si2_mask_round */
    case 3819:  /* floatunsv8div8sf2_mask_round */
    case 3815:  /* floatv8div8sf2_mask_round */
    case 3811:  /* floatunsv2div2df2_mask_round */
    case 3807:  /* floatv2div2df2_mask_round */
    case 3803:  /* floatunsv4div4df2_mask_round */
    case 3799:  /* floatv4div4df2_mask_round */
    case 3795:  /* floatunsv8div8df2_mask_round */
    case 3791:  /* floatv8div8df2_mask_round */
    case 3762:  /* fixuns_truncv16sfv16si2_mask_round */
    case 3758:  /* fix_truncv16sfv16si2_mask_round */
    case 3718:  /* floatunsv4siv4sf2_mask_round */
    case 3714:  /* floatunsv8siv8sf2_mask_round */
    case 3710:  /* floatunsv16siv16sf2_mask_round */
    case 3702:  /* floatv16siv16sf2_mask_round */
    case 3652:  /* avx512fp16_vcvtps2ph_v8sf_mask_round */
    case 3648:  /* avx512fp16_vcvtps2ph_v16sf_mask_round */
    case 3644:  /* avx512fp16_vcvtpd2ph_v8df_mask_round */
    case 3628:  /* avx512fp16_float_extend_phv8sf2_mask_round */
    case 3624:  /* avx512fp16_float_extend_phv16sf2_mask_round */
    case 3620:  /* avx512fp16_float_extend_phv8df2_mask_round */
    case 3586:  /* avx512fp16_fixuns_truncv8di2_mask_round */
    case 3582:  /* avx512fp16_fix_truncv8di2_mask_round */
    case 3578:  /* avx512fp16_fixuns_truncv16si2_mask_round */
    case 3574:  /* avx512fp16_fix_truncv16si2_mask_round */
    case 3570:  /* avx512fp16_fixuns_truncv8si2_mask_round */
    case 3566:  /* avx512fp16_fix_truncv8si2_mask_round */
    case 3562:  /* avx512fp16_fixuns_truncv32hi2_mask_round */
    case 3558:  /* avx512fp16_fix_truncv32hi2_mask_round */
    case 3554:  /* avx512fp16_fixuns_truncv16hi2_mask_round */
    case 3550:  /* avx512fp16_fix_truncv16hi2_mask_round */
    case 3546:  /* avx512fp16_fixuns_truncv8hi2_mask_round */
    case 3542:  /* avx512fp16_fix_truncv8hi2_mask_round */
    case 3510:  /* avx512fp16_vcvtuqq2ph_v8di_mask_round */
    case 3506:  /* avx512fp16_vcvtqq2ph_v8di_mask_round */
    case 3502:  /* avx512fp16_vcvtudq2ph_v16si_mask_round */
    case 3498:  /* avx512fp16_vcvtdq2ph_v16si_mask_round */
    case 3494:  /* avx512fp16_vcvtudq2ph_v8si_mask_round */
    case 3490:  /* avx512fp16_vcvtdq2ph_v8si_mask_round */
    case 3486:  /* avx512fp16_vcvtuw2ph_v32hi_mask_round */
    case 3482:  /* avx512fp16_vcvtw2ph_v32hi_mask_round */
    case 3478:  /* avx512fp16_vcvtuw2ph_v16hi_mask_round */
    case 3474:  /* avx512fp16_vcvtw2ph_v16hi_mask_round */
    case 3470:  /* avx512fp16_vcvtuw2ph_v8hi_mask_round */
    case 3466:  /* avx512fp16_vcvtw2ph_v8hi_mask_round */
    case 2968:  /* *fma_fnmadd_v8df_round */
    case 2959:  /* *fma_fnmadd_v16sf_round */
    case 2949:  /* *fma_fnmadd_v32hf_round */
    case 2047:  /* avx512f_sqrtv8df2_mask_round */
    case 2039:  /* avx512f_sqrtv16sf2_mask_round */
    case 2031:  /* avx512fp16_sqrtv32hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8833:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 8831:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 8647:  /* vpopcountv8hi_mask */
    case 8645:  /* vpopcountv16hi_mask */
    case 8643:  /* vpopcountv32hi_mask */
    case 8641:  /* vpopcountv32qi_mask */
    case 8639:  /* vpopcountv16qi_mask */
    case 8637:  /* vpopcountv64qi_mask */
    case 8635:  /* vpopcountv2di_mask */
    case 8633:  /* vpopcountv4di_mask */
    case 8631:  /* vpopcountv8di_mask */
    case 8629:  /* vpopcountv4si_mask */
    case 8627:  /* vpopcountv8si_mask */
    case 8625:  /* vpopcountv16si_mask */
    case 8544:  /* clzv2di2_mask */
    case 8542:  /* clzv4di2_mask */
    case 8540:  /* clzv8di2_mask */
    case 8538:  /* clzv4si2_mask */
    case 8536:  /* clzv8si2_mask */
    case 8534:  /* clzv16si2_mask */
    case 7845:  /* avx512dq_broadcastv4df_mask_1 */
    case 7843:  /* avx512dq_broadcastv4di_mask_1 */
    case 7841:  /* avx512dq_broadcastv8df_mask_1 */
    case 7839:  /* avx512dq_broadcastv8di_mask_1 */
    case 7837:  /* avx512dq_broadcastv16si_mask_1 */
    case 7835:  /* avx512dq_broadcastv16sf_mask_1 */
    case 7833:  /* avx512vl_broadcastv8sf_mask_1 */
    case 7831:  /* avx512vl_broadcastv8si_mask_1 */
    case 7789:  /* avx512vl_vec_dup_gprv2df_mask */
    case 7787:  /* avx512vl_vec_dup_gprv4df_mask */
    case 7785:  /* avx512f_vec_dup_gprv8df_mask */
    case 7783:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 7781:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 7779:  /* avx512f_vec_dup_gprv16sf_mask */
    case 7777:  /* avx512vl_vec_dup_gprv2di_mask */
    case 7775:  /* avx512vl_vec_dup_gprv4di_mask */
    case 7773:  /* avx512f_vec_dup_gprv8di_mask */
    case 7771:  /* avx512vl_vec_dup_gprv4si_mask */
    case 7769:  /* avx512vl_vec_dup_gprv8si_mask */
    case 7767:  /* avx512f_vec_dup_gprv16si_mask */
    case 7765:  /* avx512vl_vec_dup_gprv8bf_mask */
    case 7763:  /* avx512vl_vec_dup_gprv16bf_mask */
    case 7761:  /* avx512bw_vec_dup_gprv32bf_mask */
    case 7759:  /* avx512fp16_vec_dup_gprv8hf_mask */
    case 7757:  /* avx512vl_vec_dup_gprv16hf_mask */
    case 7755:  /* avx512bw_vec_dup_gprv32hf_mask */
    case 7753:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 7751:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 7749:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 7747:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 7745:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 7743:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 7741:  /* avx512f_broadcastv8di_mask */
    case 7739:  /* avx512f_broadcastv8df_mask */
    case 7737:  /* avx512f_broadcastv16si_mask */
    case 7735:  /* avx512f_broadcastv16sf_mask */
    case 7373:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 7371:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 7363:  /* avx2_zero_extendv4siv4di2_mask */
    case 7361:  /* avx2_sign_extendv4siv4di2_mask */
    case 7357:  /* avx512f_zero_extendv8siv8di2_mask */
    case 7355:  /* avx512f_sign_extendv8siv8di2_mask */
    case 7349:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 7347:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 7337:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 7335:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 7329:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 7327:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 7322:  /* *sse4_1_zero_extendv2qiv2di2_mask_1 */
    case 7320:  /* *sse4_1_sign_extendv2qiv2di2_mask_1 */
    case 7310:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 7308:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 7298:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 7296:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 7282:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 7280:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 7270:  /* avx2_zero_extendv8hiv8si2_mask */
    case 7268:  /* avx2_sign_extendv8hiv8si2_mask */
    case 7262:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 7260:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 7254:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 7252:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 7242:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 7240:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 7234:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 7232:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 7222:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 7220:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 7210:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 7208:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 7202:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 7200:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 7138:  /* absv8hi2_mask */
    case 7137:  /* absv16hi2_mask */
    case 7136:  /* absv32hi2_mask */
    case 7135:  /* absv32qi2_mask */
    case 7134:  /* absv16qi2_mask */
    case 7133:  /* absv64qi2_mask */
    case 7132:  /* absv2di2_mask */
    case 7131:  /* absv4di2_mask */
    case 7130:  /* absv8di2_mask */
    case 7129:  /* absv4si2_mask */
    case 7128:  /* absv8si2_mask */
    case 7127:  /* absv16si2_mask */
    case 5831:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 5830:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 5829:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 5828:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 5827:  /* avx512vl_truncatev8siv8hi2_mask */
    case 5826:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 5825:  /* avx512vl_us_truncatev4div4si2_mask */
    case 5824:  /* avx512vl_truncatev4div4si2_mask */
    case 5823:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 5811:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 5810:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 5809:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 5804:  /* avx512f_us_truncatev8div8hi2_mask */
    case 5803:  /* avx512f_truncatev8div8hi2_mask */
    case 5802:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 5801:  /* avx512f_us_truncatev8div8si2_mask */
    case 5800:  /* avx512f_truncatev8div8si2_mask */
    case 5799:  /* avx512f_ss_truncatev8div8si2_mask */
    case 5798:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 5797:  /* avx512f_truncatev16siv16hi2_mask */
    case 5796:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 5795:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 5794:  /* avx512f_truncatev16siv16qi2_mask */
    case 5793:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 5772:  /* vec_dupv2df_mask */
    case 4119:  /* vec_extract_hi_v8sf_mask */
    case 4118:  /* vec_extract_hi_v8si_mask */
    case 4115:  /* vec_extract_lo_v8sf_mask */
    case 4114:  /* vec_extract_lo_v8si_mask */
    case 4111:  /* vec_extract_hi_v4df_mask */
    case 4110:  /* vec_extract_hi_v4di_mask */
    case 4107:  /* vec_extract_lo_v4df_mask */
    case 4106:  /* vec_extract_lo_v4di_mask */
    case 4103:  /* vec_extract_lo_v16si_mask */
    case 4102:  /* vec_extract_lo_v16sf_mask */
    case 4099:  /* vec_extract_hi_v16si_mask */
    case 4098:  /* vec_extract_hi_v16sf_mask */
    case 4095:  /* vec_extract_hi_v8di_mask */
    case 4094:  /* vec_extract_hi_v8df_mask */
    case 4091:  /* vec_extract_lo_v8di_mask */
    case 4090:  /* vec_extract_lo_v8df_mask */
    case 3991:  /* sse2_cvtps2pd_mask_1 */
    case 3955:  /* avx_cvtps2pd256_mask */
    case 3952:  /* avx512f_cvtps2pd512_mask */
    case 3946:  /* avx_cvtpd2ps256_mask */
    case 3943:  /* avx512f_cvtpd2ps512_mask */
    case 3927:  /* fixuns_truncv4sfv4si2_mask */
    case 3925:  /* fixuns_truncv8sfv8si2_mask */
    case 3919:  /* fixuns_truncv4sfv4di2_mask */
    case 3917:  /* fix_truncv4sfv4di2_mask */
    case 3914:  /* fixuns_truncv8sfv8di2_mask */
    case 3910:  /* fix_truncv8sfv8di2_mask */
    case 3891:  /* fixuns_truncv2dfv2di2_mask */
    case 3889:  /* fix_truncv2dfv2di2_mask */
    case 3887:  /* fixuns_truncv4dfv4di2_mask */
    case 3885:  /* fix_truncv4dfv4di2_mask */
    case 3882:  /* fixuns_truncv8dfv8di2_mask */
    case 3878:  /* fix_truncv8dfv8di2_mask */
    case 3875:  /* fixuns_truncv4dfv4si2_mask */
    case 3873:  /* fix_truncv4dfv4si2_mask */
    case 3867:  /* fixuns_truncv8dfv8si2_mask */
    case 3863:  /* fix_truncv8dfv8si2_mask */
    case 3833:  /* floatunsv4siv4df2_mask */
    case 3831:  /* floatunsv8siv8df2_mask */
    case 3823:  /* floatunsv4div4sf2_mask */
    case 3821:  /* floatv4div4sf2_mask */
    case 3818:  /* floatunsv8div8sf2_mask */
    case 3814:  /* floatv8div8sf2_mask */
    case 3810:  /* floatunsv2div2df2_mask */
    case 3806:  /* floatv2div2df2_mask */
    case 3802:  /* floatunsv4div4df2_mask */
    case 3798:  /* floatv4div4df2_mask */
    case 3794:  /* floatunsv8div8df2_mask */
    case 3790:  /* floatv8div8df2_mask */
    case 3787:  /* floatv4siv4df2_mask */
    case 3785:  /* floatv8siv8df2_mask */
    case 3766:  /* fix_truncv4sfv4si2_mask */
    case 3764:  /* fix_truncv8sfv8si2_mask */
    case 3761:  /* fixuns_truncv16sfv16si2_mask */
    case 3757:  /* fix_truncv16sfv16si2_mask */
    case 3717:  /* floatunsv4siv4sf2_mask */
    case 3713:  /* floatunsv8siv8sf2_mask */
    case 3709:  /* floatunsv16siv16sf2_mask */
    case 3706:  /* floatv4siv4sf2_mask */
    case 3704:  /* floatv8siv8sf2_mask */
    case 3701:  /* floatv16siv16sf2_mask */
    case 3651:  /* avx512fp16_vcvtps2ph_v8sf_mask */
    case 3647:  /* avx512fp16_vcvtps2ph_v16sf_mask */
    case 3643:  /* avx512fp16_vcvtpd2ph_v8df_mask */
    case 3640:  /* *avx512fp16_float_extend_phv2df2_load_mask */
    case 3636:  /* *avx512fp16_float_extend_phv4sf2_load_mask */
    case 3634:  /* *avx512fp16_float_extend_phv4df2_load_mask */
    case 3627:  /* avx512fp16_float_extend_phv8sf2_mask */
    case 3623:  /* avx512fp16_float_extend_phv16sf2_mask */
    case 3619:  /* avx512fp16_float_extend_phv8df2_mask */
    case 3610:  /* *avx512fp16_fixuns_truncv2di2_load_mask */
    case 3608:  /* *avx512fp16_fix_truncv2di2_load_mask */
    case 3602:  /* *avx512fp16_fixuns_truncv4di2_load_mask */
    case 3600:  /* *avx512fp16_fix_truncv4di2_load_mask */
    case 3598:  /* *avx512fp16_fixuns_truncv4si2_load_mask */
    case 3596:  /* *avx512fp16_fix_truncv4si2_load_mask */
    case 3585:  /* avx512fp16_fixuns_truncv8di2_mask */
    case 3581:  /* avx512fp16_fix_truncv8di2_mask */
    case 3577:  /* avx512fp16_fixuns_truncv16si2_mask */
    case 3573:  /* avx512fp16_fix_truncv16si2_mask */
    case 3569:  /* avx512fp16_fixuns_truncv8si2_mask */
    case 3565:  /* avx512fp16_fix_truncv8si2_mask */
    case 3561:  /* avx512fp16_fixuns_truncv32hi2_mask */
    case 3557:  /* avx512fp16_fix_truncv32hi2_mask */
    case 3553:  /* avx512fp16_fixuns_truncv16hi2_mask */
    case 3549:  /* avx512fp16_fix_truncv16hi2_mask */
    case 3545:  /* avx512fp16_fixuns_truncv8hi2_mask */
    case 3541:  /* avx512fp16_fix_truncv8hi2_mask */
    case 3509:  /* avx512fp16_vcvtuqq2ph_v8di_mask */
    case 3505:  /* avx512fp16_vcvtqq2ph_v8di_mask */
    case 3501:  /* avx512fp16_vcvtudq2ph_v16si_mask */
    case 3497:  /* avx512fp16_vcvtdq2ph_v16si_mask */
    case 3493:  /* avx512fp16_vcvtudq2ph_v8si_mask */
    case 3489:  /* avx512fp16_vcvtdq2ph_v8si_mask */
    case 3485:  /* avx512fp16_vcvtuw2ph_v32hi_mask */
    case 3481:  /* avx512fp16_vcvtw2ph_v32hi_mask */
    case 3477:  /* avx512fp16_vcvtuw2ph_v16hi_mask */
    case 3473:  /* avx512fp16_vcvtw2ph_v16hi_mask */
    case 3469:  /* avx512fp16_vcvtuw2ph_v8hi_mask */
    case 3465:  /* avx512fp16_vcvtw2ph_v8hi_mask */
    case 2972:  /* *fma_fnmadd_v2df */
    case 2970:  /* *fma_fnmadd_v4df */
    case 2966:  /* *fma_fnmadd_v8df */
    case 2965:  /* *fma_fnmadd_df */
    case 2963:  /* *fma_fnmadd_v4sf */
    case 2961:  /* *fma_fnmadd_v8sf */
    case 2957:  /* *fma_fnmadd_v16sf */
    case 2956:  /* *fma_fnmadd_sf */
    case 2955:  /* *fma_fnmadd_hf */
    case 2953:  /* *fma_fnmadd_v8hf */
    case 2951:  /* *fma_fnmadd_v16hf */
    case 2947:  /* *fma_fnmadd_v32hf */
    case 2946:  /* *fma_fnmadd_v4df */
    case 2945:  /* *fma_fnmadd_v8sf */
    case 2944:  /* *fma_fnmadd_v2df */
    case 2943:  /* *fma_fnmadd_v4sf */
    case 2942:  /* *fma_fnmadd_df */
    case 2941:  /* *fma_fnmadd_sf */
    case 2051:  /* sse2_sqrtv2df2_mask */
    case 2049:  /* avx_sqrtv4df2_mask */
    case 2046:  /* avx512f_sqrtv8df2_mask */
    case 2043:  /* sse_sqrtv4sf2_mask */
    case 2041:  /* avx_sqrtv8sf2_mask */
    case 2038:  /* avx512f_sqrtv16sf2_mask */
    case 2035:  /* avx512fp16_sqrtv8hf2_mask */
    case 2033:  /* avx512fp16_sqrtv16hf2_mask */
    case 2030:  /* avx512fp16_sqrtv32hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3951:  /* avx512f_cvtps2pd512_round */
    case 3942:  /* *avx512f_cvtpd2ps512_round */
    case 3913:  /* fixuns_truncv8sfv8di2_round */
    case 3909:  /* fix_truncv8sfv8di2_round */
    case 3881:  /* fixuns_truncv8dfv8di2_round */
    case 3877:  /* fix_truncv8dfv8di2_round */
    case 3866:  /* fixuns_truncv8dfv8si2_round */
    case 3862:  /* fix_truncv8dfv8si2_round */
    case 3817:  /* floatunsv8div8sf2_round */
    case 3813:  /* floatv8div8sf2_round */
    case 3809:  /* floatunsv2div2df2_round */
    case 3805:  /* floatv2div2df2_round */
    case 3801:  /* floatunsv4div4df2_round */
    case 3797:  /* floatv4div4df2_round */
    case 3793:  /* floatunsv8div8df2_round */
    case 3789:  /* floatv8div8df2_round */
    case 3760:  /* fixuns_truncv16sfv16si2_round */
    case 3756:  /* fix_truncv16sfv16si2_round */
    case 3716:  /* *floatunsv4siv4sf2_round */
    case 3712:  /* *floatunsv8siv8sf2_round */
    case 3708:  /* *floatunsv16siv16sf2_round */
    case 3700:  /* floatv16siv16sf2_round */
    case 3650:  /* avx512fp16_vcvtps2ph_v8sf_round */
    case 3646:  /* avx512fp16_vcvtps2ph_v16sf_round */
    case 3642:  /* avx512fp16_vcvtpd2ph_v8df_round */
    case 3626:  /* avx512fp16_float_extend_phv8sf2_round */
    case 3622:  /* avx512fp16_float_extend_phv16sf2_round */
    case 3618:  /* avx512fp16_float_extend_phv8df2_round */
    case 3584:  /* avx512fp16_fixuns_truncv8di2_round */
    case 3580:  /* avx512fp16_fix_truncv8di2_round */
    case 3576:  /* avx512fp16_fixuns_truncv16si2_round */
    case 3572:  /* avx512fp16_fix_truncv16si2_round */
    case 3568:  /* avx512fp16_fixuns_truncv8si2_round */
    case 3564:  /* avx512fp16_fix_truncv8si2_round */
    case 3560:  /* avx512fp16_fixuns_truncv32hi2_round */
    case 3556:  /* avx512fp16_fix_truncv32hi2_round */
    case 3552:  /* avx512fp16_fixuns_truncv16hi2_round */
    case 3548:  /* avx512fp16_fix_truncv16hi2_round */
    case 3544:  /* avx512fp16_fixuns_truncv8hi2_round */
    case 3540:  /* avx512fp16_fix_truncv8hi2_round */
    case 3508:  /* avx512fp16_vcvtuqq2ph_v8di_round */
    case 3504:  /* avx512fp16_vcvtqq2ph_v8di_round */
    case 3500:  /* avx512fp16_vcvtudq2ph_v16si_round */
    case 3496:  /* avx512fp16_vcvtdq2ph_v16si_round */
    case 3492:  /* avx512fp16_vcvtudq2ph_v8si_round */
    case 3488:  /* avx512fp16_vcvtdq2ph_v8si_round */
    case 3484:  /* avx512fp16_vcvtuw2ph_v32hi_round */
    case 3480:  /* avx512fp16_vcvtw2ph_v32hi_round */
    case 3476:  /* avx512fp16_vcvtuw2ph_v16hi_round */
    case 3472:  /* avx512fp16_vcvtw2ph_v16hi_round */
    case 3468:  /* avx512fp16_vcvtuw2ph_v8hi_round */
    case 3464:  /* avx512fp16_vcvtw2ph_v8hi_round */
    case 2045:  /* avx512f_sqrtv8df2_round */
    case 2037:  /* avx512f_sqrtv16sf2_round */
    case 2029:  /* avx512fp16_sqrtv32hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2103:  /* avx512fp16_vmrsqrtv8hf2_mask */
    case 2099:  /* rsqrt14_v2df_mask */
    case 2098:  /* rsqrt14_v4sf_mask */
    case 2027:  /* srcp14v2df_mask */
    case 2026:  /* srcp14v4sf_mask */
    case 2010:  /* avx512fp16_vmrcpv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2104:  /* *avx512fp16_vmrsqrtv8hf2 */
    case 2101:  /* *sse_vmrsqrtv4sf2 */
    case 2011:  /* *avx512fp16_vmrcpv8hf2 */
    case 2002:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7561:  /* *xop_vmfrczv2df2 */
    case 7560:  /* *xop_vmfrczv4sf2 */
    case 7483:  /* avx512er_vmrsqrt28v2df */
    case 7479:  /* avx512er_vmrsqrt28v4sf */
    case 7467:  /* avx512er_vmrcp28v2df */
    case 7463:  /* avx512er_vmrcp28v4sf */
    case 3846:  /* *avx_cvtpd2dq256_2 */
    case 2102:  /* avx512fp16_vmrsqrtv8hf2 */
    case 2100:  /* sse_vmrsqrtv4sf2 */
    case 2097:  /* rsqrt14v2df */
    case 2096:  /* rsqrt14v4sf */
    case 2025:  /* srcp14v2df */
    case 2024:  /* srcp14v4sf */
    case 2009:  /* avx512fp16_vmrcpv8hf2 */
    case 2001:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2231:  /* sse2_vmsminv2df3_mask_round */
    case 2227:  /* sse2_vmsmaxv2df3_mask_round */
    case 2223:  /* sse_vmsminv4sf3_mask_round */
    case 2219:  /* sse_vmsmaxv4sf3_mask_round */
    case 2215:  /* avx512fp16_vmsminv8hf3_mask_round */
    case 2211:  /* avx512fp16_vmsmaxv8hf3_mask_round */
    case 1974:  /* sse2_vmdivv2df3_mask_round */
    case 1970:  /* sse2_vmmulv2df3_mask_round */
    case 1966:  /* sse_vmdivv4sf3_mask_round */
    case 1962:  /* sse_vmmulv4sf3_mask_round */
    case 1958:  /* avx512fp16_vmdivv8hf3_mask_round */
    case 1954:  /* avx512fp16_vmmulv8hf3_mask_round */
    case 1908:  /* sse2_vmsubv2df3_mask_round */
    case 1904:  /* sse2_vmaddv2df3_mask_round */
    case 1900:  /* sse_vmsubv4sf3_mask_round */
    case 1896:  /* sse_vmaddv4sf3_mask_round */
    case 1892:  /* avx512fp16_vmsubv8hf3_mask_round */
    case 1888:  /* avx512fp16_vmaddv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2229:  /* sse2_vmsminv2df3_mask */
    case 2225:  /* sse2_vmsmaxv2df3_mask */
    case 2221:  /* sse_vmsminv4sf3_mask */
    case 2217:  /* sse_vmsmaxv4sf3_mask */
    case 2213:  /* avx512fp16_vmsminv8hf3_mask */
    case 2209:  /* avx512fp16_vmsmaxv8hf3_mask */
    case 1973:  /* sse2_vmdivv2df3_mask */
    case 1969:  /* sse2_vmmulv2df3_mask */
    case 1965:  /* sse_vmdivv4sf3_mask */
    case 1961:  /* sse_vmmulv4sf3_mask */
    case 1957:  /* avx512fp16_vmdivv8hf3_mask */
    case 1953:  /* avx512fp16_vmmulv8hf3_mask */
    case 1907:  /* sse2_vmsubv2df3_mask */
    case 1903:  /* sse2_vmaddv2df3_mask */
    case 1899:  /* sse_vmsubv4sf3_mask */
    case 1895:  /* sse_vmaddv4sf3_mask */
    case 1891:  /* avx512fp16_vmsubv8hf3_mask */
    case 1887:  /* avx512fp16_vmaddv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2230:  /* sse2_vmsminv2df3_round */
    case 2226:  /* sse2_vmsmaxv2df3_round */
    case 2222:  /* sse_vmsminv4sf3_round */
    case 2218:  /* sse_vmsmaxv4sf3_round */
    case 2214:  /* avx512fp16_vmsminv8hf3_round */
    case 2210:  /* avx512fp16_vmsmaxv8hf3_round */
    case 1972:  /* sse2_vmdivv2df3_round */
    case 1968:  /* sse2_vmmulv2df3_round */
    case 1964:  /* sse_vmdivv4sf3_round */
    case 1960:  /* sse_vmmulv4sf3_round */
    case 1956:  /* avx512fp16_vmdivv8hf3_round */
    case 1952:  /* avx512fp16_vmmulv8hf3_round */
    case 1906:  /* sse2_vmsubv2df3_round */
    case 1902:  /* sse2_vmaddv2df3_round */
    case 1898:  /* sse_vmsubv4sf3_round */
    case 1894:  /* sse_vmaddv4sf3_round */
    case 1890:  /* avx512fp16_vmsubv8hf3_round */
    case 1886:  /* avx512fp16_vmaddv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2228:  /* sse2_vmsminv2df3 */
    case 2224:  /* sse2_vmsmaxv2df3 */
    case 2220:  /* sse_vmsminv4sf3 */
    case 2216:  /* sse_vmsmaxv4sf3 */
    case 2212:  /* avx512fp16_vmsminv8hf3 */
    case 2208:  /* avx512fp16_vmsmaxv8hf3 */
    case 1971:  /* sse2_vmdivv2df3 */
    case 1967:  /* sse2_vmmulv2df3 */
    case 1963:  /* sse_vmdivv4sf3 */
    case 1959:  /* sse_vmmulv4sf3 */
    case 1955:  /* avx512fp16_vmdivv8hf3 */
    case 1951:  /* avx512fp16_vmmulv8hf3 */
    case 1905:  /* sse2_vmsubv2df3 */
    case 1901:  /* sse2_vmaddv2df3 */
    case 1897:  /* sse_vmsubv4sf3 */
    case 1893:  /* sse_vmaddv4sf3 */
    case 1889:  /* avx512fp16_vmsubv8hf3 */
    case 1885:  /* avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1950:  /* *sse2_vmdivv2df3 */
    case 1949:  /* *sse2_vmmulv2df3 */
    case 1948:  /* *sse_vmdivv4sf3 */
    case 1947:  /* *sse_vmmulv4sf3 */
    case 1946:  /* *avx512fp16_vmdivv8hf3 */
    case 1945:  /* *avx512fp16_vmmulv8hf3 */
    case 1884:  /* *sse2_vmsubv2df3 */
    case 1883:  /* *sse2_vmaddv2df3 */
    case 1882:  /* *sse_vmsubv4sf3 */
    case 1881:  /* *sse_vmaddv4sf3 */
    case 1880:  /* *avx512fp16_vmsubv8hf3 */
    case 1879:  /* *avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2145:  /* *sminv8df3_mask_round */
    case 2141:  /* *smaxv8df3_mask_round */
    case 2129:  /* *sminv16sf3_mask_round */
    case 2125:  /* *smaxv16sf3_mask_round */
    case 2113:  /* *sminv32hf3_mask_round */
    case 2109:  /* *smaxv32hf3_mask_round */
    case 1994:  /* avx512f_divv8df3_mask_round */
    case 1986:  /* avx512f_divv16sf3_mask_round */
    case 1978:  /* avx512fp16_divv32hf3_mask_round */
    case 1944:  /* *mulv2df3_mask_round */
    case 1940:  /* *mulv4df3_mask_round */
    case 1936:  /* *mulv8df3_mask_round */
    case 1932:  /* *mulv4sf3_mask_round */
    case 1928:  /* *mulv8sf3_mask_round */
    case 1924:  /* *mulv16sf3_mask_round */
    case 1920:  /* *mulv8hf3_mask_round */
    case 1916:  /* *mulv16hf3_mask_round */
    case 1912:  /* *mulv32hf3_mask_round */
    case 1878:  /* *subv2df3_mask_round */
    case 1874:  /* *addv2df3_mask_round */
    case 1870:  /* *subv4df3_mask_round */
    case 1866:  /* *addv4df3_mask_round */
    case 1862:  /* *subv8df3_mask_round */
    case 1858:  /* *addv8df3_mask_round */
    case 1854:  /* *subv4sf3_mask_round */
    case 1850:  /* *addv4sf3_mask_round */
    case 1846:  /* *subv8sf3_mask_round */
    case 1842:  /* *addv8sf3_mask_round */
    case 1838:  /* *subv16sf3_mask_round */
    case 1834:  /* *addv16sf3_mask_round */
    case 1830:  /* *subv8hf3_mask_round */
    case 1826:  /* *addv8hf3_mask_round */
    case 1822:  /* *subv16hf3_mask_round */
    case 1818:  /* *addv16hf3_mask_round */
    case 1814:  /* *subv32hf3_mask_round */
    case 1810:  /* *addv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8082:  /* avx512bw_lshrvv32hi_mask */
    case 8080:  /* avx512bw_ashlvv32hi_mask */
    case 8078:  /* avx512vl_lshrvv16hi_mask */
    case 8076:  /* avx512vl_ashlvv16hi_mask */
    case 8074:  /* avx512vl_lshrvv8hi_mask */
    case 8072:  /* avx512vl_ashlvv8hi_mask */
    case 8070:  /* avx2_lshrvv2di_mask */
    case 8068:  /* avx2_ashlvv2di_mask */
    case 8066:  /* avx2_lshrvv4di_mask */
    case 8064:  /* avx2_ashlvv4di_mask */
    case 8062:  /* avx512f_lshrvv8di_mask */
    case 8060:  /* avx512f_ashlvv8di_mask */
    case 8058:  /* avx2_lshrvv4si_mask */
    case 8056:  /* avx2_ashlvv4si_mask */
    case 8054:  /* avx2_lshrvv8si_mask */
    case 8052:  /* avx2_ashlvv8si_mask */
    case 8050:  /* avx512f_lshrvv16si_mask */
    case 8048:  /* avx512f_ashlvv16si_mask */
    case 8046:  /* avx512bw_ashrvv32hi_mask */
    case 8044:  /* avx512vl_ashrvv16hi_mask */
    case 8042:  /* avx512vl_ashrvv8hi_mask */
    case 8040:  /* avx512f_ashrvv8di_mask */
    case 8038:  /* avx2_ashrvv4di_mask */
    case 8036:  /* avx2_ashrvv2di_mask */
    case 8034:  /* avx512f_ashrvv16si_mask */
    case 8032:  /* avx2_ashrvv8si_mask */
    case 8030:  /* avx2_ashrvv4si_mask */
    case 6568:  /* *xorv2di3_mask */
    case 6566:  /* *iorv2di3_mask */
    case 6564:  /* *andv2di3_mask */
    case 6562:  /* *xorv4di3_mask */
    case 6560:  /* *iorv4di3_mask */
    case 6558:  /* *andv4di3_mask */
    case 6556:  /* *xorv8di3_mask */
    case 6554:  /* *iorv8di3_mask */
    case 6552:  /* *andv8di3_mask */
    case 6550:  /* *xorv4si3_mask */
    case 6548:  /* *iorv4si3_mask */
    case 6546:  /* *andv4si3_mask */
    case 6544:  /* *xorv8si3_mask */
    case 6542:  /* *iorv8si3_mask */
    case 6540:  /* *andv8si3_mask */
    case 6538:  /* *xorv16si3_mask */
    case 6536:  /* *iorv16si3_mask */
    case 6534:  /* *andv16si3_mask */
    case 6502:  /* one_cmplv2di2_mask */
    case 6500:  /* one_cmplv4di2_mask */
    case 6498:  /* one_cmplv4si2_mask */
    case 6496:  /* one_cmplv8si2_mask */
    case 6488:  /* one_cmplv8di2_mask */
    case 6486:  /* one_cmplv16si2_mask */
    case 6444:  /* *sse4_1_uminv4si3_mask */
    case 6442:  /* *sse4_1_umaxv4si3_mask */
    case 6440:  /* *sse4_1_uminv8hi3_mask */
    case 6438:  /* *sse4_1_umaxv8hi3_mask */
    case 6434:  /* *sse4_1_sminv4si3_mask */
    case 6432:  /* *sse4_1_smaxv4si3_mask */
    case 6430:  /* *sse4_1_sminv16qi3_mask */
    case 6428:  /* *sse4_1_smaxv16qi3_mask */
    case 6426:  /* uminv8hi3_mask */
    case 6424:  /* umaxv8hi3_mask */
    case 6422:  /* sminv8hi3_mask */
    case 6420:  /* smaxv8hi3_mask */
    case 6418:  /* uminv16hi3_mask */
    case 6416:  /* umaxv16hi3_mask */
    case 6414:  /* sminv16hi3_mask */
    case 6412:  /* smaxv16hi3_mask */
    case 6410:  /* uminv32hi3_mask */
    case 6408:  /* umaxv32hi3_mask */
    case 6406:  /* sminv32hi3_mask */
    case 6404:  /* smaxv32hi3_mask */
    case 6402:  /* uminv32qi3_mask */
    case 6400:  /* umaxv32qi3_mask */
    case 6398:  /* sminv32qi3_mask */
    case 6396:  /* smaxv32qi3_mask */
    case 6394:  /* uminv16qi3_mask */
    case 6392:  /* umaxv16qi3_mask */
    case 6390:  /* sminv16qi3_mask */
    case 6388:  /* smaxv16qi3_mask */
    case 6386:  /* uminv64qi3_mask */
    case 6384:  /* umaxv64qi3_mask */
    case 6382:  /* sminv64qi3_mask */
    case 6380:  /* smaxv64qi3_mask */
    case 6378:  /* *avx512f_uminv2di3_mask */
    case 6376:  /* *avx512f_umaxv2di3_mask */
    case 6374:  /* *avx512f_sminv2di3_mask */
    case 6372:  /* *avx512f_smaxv2di3_mask */
    case 6370:  /* *avx512f_uminv4di3_mask */
    case 6368:  /* *avx512f_umaxv4di3_mask */
    case 6366:  /* *avx512f_sminv4di3_mask */
    case 6364:  /* *avx512f_smaxv4di3_mask */
    case 6362:  /* *avx512f_uminv8di3_mask */
    case 6360:  /* *avx512f_umaxv8di3_mask */
    case 6358:  /* *avx512f_sminv8di3_mask */
    case 6356:  /* *avx512f_smaxv8di3_mask */
    case 6354:  /* *avx512f_uminv4si3_mask */
    case 6352:  /* *avx512f_umaxv4si3_mask */
    case 6350:  /* *avx512f_sminv4si3_mask */
    case 6348:  /* *avx512f_smaxv4si3_mask */
    case 6346:  /* *avx512f_uminv8si3_mask */
    case 6344:  /* *avx512f_umaxv8si3_mask */
    case 6342:  /* *avx512f_sminv8si3_mask */
    case 6340:  /* *avx512f_smaxv8si3_mask */
    case 6338:  /* *avx512f_uminv16si3_mask */
    case 6336:  /* *avx512f_umaxv16si3_mask */
    case 6334:  /* *avx512f_sminv16si3_mask */
    case 6332:  /* *avx512f_smaxv16si3_mask */
    case 6318:  /* avx512vl_rorv2di_mask */
    case 6316:  /* avx512vl_rolv2di_mask */
    case 6314:  /* avx512vl_rorv4di_mask */
    case 6312:  /* avx512vl_rolv4di_mask */
    case 6310:  /* avx512f_rorv8di_mask */
    case 6308:  /* avx512f_rolv8di_mask */
    case 6306:  /* avx512vl_rorv4si_mask */
    case 6304:  /* avx512vl_rolv4si_mask */
    case 6302:  /* avx512vl_rorv8si_mask */
    case 6300:  /* avx512vl_rolv8si_mask */
    case 6298:  /* avx512f_rorv16si_mask */
    case 6296:  /* avx512f_rolv16si_mask */
    case 6294:  /* avx512vl_rorvv2di_mask */
    case 6292:  /* avx512vl_rolvv2di_mask */
    case 6290:  /* avx512vl_rorvv4di_mask */
    case 6288:  /* avx512vl_rolvv4di_mask */
    case 6286:  /* avx512f_rorvv8di_mask */
    case 6284:  /* avx512f_rolvv8di_mask */
    case 6282:  /* avx512vl_rorvv4si_mask */
    case 6280:  /* avx512vl_rolvv4si_mask */
    case 6278:  /* avx512vl_rorvv8si_mask */
    case 6276:  /* avx512vl_rolvv8si_mask */
    case 6274:  /* avx512f_rorvv16si_mask */
    case 6272:  /* avx512f_rolvv16si_mask */
    case 6260:  /* lshrv8di3_mask */
    case 6258:  /* ashlv8di3_mask */
    case 6256:  /* lshrv16si3_mask */
    case 6254:  /* ashlv16si3_mask */
    case 6252:  /* lshrv32hi3_mask */
    case 6250:  /* ashlv32hi3_mask */
    case 6236:  /* lshrv2di3_mask */
    case 6234:  /* ashlv2di3_mask */
    case 6232:  /* lshrv4di3_mask */
    case 6230:  /* ashlv4di3_mask */
    case 6228:  /* lshrv4si3_mask */
    case 6226:  /* ashlv4si3_mask */
    case 6224:  /* lshrv8si3_mask */
    case 6222:  /* ashlv8si3_mask */
    case 6220:  /* lshrv8hi3_mask */
    case 6218:  /* ashlv8hi3_mask */
    case 6216:  /* lshrv16hi3_mask */
    case 6214:  /* ashlv16hi3_mask */
    case 6212:  /* ashrv8di3_mask */
    case 6210:  /* ashrv16si3_mask */
    case 6208:  /* ashrv4di3_mask */
    case 6206:  /* ashrv32hi3_mask */
    case 6200:  /* ashrv2di3_mask */
    case 6198:  /* ashrv4si3_mask */
    case 6196:  /* ashrv8si3_mask */
    case 6194:  /* ashrv8hi3_mask */
    case 6192:  /* ashrv16hi3_mask */
    case 6190:  /* *sse4_1_mulv4si3_mask */
    case 6188:  /* *avx2_mulv8si3_mask */
    case 6186:  /* *avx512f_mulv16si3_mask */
    case 6184:  /* *avx512dq_mulv2di3_mask */
    case 6182:  /* *avx512dq_mulv4di3_mask */
    case 6180:  /* *avx512dq_mulv8di3_mask */
    case 6146:  /* *mulv8hi3_mask */
    case 6144:  /* *mulv16hi3_mask */
    case 6142:  /* *mulv32hi3_mask */
    case 6140:  /* *sse2_ussubv8hi3_mask */
    case 6138:  /* *sse2_sssubv8hi3_mask */
    case 6136:  /* *sse2_usaddv8hi3_mask */
    case 6134:  /* *sse2_ssaddv8hi3_mask */
    case 6132:  /* *avx2_ussubv16hi3_mask */
    case 6130:  /* *avx2_sssubv16hi3_mask */
    case 6128:  /* *avx2_usaddv16hi3_mask */
    case 6126:  /* *avx2_ssaddv16hi3_mask */
    case 6124:  /* *avx512bw_ussubv32hi3_mask */
    case 6122:  /* *avx512bw_sssubv32hi3_mask */
    case 6120:  /* *avx512bw_usaddv32hi3_mask */
    case 6118:  /* *avx512bw_ssaddv32hi3_mask */
    case 6116:  /* *sse2_ussubv16qi3_mask */
    case 6114:  /* *sse2_sssubv16qi3_mask */
    case 6112:  /* *sse2_usaddv16qi3_mask */
    case 6110:  /* *sse2_ssaddv16qi3_mask */
    case 6108:  /* *avx2_ussubv32qi3_mask */
    case 6106:  /* *avx2_sssubv32qi3_mask */
    case 6104:  /* *avx2_usaddv32qi3_mask */
    case 6102:  /* *avx2_ssaddv32qi3_mask */
    case 6100:  /* *avx512bw_ussubv64qi3_mask */
    case 6098:  /* *avx512bw_sssubv64qi3_mask */
    case 6096:  /* *avx512bw_usaddv64qi3_mask */
    case 6094:  /* *avx512bw_ssaddv64qi3_mask */
    case 6092:  /* *subv8hi3_mask */
    case 6091:  /* *addv8hi3_mask */
    case 6090:  /* *subv16hi3_mask */
    case 6089:  /* *addv16hi3_mask */
    case 6088:  /* *subv32hi3_mask */
    case 6087:  /* *addv32hi3_mask */
    case 6086:  /* *subv32qi3_mask */
    case 6085:  /* *addv32qi3_mask */
    case 6084:  /* *subv16qi3_mask */
    case 6083:  /* *addv16qi3_mask */
    case 6082:  /* *subv64qi3_mask */
    case 6081:  /* *addv64qi3_mask */
    case 6080:  /* *subv2di3_mask */
    case 6079:  /* *addv2di3_mask */
    case 6078:  /* *subv4di3_mask */
    case 6077:  /* *addv4di3_mask */
    case 6076:  /* *subv8di3_mask */
    case 6075:  /* *addv8di3_mask */
    case 6074:  /* *subv4si3_mask */
    case 6073:  /* *addv4si3_mask */
    case 6072:  /* *subv8si3_mask */
    case 6071:  /* *addv8si3_mask */
    case 6070:  /* *subv16si3_mask */
    case 6069:  /* *addv16si3_mask */
    case 2784:  /* *xorv8df3_mask */
    case 2782:  /* *iorv8df3_mask */
    case 2780:  /* *andv8df3_mask */
    case 2778:  /* *xorv16sf3_mask */
    case 2776:  /* *iorv16sf3_mask */
    case 2774:  /* *andv16sf3_mask */
    case 2769:  /* *xorv2df3_mask */
    case 2767:  /* *iorv2df3_mask */
    case 2765:  /* *andv2df3_mask */
    case 2763:  /* *xorv4df3_mask */
    case 2761:  /* *iorv4df3_mask */
    case 2759:  /* *andv4df3_mask */
    case 2757:  /* *xorv4sf3_mask */
    case 2755:  /* *iorv4sf3_mask */
    case 2753:  /* *andv4sf3_mask */
    case 2751:  /* *xorv8sf3_mask */
    case 2749:  /* *iorv8sf3_mask */
    case 2747:  /* *andv8sf3_mask */
    case 2153:  /* *sminv2df3_mask */
    case 2151:  /* *smaxv2df3_mask */
    case 2149:  /* *sminv4df3_mask */
    case 2147:  /* *smaxv4df3_mask */
    case 2144:  /* *sminv8df3_mask */
    case 2140:  /* *smaxv8df3_mask */
    case 2137:  /* *sminv4sf3_mask */
    case 2135:  /* *smaxv4sf3_mask */
    case 2133:  /* *sminv8sf3_mask */
    case 2131:  /* *smaxv8sf3_mask */
    case 2128:  /* *sminv16sf3_mask */
    case 2124:  /* *smaxv16sf3_mask */
    case 2121:  /* *sminv8hf3_mask */
    case 2119:  /* *smaxv8hf3_mask */
    case 2117:  /* *sminv16hf3_mask */
    case 2115:  /* *smaxv16hf3_mask */
    case 2112:  /* *sminv32hf3_mask */
    case 2108:  /* *smaxv32hf3_mask */
    case 1998:  /* sse2_divv2df3_mask */
    case 1996:  /* avx_divv4df3_mask */
    case 1993:  /* avx512f_divv8df3_mask */
    case 1990:  /* sse_divv4sf3_mask */
    case 1988:  /* avx_divv8sf3_mask */
    case 1985:  /* avx512f_divv16sf3_mask */
    case 1982:  /* avx512fp16_divv8hf3_mask */
    case 1980:  /* avx512fp16_divv16hf3_mask */
    case 1977:  /* avx512fp16_divv32hf3_mask */
    case 1943:  /* *mulv2df3_mask */
    case 1939:  /* *mulv4df3_mask */
    case 1935:  /* *mulv8df3_mask */
    case 1931:  /* *mulv4sf3_mask */
    case 1927:  /* *mulv8sf3_mask */
    case 1923:  /* *mulv16sf3_mask */
    case 1919:  /* *mulv8hf3_mask */
    case 1915:  /* *mulv16hf3_mask */
    case 1911:  /* *mulv32hf3_mask */
    case 1877:  /* *subv2df3_mask */
    case 1873:  /* *addv2df3_mask */
    case 1869:  /* *subv4df3_mask */
    case 1865:  /* *addv4df3_mask */
    case 1861:  /* *subv8df3_mask */
    case 1857:  /* *addv8df3_mask */
    case 1853:  /* *subv4sf3_mask */
    case 1849:  /* *addv4sf3_mask */
    case 1845:  /* *subv8sf3_mask */
    case 1841:  /* *addv8sf3_mask */
    case 1837:  /* *subv16sf3_mask */
    case 1833:  /* *addv16sf3_mask */
    case 1829:  /* *subv8hf3_mask */
    case 1825:  /* *addv8hf3_mask */
    case 1821:  /* *subv16hf3_mask */
    case 1817:  /* *addv16hf3_mask */
    case 1813:  /* *subv32hf3_mask */
    case 1809:  /* *addv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2143:  /* *sminv8df3_round */
    case 2139:  /* *smaxv8df3_round */
    case 2127:  /* *sminv16sf3_round */
    case 2123:  /* *smaxv16sf3_round */
    case 2111:  /* *sminv32hf3_round */
    case 2107:  /* *smaxv32hf3_round */
    case 1992:  /* avx512f_divv8df3_round */
    case 1984:  /* avx512f_divv16sf3_round */
    case 1976:  /* avx512fp16_divv32hf3_round */
    case 1942:  /* *mulv2df3_round */
    case 1938:  /* *mulv4df3_round */
    case 1934:  /* *mulv8df3_round */
    case 1930:  /* *mulv4sf3_round */
    case 1926:  /* *mulv8sf3_round */
    case 1922:  /* *mulv16sf3_round */
    case 1918:  /* *mulv8hf3_round */
    case 1914:  /* *mulv16hf3_round */
    case 1910:  /* *mulv32hf3_round */
    case 1876:  /* *subv2df3_round */
    case 1872:  /* *addv2df3_round */
    case 1868:  /* *subv4df3_round */
    case 1864:  /* *addv4df3_round */
    case 1860:  /* *subv8df3_round */
    case 1856:  /* *addv8df3_round */
    case 1852:  /* *subv4sf3_round */
    case 1848:  /* *addv4sf3_round */
    case 1844:  /* *subv8sf3_round */
    case 1840:  /* *addv8sf3_round */
    case 1836:  /* *subv16sf3_round */
    case 1832:  /* *addv16sf3_round */
    case 1828:  /* *subv8hf3_round */
    case 1824:  /* *addv8hf3_round */
    case 1820:  /* *subv16hf3_round */
    case 1816:  /* *addv16hf3_round */
    case 1812:  /* *subv32hf3_round */
    case 1808:  /* *addv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1782:  /* kunpckdi */
    case 1781:  /* kunpcksi */
    case 1780:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1709:  /* *avx512vl_storev8bf_mask */
    case 1708:  /* *avx512vl_storev16bf_mask */
    case 1707:  /* *avx512bw_storev32bf_mask */
    case 1706:  /* *avx512fp16_storev8hf_mask */
    case 1705:  /* *avx512vl_storev16hf_mask */
    case 1704:  /* *avx512bw_storev32hf_mask */
    case 1703:  /* *avx512vl_storev8hi_mask */
    case 1702:  /* *avx512vl_storev16hi_mask */
    case 1701:  /* *avx512bw_storev32hi_mask */
    case 1700:  /* *avx512vl_storev32qi_mask */
    case 1699:  /* *avx512vl_storev16qi_mask */
    case 1698:  /* *avx512bw_storev64qi_mask */
    case 1697:  /* *avx512vl_storev2df_mask */
    case 1696:  /* *avx512vl_storev4df_mask */
    case 1695:  /* *avx512f_storev8df_mask */
    case 1694:  /* *avx512vl_storev4sf_mask */
    case 1693:  /* *avx512vl_storev8sf_mask */
    case 1692:  /* *avx512f_storev16sf_mask */
    case 1691:  /* *avx512vl_storev2di_mask */
    case 1690:  /* *avx512vl_storev4di_mask */
    case 1689:  /* *avx512f_storev8di_mask */
    case 1688:  /* *avx512vl_storev4si_mask */
    case 1687:  /* *avx512vl_storev8si_mask */
    case 1686:  /* *avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1661:  /* avx512f_storedf_mask */
    case 1660:  /* avx512f_storesf_mask */
    case 1659:  /* avx512f_storehf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 3304:  /* *fma4i_vmfnmadd_v2df */
    case 3303:  /* *fma4i_vmfnmadd_v4sf */
    case 1658:  /* *avx512f_loaddf_mask */
    case 1657:  /* *avx512f_loadsf_mask */
    case 1656:  /* *avx512f_loadhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1655:  /* avx512f_movdf_mask */
    case 1654:  /* avx512f_movsf_mask */
    case 1653:  /* avx512f_movhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 8556:  /* conflictv2di_mask */
    case 8554:  /* conflictv4di_mask */
    case 8552:  /* conflictv8di_mask */
    case 8550:  /* conflictv4si_mask */
    case 8548:  /* conflictv8si_mask */
    case 8546:  /* conflictv16si_mask */
    case 8128:  /* avx512f_vcvtph2ps512_mask */
    case 8125:  /* vcvtph2ps256_mask */
    case 8123:  /* *vcvtph2ps_load_mask */
    case 7477:  /* avx512er_rsqrt28v8df_mask */
    case 7473:  /* avx512er_rsqrt28v16sf_mask */
    case 7461:  /* avx512er_rcp28v8df_mask */
    case 7457:  /* avx512er_rcp28v16sf_mask */
    case 7453:  /* avx512er_exp2v8df_mask */
    case 7449:  /* avx512er_exp2v16sf_mask */
    case 5606:  /* avx512vl_getexpv2df_mask */
    case 5602:  /* avx512vl_getexpv4df_mask */
    case 5598:  /* avx512f_getexpv8df_mask */
    case 5594:  /* avx512vl_getexpv4sf_mask */
    case 5590:  /* avx512vl_getexpv8sf_mask */
    case 5586:  /* avx512f_getexpv16sf_mask */
    case 5582:  /* avx512fp16_getexpv8hf_mask */
    case 5578:  /* avx512vl_getexpv16hf_mask */
    case 5574:  /* avx512bw_getexpv32hf_mask */
    case 3907:  /* fixuns_notruncv2dfv2di2_mask */
    case 3905:  /* fixuns_notruncv4dfv4di2_mask */
    case 3902:  /* fixuns_notruncv8dfv8di2_mask */
    case 3899:  /* fix_notruncv2dfv2di2_mask */
    case 3897:  /* fix_notruncv4dfv4di2_mask */
    case 3894:  /* fix_notruncv8dfv8di2_mask */
    case 3856:  /* fixuns_notruncv4dfv4si2_mask */
    case 3852:  /* fixuns_notruncv8dfv8si2_mask */
    case 3845:  /* avx_cvtpd2dq256_mask */
    case 3842:  /* avx512f_cvtpd2dq512_mask */
    case 3752:  /* avx512dq_cvtps2uqqv4di_mask */
    case 3749:  /* avx512dq_cvtps2uqqv8di_mask */
    case 3744:  /* avx512dq_cvtps2qqv4di_mask */
    case 3741:  /* avx512dq_cvtps2qqv8di_mask */
    case 3737:  /* avx512vl_fixuns_notruncv4sfv4si_mask */
    case 3733:  /* avx512vl_fixuns_notruncv8sfv8si_mask */
    case 3729:  /* avx512f_fixuns_notruncv16sfv16si_mask */
    case 3725:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 3722:  /* sse2_fix_notruncv4sfv4si_mask */
    case 3720:  /* avx_fix_notruncv8sfv8si_mask */
    case 3461:  /* avx512fp16_vcvtph2qq_v2di_mask */
    case 3457:  /* avx512fp16_vcvtph2uqq_v2di_mask */
    case 3453:  /* avx512fp16_vcvtph2dq_v4si_mask */
    case 3449:  /* avx512fp16_vcvtph2udq_v4si_mask */
    case 3445:  /* avx512fp16_vcvtph2w_v8hi_mask */
    case 3441:  /* avx512fp16_vcvtph2uw_v8hi_mask */
    case 3437:  /* avx512fp16_vcvtph2qq_v4di_mask */
    case 3433:  /* avx512fp16_vcvtph2uqq_v4di_mask */
    case 3429:  /* avx512fp16_vcvtph2dq_v8si_mask */
    case 3425:  /* avx512fp16_vcvtph2udq_v8si_mask */
    case 3421:  /* avx512fp16_vcvtph2w_v16hi_mask */
    case 3417:  /* avx512fp16_vcvtph2uw_v16hi_mask */
    case 3413:  /* avx512fp16_vcvtph2qq_v8di_mask */
    case 3409:  /* avx512fp16_vcvtph2uqq_v8di_mask */
    case 3405:  /* avx512fp16_vcvtph2dq_v16si_mask */
    case 3401:  /* avx512fp16_vcvtph2udq_v16si_mask */
    case 3397:  /* avx512fp16_vcvtph2w_v32hi_mask */
    case 3393:  /* avx512fp16_vcvtph2uw_v32hi_mask */
    case 2095:  /* rsqrt14v2df_mask */
    case 2093:  /* rsqrt14v4df_mask */
    case 2091:  /* rsqrt14v8df_mask */
    case 2089:  /* rsqrt14v4sf_mask */
    case 2087:  /* rsqrt14v8sf_mask */
    case 2085:  /* rsqrt14v16sf_mask */
    case 2083:  /* avx512fp16_rsqrtv8hf2_mask */
    case 2081:  /* avx512fp16_rsqrtv16hf2_mask */
    case 2079:  /* avx512fp16_rsqrtv32hf2_mask */
    case 2023:  /* rcp14v2df_mask */
    case 2021:  /* rcp14v4df_mask */
    case 2019:  /* rcp14v8df_mask */
    case 2017:  /* rcp14v4sf_mask */
    case 2015:  /* rcp14v8sf_mask */
    case 2013:  /* rcp14v16sf_mask */
    case 2008:  /* avx512fp16_rcpv8hf2_mask */
    case 2006:  /* avx512fp16_rcpv16hf2_mask */
    case 2004:  /* avx512fp16_rcpv32hf2_mask */
    case 1640:  /* *avx512vl_loadv8bf_mask */
    case 1639:  /* *avx512vl_loadv16bf_mask */
    case 1638:  /* *avx512bw_loadv32bf_mask */
    case 1637:  /* *avx512fp16_loadv8hf_mask */
    case 1636:  /* *avx512vl_loadv16hf_mask */
    case 1635:  /* *avx512bw_loadv32hf_mask */
    case 1634:  /* *avx512vl_loadv8hi_mask */
    case 1633:  /* *avx512vl_loadv16hi_mask */
    case 1632:  /* *avx512bw_loadv32hi_mask */
    case 1631:  /* *avx512vl_loadv32qi_mask */
    case 1630:  /* *avx512vl_loadv16qi_mask */
    case 1629:  /* *avx512bw_loadv64qi_mask */
    case 1616:  /* *avx512vl_loadv2df_mask */
    case 1615:  /* *avx512vl_loadv4df_mask */
    case 1614:  /* *avx512f_loadv8df_mask */
    case 1613:  /* *avx512vl_loadv4sf_mask */
    case 1612:  /* *avx512vl_loadv8sf_mask */
    case 1611:  /* *avx512f_loadv16sf_mask */
    case 1610:  /* *avx512vl_loadv2di_mask */
    case 1609:  /* *avx512vl_loadv4di_mask */
    case 1608:  /* *avx512f_loadv8di_mask */
    case 1607:  /* *avx512vl_loadv4si_mask */
    case 1606:  /* *avx512vl_loadv8si_mask */
    case 1605:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1604:  /* *vmovv2df_constm1_pternlog_false_dep */
    case 1603:  /* *vmovv4df_constm1_pternlog_false_dep */
    case 1602:  /* *vmovv8df_constm1_pternlog_false_dep */
    case 1601:  /* *vmovv4sf_constm1_pternlog_false_dep */
    case 1600:  /* *vmovv8sf_constm1_pternlog_false_dep */
    case 1599:  /* *vmovv16sf_constm1_pternlog_false_dep */
    case 1598:  /* *vmovv8bf_constm1_pternlog_false_dep */
    case 1597:  /* *vmovv16bf_constm1_pternlog_false_dep */
    case 1596:  /* *vmovv32bf_constm1_pternlog_false_dep */
    case 1595:  /* *vmovv8hf_constm1_pternlog_false_dep */
    case 1594:  /* *vmovv16hf_constm1_pternlog_false_dep */
    case 1593:  /* *vmovv32hf_constm1_pternlog_false_dep */
    case 1592:  /* *vmovv1ti_constm1_pternlog_false_dep */
    case 1591:  /* *vmovv2ti_constm1_pternlog_false_dep */
    case 1590:  /* *vmovv4ti_constm1_pternlog_false_dep */
    case 1589:  /* *vmovv2di_constm1_pternlog_false_dep */
    case 1588:  /* *vmovv4di_constm1_pternlog_false_dep */
    case 1587:  /* *vmovv8di_constm1_pternlog_false_dep */
    case 1586:  /* *vmovv4si_constm1_pternlog_false_dep */
    case 1585:  /* *vmovv8si_constm1_pternlog_false_dep */
    case 1584:  /* *vmovv16si_constm1_pternlog_false_dep */
    case 1583:  /* *vmovv8hi_constm1_pternlog_false_dep */
    case 1582:  /* *vmovv16hi_constm1_pternlog_false_dep */
    case 1581:  /* *vmovv32hi_constm1_pternlog_false_dep */
    case 1580:  /* *vmovv16qi_constm1_pternlog_false_dep */
    case 1579:  /* *vmovv32qi_constm1_pternlog_false_dep */
    case 1578:  /* *vmovv64qi_constm1_pternlog_false_dep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 7048:  /* *sse2_maskmovdqu */
    case 7047:  /* *sse2_maskmovdqu */
    case 1548:  /* *mmx_maskmovq */
    case 1547:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4085:  /* *avx512dq_vextracti64x2_1 */
    case 4084:  /* *avx512dq_vextractf64x2_1 */
    case 1535:  /* *pshufwv2hi_1 */
    case 1534:  /* *pshufwv2bf_1 */
    case 1533:  /* *pshufwv2hf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 5762:  /* sse2_shufpd_v2df */
    case 5761:  /* sse2_shufpd_v2di */
    case 1532:  /* *punpckwd */
    case 1531:  /* *punpckwd */
    case 1530:  /* *punpckwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 7197:  /* avx2_pblenddv4si */
    case 7196:  /* avx2_pblenddv8si */
    case 7195:  /* *avx2_pblendbf */
    case 7194:  /* *avx2_pblendph */
    case 7193:  /* *avx2_pblendw */
    case 7192:  /* sse4_1_pblendbf */
    case 7191:  /* sse4_1_pblendph */
    case 7190:  /* sse4_1_pblendw */
    case 7150:  /* sse4_1_blendpd */
    case 7149:  /* avx_blendpd256 */
    case 7148:  /* sse4_1_blendps */
    case 7147:  /* avx_blendps256 */
    case 1685:  /* avx512vl_blendmv8bf */
    case 1684:  /* avx512vl_blendmv16bf */
    case 1683:  /* avx512bw_blendmv32bf */
    case 1682:  /* avx512fp16_blendmv8hf */
    case 1681:  /* avx512vl_blendmv16hf */
    case 1680:  /* avx512bw_blendmv32hf */
    case 1679:  /* avx512vl_blendmv8hi */
    case 1678:  /* avx512vl_blendmv16hi */
    case 1677:  /* avx512bw_blendmv32hi */
    case 1676:  /* avx512vl_blendmv32qi */
    case 1675:  /* avx512vl_blendmv16qi */
    case 1674:  /* avx512bw_blendmv64qi */
    case 1673:  /* avx512vl_blendmv2df */
    case 1672:  /* avx512vl_blendmv4df */
    case 1671:  /* avx512f_blendmv8df */
    case 1670:  /* avx512vl_blendmv4sf */
    case 1669:  /* avx512vl_blendmv8sf */
    case 1668:  /* avx512f_blendmv16sf */
    case 1667:  /* avx512vl_blendmv2di */
    case 1666:  /* avx512vl_blendmv4di */
    case 1665:  /* avx512f_blendmv8di */
    case 1664:  /* avx512vl_blendmv4si */
    case 1663:  /* avx512vl_blendmv8si */
    case 1662:  /* avx512f_blendmv16si */
    case 1511:  /* *mmx_pblendw32 */
    case 1510:  /* *mmx_pblendw32 */
    case 1509:  /* *mmx_pblendw32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7672:  /* avx2_permv4df_1 */
    case 7670:  /* avx2_permv4di_1 */
    case 6976:  /* sse2_pshuflw_1 */
    case 6970:  /* sse2_pshufd_1 */
    case 4089:  /* *avx512f_vextracti32x4_1 */
    case 4088:  /* *avx512f_vextractf32x4_1 */
    case 1508:  /* mmx_pshufwv4hi_1 */
    case 1507:  /* mmx_pshufwv4bf_1 */
    case 1506:  /* mmx_pshufwv4hf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 6991:  /* *vec_extractv16qi_zext */
    case 6990:  /* *vec_extractv8hi_zext */
    case 6989:  /* *vec_extractv16qi_zext */
    case 1529:  /* *pextrb_zext */
    case 1528:  /* *pextrb_zext */
    case 1526:  /* *pextrw_zext */
    case 1504:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 7000:  /* *vec_extractv4ti */
    case 6999:  /* *vec_extractv2ti */
    case 6997:  /* *vec_extractv4si_mem */
    case 6996:  /* *vec_extractv4si */
    case 6993:  /* *vec_extractv8hi_mem */
    case 6992:  /* *vec_extractv16qi_mem */
    case 6988:  /* *vec_extractv8hi */
    case 6987:  /* *vec_extractv16qi */
    case 5639:  /* *vec_extractv4dfdf_valign */
    case 5638:  /* *vec_extractv8dfdf_valign */
    case 5637:  /* *vec_extractv8sfsf_valign */
    case 5636:  /* *vec_extractv16sfsf_valign */
    case 5635:  /* *vec_extractv4didi_valign */
    case 5634:  /* *vec_extractv8didi_valign */
    case 5633:  /* *vec_extractv8sisi_valign */
    case 5632:  /* *vec_extractv16sisi_valign */
    case 4145:  /* *vec_extractbf */
    case 4144:  /* *vec_extracthf */
    case 4081:  /* *vec_extractv4sf_mem */
    case 4080:  /* *sse4_1_extractps */
    case 1527:  /* *pextrb */
    case 1525:  /* *pextrwv2bf */
    case 1524:  /* *pextrwv2hf */
    case 1523:  /* *pextrw */
    case 1503:  /* *mmx_pextrwv4bf */
    case 1502:  /* *mmx_pextrwv4hf */
    case 1501:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 6913:  /* sse4_1_pinsrq */
    case 6912:  /* sse4_1_pinsrd */
    case 6911:  /* sse2_pinsrbf */
    case 6910:  /* sse2_pinsrph */
    case 6909:  /* sse2_pinsrw */
    case 6908:  /* sse4_1_pinsrb */
    case 4067:  /* *vec_setv4sf_sse4_1 */
    case 1522:  /* *pinsrb */
    case 1521:  /* *pinsrw */
    case 1520:  /* *pinsrw */
    case 1519:  /* *pinsrw */
    case 1500:  /* *mmx_pinsrw */
    case 1499:  /* *mmx_pinsrw */
    case 1498:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8877:  /* vcvtneobf162ps_v16bf */
    case 8876:  /* vcvtneoph2ps_v16hf */
    case 8875:  /* vcvtneobf162ps_v8bf */
    case 8874:  /* vcvtneoph2ps_v8hf */
    case 8873:  /* vcvtneebf162ps_v16bf */
    case 8872:  /* vcvtneeph2ps_v16hf */
    case 8871:  /* vcvtneebf162ps_v8bf */
    case 8870:  /* vcvtneeph2ps_v8hf */
    case 8869:  /* vbcstnesh2ps_v4sf */
    case 8868:  /* vbcstnesh2ps_v8sf */
    case 8867:  /* vbcstnebf162ps_v4sf */
    case 8866:  /* vbcstnebf162ps_v8sf */
    case 8576:  /* avx512f_pd512_pd */
    case 8575:  /* avx512f_ps512_ps */
    case 8574:  /* avx512f_si512_si */
    case 7828:  /* *avx512dq_broadcastv8sf */
    case 7826:  /* *avx512dq_broadcastv16sf */
    case 7824:  /* *avx512dq_broadcastv4si */
    case 7822:  /* *avx512dq_broadcastv8si */
    case 7820:  /* *avx512dq_broadcastv16si */
    case 7732:  /* avx512vl_vec_dupv8bf */
    case 7730:  /* avx512vl_vec_dupv16bf */
    case 7728:  /* avx512bw_vec_dupv32bf */
    case 7726:  /* avx512fp16_vec_dupv8hf */
    case 7724:  /* avx512vl_vec_dupv16hf */
    case 7722:  /* avx512bw_vec_dupv32hf */
    case 7720:  /* avx512vl_vec_dupv8hi */
    case 7718:  /* avx512vl_vec_dupv16hi */
    case 7716:  /* avx512bw_vec_dupv32hi */
    case 7714:  /* avx512vl_vec_dupv32qi */
    case 7712:  /* avx512vl_vec_dupv16qi */
    case 7710:  /* avx512bw_vec_dupv64qi */
    case 7708:  /* avx512vl_vec_dupv2df */
    case 7706:  /* avx512vl_vec_dupv4df */
    case 7704:  /* avx512f_vec_dupv8df */
    case 7702:  /* avx512vl_vec_dupv4sf */
    case 7700:  /* avx512vl_vec_dupv8sf */
    case 7698:  /* avx512f_vec_dupv16sf */
    case 7696:  /* avx512vl_vec_dupv2di */
    case 7694:  /* avx512vl_vec_dupv4di */
    case 7692:  /* avx512f_vec_dupv8di */
    case 7690:  /* avx512vl_vec_dupv4si */
    case 7688:  /* avx512vl_vec_dupv8si */
    case 7686:  /* avx512f_vec_dupv16si */
    case 7685:  /* avx512bw_vec_dupv32bf_1 */
    case 7684:  /* avx512bw_vec_dupv32hf_1 */
    case 7683:  /* avx512bw_vec_dupv64qi_1 */
    case 7682:  /* avx512bw_vec_dupv32hi_1 */
    case 7681:  /* avx512f_vec_dupv8di_1 */
    case 7680:  /* avx512f_vec_dupv16si_1 */
    case 7679:  /* avx2_vec_dupv4df */
    case 7614:  /* avx2_pbroadcastv16bf_1 */
    case 7613:  /* avx2_pbroadcastv16hf_1 */
    case 7612:  /* avx2_pbroadcastv4di_1 */
    case 7611:  /* avx2_pbroadcastv8si_1 */
    case 7610:  /* avx2_pbroadcastv16hi_1 */
    case 7609:  /* avx2_pbroadcastv32qi_1 */
    case 7608:  /* avx2_pbroadcastv8bf */
    case 7607:  /* avx2_pbroadcastv16bf */
    case 7606:  /* avx2_pbroadcastv32bf */
    case 7605:  /* avx2_pbroadcastv8hf */
    case 7604:  /* avx2_pbroadcastv16hf */
    case 7603:  /* avx2_pbroadcastv32hf */
    case 7602:  /* avx2_pbroadcastv2di */
    case 7601:  /* avx2_pbroadcastv4di */
    case 7600:  /* avx2_pbroadcastv4si */
    case 7599:  /* avx2_pbroadcastv8si */
    case 7598:  /* avx2_pbroadcastv8hi */
    case 7597:  /* avx2_pbroadcastv16hi */
    case 7596:  /* avx2_pbroadcastv32hi */
    case 7595:  /* avx2_pbroadcastv16qi */
    case 7594:  /* avx2_pbroadcastv32qi */
    case 7593:  /* avx2_pbroadcastv64qi */
    case 7592:  /* avx2_pbroadcastv8di */
    case 7591:  /* avx2_pbroadcastv16si */
    case 7368:  /* sse4_1_zero_extendv2siv2di2 */
    case 7366:  /* sse4_1_sign_extendv2siv2di2 */
    case 7344:  /* sse4_1_zero_extendv2hiv2di2 */
    case 7342:  /* sse4_1_sign_extendv2hiv2di2 */
    case 7332:  /* avx2_zero_extendv4hiv4di2 */
    case 7330:  /* avx2_sign_extendv4hiv4di2 */
    case 7317:  /* sse4_1_zero_extendv2qiv2di2 */
    case 7315:  /* sse4_1_sign_extendv2qiv2di2 */
    case 7305:  /* avx2_zero_extendv4qiv4di2 */
    case 7303:  /* avx2_sign_extendv4qiv4di2 */
    case 7293:  /* avx512f_zero_extendv8qiv8di2 */
    case 7291:  /* avx512f_sign_extendv8qiv8di2 */
    case 7277:  /* sse4_1_zero_extendv4hiv4si2 */
    case 7275:  /* sse4_1_sign_extendv4hiv4si2 */
    case 7249:  /* sse4_1_zero_extendv4qiv4si2 */
    case 7247:  /* sse4_1_sign_extendv4qiv4si2 */
    case 7237:  /* avx2_zero_extendv8qiv8si2 */
    case 7235:  /* avx2_sign_extendv8qiv8si2 */
    case 7217:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 7215:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 6032:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 6031:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 6030:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 6026:  /* avx512f_us_truncatev8div16qi2 */
    case 6025:  /* avx512f_truncatev8div16qi2 */
    case 6024:  /* avx512f_ss_truncatev8div16qi2 */
    case 6011:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 6010:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 6009:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 5989:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 5988:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 5987:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 5959:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 5958:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 5957:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 5956:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 5955:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 5954:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 5913:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 5912:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 5911:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 5910:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 5909:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 5908:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 5877:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 5876:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 5875:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 5874:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 5873:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 5872:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 5853:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 5852:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 5851:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 4075:  /* *vec_setv2di_0_zero_extendsi_1 */
    case 4063:  /* *vec_setv2di_0_zero_extendhi_1 */
    case 4036:  /* avx512f_vec_dupv8df_1 */
    case 4035:  /* avx512f_vec_dupv16sf_1 */
    case 4034:  /* avx2_vec_dupv8sf_1 */
    case 4033:  /* avx2_vec_dupv4sf */
    case 4032:  /* avx2_vec_dupv8sf */
    case 3988:  /* sse2_cvtps2pd */
    case 3957:  /* vec_unpacks_lo_v16sf */
    case 3956:  /* *avx_cvtps2pd256_2 */
    case 3928:  /* sse2_cvttpd2dq */
    case 3922:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 3920:  /* avx512dq_fix_truncv2sfv2di2 */
    case 3869:  /* *fixuns_truncv2dfv2si2 */
    case 3838:  /* sse2_cvtdq2pd */
    case 3837:  /* avx_cvtdq2pd256_2 */
    case 3836:  /* avx512f_cvtdq2pd512_2 */
    case 3834:  /* *floatunsv2siv2df2 */
    case 3782:  /* sse2_cvttsd2si */
    case 3777:  /* avx512f_vcvttsd2usi */
    case 3773:  /* avx512f_vcvttss2usi */
    case 3694:  /* sse_cvttss2si */
    case 3688:  /* sse_cvttps2pi */
    case 3637:  /* avx512fp16_float_extend_phv2df2 */
    case 3631:  /* avx512fp16_float_extend_phv4sf2 */
    case 3629:  /* avx512fp16_float_extend_phv4df2 */
    case 3613:  /* avx512fp16_fixuns_truncsi2 */
    case 3611:  /* avx512fp16_fix_truncsi2 */
    case 3605:  /* avx512fp16_fixuns_truncv2di2 */
    case 3603:  /* avx512fp16_fix_truncv2di2 */
    case 3593:  /* avx512fp16_fixuns_truncv4di2 */
    case 3591:  /* avx512fp16_fix_truncv4di2 */
    case 3589:  /* avx512fp16_fixuns_truncv4si2 */
    case 3587:  /* avx512fp16_fix_truncv4si2 */
    case 1536:  /* *vec_dupv2hi */
    case 1517:  /* *vec_extractv2si_0_zext_sse4 */
    case 1513:  /* *vec_dupv4hi */
    case 1496:  /* sse4_1_zero_extendv2qiv2hi2 */
    case 1495:  /* sse4_1_sign_extendv2qiv2hi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 6906:  /* vec_interleave_lowv4si */
    case 6904:  /* *avx512f_interleave_lowv16si */
    case 6902:  /* avx2_interleave_lowv8si */
    case 6900:  /* vec_interleave_highv4si */
    case 6898:  /* *avx512f_interleave_highv16si */
    case 6896:  /* avx2_interleave_highv8si */
    case 6894:  /* vec_interleave_lowv8bf */
    case 6892:  /* vec_interleave_lowv8hf */
    case 6890:  /* vec_interleave_lowv8hi */
    case 6888:  /* avx2_interleave_lowv16bf */
    case 6886:  /* avx2_interleave_lowv16hf */
    case 6884:  /* avx2_interleave_lowv16hi */
    case 6882:  /* *avx512bw_interleave_lowv32bf */
    case 6880:  /* *avx512bw_interleave_lowv32hf */
    case 6878:  /* *avx512bw_interleave_lowv32hi */
    case 6876:  /* vec_interleave_highv8bf */
    case 6874:  /* vec_interleave_highv8hf */
    case 6872:  /* vec_interleave_highv8hi */
    case 6870:  /* avx2_interleave_highv16bf */
    case 6868:  /* avx2_interleave_highv16hf */
    case 6866:  /* avx2_interleave_highv16hi */
    case 6864:  /* avx512bw_interleave_highv32bf */
    case 6862:  /* avx512bw_interleave_highv32hf */
    case 6860:  /* avx512bw_interleave_highv32hi */
    case 6858:  /* vec_interleave_lowv16qi */
    case 6856:  /* avx2_interleave_lowv32qi */
    case 6854:  /* avx512bw_interleave_lowv64qi */
    case 6852:  /* vec_interleave_highv16qi */
    case 6850:  /* avx2_interleave_highv32qi */
    case 6848:  /* avx512bw_interleave_highv64qi */
    case 6613:  /* *xnorv2di3 */
    case 6612:  /* *xnorv4di3 */
    case 6611:  /* *xnorv4si3 */
    case 6610:  /* *xnorv8si3 */
    case 6609:  /* *xnorv8hi3 */
    case 6608:  /* *xnorv16hi3 */
    case 6607:  /* *xnorv32hi3 */
    case 6606:  /* *xnorv16qi3 */
    case 6605:  /* *xnorv32qi3 */
    case 6604:  /* *xnorv64qi3 */
    case 6603:  /* *xnorv8di3 */
    case 6602:  /* *xnorv16si3 */
    case 5759:  /* vec_interleave_lowv2di */
    case 5757:  /* *avx512f_interleave_lowv8di */
    case 5755:  /* avx2_interleave_lowv4di */
    case 5753:  /* vec_interleave_highv2di */
    case 5751:  /* *avx512f_interleave_highv8di */
    case 5749:  /* avx2_interleave_highv4di */
    case 4161:  /* *vec_interleave_lowv2df */
    case 4158:  /* avx_unpcklpd256 */
    case 4154:  /* avx512f_unpcklpd512 */
    case 4151:  /* *vec_interleave_highv2df */
    case 4148:  /* avx_unpckhpd256 */
    case 4146:  /* *avx512f_unpckhpd512 */
    case 4008:  /* vec_interleave_lowv4sf */
    case 4005:  /* avx_unpcklps256 */
    case 4003:  /* *avx512f_unpcklps512 */
    case 4001:  /* vec_interleave_highv4sf */
    case 3999:  /* avx_unpckhps256 */
    case 3997:  /* *avx512f_unpckhps512 */
    case 3996:  /* sse_movlhps_v8bf */
    case 3995:  /* sse_movlhps_v8hf */
    case 3994:  /* sse_movlhps_v8hi */
    case 3993:  /* sse_movlhps */
    case 3992:  /* sse_movhlps */
    case 1494:  /* mmx_punpckldq */
    case 1493:  /* mmx_punpckhdq */
    case 1492:  /* mmx_punpcklwd */
    case 1491:  /* mmx_punpckhwd */
    case 1490:  /* mmx_punpcklbw_low */
    case 1489:  /* mmx_punpcklbw */
    case 1488:  /* mmx_punpckhbw_low */
    case 1487:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 6836:  /* sse2_packssdw */
    case 6830:  /* sse2_packsswb */
    case 6637:  /* *nandv2di3 */
    case 6636:  /* *norv2di3 */
    case 6635:  /* *nandv4di3 */
    case 6634:  /* *norv4di3 */
    case 6633:  /* *nandv4si3 */
    case 6632:  /* *norv4si3 */
    case 6631:  /* *nandv8si3 */
    case 6630:  /* *norv8si3 */
    case 6629:  /* *nandv8hi3 */
    case 6628:  /* *norv8hi3 */
    case 6627:  /* *nandv16hi3 */
    case 6626:  /* *norv16hi3 */
    case 6625:  /* *nandv32hi3 */
    case 6624:  /* *norv32hi3 */
    case 6623:  /* *nandv16qi3 */
    case 6622:  /* *norv16qi3 */
    case 6621:  /* *nandv32qi3 */
    case 6620:  /* *norv32qi3 */
    case 6619:  /* *nandv64qi3 */
    case 6618:  /* *norv64qi3 */
    case 6617:  /* *nandv8di3 */
    case 6616:  /* *norv8di3 */
    case 6615:  /* *nandv16si3 */
    case 6614:  /* *norv16si3 */
    case 1486:  /* mmx_packssdw */
    case 1484:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 7514:  /* xop_pcmov_v2df */
    case 7513:  /* xop_pcmov_v4df256 */
    case 7512:  /* xop_pcmov_v4sf */
    case 7511:  /* xop_pcmov_v8sf256 */
    case 7510:  /* xop_pcmov_v8hf */
    case 7509:  /* xop_pcmov_v16hf256 */
    case 7508:  /* xop_pcmov_v1ti */
    case 7507:  /* xop_pcmov_v2ti256 */
    case 7506:  /* xop_pcmov_v2di */
    case 7505:  /* xop_pcmov_v4di256 */
    case 7504:  /* xop_pcmov_v4si */
    case 7503:  /* xop_pcmov_v8si256 */
    case 7502:  /* xop_pcmov_v8hi */
    case 7501:  /* xop_pcmov_v16hi256 */
    case 7500:  /* xop_pcmov_v16qi */
    case 7499:  /* xop_pcmov_v32qi256 */
    case 1455:  /* *xop_pcmov_v2bf */
    case 1454:  /* *xop_pcmov_v2hf */
    case 1453:  /* *xop_pcmov_v2hi */
    case 1452:  /* *xop_pcmov_v2qi */
    case 1451:  /* *xop_pcmov_v4qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1450:  /* *mmx_pblendvb_v4qi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 1449:  /* *mmx_pblendvb_v2hi_1 */
    case 1448:  /* *mmx_pblendvb_v2qi_1 */
    case 1447:  /* *mmx_pblendvb_v4qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7569:  /* xop_maskcmp_unsv2di3 */
    case 7568:  /* xop_maskcmp_unsv4si3 */
    case 7567:  /* xop_maskcmp_unsv8hi3 */
    case 7566:  /* xop_maskcmp_unsv16qi3 */
    case 7565:  /* xop_maskcmpv2di3 */
    case 7564:  /* xop_maskcmpv4si3 */
    case 7563:  /* xop_maskcmpv8hi3 */
    case 7562:  /* xop_maskcmpv16qi3 */
    case 1443:  /* *xop_maskcmp_unsv2hi3 */
    case 1442:  /* *xop_maskcmp_unsv2qi3 */
    case 1441:  /* *xop_maskcmp_unsv4qi3 */
    case 1440:  /* *xop_maskcmp_unsv2si3 */
    case 1439:  /* *xop_maskcmp_unsv4hi3 */
    case 1438:  /* *xop_maskcmp_unsv8qi3 */
    case 1437:  /* *xop_maskcmpv2hi3 */
    case 1436:  /* *xop_maskcmpv2qi3 */
    case 1435:  /* *xop_maskcmpv4qi3 */
    case 1434:  /* *xop_maskcmpv2si3 */
    case 1433:  /* *xop_maskcmpv4hi3 */
    case 1432:  /* *xop_maskcmpv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6169:  /* *sse4_1_mulv2siv2di3 */
    case 6167:  /* *vec_widen_smult_even_v8si */
    case 6165:  /* *vec_widen_smult_even_v16si */
    case 6163:  /* *vec_widen_umult_even_v4si */
    case 6161:  /* *vec_widen_umult_even_v8si */
    case 6159:  /* *vec_widen_umult_even_v16si */
    case 1381:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1544:  /* uavgv2hi3_ceil */
    case 1543:  /* uavgv2qi3_ceil */
    case 1542:  /* uavgv4qi3_ceil */
    case 1541:  /* *mmx_uavgv4hi3 */
    case 1540:  /* *mmx_uavgv8qi3 */
    case 1380:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 7083:  /* ssse3_pmaddubsw */
    case 7082:  /* ssse3_pmaddubsw128 */
    case 7073:  /* avx2_pmaddubsw256 */
    case 6178:  /* *sse2_pmaddwd */
    case 6177:  /* *avx2_pmaddwd */
    case 1379:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6157:  /* *umulv8hi3_highpart */
    case 6155:  /* *smulv8hi3_highpart */
    case 6153:  /* *umulv16hi3_highpart */
    case 6151:  /* *smulv16hi3_highpart */
    case 6149:  /* *umulv32hi3_highpart */
    case 6147:  /* *smulv32hi3_highpart */
    case 1378:  /* umulv2hi3_highpart */
    case 1377:  /* smulv2hi3_highpart */
    case 1376:  /* *mmx_umulv4hi3_highpart */
    case 1375:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 6005:  /* *avx512f_pshufd_truncv2div2si_1 */
    case 1325:  /* mmx_pi2fw */
    case 1324:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1318:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2239:  /* sse3_hsubv2df3 */
    case 1317:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2238:  /* *sse3_haddv2df3 */
    case 1316:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7398:  /* ptesttf2 */
    case 7397:  /* *avx_ptestv4df */
    case 7396:  /* *avx_ptestv8sf */
    case 7395:  /* *avx_ptestv2ti */
    case 7394:  /* *avx_ptestv4di */
    case 7393:  /* *avx_ptestv8si */
    case 7392:  /* *avx_ptestv16hi */
    case 7391:  /* *avx_ptestv32qi */
    case 7390:  /* *sse4_1_ptestv2df */
    case 7389:  /* *sse4_1_ptestv4sf */
    case 7388:  /* *sse4_1_ptestv1ti */
    case 7387:  /* *sse4_1_ptestv2di */
    case 7386:  /* *sse4_1_ptestv4si */
    case 7385:  /* *sse4_1_ptestv8hi */
    case 7384:  /* *sse4_1_ptestv16qi */
    case 7383:  /* avx_vtestpd */
    case 7382:  /* avx_vtestpd256 */
    case 7381:  /* avx_vtestps */
    case 7380:  /* avx_vtestps256 */
    case 1779:  /* kortestdi_ccz */
    case 1778:  /* kortestsi_ccz */
    case 1777:  /* kortesthi_ccz */
    case 1776:  /* kortestqi_ccz */
    case 1775:  /* kortestdi_ccc */
    case 1774:  /* kortestsi_ccc */
    case 1773:  /* kortesthi_ccc */
    case 1772:  /* kortestqi_ccc */
    case 1771:  /* *kortestdi */
    case 1770:  /* *kortestsi */
    case 1769:  /* *kortesthi */
    case 1768:  /* *kortestqi */
    case 1767:  /* ktestdi */
    case 1766:  /* ktestsi */
    case 1765:  /* ktesthi */
    case 1764:  /* ktestqi */
    case 1277:  /* tpause */
    case 1274:  /* umwait */
    case 1273:  /* enqcmds_di */
    case 1272:  /* enqcmd_di */
    case 1271:  /* enqcmds_si */
    case 1270:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1267:  /* movdir64b_di */
    case 1266:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1260:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1249:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1233:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7054:  /* sse3_monitor_di */
    case 7053:  /* sse3_monitor_si */
    case 1261:  /* *wrpkru */
    case 1257:  /* monitorx_di */
    case 1256:  /* monitorx_si */
    case 1255:  /* mwaitx */
    case 1232:  /* lwp_lwpvalsi */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1225:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 1213:  /* rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1205:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1200:  /* *stack_protect_set_3_di_di */
    case 1199:  /* *stack_protect_set_3_di_si */
    case 1198:  /* *stack_protect_set_3_si_di */
    case 1197:  /* *stack_protect_set_3_si_si */
    case 1196:  /* *stack_protect_set_2_di_si */
    case 1195:  /* *stack_protect_set_2_si_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1188:  /* adjust_stack_and_probe_di */
    case 1187:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 7187:  /* *sse4_1_pblendvb_lt */
    case 7186:  /* *avx2_pblendvb_lt */
    case 7160:  /* *sse4_1_blendvpd_lt */
    case 7159:  /* *avx_blendvpd256_lt */
    case 7158:  /* *sse4_1_blendvps_lt */
    case 7157:  /* *avx_blendvps256_lt */
    case 1154:  /* *ieee_mindf3_1 */
    case 1153:  /* *ieee_minsf3_1 */
    case 1152:  /* *ieee_maxdf3_1 */
    case 1151:  /* *ieee_maxsf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 2846:  /* *fma_fmadd_v2df */
    case 2844:  /* *fma_fmadd_v4df */
    case 2840:  /* *fma_fmadd_v8df */
    case 2839:  /* *fma_fmadd_df */
    case 2837:  /* *fma_fmadd_v4sf */
    case 2835:  /* *fma_fmadd_v8sf */
    case 2831:  /* *fma_fmadd_v16sf */
    case 2830:  /* *fma_fmadd_sf */
    case 2829:  /* *fma_fmadd_hf */
    case 2827:  /* *fma_fmadd_v8hf */
    case 2825:  /* *fma_fmadd_v16hf */
    case 2821:  /* *fma_fmadd_v32hf */
    case 2820:  /* *fma_fmadd_v4df */
    case 2819:  /* *fma_fmadd_v8sf */
    case 2818:  /* *fma_fmadd_v2df */
    case 2817:  /* *fma_fmadd_v4sf */
    case 2816:  /* *fma_fmadd_df */
    case 2815:  /* *fma_fmadd_sf */
    case 1138:  /* *xop_pcmov_df */
    case 1137:  /* *xop_pcmov_sf */
    case 1136:  /* *movsfcc_1_387 */
    case 1135:  /* *movdfcc_1 */
    case 1134:  /* *movxfcc_1 */
    case 1132:  /* *movqicc_noc */
    case 1131:  /* *movsicc_noc */
    case 1130:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1124:  /* *strlenqi_1 */
    case 1123:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1122:  /* *cmpstrnqi_1 */
    case 1121:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1120:  /* *cmpstrnqi_nz_1 */
    case 1119:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1118:  /* *rep_stosqi */
    case 1117:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1116:  /* *rep_stossi */
    case 1115:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1114:  /* *strsetqi_1 */
    case 1113:  /* *strsetqi_1 */
    case 1112:  /* *strsethi_1 */
    case 1111:  /* *strsethi_1 */
    case 1110:  /* *strsetsi_1 */
    case 1109:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1108:  /* *rep_movqi */
    case 1107:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 1106:  /* *rep_movsi */
    case 1105:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 1104:  /* *strmovqi_1 */
    case 1103:  /* *strmovqi_1 */
    case 1102:  /* *strmovhi_1 */
    case 1101:  /* *strmovhi_1 */
    case 1100:  /* *strmovsi_1 */
    case 1099:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1089:  /* fistdi2_ceil */
    case 1088:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 8898:  /* atomic_storedi_fpu */
    case 8894:  /* atomic_loaddi_fpu */
    case 1093:  /* fistsi2_ceil */
    case 1092:  /* fistsi2_floor */
    case 1091:  /* fisthi2_ceil */
    case 1090:  /* fisthi2_floor */
    case 1081:  /* frndintxf2_trunc_i387 */
    case 1080:  /* frndintxf2_ceil_i387 */
    case 1079:  /* frndintxf2_floor_i387 */
    case 1078:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1064:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1202:  /* stack_protect_test_1_di */
    case 1201:  /* stack_protect_test_1_si */
    case 1061:  /* fyl2xp1xf3_i387 */
    case 1060:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1059:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1058:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1062:  /* fxtractxf3_i387 */
    case 1057:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1054:  /* fprem1xf4_i387 */
    case 1053:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 1043:  /* *fop_df_6_i387 */
    case 1042:  /* *fop_xf_6_i387 */
    case 1041:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1040:  /* *fop_df_5_i387 */
    case 1039:  /* *fop_xf_5_i387 */
    case 1038:  /* *fop_xf_5_i387 */
    case 1034:  /* *fop_xf_3_i387 */
    case 1033:  /* *fop_df_3_i387 */
    case 1032:  /* *fop_sf_3_i387 */
    case 1031:  /* *fop_xf_3_i387 */
    case 1030:  /* *fop_df_3_i387 */
    case 1029:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1037:  /* *fop_df_4_i387 */
    case 1036:  /* *fop_xf_4_i387 */
    case 1035:  /* *fop_xf_4_i387 */
    case 1028:  /* *fop_xf_2_i387 */
    case 1027:  /* *fop_df_2_i387 */
    case 1026:  /* *fop_sf_2_i387 */
    case 1025:  /* *fop_xf_2_i387 */
    case 1024:  /* *fop_df_2_i387 */
    case 1023:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1010:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1009:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1008:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1007:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1006:  /* *add_tp_di */
    case 1005:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1001:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1000:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 999:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 997:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 996:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 987:  /* *tbm_tzmsk_si */
    case 986:  /* *tbm_t1mskc_si */
    case 985:  /* *tbm_blsic_si */
    case 981:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 980:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 978:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 973:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 972:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 971:  /* *bmi_blsr_si_ccz */
    case 967:  /* *bmi_blsi_di_ccno */
    case 966:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 970:  /* *bmi_blsr_si_cmp */
    case 965:  /* *bmi_blsi_di_cmp */
    case 964:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 984:  /* *tbm_blsfill_si */
    case 983:  /* *tbm_blcs_si */
    case 982:  /* *tbm_blcmsk_si */
    case 979:  /* *tbm_blcfill_si */
    case 969:  /* *bmi_blsr_si */
    case 968:  /* *bmi_blsmsk_si */
    case 963:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 962:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 958:  /* *lzcnt_si_falsedep */
    case 957:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1186:  /* probe_stack_1_di */
    case 1185:  /* probe_stack_1_si */
    case 1184:  /* allocate_stack_worker_probe_di */
    case 1183:  /* allocate_stack_worker_probe_si */
    case 1087:  /* *fistdi2_ceil_1 */
    case 1086:  /* *fistdi2_floor_1 */
    case 1085:  /* *fistsi2_ceil_1 */
    case 1084:  /* *fistsi2_floor_1 */
    case 1083:  /* *fisthi2_ceil_1 */
    case 1082:  /* *fisthi2_floor_1 */
    case 1077:  /* frndintxf2_trunc */
    case 1076:  /* frndintxf2_ceil */
    case 1075:  /* frndintxf2_floor */
    case 1074:  /* frndintxf2_roundeven */
    case 960:  /* lzcnt_hi */
    case 959:  /* tzcnt_hi */
    case 956:  /* lzcnt_si */
    case 955:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 954:  /* *clzsi2_lzcnt_zext_2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 953:  /* *clzsi2_lzcnt_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 950:  /* bsr_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 949:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 989:  /* *popcountsi2_falsedep */
    case 952:  /* *clzsi2_lzcnt_falsedep */
    case 948:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 945:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 946:  /* *bsfsi_1 */
    case 944:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7142:  /* sse4a_vmmovntv2df */
    case 7141:  /* sse4a_vmmovntv4sf */
    case 3779:  /* sse2_cvtsd2si */
    case 3775:  /* avx512f_vcvtsd2usi */
    case 3771:  /* avx512f_vcvtss2usi */
    case 3753:  /* *avx512dq_cvtps2uqqv2di */
    case 3745:  /* *avx512dq_cvtps2qqv2di */
    case 3691:  /* sse_cvtss2si */
    case 3531:  /* avx512fp16_vcvtsh2si */
    case 3529:  /* avx512fp16_vcvtsh2usi */
    case 939:  /* set_got_offset_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 938:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1238:  /* rdseedsi */
    case 1237:  /* rdseedhi */
    case 1236:  /* rdrandsi */
    case 1235:  /* rdrandhi */
    case 1224:  /* fnstenv */
    case 937:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 7052:  /* sse3_mwait */
    case 1281:  /* patchable_area */
    case 1245:  /* wrusssi */
    case 1244:  /* wrsssi */
    case 1222:  /* xsetbv */
    case 1221:  /* xrstors */
    case 1220:  /* xrstor */
    case 936:  /* max_skip_align */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 933:  /* *simple_return_indirect_internaldi */
    case 932:  /* *simple_return_indirect_internalsi */
    case 931:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7051:  /* sse2_clflush */
    case 7049:  /* sse_ldmxcsr */
    case 1283:  /* ldtilecfg */
    case 1282:  /* hreset */
    case 1278:  /* cldemote */
    case 1276:  /* umonitor_di */
    case 1275:  /* umonitor_si */
    case 1259:  /* clzero_di */
    case 1258:  /* clzero_si */
    case 1254:  /* clflushopt */
    case 1253:  /* clwb */
    case 1251:  /* xabort */
    case 1247:  /* clrssbsy */
    case 1243:  /* rstorssp */
    case 1241:  /* incsspsi */
    case 1234:  /* ptwritesi */
    case 1229:  /* lwp_llwpcbdi */
    case 1228:  /* lwp_llwpcbsi */
    case 1215:  /* fxrstor */
    case 942:  /* split_stack_return */
    case 935:  /* nops */
    case 927:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 8892:  /* mfence_sse2 */
    case 8891:  /* *sse_sfence */
    case 8890:  /* *sse2_lfence */
    case 1239:  /* *pause */
    case 926:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 924:  /* *sibcall_value_pop_memory */
    case 923:  /* *sibcall_value_pop */
    case 922:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 917:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4074:  /* *vec_setv2di_0_zero_extendsi */
    case 4073:  /* *vec_setv4di_0_zero_extendsi */
    case 4072:  /* *vec_setv8di_0_zero_extendsi */
    case 4062:  /* *vec_setv2di_0_zero_extendhi */
    case 4061:  /* *vec_setv4di_0_zero_extendhi */
    case 4060:  /* *vec_setv8di_0_zero_extendhi */
    case 4059:  /* *vec_setv4si_0_zero_extendhi */
    case 4058:  /* *vec_setv8si_0_zero_extendhi */
    case 4057:  /* *vec_setv16si_0_zero_extendhi */
    case 3684:  /* avx512fp16_vcvtsd2sh_mem */
    case 3682:  /* avx512fp16_vcvtss2sh_mem */
    case 3672:  /* avx512fp16_vcvtsh2ss_mem */
    case 3670:  /* avx512fp16_vcvtsh2sd_mem */
    case 2072:  /* *sse2_vmsqrtv2df2 */
    case 2068:  /* *sse_vmsqrtv4sf2 */
    case 2064:  /* *avx512fp16_vmsqrtv8hf2 */
    case 916:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 913:  /* *sibcall_pop_memory */
    case 912:  /* *sibcall_pop */
    case 911:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 906:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 905:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 902:  /* *tablejump_1 */
    case 901:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 900:  /* *indirect_jump */
    case 899:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 898:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 897:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 8889:  /* vpdpwuuds_v4si */
    case 8888:  /* vpdpwuud_v4si */
    case 8887:  /* vpdpwsuds_v4si */
    case 8886:  /* vpdpwsud_v4si */
    case 8885:  /* vpdpwusds_v4si */
    case 8884:  /* vpdpwusd_v4si */
    case 8883:  /* vpdpwuuds_v8si */
    case 8882:  /* vpdpwuud_v8si */
    case 8881:  /* vpdpwsuds_v8si */
    case 8880:  /* vpdpwsud_v8si */
    case 8879:  /* vpdpwusds_v8si */
    case 8878:  /* vpdpwusd_v8si */
    case 8865:  /* vpdpbuuds_v4si */
    case 8864:  /* vpdpbuud_v4si */
    case 8863:  /* vpdpbsuds_v4si */
    case 8862:  /* vpdpbsud_v4si */
    case 8861:  /* vpdpbssds_v4si */
    case 8860:  /* vpdpbssd_v4si */
    case 8859:  /* vpdpbuuds_v8si */
    case 8858:  /* vpdpbuud_v8si */
    case 8857:  /* vpdpbsuds_v8si */
    case 8856:  /* vpdpbsud_v8si */
    case 8855:  /* vpdpbssds_v8si */
    case 8854:  /* vpdpbssd_v8si */
    case 8838:  /* avx512f_dpbf16ps_v4sf */
    case 8836:  /* avx512f_dpbf16ps_v8sf */
    case 8834:  /* avx512f_dpbf16ps_v16sf */
    case 8806:  /* vpclmulqdq_v2di */
    case 8805:  /* vpclmulqdq_v4di */
    case 8804:  /* vpclmulqdq_v8di */
    case 8785:  /* vpdpwssds_v4si */
    case 8784:  /* vpdpwssds_v8si */
    case 8783:  /* vpdpwssds_v16si */
    case 8776:  /* vpdpwssd_v4si */
    case 8775:  /* vpdpwssd_v8si */
    case 8774:  /* vpdpwssd_v16si */
    case 8767:  /* vpdpbusds_v4si */
    case 8766:  /* vpdpbusds_v8si */
    case 8765:  /* vpdpbusds_v16si */
    case 8758:  /* vpdpbusd_v4si */
    case 8757:  /* vpdpbusd_v8si */
    case 8756:  /* vpdpbusd_v16si */
    case 8737:  /* vpshldv_v2di */
    case 8736:  /* vpshldv_v4si */
    case 8735:  /* vpshldv_v8hi */
    case 8734:  /* vpshldv_v4di */
    case 8733:  /* vpshldv_v8si */
    case 8732:  /* vpshldv_v16hi */
    case 8731:  /* vpshldv_v8di */
    case 8730:  /* vpshldv_v16si */
    case 8729:  /* vpshldv_v32hi */
    case 8710:  /* vpshrdv_v2di */
    case 8709:  /* vpshrdv_v4si */
    case 8708:  /* vpshrdv_v8hi */
    case 8707:  /* vpshrdv_v4di */
    case 8706:  /* vpshrdv_v8si */
    case 8705:  /* vpshrdv_v16hi */
    case 8704:  /* vpshrdv_v8di */
    case 8703:  /* vpshrdv_v16si */
    case 8702:  /* vpshrdv_v32hi */
    case 8700:  /* vpshld_v2di */
    case 8698:  /* vpshld_v4si */
    case 8696:  /* vpshld_v8hi */
    case 8694:  /* vpshld_v4di */
    case 8692:  /* vpshld_v8si */
    case 8690:  /* vpshld_v16hi */
    case 8688:  /* vpshld_v8di */
    case 8686:  /* vpshld_v16si */
    case 8684:  /* vpshld_v32hi */
    case 8682:  /* vpshrd_v2di */
    case 8680:  /* vpshrd_v4si */
    case 8678:  /* vpshrd_v8hi */
    case 8676:  /* vpshrd_v4di */
    case 8674:  /* vpshrd_v8si */
    case 8672:  /* vpshrd_v16hi */
    case 8670:  /* vpshrd_v8di */
    case 8668:  /* vpshrd_v16si */
    case 8666:  /* vpshrd_v32hi */
    case 8658:  /* vgf2p8affineqb_v16qi */
    case 8656:  /* vgf2p8affineqb_v32qi */
    case 8654:  /* vgf2p8affineqb_v64qi */
    case 8652:  /* vgf2p8affineinvqb_v16qi */
    case 8650:  /* vgf2p8affineinvqb_v32qi */
    case 8648:  /* vgf2p8affineinvqb_v64qi */
    case 8621:  /* avx5124vnniw_vp4dpwssds */
    case 8618:  /* avx5124vnniw_vp4dpwssd */
    case 8615:  /* avx5124fmaddps_4fnmaddss */
    case 8612:  /* avx5124fmaddps_4fnmaddps */
    case 8609:  /* avx5124fmaddps_4fmaddss */
    case 8606:  /* avx5124fmaddps_4fmaddps */
    case 8585:  /* vpmadd52huqv2di */
    case 8584:  /* vpmadd52luqv2di */
    case 8583:  /* vpmadd52huqv4di */
    case 8582:  /* vpmadd52luqv4di */
    case 8581:  /* vpmadd52huqv8di */
    case 8580:  /* vpmadd52luqv8di */
    case 8569:  /* vsha512rnds2 */
    case 8565:  /* vsm3msg2 */
    case 8564:  /* vsm3msg1 */
    case 8563:  /* sha256rnds2 */
    case 8560:  /* sha1rnds4 */
    case 8531:  /* *avx512bw_dbpsadbwv32hi */
    case 8529:  /* *avx512bw_dbpsadbwv16hi */
    case 8527:  /* *avx512bw_dbpsadbwv8hi */
    case 8445:  /* avx512dq_rangepv2df */
    case 8443:  /* avx512dq_rangepv4df */
    case 8439:  /* avx512dq_rangepv8df */
    case 8437:  /* avx512dq_rangepv4sf */
    case 8435:  /* avx512dq_rangepv8sf */
    case 8431:  /* avx512dq_rangepv16sf */
    case 8430:  /* *expandv8hi_mask */
    case 8429:  /* *expandv16hi_mask */
    case 8428:  /* *expandv32hi_mask */
    case 8427:  /* *expandv32qi_mask */
    case 8426:  /* *expandv16qi_mask */
    case 8425:  /* *expandv64qi_mask */
    case 8424:  /* *expandv2df_mask */
    case 8423:  /* *expandv2di_mask */
    case 8422:  /* *expandv4sf_mask */
    case 8421:  /* *expandv4si_mask */
    case 8420:  /* *expandv4df_mask */
    case 8419:  /* *expandv4di_mask */
    case 8418:  /* *expandv8sf_mask */
    case 8417:  /* *expandv8si_mask */
    case 8416:  /* *expandv8df_mask */
    case 8415:  /* *expandv8di_mask */
    case 8414:  /* *expandv16sf_mask */
    case 8413:  /* *expandv16si_mask */
    case 8412:  /* expandv8hi_mask */
    case 8411:  /* expandv16hi_mask */
    case 8410:  /* expandv32hi_mask */
    case 8409:  /* expandv32qi_mask */
    case 8408:  /* expandv16qi_mask */
    case 8407:  /* expandv64qi_mask */
    case 8406:  /* expandv2df_mask */
    case 8405:  /* expandv2di_mask */
    case 8404:  /* expandv4sf_mask */
    case 8403:  /* expandv4si_mask */
    case 8402:  /* expandv4df_mask */
    case 8401:  /* expandv4di_mask */
    case 8400:  /* expandv8sf_mask */
    case 8399:  /* expandv8si_mask */
    case 8398:  /* expandv8df_mask */
    case 8397:  /* expandv8di_mask */
    case 8396:  /* expandv16sf_mask */
    case 8395:  /* expandv16si_mask */
    case 8376:  /* compressv8hi_mask */
    case 8375:  /* compressv16hi_mask */
    case 8374:  /* compressv32hi_mask */
    case 8373:  /* compressv32qi_mask */
    case 8372:  /* compressv16qi_mask */
    case 8371:  /* compressv64qi_mask */
    case 8370:  /* avx512vl_compressv2df_mask */
    case 8369:  /* avx512vl_compressv2di_mask */
    case 8368:  /* avx512vl_compressv4sf_mask */
    case 8367:  /* avx512vl_compressv4si_mask */
    case 8366:  /* avx512vl_compressv4df_mask */
    case 8365:  /* avx512vl_compressv4di_mask */
    case 8364:  /* avx512vl_compressv8sf_mask */
    case 8363:  /* avx512vl_compressv8si_mask */
    case 8362:  /* avx512f_compressv8df_mask */
    case 8361:  /* avx512f_compressv8di_mask */
    case 8360:  /* avx512f_compressv16sf_mask */
    case 8359:  /* avx512f_compressv16si_mask */
    case 7950:  /* *avx_vperm2f128v4df_full */
    case 7949:  /* *avx_vperm2f128v8sf_full */
    case 7948:  /* *avx_vperm2f128v8si_full */
    case 7928:  /* avx512vl_vpermt2varv8bf3 */
    case 7926:  /* avx512vl_vpermt2varv16bf3 */
    case 7924:  /* avx512bw_vpermt2varv32bf3 */
    case 7922:  /* avx512fp16_vpermt2varv8hf3 */
    case 7920:  /* avx512vl_vpermt2varv16hf3 */
    case 7918:  /* avx512bw_vpermt2varv32hf3 */
    case 7916:  /* avx512vl_vpermt2varv16qi3 */
    case 7914:  /* avx512vl_vpermt2varv32qi3 */
    case 7912:  /* avx512bw_vpermt2varv64qi3 */
    case 7910:  /* avx512vl_vpermt2varv8hi3 */
    case 7908:  /* avx512vl_vpermt2varv16hi3 */
    case 7906:  /* avx512bw_vpermt2varv32hi3 */
    case 7904:  /* avx512vl_vpermt2varv2df3 */
    case 7902:  /* avx512vl_vpermt2varv2di3 */
    case 7900:  /* avx512vl_vpermt2varv4sf3 */
    case 7898:  /* avx512vl_vpermt2varv4si3 */
    case 7896:  /* avx512vl_vpermt2varv4df3 */
    case 7894:  /* avx512vl_vpermt2varv4di3 */
    case 7892:  /* avx512vl_vpermt2varv8sf3 */
    case 7890:  /* avx512vl_vpermt2varv8si3 */
    case 7888:  /* avx512f_vpermt2varv8df3 */
    case 7886:  /* avx512f_vpermt2varv8di3 */
    case 7884:  /* avx512f_vpermt2varv16sf3 */
    case 7882:  /* avx512f_vpermt2varv16si3 */
    case 7678:  /* avx2_permv2ti */
    case 7588:  /* pclmulqdq */
    case 7577:  /* xop_pcom_tfv2di3 */
    case 7576:  /* xop_pcom_tfv4si3 */
    case 7575:  /* xop_pcom_tfv8hi3 */
    case 7574:  /* xop_pcom_tfv16qi3 */
    case 7530:  /* xop_pperm */
    case 7185:  /* sse4_1_pblendvb */
    case 7184:  /* avx2_pblendvb */
    case 7177:  /* sse4_1_mpsadbw */
    case 7176:  /* avx2_mpsadbw */
    case 7172:  /* sse4_1_dppd */
    case 7171:  /* avx_dppd256 */
    case 7170:  /* sse4_1_dpps */
    case 7169:  /* avx_dpps256 */
    case 7156:  /* sse4_1_blendvsd */
    case 7155:  /* sse4_1_blendvss */
    case 7154:  /* sse4_1_blendvpd */
    case 7153:  /* avx_blendvpd256 */
    case 7152:  /* sse4_1_blendvps */
    case 7151:  /* avx_blendvps256 */
    case 7143:  /* sse4a_extrqi */
    case 7114:  /* ssse3_palignrdi */
    case 7113:  /* ssse3_palignrv1ti */
    case 7112:  /* avx2_palignrv2ti */
    case 7111:  /* avx512bw_palignrv4ti */
    case 5630:  /* *avx512vl_alignv2di */
    case 5628:  /* *avx512vl_alignv4di */
    case 5626:  /* *avx512f_alignv8di */
    case 5624:  /* *avx512vl_alignv4si */
    case 5622:  /* *avx512vl_alignv8si */
    case 5620:  /* *avx512f_alignv16si */
    case 3340:  /* fma_fcmaddc_v4sf_pair */
    case 3339:  /* fma_fmaddc_v4sf_pair */
    case 3338:  /* fma_fcmaddc_v8sf_pair */
    case 3337:  /* fma_fmaddc_v8sf_pair */
    case 3336:  /* fma_fcmaddc_v16sf_pair */
    case 3335:  /* fma_fmaddc_v16sf_pair */
    case 3321:  /* fma_fcmaddc_v8hf */
    case 3319:  /* fma_fmaddc_v8hf */
    case 3317:  /* fma_fcmaddc_v16hf */
    case 3315:  /* fma_fmaddc_v16hf */
    case 3311:  /* fma_fcmaddc_v32hf */
    case 3307:  /* fma_fmaddc_v32hf */
    case 3101:  /* *fma_fmaddsub_v2df */
    case 3099:  /* *fma_fmaddsub_v4df */
    case 3095:  /* *fma_fmaddsub_v8df */
    case 3093:  /* *fma_fmaddsub_v4sf */
    case 3091:  /* *fma_fmaddsub_v8sf */
    case 3087:  /* *fma_fmaddsub_v16sf */
    case 3085:  /* *fma_fmaddsub_v8hf */
    case 3083:  /* *fma_fmaddsub_v16hf */
    case 3079:  /* *fma_fmaddsub_v32hf */
    case 3078:  /* *fma_fmaddsub_v2df */
    case 3077:  /* *fma_fmaddsub_v4df */
    case 3076:  /* *fma_fmaddsub_v4sf */
    case 3075:  /* *fma_fmaddsub_v8sf */
    case 2649:  /* avx512vl_ucmpv2di3 */
    case 2647:  /* avx512vl_ucmpv4di3 */
    case 2645:  /* avx512f_ucmpv8di3 */
    case 2643:  /* avx512vl_ucmpv4si3 */
    case 2641:  /* avx512vl_ucmpv8si3 */
    case 2639:  /* avx512f_ucmpv16si3 */
    case 2577:  /* avx512vl_ucmpv8hi3 */
    case 2575:  /* avx512vl_ucmpv16hi3 */
    case 2573:  /* avx512bw_ucmpv32hi3 */
    case 2571:  /* avx512vl_ucmpv32qi3 */
    case 2569:  /* avx512vl_ucmpv16qi3 */
    case 2567:  /* avx512bw_ucmpv64qi3 */
    case 2493:  /* avx512vl_cmpv8hi3 */
    case 2491:  /* avx512vl_cmpv16hi3 */
    case 2489:  /* avx512bw_cmpv32hi3 */
    case 2487:  /* avx512vl_cmpv32qi3 */
    case 2485:  /* avx512vl_cmpv16qi3 */
    case 2483:  /* avx512bw_cmpv64qi3 */
    case 2376:  /* avx512vl_cmpv2df3 */
    case 2374:  /* avx512vl_cmpv4df3 */
    case 2370:  /* avx512f_cmpv8df3 */
    case 2368:  /* avx512vl_cmpv4sf3 */
    case 2366:  /* avx512vl_cmpv8sf3 */
    case 2362:  /* avx512f_cmpv16sf3 */
    case 2360:  /* avx512fp16_cmpv8hf3 */
    case 2358:  /* avx512vl_cmpv16hf3 */
    case 2354:  /* avx512bw_cmpv32hf3 */
    case 2352:  /* avx512vl_cmpv2di3 */
    case 2350:  /* avx512vl_cmpv4di3 */
    case 2346:  /* avx512f_cmpv8di3 */
    case 2344:  /* avx512vl_cmpv4si3 */
    case 2342:  /* avx512vl_cmpv8si3 */
    case 2338:  /* avx512f_cmpv16si3 */
    case 2297:  /* avx_cmpv2df3 */
    case 2296:  /* avx_cmpv4df3 */
    case 2295:  /* avx_cmpv4sf3 */
    case 2294:  /* avx_cmpv8sf3 */
    case 1456:  /* mmx_ppermv32 */
    case 1446:  /* mmx_pblendvb_v2hi */
    case 1445:  /* mmx_pblendvb_v2qi */
    case 1444:  /* mmx_pblendvb_v4qi */
    case 1133:  /* movhf_mask */
    case 896:  /* setcc_hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2335:  /* sse2_maskcmpv2df3 */
    case 2334:  /* avx_maskcmpv4df3 */
    case 2333:  /* sse_maskcmpv4sf3 */
    case 2332:  /* avx_maskcmpv8sf3 */
    case 2331:  /* *sse2_maskcmpv2df3_comm */
    case 2330:  /* *avx_maskcmpv4df3_comm */
    case 2329:  /* *sse_maskcmpv4sf3_comm */
    case 2328:  /* *avx_maskcmpv8sf3_comm */
    case 1022:  /* *fop_df_1 */
    case 1021:  /* *fop_sf_1 */
    case 1020:  /* *fop_xf_1_i387 */
    case 1013:  /* *fop_df_comm */
    case 1012:  /* *fop_sf_comm */
    case 1011:  /* *fop_xf_comm_i387 */
    case 895:  /* setcc_df_sse */
    case 894:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 887:  /* *btdi_setcdi_mask */
    case 886:  /* *btsi_setcsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0), 1));
      break;

    case 885:  /* *btdi_setncqi_2 */
    case 884:  /* *btsi_setncqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 883:  /* *btdi_setncdi */
    case 882:  /* *btsi_setncsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 881:  /* *btdi_setncqi */
    case 880:  /* *btsi_setncqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 879:  /* *btdi_setcqi */
    case 878:  /* *btsi_setcqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 877:  /* *jcc_btdi_mask_1 */
    case 876:  /* *jcc_btsi_mask_1 */
    case 875:  /* *jcc_btdi_mask_1 */
    case 874:  /* *jcc_btsi_mask_1 */
    case 873:  /* *jcc_btdi_mask_1 */
    case 872:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 871:  /* *jcc_btdi_mask */
    case 870:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 869:  /* *jcc_btdi */
    case 868:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 867:  /* *btdi_mask */
    case 866:  /* *btsi_mask */
    case 865:  /* *btdi_mask */
    case 864:  /* *btsi_mask */
    case 863:  /* *btdi_mask */
    case 862:  /* *btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0), 1));
      break;

    case 861:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 860:  /* *btrhi_2 */
    case 859:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 975:  /* *bmi2_bzhi_si3_3 */
    case 974:  /* *bmi2_bzhi_si3_2 */
    case 858:  /* *btrhi_1 */
    case 857:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 856:  /* *btrdi_mask_1 */
    case 855:  /* *btrsi_mask_1 */
    case 851:  /* *btcdi_mask_1 */
    case 850:  /* *btsdi_mask_1 */
    case 849:  /* *btcsi_mask_1 */
    case 848:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 854:  /* *btrdi_mask */
    case 853:  /* *btrsi_mask */
    case 847:  /* *btcdi_mask */
    case 846:  /* *btsdi_mask */
    case 845:  /* *btcsi_mask */
    case 844:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 852:  /* *btrsi */
    case 843:  /* *btcsi */
    case 842:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 841:  /* ashrsi3_carry */
    case 840:  /* lshrsi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 822:  /* ix86_rotrdi3_doubleword */
    case 821:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 803:  /* *extenddi2_doubleword_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 760:  /* *x86_64_shrd_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 8098:  /* avx_vec_concatv8df */
    case 8097:  /* avx_vec_concatv16sf */
    case 8096:  /* avx_vec_concatv8di */
    case 8095:  /* avx_vec_concatv16si */
    case 8094:  /* avx_vec_concatv32bf */
    case 8093:  /* avx_vec_concatv32hf */
    case 8092:  /* avx_vec_concatv32hi */
    case 8091:  /* avx_vec_concatv64qi */
    case 8090:  /* avx_vec_concatv4df */
    case 8089:  /* avx_vec_concatv8sf */
    case 8088:  /* avx_vec_concatv4di */
    case 8087:  /* avx_vec_concatv8si */
    case 8086:  /* avx_vec_concatv16bf */
    case 8085:  /* avx_vec_concatv16hf */
    case 8084:  /* avx_vec_concatv16hi */
    case 8083:  /* avx_vec_concatv32qi */
    case 8081:  /* avx512bw_lshrvv32hi */
    case 8079:  /* avx512bw_ashlvv32hi */
    case 8077:  /* avx512vl_lshrvv16hi */
    case 8075:  /* avx512vl_ashlvv16hi */
    case 8073:  /* avx512vl_lshrvv8hi */
    case 8071:  /* avx512vl_ashlvv8hi */
    case 8069:  /* avx2_lshrvv2di */
    case 8067:  /* avx2_ashlvv2di */
    case 8065:  /* avx2_lshrvv4di */
    case 8063:  /* avx2_ashlvv4di */
    case 8061:  /* avx512f_lshrvv8di */
    case 8059:  /* avx512f_ashlvv8di */
    case 8057:  /* avx2_lshrvv4si */
    case 8055:  /* avx2_ashlvv4si */
    case 8053:  /* avx2_lshrvv8si */
    case 8051:  /* avx2_ashlvv8si */
    case 8049:  /* avx512f_lshrvv16si */
    case 8047:  /* avx512f_ashlvv16si */
    case 8045:  /* avx512bw_ashrvv32hi */
    case 8043:  /* avx512vl_ashrvv16hi */
    case 8041:  /* avx512vl_ashrvv8hi */
    case 8039:  /* avx512f_ashrvv8di */
    case 8037:  /* avx2_ashrvv4di */
    case 8035:  /* avx2_ashrvv2di */
    case 8033:  /* avx512f_ashrvv16si */
    case 8031:  /* avx2_ashrvv8si */
    case 8029:  /* avx2_ashrvv4si */
    case 7541:  /* xop_rotrv2di3 */
    case 7540:  /* xop_rotrv4si3 */
    case 7539:  /* xop_rotrv8hi3 */
    case 7538:  /* xop_rotrv16qi3 */
    case 7537:  /* xop_rotlv2di3 */
    case 7536:  /* xop_rotlv4si3 */
    case 7535:  /* xop_rotlv8hi3 */
    case 7534:  /* xop_rotlv16qi3 */
    case 7012:  /* *vec_concatv2di_0 */
    case 7011:  /* vec_concatv2di */
    case 7010:  /* *vec_concatv4si_0 */
    case 7009:  /* *vec_concatv8hi_0 */
    case 7008:  /* *vec_concatv16qi_0 */
    case 7005:  /* *vec_concatv4si */
    case 7004:  /* *vec_concatv8hi */
    case 7003:  /* *vec_concatv16qi */
    case 7002:  /* *vec_concatv2si */
    case 7001:  /* *vec_concatv2si_sse4_1 */
    case 6589:  /* xorv1ti3 */
    case 6588:  /* iorv1ti3 */
    case 6587:  /* andv1ti3 */
    case 6586:  /* *xorv8hi3 */
    case 6585:  /* *iorv8hi3 */
    case 6584:  /* *andv8hi3 */
    case 6583:  /* *xorv16hi3 */
    case 6582:  /* *iorv16hi3 */
    case 6581:  /* *andv16hi3 */
    case 6580:  /* *xorv32hi3 */
    case 6579:  /* *iorv32hi3 */
    case 6578:  /* *andv32hi3 */
    case 6577:  /* *xorv16qi3 */
    case 6576:  /* *iorv16qi3 */
    case 6575:  /* *andv16qi3 */
    case 6574:  /* *xorv32qi3 */
    case 6573:  /* *iorv32qi3 */
    case 6572:  /* *andv32qi3 */
    case 6571:  /* *xorv64qi3 */
    case 6570:  /* *iorv64qi3 */
    case 6569:  /* *andv64qi3 */
    case 6567:  /* *xorv2di3 */
    case 6565:  /* *iorv2di3 */
    case 6563:  /* *andv2di3 */
    case 6561:  /* *xorv4di3 */
    case 6559:  /* *iorv4di3 */
    case 6557:  /* *andv4di3 */
    case 6555:  /* *xorv8di3 */
    case 6553:  /* *iorv8di3 */
    case 6551:  /* *andv8di3 */
    case 6549:  /* *xorv4si3 */
    case 6547:  /* *iorv4si3 */
    case 6545:  /* *andv4si3 */
    case 6543:  /* *xorv8si3 */
    case 6541:  /* *iorv8si3 */
    case 6539:  /* *andv8si3 */
    case 6537:  /* *xorv16si3 */
    case 6535:  /* *iorv16si3 */
    case 6533:  /* *andv16si3 */
    case 6501:  /* *one_cmplv2di2 */
    case 6499:  /* *one_cmplv4di2 */
    case 6497:  /* *one_cmplv4si2 */
    case 6495:  /* *one_cmplv8si2 */
    case 6494:  /* *one_cmplv8hi2 */
    case 6493:  /* *one_cmplv16hi2 */
    case 6492:  /* *one_cmplv32hi2 */
    case 6491:  /* *one_cmplv16qi2 */
    case 6490:  /* *one_cmplv32qi2 */
    case 6489:  /* *one_cmplv64qi2 */
    case 6487:  /* *one_cmplv8di2 */
    case 6485:  /* *one_cmplv16si2 */
    case 6484:  /* *sse2_gtv4si3 */
    case 6483:  /* *sse2_gtv8hi3 */
    case 6482:  /* *sse2_gtv16qi3 */
    case 6481:  /* avx2_gtv4di3 */
    case 6480:  /* avx2_gtv8si3 */
    case 6479:  /* avx2_gtv16hi3 */
    case 6478:  /* avx2_gtv32qi3 */
    case 6477:  /* sse4_2_gtv2di3 */
    case 6476:  /* *sse2_eqv4si3 */
    case 6475:  /* *sse2_eqv8hi3 */
    case 6474:  /* *sse2_eqv16qi3 */
    case 6473:  /* *sse4_1_eqv2di3 */
    case 6450:  /* *avx2_eqv4di3 */
    case 6449:  /* *avx2_eqv8si3 */
    case 6448:  /* *avx2_eqv16hi3 */
    case 6447:  /* *avx2_eqv32qi3 */
    case 6446:  /* *uminv16qi3 */
    case 6445:  /* *umaxv16qi3 */
    case 6443:  /* *sse4_1_uminv4si3 */
    case 6441:  /* *sse4_1_umaxv4si3 */
    case 6439:  /* *sse4_1_uminv8hi3 */
    case 6437:  /* *sse4_1_umaxv8hi3 */
    case 6436:  /* *sminv8hi3 */
    case 6435:  /* *smaxv8hi3 */
    case 6433:  /* *sse4_1_sminv4si3 */
    case 6431:  /* *sse4_1_smaxv4si3 */
    case 6429:  /* *sse4_1_sminv16qi3 */
    case 6427:  /* *sse4_1_smaxv16qi3 */
    case 6425:  /* *uminv8hi3 */
    case 6423:  /* *umaxv8hi3 */
    case 6421:  /* *sminv8hi3 */
    case 6419:  /* *smaxv8hi3 */
    case 6417:  /* *uminv16hi3 */
    case 6415:  /* *umaxv16hi3 */
    case 6413:  /* *sminv16hi3 */
    case 6411:  /* *smaxv16hi3 */
    case 6409:  /* *uminv32hi3 */
    case 6407:  /* *umaxv32hi3 */
    case 6405:  /* *sminv32hi3 */
    case 6403:  /* *smaxv32hi3 */
    case 6401:  /* *uminv32qi3 */
    case 6399:  /* *umaxv32qi3 */
    case 6397:  /* *sminv32qi3 */
    case 6395:  /* *smaxv32qi3 */
    case 6393:  /* *uminv16qi3 */
    case 6391:  /* *umaxv16qi3 */
    case 6389:  /* *sminv16qi3 */
    case 6387:  /* *smaxv16qi3 */
    case 6385:  /* *uminv64qi3 */
    case 6383:  /* *umaxv64qi3 */
    case 6381:  /* *sminv64qi3 */
    case 6379:  /* *smaxv64qi3 */
    case 6377:  /* *avx512f_uminv2di3 */
    case 6375:  /* *avx512f_umaxv2di3 */
    case 6373:  /* *avx512f_sminv2di3 */
    case 6371:  /* *avx512f_smaxv2di3 */
    case 6369:  /* *avx512f_uminv4di3 */
    case 6367:  /* *avx512f_umaxv4di3 */
    case 6365:  /* *avx512f_sminv4di3 */
    case 6363:  /* *avx512f_smaxv4di3 */
    case 6361:  /* *avx512f_uminv8di3 */
    case 6359:  /* *avx512f_umaxv8di3 */
    case 6357:  /* *avx512f_sminv8di3 */
    case 6355:  /* *avx512f_smaxv8di3 */
    case 6353:  /* *avx512f_uminv4si3 */
    case 6351:  /* *avx512f_umaxv4si3 */
    case 6349:  /* *avx512f_sminv4si3 */
    case 6347:  /* *avx512f_smaxv4si3 */
    case 6345:  /* *avx512f_uminv8si3 */
    case 6343:  /* *avx512f_umaxv8si3 */
    case 6341:  /* *avx512f_sminv8si3 */
    case 6339:  /* *avx512f_smaxv8si3 */
    case 6337:  /* *avx512f_uminv16si3 */
    case 6335:  /* *avx512f_umaxv16si3 */
    case 6333:  /* *avx512f_sminv16si3 */
    case 6331:  /* *avx512f_smaxv16si3 */
    case 6330:  /* *avx2_uminv8si3 */
    case 6329:  /* *avx2_umaxv8si3 */
    case 6328:  /* *avx2_sminv8si3 */
    case 6327:  /* *avx2_smaxv8si3 */
    case 6326:  /* *avx2_uminv16hi3 */
    case 6325:  /* *avx2_umaxv16hi3 */
    case 6324:  /* *avx2_sminv16hi3 */
    case 6323:  /* *avx2_smaxv16hi3 */
    case 6322:  /* *avx2_uminv32qi3 */
    case 6321:  /* *avx2_umaxv32qi3 */
    case 6320:  /* *avx2_sminv32qi3 */
    case 6319:  /* *avx2_smaxv32qi3 */
    case 6317:  /* avx512vl_rorv2di */
    case 6315:  /* avx512vl_rolv2di */
    case 6313:  /* avx512vl_rorv4di */
    case 6311:  /* avx512vl_rolv4di */
    case 6309:  /* avx512f_rorv8di */
    case 6307:  /* avx512f_rolv8di */
    case 6305:  /* avx512vl_rorv4si */
    case 6303:  /* avx512vl_rolv4si */
    case 6301:  /* avx512vl_rorv8si */
    case 6299:  /* avx512vl_rolv8si */
    case 6297:  /* avx512f_rorv16si */
    case 6295:  /* avx512f_rolv16si */
    case 6293:  /* avx512vl_rorvv2di */
    case 6291:  /* avx512vl_rolvv2di */
    case 6289:  /* avx512vl_rorvv4di */
    case 6287:  /* avx512vl_rolvv4di */
    case 6285:  /* avx512f_rorvv8di */
    case 6283:  /* avx512f_rolvv8di */
    case 6281:  /* avx512vl_rorvv4si */
    case 6279:  /* avx512vl_rolvv4si */
    case 6277:  /* avx512vl_rorvv8si */
    case 6275:  /* avx512vl_rolvv8si */
    case 6273:  /* avx512f_rorvv16si */
    case 6271:  /* avx512f_rolvv16si */
    case 6270:  /* sse2_lshrv1ti3 */
    case 6269:  /* sse2_ashlv1ti3 */
    case 6268:  /* avx2_lshrv2ti3 */
    case 6267:  /* avx2_ashlv2ti3 */
    case 6266:  /* avx512bw_lshrv1ti3 */
    case 6265:  /* avx512bw_ashlv1ti3 */
    case 6264:  /* avx512bw_lshrv2ti3 */
    case 6263:  /* avx512bw_ashlv2ti3 */
    case 6262:  /* avx512bw_lshrv4ti3 */
    case 6261:  /* avx512bw_ashlv4ti3 */
    case 6259:  /* lshrv8di3 */
    case 6257:  /* ashlv8di3 */
    case 6255:  /* lshrv16si3 */
    case 6253:  /* ashlv16si3 */
    case 6251:  /* lshrv32hi3 */
    case 6249:  /* ashlv32hi3 */
    case 6248:  /* lshrv2di3 */
    case 6247:  /* ashlv2di3 */
    case 6246:  /* lshrv4di3 */
    case 6245:  /* ashlv4di3 */
    case 6244:  /* lshrv4si3 */
    case 6243:  /* ashlv4si3 */
    case 6242:  /* lshrv8si3 */
    case 6241:  /* ashlv8si3 */
    case 6240:  /* lshrv8hi3 */
    case 6239:  /* ashlv8hi3 */
    case 6238:  /* lshrv16hi3 */
    case 6237:  /* ashlv16hi3 */
    case 6235:  /* *lshrv2di3 */
    case 6233:  /* *ashlv2di3 */
    case 6231:  /* *lshrv4di3 */
    case 6229:  /* *ashlv4di3 */
    case 6227:  /* *lshrv4si3 */
    case 6225:  /* *ashlv4si3 */
    case 6223:  /* *lshrv8si3 */
    case 6221:  /* *ashlv8si3 */
    case 6219:  /* *lshrv8hi3 */
    case 6217:  /* *ashlv8hi3 */
    case 6215:  /* *lshrv16hi3 */
    case 6213:  /* *ashlv16hi3 */
    case 6211:  /* *ashrv8di3 */
    case 6209:  /* *ashrv16si3 */
    case 6207:  /* *ashrv4di3 */
    case 6205:  /* *ashrv32hi3 */
    case 6204:  /* ashrv4si3 */
    case 6203:  /* ashrv8si3 */
    case 6202:  /* ashrv8hi3 */
    case 6201:  /* ashrv16hi3 */
    case 6199:  /* *ashrv2di3 */
    case 6197:  /* *ashrv4si3 */
    case 6195:  /* *ashrv8si3 */
    case 6193:  /* *ashrv8hi3 */
    case 6191:  /* *ashrv16hi3 */
    case 6189:  /* *sse4_1_mulv4si3 */
    case 6187:  /* *avx2_mulv8si3 */
    case 6185:  /* *avx512f_mulv16si3 */
    case 6183:  /* *avx512dq_mulv2di3 */
    case 6181:  /* *avx512dq_mulv4di3 */
    case 6179:  /* *avx512dq_mulv8di3 */
    case 6145:  /* *mulv8hi3 */
    case 6143:  /* *mulv16hi3 */
    case 6141:  /* *mulv32hi3 */
    case 6139:  /* *sse2_ussubv8hi3 */
    case 6137:  /* *sse2_sssubv8hi3 */
    case 6135:  /* *sse2_usaddv8hi3 */
    case 6133:  /* *sse2_ssaddv8hi3 */
    case 6131:  /* *avx2_ussubv16hi3 */
    case 6129:  /* *avx2_sssubv16hi3 */
    case 6127:  /* *avx2_usaddv16hi3 */
    case 6125:  /* *avx2_ssaddv16hi3 */
    case 6123:  /* *avx512bw_ussubv32hi3 */
    case 6121:  /* *avx512bw_sssubv32hi3 */
    case 6119:  /* *avx512bw_usaddv32hi3 */
    case 6117:  /* *avx512bw_ssaddv32hi3 */
    case 6115:  /* *sse2_ussubv16qi3 */
    case 6113:  /* *sse2_sssubv16qi3 */
    case 6111:  /* *sse2_usaddv16qi3 */
    case 6109:  /* *sse2_ssaddv16qi3 */
    case 6107:  /* *avx2_ussubv32qi3 */
    case 6105:  /* *avx2_sssubv32qi3 */
    case 6103:  /* *avx2_usaddv32qi3 */
    case 6101:  /* *avx2_ssaddv32qi3 */
    case 6099:  /* *avx512bw_ussubv64qi3 */
    case 6097:  /* *avx512bw_sssubv64qi3 */
    case 6095:  /* *avx512bw_usaddv64qi3 */
    case 6093:  /* *avx512bw_ssaddv64qi3 */
    case 6068:  /* *subv2di3 */
    case 6067:  /* *addv2di3 */
    case 6066:  /* *subv4di3 */
    case 6065:  /* *addv4di3 */
    case 6064:  /* *subv8di3 */
    case 6063:  /* *addv8di3 */
    case 6062:  /* *subv4si3 */
    case 6061:  /* *addv4si3 */
    case 6060:  /* *subv8si3 */
    case 6059:  /* *addv8si3 */
    case 6058:  /* *subv16si3 */
    case 6057:  /* *addv16si3 */
    case 6056:  /* *subv8hi3 */
    case 6055:  /* *addv8hi3 */
    case 6054:  /* *subv16hi3 */
    case 6053:  /* *addv16hi3 */
    case 6052:  /* *subv32hi3 */
    case 6051:  /* *addv32hi3 */
    case 6050:  /* *subv16qi3 */
    case 6049:  /* *addv16qi3 */
    case 6048:  /* *subv32qi3 */
    case 6047:  /* *addv32qi3 */
    case 6046:  /* *subv64qi3 */
    case 6045:  /* *addv64qi3 */
    case 5773:  /* vec_concatv2df */
    case 4042:  /* *vec_concatv8hf_0 */
    case 4041:  /* *vec_concatv4sf_0 */
    case 4040:  /* *vec_concatv8hf */
    case 4039:  /* *vec_concatv4sf */
    case 4038:  /* *vec_concatv2sf_sse */
    case 4037:  /* *vec_concatv2sf_sse4_1 */
    case 2814:  /* *xortf3 */
    case 2813:  /* *iortf3 */
    case 2812:  /* *andtf3 */
    case 2811:  /* xordf3 */
    case 2810:  /* iordf3 */
    case 2809:  /* anddf3 */
    case 2808:  /* xorsf3 */
    case 2807:  /* iorsf3 */
    case 2806:  /* andsf3 */
    case 2805:  /* xorhf3 */
    case 2804:  /* iorhf3 */
    case 2803:  /* andhf3 */
    case 2802:  /* xorbf3 */
    case 2801:  /* iorbf3 */
    case 2800:  /* andbf3 */
    case 2793:  /* *bit_and_float_vector_all_ones */
    case 2792:  /* *bit_and_float_vector_all_ones */
    case 2791:  /* *bit_and_float_vector_all_ones */
    case 2790:  /* *bit_and_float_vector_all_ones */
    case 2789:  /* *bit_and_float_vector_all_ones */
    case 2788:  /* *bit_and_float_vector_all_ones */
    case 2787:  /* *bit_and_float_vector_all_ones */
    case 2786:  /* *bit_and_float_vector_all_ones */
    case 2785:  /* *bit_and_float_vector_all_ones */
    case 2783:  /* *xorv8df3 */
    case 2781:  /* *iorv8df3 */
    case 2779:  /* *andv8df3 */
    case 2777:  /* *xorv16sf3 */
    case 2775:  /* *iorv16sf3 */
    case 2773:  /* *andv16sf3 */
    case 2772:  /* *xorv32hf3 */
    case 2771:  /* *iorv32hf3 */
    case 2770:  /* *andv32hf3 */
    case 2768:  /* *xorv2df3 */
    case 2766:  /* *iorv2df3 */
    case 2764:  /* *andv2df3 */
    case 2762:  /* *xorv4df3 */
    case 2760:  /* *iorv4df3 */
    case 2758:  /* *andv4df3 */
    case 2756:  /* *xorv4sf3 */
    case 2754:  /* *iorv4sf3 */
    case 2752:  /* *andv4sf3 */
    case 2750:  /* *xorv8sf3 */
    case 2748:  /* *iorv8sf3 */
    case 2746:  /* *andv8sf3 */
    case 2745:  /* *xorv8hf3 */
    case 2744:  /* *iorv8hf3 */
    case 2743:  /* *andv8hf3 */
    case 2742:  /* *xorv16hf3 */
    case 2741:  /* *iorv16hf3 */
    case 2740:  /* *andv16hf3 */
    case 2152:  /* *sminv2df3 */
    case 2150:  /* *smaxv2df3 */
    case 2148:  /* *sminv4df3 */
    case 2146:  /* *smaxv4df3 */
    case 2142:  /* *sminv8df3 */
    case 2138:  /* *smaxv8df3 */
    case 2136:  /* *sminv4sf3 */
    case 2134:  /* *smaxv4sf3 */
    case 2132:  /* *sminv8sf3 */
    case 2130:  /* *smaxv8sf3 */
    case 2126:  /* *sminv16sf3 */
    case 2122:  /* *smaxv16sf3 */
    case 2120:  /* *sminv8hf3 */
    case 2118:  /* *smaxv8hf3 */
    case 2116:  /* *sminv16hf3 */
    case 2114:  /* *smaxv16hf3 */
    case 2110:  /* *sminv32hf3 */
    case 2106:  /* *smaxv32hf3 */
    case 1997:  /* sse2_divv2df3 */
    case 1995:  /* avx_divv4df3 */
    case 1991:  /* avx512f_divv8df3 */
    case 1989:  /* sse_divv4sf3 */
    case 1987:  /* avx_divv8sf3 */
    case 1983:  /* avx512f_divv16sf3 */
    case 1981:  /* avx512fp16_divv8hf3 */
    case 1979:  /* avx512fp16_divv16hf3 */
    case 1975:  /* avx512fp16_divv32hf3 */
    case 1941:  /* *mulv2df3 */
    case 1937:  /* *mulv4df3 */
    case 1933:  /* *mulv8df3 */
    case 1929:  /* *mulv4sf3 */
    case 1925:  /* *mulv8sf3 */
    case 1921:  /* *mulv16sf3 */
    case 1917:  /* *mulv8hf3 */
    case 1913:  /* *mulv16hf3 */
    case 1909:  /* *mulv32hf3 */
    case 1875:  /* *subv2df3 */
    case 1871:  /* *addv2df3 */
    case 1867:  /* *subv4df3 */
    case 1863:  /* *addv4df3 */
    case 1859:  /* *subv8df3 */
    case 1855:  /* *addv8df3 */
    case 1851:  /* *subv4sf3 */
    case 1847:  /* *addv4sf3 */
    case 1843:  /* *subv8sf3 */
    case 1839:  /* *addv8sf3 */
    case 1835:  /* *subv16sf3 */
    case 1831:  /* *addv16sf3 */
    case 1827:  /* *subv8hf3 */
    case 1823:  /* *addv8hf3 */
    case 1819:  /* *subv16hf3 */
    case 1815:  /* *addv16hf3 */
    case 1811:  /* *subv32hf3 */
    case 1807:  /* *addv32hf3 */
    case 1713:  /* *sse2_movq128_v2df_1 */
    case 1712:  /* *sse2_movq128_v2di_1 */
    case 1515:  /* *mmx_concatv2si */
    case 1474:  /* *mmx_xorv2si3 */
    case 1473:  /* *mmx_iorv2si3 */
    case 1472:  /* *mmx_andv2si3 */
    case 1471:  /* *mmx_xorv4hi3 */
    case 1470:  /* *mmx_iorv4hi3 */
    case 1469:  /* *mmx_andv4hi3 */
    case 1468:  /* *mmx_xorv8qi3 */
    case 1467:  /* *mmx_iorv8qi3 */
    case 1466:  /* *mmx_andv8qi3 */
    case 1431:  /* *gtv2hi3 */
    case 1430:  /* *gtv2qi3 */
    case 1429:  /* *gtv4qi3 */
    case 1428:  /* mmx_gtv2si3 */
    case 1427:  /* mmx_gtv4hi3 */
    case 1426:  /* mmx_gtv8qi3 */
    case 1425:  /* *eqv2hi3 */
    case 1424:  /* *eqv2qi3 */
    case 1423:  /* *eqv4qi3 */
    case 1422:  /* *mmx_eqv2si3 */
    case 1421:  /* *mmx_eqv4hi3 */
    case 1420:  /* *mmx_eqv8qi3 */
    case 1416:  /* ashrv2hi3 */
    case 1415:  /* lshrv2hi3 */
    case 1414:  /* ashlv2hi3 */
    case 1413:  /* mmx_lshrv1si3 */
    case 1412:  /* mmx_ashlv1si3 */
    case 1411:  /* mmx_lshrv1di3 */
    case 1410:  /* mmx_ashlv1di3 */
    case 1409:  /* mmx_lshrv2si3 */
    case 1408:  /* mmx_ashlv2si3 */
    case 1407:  /* mmx_lshrv4hi3 */
    case 1406:  /* mmx_ashlv4hi3 */
    case 1405:  /* mmx_ashrv2si3 */
    case 1404:  /* mmx_ashrv4hi3 */
    case 1397:  /* uminv2hi3 */
    case 1396:  /* umaxv2hi3 */
    case 1395:  /* uminv2qi3 */
    case 1394:  /* umaxv2qi3 */
    case 1393:  /* uminv4qi3 */
    case 1392:  /* umaxv4qi3 */
    case 1391:  /* *mmx_uminv8qi3 */
    case 1390:  /* *mmx_umaxv8qi3 */
    case 1389:  /* sminv2hi3 */
    case 1388:  /* smaxv2hi3 */
    case 1387:  /* sminv2qi3 */
    case 1386:  /* smaxv2qi3 */
    case 1385:  /* sminv4qi3 */
    case 1384:  /* smaxv4qi3 */
    case 1383:  /* *mmx_sminv4hi3 */
    case 1382:  /* *mmx_smaxv4hi3 */
    case 1374:  /* mulv2hi3 */
    case 1373:  /* *mmx_mulv4hi3 */
    case 1372:  /* *ussubv2hi3 */
    case 1371:  /* *sssubv2hi3 */
    case 1370:  /* *usaddv2hi3 */
    case 1369:  /* *ssaddv2hi3 */
    case 1368:  /* *ussubv2qi3 */
    case 1367:  /* *sssubv2qi3 */
    case 1366:  /* *usaddv2qi3 */
    case 1365:  /* *ssaddv2qi3 */
    case 1364:  /* *ussubv4qi3 */
    case 1363:  /* *sssubv4qi3 */
    case 1362:  /* *usaddv4qi3 */
    case 1361:  /* *ssaddv4qi3 */
    case 1360:  /* *mmx_ussubv4hi3 */
    case 1359:  /* *mmx_sssubv4hi3 */
    case 1358:  /* *mmx_usaddv4hi3 */
    case 1357:  /* *mmx_ssaddv4hi3 */
    case 1356:  /* *mmx_ussubv8qi3 */
    case 1355:  /* *mmx_sssubv8qi3 */
    case 1354:  /* *mmx_usaddv8qi3 */
    case 1353:  /* *mmx_ssaddv8qi3 */
    case 1350:  /* subv2hi3 */
    case 1349:  /* addv2hi3 */
    case 1348:  /* subv4qi3 */
    case 1347:  /* addv4qi3 */
    case 1346:  /* *mmx_subv1di3 */
    case 1345:  /* *mmx_addv1di3 */
    case 1344:  /* *mmx_subv2si3 */
    case 1343:  /* *mmx_addv2si3 */
    case 1342:  /* *mmx_subv4hi3 */
    case 1341:  /* *mmx_addv4hi3 */
    case 1340:  /* *mmx_subv8qi3 */
    case 1339:  /* *mmx_addv8qi3 */
    case 1337:  /* xorv2hf3 */
    case 1336:  /* iorv2hf3 */
    case 1335:  /* andv2hf3 */
    case 1328:  /* *mmx_concatv2sf */
    case 1321:  /* mmx_gev2sf3 */
    case 1320:  /* mmx_gtv2sf3 */
    case 1319:  /* *mmx_eqv2sf3 */
    case 1308:  /* *mmx_sminv2sf3 */
    case 1307:  /* *mmx_smaxv2sf3 */
    case 1306:  /* *mmx_mulv2sf3 */
    case 1305:  /* *mmx_subv2sf3 */
    case 1304:  /* *mmx_addv2sf3 */
    case 1144:  /* sminhf3 */
    case 1143:  /* smaxhf3 */
    case 1142:  /* smindf3 */
    case 1141:  /* smaxdf3 */
    case 1140:  /* sminsf3 */
    case 1139:  /* smaxsf3 */
    case 1017:  /* *divhf */
    case 1016:  /* *mulhf */
    case 1015:  /* *subhf */
    case 1014:  /* *addhf */
    case 826:  /* *bmi2_rorxdi3_1 */
    case 825:  /* *bmi2_rorxsi3_1 */
    case 770:  /* *bmi2_ashrsi3_1 */
    case 769:  /* *bmi2_lshrsi3_1 */
    case 721:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 765:  /* *x86_shrd_shld_1_nozext */
    case 715:  /* *x86_shld_shrd_1_nozext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 763:  /* x86_shrd_1 */
    case 713:  /* x86_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 761:  /* x86_shrd */
    case 711:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 766:  /* *x86_shrd_ndd_2 */
    case 716:  /* *x86_shld_ndd_2 */
    case 710:  /* *x86_64_shld_ndd_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 764:  /* x86_shrd_ndd_1 */
    case 759:  /* x86_64_shrd_ndd_1 */
    case 714:  /* x86_shld_ndd_1 */
    case 709:  /* x86_64_shld_ndd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 762:  /* x86_shrd_ndd */
    case 758:  /* x86_64_shrd_ndd */
    case 712:  /* x86_shld_ndd */
    case 708:  /* x86_64_shld_ndd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 820:  /* *rotrdi3_mask_1 */
    case 819:  /* *rotldi3_mask_1 */
    case 818:  /* *rotrsi3_mask_1 */
    case 817:  /* *rotlsi3_mask_1 */
    case 816:  /* *rotrhi3_mask_1 */
    case 815:  /* *rotlhi3_mask_1 */
    case 814:  /* *rotrqi3_mask_1 */
    case 813:  /* *rotlqi3_mask_1 */
    case 753:  /* *ashrti3_doubleword_mask_1 */
    case 752:  /* *lshrti3_doubleword_mask_1 */
    case 751:  /* *ashrdi3_doubleword_mask_1 */
    case 750:  /* *lshrdi3_doubleword_mask_1 */
    case 745:  /* *ashrdi3_mask_1 */
    case 744:  /* *lshrdi3_mask_1 */
    case 743:  /* *ashrsi3_mask_1 */
    case 742:  /* *lshrsi3_mask_1 */
    case 720:  /* *ashldi3_mask_1 */
    case 719:  /* *ashlsi3_mask_1 */
    case 704:  /* *ashlti3_doubleword_mask_1 */
    case 703:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 812:  /* *rotrdi3_mask */
    case 811:  /* *rotldi3_mask */
    case 810:  /* *rotrsi3_mask */
    case 809:  /* *rotlsi3_mask */
    case 808:  /* *rotrhi3_mask */
    case 807:  /* *rotlhi3_mask */
    case 806:  /* *rotrqi3_mask */
    case 805:  /* *rotlqi3_mask */
    case 749:  /* *ashrti3_doubleword_mask */
    case 748:  /* *lshrti3_doubleword_mask */
    case 747:  /* *ashrdi3_doubleword_mask */
    case 746:  /* *lshrdi3_doubleword_mask */
    case 741:  /* *ashrdi3_mask */
    case 740:  /* *lshrdi3_mask */
    case 739:  /* *ashrsi3_mask */
    case 738:  /* *lshrsi3_mask */
    case 718:  /* *ashldi3_mask */
    case 717:  /* *ashlsi3_mask */
    case 702:  /* *ashlti3_doubleword_mask */
    case 701:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 700:  /* *one_cmplqi_extsi_1 */
    case 699:  /* *one_cmplqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1806:  /* *nabsv2df2 */
    case 1805:  /* *nabsv4df2 */
    case 1804:  /* *nabsv8df2 */
    case 1803:  /* *nabsv4sf2 */
    case 1802:  /* *nabsv8sf2 */
    case 1801:  /* *nabsv16sf2 */
    case 1333:  /* *mmx_nabsv2hf2 */
    case 680:  /* *nabsdf2_1 */
    case 679:  /* *nabssf2_1 */
    case 666:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7851:  /* avx512cd_maskw_vec_dupv4si */
    case 7850:  /* avx512cd_maskw_vec_dupv8si */
    case 7849:  /* avx512cd_maskw_vec_dupv16si */
    case 7848:  /* avx512cd_maskb_vec_dupv2di */
    case 7847:  /* avx512cd_maskb_vec_dupv4di */
    case 7846:  /* avx512cd_maskb_vec_dupv8di */
    case 1751:  /* *knotsi_1_zext */
    case 991:  /* *popcounthi2_2 */
    case 990:  /* *popcounthi2_1 */
    case 839:  /* rcrsi2 */
    case 663:  /* *nabsdi2_1 */
    case 662:  /* *nabssi2_1 */
    case 661:  /* *nabshi2_1 */
    case 660:  /* *nabsqi2_1 */
    case 655:  /* *nabsti2_doubleword */
    case 654:  /* *nabsdi2_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 651:  /* *negvdi3 */
    case 650:  /* *negvsi3 */
    case 649:  /* *negvhi3 */
    case 648:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 647:  /* *negqi_extsi_1 */
    case 646:  /* *negqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 645:  /* *negsi_ccc_2 */
    case 644:  /* *neghi_ccc_2 */
    case 643:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 642:  /* *negsi_ccc_1 */
    case 641:  /* *neghi_ccc_1 */
    case 640:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 698:  /* *one_cmpldi2_2 */
    case 697:  /* *one_cmplsi2_2 */
    case 696:  /* *one_cmplhi2_2 */
    case 695:  /* *one_cmplqi2_2 */
    case 639:  /* *negdi_2 */
    case 638:  /* *negsi_2 */
    case 637:  /* *neghi_2 */
    case 636:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 635:  /* *neghi_1_slp */
    case 634:  /* *negqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 8827:  /* *vcvtneps2bf16_v4sf */
    case 7985:  /* vec_set_hi_v32qi */
    case 7983:  /* vec_set_hi_v16bf */
    case 7982:  /* vec_set_hi_v16hf */
    case 7981:  /* vec_set_hi_v16hi */
    case 7976:  /* vec_set_hi_v8sf */
    case 7974:  /* vec_set_hi_v8si */
    case 7968:  /* vec_set_hi_v4df */
    case 7966:  /* vec_set_hi_v4di */
    case 6940:  /* vec_set_hi_v8di */
    case 6938:  /* vec_set_hi_v8df */
    case 6932:  /* vec_set_hi_v16si */
    case 6930:  /* vec_set_hi_v16sf */
    case 6601:  /* *iornotv2di3 */
    case 6600:  /* *iornotv4di3 */
    case 6599:  /* *iornotv4si3 */
    case 6598:  /* *iornotv8si3 */
    case 6597:  /* *iornotv8hi3 */
    case 6596:  /* *iornotv16hi3 */
    case 6595:  /* *iornotv32hi3 */
    case 6594:  /* *iornotv16qi3 */
    case 6593:  /* *iornotv32qi3 */
    case 6592:  /* *iornotv64qi3 */
    case 6591:  /* *iornotv8di3 */
    case 6590:  /* *iornotv16si3 */
    case 6526:  /* *andnotv2di3 */
    case 6525:  /* *andnotv4di3 */
    case 6524:  /* *andnotv4si3 */
    case 6523:  /* *andnotv8si3 */
    case 6522:  /* *andnotv8hi3 */
    case 6521:  /* *andnotv16hi3 */
    case 6520:  /* *andnotv32hi3 */
    case 6519:  /* *andnotv16qi3 */
    case 6518:  /* *andnotv32qi3 */
    case 6517:  /* *andnotv64qi3 */
    case 6516:  /* *andnotv8di3 */
    case 6515:  /* *andnotv16si3 */
    case 6004:  /* avx512vl_us_truncatev2div2si2 */
    case 6003:  /* avx512vl_truncatev2div2si2 */
    case 6002:  /* avx512vl_ss_truncatev2div2si2 */
    case 5946:  /* avx512vl_us_truncatev4siv4hi2 */
    case 5945:  /* avx512vl_truncatev4siv4hi2 */
    case 5944:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 5943:  /* avx512vl_us_truncatev2div2hi2 */
    case 5942:  /* avx512vl_truncatev2div2hi2 */
    case 5941:  /* avx512vl_ss_truncatev2div2hi2 */
    case 5940:  /* avx512vl_us_truncatev4div4hi2 */
    case 5939:  /* avx512vl_truncatev4div4hi2 */
    case 5938:  /* avx512vl_ss_truncatev4div4hi2 */
    case 5846:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 5845:  /* avx512vl_truncatev8hiv8qi2 */
    case 5844:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 5843:  /* avx512vl_us_truncatev4siv4qi2 */
    case 5842:  /* avx512vl_truncatev4siv4qi2 */
    case 5841:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 5840:  /* avx512vl_us_truncatev8siv8qi2 */
    case 5839:  /* avx512vl_truncatev8siv8qi2 */
    case 5838:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 5837:  /* avx512vl_us_truncatev2div2qi2 */
    case 5836:  /* avx512vl_truncatev2div2qi2 */
    case 5835:  /* avx512vl_ss_truncatev2div2qi2 */
    case 5834:  /* avx512vl_us_truncatev4div4qi2 */
    case 5833:  /* avx512vl_truncatev4div4qi2 */
    case 5832:  /* avx512vl_ss_truncatev4div4qi2 */
    case 5767:  /* sse2_loadhpd */
    case 4027:  /* sse_loadhps */
    case 3947:  /* *sse2_cvtpd2ps */
    case 3825:  /* *avx512dq_floatunsv2div2sf2 */
    case 3824:  /* *avx512dq_floatv2div2sf2 */
    case 3659:  /* *avx512fp16_vcvtpd2ph_v2df */
    case 3654:  /* *avx512fp16_vcvtps2ph_v4sf */
    case 3653:  /* *avx512fp16_vcvtpd2ph_v4df */
    case 3524:  /* *avx512fp16_vcvtuqq2ph_v2di */
    case 3523:  /* *avx512fp16_vcvtqq2ph_v2di */
    case 3514:  /* *avx512fp16_vcvtuqq2ph_v4di */
    case 3513:  /* *avx512fp16_vcvtqq2ph_v4di */
    case 3512:  /* *avx512fp16_vcvtudq2ph_v4si */
    case 3511:  /* *avx512fp16_vcvtdq2ph_v4si */
    case 2799:  /* *andnotv1ti3 */
    case 2798:  /* *andnottf3 */
    case 2797:  /* *andnotdf3 */
    case 2796:  /* *andnotsf3 */
    case 2795:  /* *andnothf3 */
    case 2794:  /* *andnotbf3 */
    case 2738:  /* avx512f_andnotv8df3 */
    case 2736:  /* avx512f_andnotv16sf3 */
    case 2735:  /* avx512fp16_andnotv32hf3 */
    case 2733:  /* sse2_andnotv2df3 */
    case 2731:  /* avx_andnotv4df3 */
    case 2729:  /* sse_andnotv4sf3 */
    case 2727:  /* avx_andnotv8sf3 */
    case 2726:  /* avx512fp16_andnotv8hf3 */
    case 2725:  /* avx512fp16_andnotv16hf3 */
    case 2060:  /* sse2_vmsqrtv2df2 */
    case 2056:  /* sse_vmsqrtv4sf2 */
    case 2052:  /* avx512fp16_vmsqrtv8hf2 */
    case 1711:  /* *sse2_movq128_v2df */
    case 1710:  /* *sse2_movq128_v2di */
    case 1462:  /* mmx_andnotv2si3 */
    case 1461:  /* mmx_andnotv4hi3 */
    case 1460:  /* mmx_andnotv8qi3 */
    case 1334:  /* *mmx_andnotv2hf3 */
    case 919:  /* *sibcall_value */
    case 918:  /* *sibcall_value */
    case 915:  /* *call_value */
    case 914:  /* *call_value */
    case 627:  /* *concatditi3_7 */
    case 626:  /* *concatditi3_7 */
    case 625:  /* *concatditi3_7 */
    case 624:  /* *concatsidi3_7 */
    case 623:  /* *concatsidi3_7 */
    case 622:  /* *concatsidi3_7 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 621:  /* *concatditi3_6 */
    case 620:  /* *concatditi3_6 */
    case 619:  /* *concatditi3_6 */
    case 618:  /* *concatsidi3_6 */
    case 617:  /* *concatsidi3_6 */
    case 616:  /* *concatsidi3_6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 609:  /* *concatsidi3_4 */
    case 608:  /* *concatsidi3_4 */
    case 607:  /* *concatsidi3_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 606:  /* *concatsidi3_3 */
    case 605:  /* *concatsidi3_3 */
    case 604:  /* *concatsidi3_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 603:  /* *concatsidi3_2 */
    case 602:  /* *concatsidi3_2 */
    case 601:  /* *concatsidi3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 600:  /* *concatsidi3_1 */
    case 599:  /* *concatsidi3_1 */
    case 598:  /* *concatsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 578:  /* *xor2andn */
    case 577:  /* *xor2andn */
    case 576:  /* *xor2andn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1746:  /* kxnordi */
    case 1745:  /* kxnorsi */
    case 1744:  /* kxnorhi */
    case 1743:  /* kxnorqi */
    case 757:  /* ashrdi3_doubleword_lowpart */
    case 756:  /* lshrdi3_doubleword_lowpart */
    case 581:  /* *notxorqi_1 */
    case 575:  /* *notxordi_1 */
    case 574:  /* *notxorsi_1 */
    case 573:  /* *notxorhi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 562:  /* *andn_di_ccno */
    case 561:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1742:  /* kandndi */
    case 1741:  /* kandnsi */
    case 1740:  /* kandnhi */
    case 1739:  /* kandnqi */
    case 1465:  /* *andnotv2hi3 */
    case 1464:  /* *andnotv2qi3 */
    case 1463:  /* *andnotv4qi3 */
    case 921:  /* *sibcall_value_memory */
    case 920:  /* *sibcall_value_memory */
    case 707:  /* *ashldi3_doubleword_highpart */
    case 706:  /* *ashldi3_doubleword_highpart */
    case 560:  /* *andnhi_1 */
    case 559:  /* *andnqi_1 */
    case 558:  /* *andnsi_1 */
    case 557:  /* *andnti3_doubleword */
    case 556:  /* *andndi3_doubleword */
    case 555:  /* *andndi3_doubleword_bmi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 554:  /* *xorqi_extsi_3 */
    case 553:  /* *iorqi_extsi_3 */
    case 552:  /* *andqi_extsi_3 */
    case 551:  /* *xorqi_exthi_3 */
    case 550:  /* *iorqi_exthi_3 */
    case 549:  /* *andqi_exthi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 542:  /* *xorqi_extdi_1_cc */
    case 541:  /* *iorqi_extdi_1_cc */
    case 540:  /* *andqi_extdi_1_cc */
    case 539:  /* *xorqi_extsi_1_cc */
    case 538:  /* *iorqi_extsi_1_cc */
    case 537:  /* *andqi_extsi_1_cc */
    case 536:  /* *xorqi_exthi_1_cc */
    case 535:  /* *iorqi_exthi_1_cc */
    case 534:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 482:  /* *testti_not_doubleword */
    case 481:  /* *testdi_not_doubleword */
    case 480:  /* *testdi_not */
    case 479:  /* *testsi_not */
    case 478:  /* *testhi_not */
    case 477:  /* *testqi_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 476:  /* *testqi_ext_3 */
    case 475:  /* *testqi_ext_3 */
    case 474:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 473:  /* *testqi_extdi_2 */
    case 472:  /* *testqi_extsi_2 */
    case 471:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 470:  /* *testqi_extdi_1 */
    case 469:  /* *testqi_extsi_1 */
    case 468:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 463:  /* udivmodhiqi3 */
    case 462:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 460:  /* *udivmodsi4_noext */
    case 459:  /* *divmodsi4_noext */
    case 458:  /* *udivmodhi4_noext */
    case 457:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 448:  /* *umulsi3_highpart_1 */
    case 447:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 446:  /* umulsi3_highpart */
    case 445:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 444:  /* *umulqihi3_1 */
    case 443:  /* *mulqihi3_1 */
    case 442:  /* *mulsidi3_1 */
    case 441:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 461:  /* *divmodsi4_const */
    case 456:  /* *udivmoddi4_pow2 */
    case 455:  /* *udivmodsi4_pow2 */
    case 454:  /* *udivmodsi4 */
    case 453:  /* *udivmodhi4 */
    case 452:  /* *divmodsi4 */
    case 451:  /* *divmodhi4 */
    case 450:  /* udivmodsi4_1 */
    case 449:  /* divmodsi4_1 */
    case 440:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 437:  /* *umulvsi4 */
    case 436:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 420:  /* *subdi3_eq_1 */
    case 419:  /* *subsi3_eq_1 */
    case 418:  /* *subhi3_eq_1 */
    case 417:  /* *subqi3_eq_1 */
    case 416:  /* *subdi3_ne */
    case 415:  /* *subsi3_ne */
    case 414:  /* *subhi3_ne */
    case 413:  /* *subqi3_ne */
    case 412:  /* *subdi3_eq */
    case 411:  /* *subsi3_eq */
    case 410:  /* *subhi3_eq */
    case 409:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 400:  /* *adddi3_ne */
    case 399:  /* *addsi3_ne */
    case 398:  /* *addhi3_ne */
    case 397:  /* *addqi3_ne */
    case 396:  /* *adddi3_eq */
    case 395:  /* *addsi3_eq */
    case 394:  /* *addhi3_eq */
    case 393:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 390:  /* *adddi3_cc_overflow_2 */
    case 389:  /* *addsi3_cc_overflow_2 */
    case 388:  /* *addhi3_cc_overflow_2 */
    case 387:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 386:  /* *addsi3_cconly_overflow_2 */
    case 385:  /* *addhi3_cconly_overflow_2 */
    case 384:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 392:  /* *addti3_doubleword_cc_overflow_1 */
    case 391:  /* *adddi3_doubleword_cc_overflow_1 */
    case 383:  /* adddi3_cc_overflow_1 */
    case 382:  /* addsi3_cc_overflow_1 */
    case 381:  /* addhi3_cc_overflow_1 */
    case 380:  /* addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 379:  /* *addsi3_cconly_overflow_1 */
    case 378:  /* *addhi3_cconly_overflow_1 */
    case 377:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 369:  /* subborrowdi */
    case 368:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 367:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 366:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 365:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 356:  /* subdi3_carry */
    case 355:  /* subsi3_carry */
    case 354:  /* subhi3_carry */
    case 353:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 352:  /* *addcarrydi_1 */
    case 351:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 350:  /* addcarrydi */
    case 349:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 348:  /* *adddi3_carry_0r */
    case 347:  /* *addsi3_carry_0r */
    case 346:  /* *addhi3_carry_0r */
    case 345:  /* *addqi3_carry_0r */
    case 344:  /* *adddi3_carry_0 */
    case 343:  /* *addsi3_carry_0 */
    case 342:  /* *addhi3_carry_0 */
    case 341:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 340:  /* adddi3_carry */
    case 339:  /* addsi3_carry */
    case 338:  /* addhi3_carry */
    case 337:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 336:  /* *dec_cmovsi */
    case 335:  /* *dec_cmovhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 334:  /* *subdi_3 */
    case 333:  /* *subsi_3 */
    case 332:  /* *subhi_3 */
    case 331:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 330:  /* *subvdi4_overflow_2 */
    case 329:  /* *subvsi4_overflow_2 */
    case 328:  /* *subvhi4_overflow_2 */
    case 327:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 326:  /* *subvdi4_overflow_1 */
    case 325:  /* *subvsi4_overflow_1 */
    case 324:  /* *subvhi4_overflow_1 */
    case 323:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 306:  /* *subqi_extsi_0 */
    case 305:  /* *subqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 297:  /* *subqi_extdi_1_slp */
    case 296:  /* *subqi_extsi_1_slp */
    case 295:  /* *subqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 428:  /* *subdi3_ne_0 */
    case 427:  /* *subsi3_ne_0 */
    case 426:  /* *subhi3_ne_0 */
    case 425:  /* *subqi3_ne_0 */
    case 424:  /* *subdi3_eq_0 */
    case 423:  /* *subsi3_eq_0 */
    case 422:  /* *subhi3_eq_0 */
    case 421:  /* *subqi3_eq_0 */
    case 288:  /* *subti3_doubleword_zext */
    case 287:  /* *subdi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 5376:  /* *avx512vl_vpternlogv2df_2 */
    case 5375:  /* *avx512vl_vpternlogv2df_2 */
    case 5374:  /* *avx512vl_vpternlogv2df_2 */
    case 5373:  /* *avx512vl_vpternlogv2df_2 */
    case 5372:  /* *avx512vl_vpternlogv2df_2 */
    case 5371:  /* *avx512vl_vpternlogv2df_2 */
    case 5370:  /* *avx512vl_vpternlogv2df_2 */
    case 5369:  /* *avx512vl_vpternlogv2df_2 */
    case 5368:  /* *avx512vl_vpternlogv2df_2 */
    case 5367:  /* *avx512vl_vpternlogv2df_2 */
    case 5366:  /* *avx512vl_vpternlogv2df_2 */
    case 5365:  /* *avx512vl_vpternlogv2df_2 */
    case 5364:  /* *avx512vl_vpternlogv2df_2 */
    case 5363:  /* *avx512vl_vpternlogv2df_2 */
    case 5362:  /* *avx512vl_vpternlogv2df_2 */
    case 5361:  /* *avx512vl_vpternlogv2df_2 */
    case 5360:  /* *avx512vl_vpternlogv2df_2 */
    case 5359:  /* *avx512vl_vpternlogv2df_2 */
    case 5358:  /* *avx512vl_vpternlogv2df_2 */
    case 5357:  /* *avx512vl_vpternlogv2df_2 */
    case 5356:  /* *avx512vl_vpternlogv2df_2 */
    case 5355:  /* *avx512vl_vpternlogv2df_2 */
    case 5354:  /* *avx512vl_vpternlogv2df_2 */
    case 5353:  /* *avx512vl_vpternlogv2df_2 */
    case 5352:  /* *avx512vl_vpternlogv2df_2 */
    case 5351:  /* *avx512vl_vpternlogv2df_2 */
    case 5350:  /* *avx512vl_vpternlogv2df_2 */
    case 5349:  /* *avx512vl_vpternlogv4df_2 */
    case 5348:  /* *avx512vl_vpternlogv4df_2 */
    case 5347:  /* *avx512vl_vpternlogv4df_2 */
    case 5346:  /* *avx512vl_vpternlogv4df_2 */
    case 5345:  /* *avx512vl_vpternlogv4df_2 */
    case 5344:  /* *avx512vl_vpternlogv4df_2 */
    case 5343:  /* *avx512vl_vpternlogv4df_2 */
    case 5342:  /* *avx512vl_vpternlogv4df_2 */
    case 5341:  /* *avx512vl_vpternlogv4df_2 */
    case 5340:  /* *avx512vl_vpternlogv4df_2 */
    case 5339:  /* *avx512vl_vpternlogv4df_2 */
    case 5338:  /* *avx512vl_vpternlogv4df_2 */
    case 5337:  /* *avx512vl_vpternlogv4df_2 */
    case 5336:  /* *avx512vl_vpternlogv4df_2 */
    case 5335:  /* *avx512vl_vpternlogv4df_2 */
    case 5334:  /* *avx512vl_vpternlogv4df_2 */
    case 5333:  /* *avx512vl_vpternlogv4df_2 */
    case 5332:  /* *avx512vl_vpternlogv4df_2 */
    case 5331:  /* *avx512vl_vpternlogv4df_2 */
    case 5330:  /* *avx512vl_vpternlogv4df_2 */
    case 5329:  /* *avx512vl_vpternlogv4df_2 */
    case 5328:  /* *avx512vl_vpternlogv4df_2 */
    case 5327:  /* *avx512vl_vpternlogv4df_2 */
    case 5326:  /* *avx512vl_vpternlogv4df_2 */
    case 5325:  /* *avx512vl_vpternlogv4df_2 */
    case 5324:  /* *avx512vl_vpternlogv4df_2 */
    case 5323:  /* *avx512vl_vpternlogv4df_2 */
    case 5322:  /* *avx512f_vpternlogv8df_2 */
    case 5321:  /* *avx512f_vpternlogv8df_2 */
    case 5320:  /* *avx512f_vpternlogv8df_2 */
    case 5319:  /* *avx512f_vpternlogv8df_2 */
    case 5318:  /* *avx512f_vpternlogv8df_2 */
    case 5317:  /* *avx512f_vpternlogv8df_2 */
    case 5316:  /* *avx512f_vpternlogv8df_2 */
    case 5315:  /* *avx512f_vpternlogv8df_2 */
    case 5314:  /* *avx512f_vpternlogv8df_2 */
    case 5313:  /* *avx512f_vpternlogv8df_2 */
    case 5312:  /* *avx512f_vpternlogv8df_2 */
    case 5311:  /* *avx512f_vpternlogv8df_2 */
    case 5310:  /* *avx512f_vpternlogv8df_2 */
    case 5309:  /* *avx512f_vpternlogv8df_2 */
    case 5308:  /* *avx512f_vpternlogv8df_2 */
    case 5307:  /* *avx512f_vpternlogv8df_2 */
    case 5306:  /* *avx512f_vpternlogv8df_2 */
    case 5305:  /* *avx512f_vpternlogv8df_2 */
    case 5304:  /* *avx512f_vpternlogv8df_2 */
    case 5303:  /* *avx512f_vpternlogv8df_2 */
    case 5302:  /* *avx512f_vpternlogv8df_2 */
    case 5301:  /* *avx512f_vpternlogv8df_2 */
    case 5300:  /* *avx512f_vpternlogv8df_2 */
    case 5299:  /* *avx512f_vpternlogv8df_2 */
    case 5298:  /* *avx512f_vpternlogv8df_2 */
    case 5297:  /* *avx512f_vpternlogv8df_2 */
    case 5296:  /* *avx512f_vpternlogv8df_2 */
    case 5295:  /* *avx512vl_vpternlogv4sf_2 */
    case 5294:  /* *avx512vl_vpternlogv4sf_2 */
    case 5293:  /* *avx512vl_vpternlogv4sf_2 */
    case 5292:  /* *avx512vl_vpternlogv4sf_2 */
    case 5291:  /* *avx512vl_vpternlogv4sf_2 */
    case 5290:  /* *avx512vl_vpternlogv4sf_2 */
    case 5289:  /* *avx512vl_vpternlogv4sf_2 */
    case 5288:  /* *avx512vl_vpternlogv4sf_2 */
    case 5287:  /* *avx512vl_vpternlogv4sf_2 */
    case 5286:  /* *avx512vl_vpternlogv4sf_2 */
    case 5285:  /* *avx512vl_vpternlogv4sf_2 */
    case 5284:  /* *avx512vl_vpternlogv4sf_2 */
    case 5283:  /* *avx512vl_vpternlogv4sf_2 */
    case 5282:  /* *avx512vl_vpternlogv4sf_2 */
    case 5281:  /* *avx512vl_vpternlogv4sf_2 */
    case 5280:  /* *avx512vl_vpternlogv4sf_2 */
    case 5279:  /* *avx512vl_vpternlogv4sf_2 */
    case 5278:  /* *avx512vl_vpternlogv4sf_2 */
    case 5277:  /* *avx512vl_vpternlogv4sf_2 */
    case 5276:  /* *avx512vl_vpternlogv4sf_2 */
    case 5275:  /* *avx512vl_vpternlogv4sf_2 */
    case 5274:  /* *avx512vl_vpternlogv4sf_2 */
    case 5273:  /* *avx512vl_vpternlogv4sf_2 */
    case 5272:  /* *avx512vl_vpternlogv4sf_2 */
    case 5271:  /* *avx512vl_vpternlogv4sf_2 */
    case 5270:  /* *avx512vl_vpternlogv4sf_2 */
    case 5269:  /* *avx512vl_vpternlogv4sf_2 */
    case 5268:  /* *avx512vl_vpternlogv8sf_2 */
    case 5267:  /* *avx512vl_vpternlogv8sf_2 */
    case 5266:  /* *avx512vl_vpternlogv8sf_2 */
    case 5265:  /* *avx512vl_vpternlogv8sf_2 */
    case 5264:  /* *avx512vl_vpternlogv8sf_2 */
    case 5263:  /* *avx512vl_vpternlogv8sf_2 */
    case 5262:  /* *avx512vl_vpternlogv8sf_2 */
    case 5261:  /* *avx512vl_vpternlogv8sf_2 */
    case 5260:  /* *avx512vl_vpternlogv8sf_2 */
    case 5259:  /* *avx512vl_vpternlogv8sf_2 */
    case 5258:  /* *avx512vl_vpternlogv8sf_2 */
    case 5257:  /* *avx512vl_vpternlogv8sf_2 */
    case 5256:  /* *avx512vl_vpternlogv8sf_2 */
    case 5255:  /* *avx512vl_vpternlogv8sf_2 */
    case 5254:  /* *avx512vl_vpternlogv8sf_2 */
    case 5253:  /* *avx512vl_vpternlogv8sf_2 */
    case 5252:  /* *avx512vl_vpternlogv8sf_2 */
    case 5251:  /* *avx512vl_vpternlogv8sf_2 */
    case 5250:  /* *avx512vl_vpternlogv8sf_2 */
    case 5249:  /* *avx512vl_vpternlogv8sf_2 */
    case 5248:  /* *avx512vl_vpternlogv8sf_2 */
    case 5247:  /* *avx512vl_vpternlogv8sf_2 */
    case 5246:  /* *avx512vl_vpternlogv8sf_2 */
    case 5245:  /* *avx512vl_vpternlogv8sf_2 */
    case 5244:  /* *avx512vl_vpternlogv8sf_2 */
    case 5243:  /* *avx512vl_vpternlogv8sf_2 */
    case 5242:  /* *avx512vl_vpternlogv8sf_2 */
    case 5241:  /* *avx512f_vpternlogv16sf_2 */
    case 5240:  /* *avx512f_vpternlogv16sf_2 */
    case 5239:  /* *avx512f_vpternlogv16sf_2 */
    case 5238:  /* *avx512f_vpternlogv16sf_2 */
    case 5237:  /* *avx512f_vpternlogv16sf_2 */
    case 5236:  /* *avx512f_vpternlogv16sf_2 */
    case 5235:  /* *avx512f_vpternlogv16sf_2 */
    case 5234:  /* *avx512f_vpternlogv16sf_2 */
    case 5233:  /* *avx512f_vpternlogv16sf_2 */
    case 5232:  /* *avx512f_vpternlogv16sf_2 */
    case 5231:  /* *avx512f_vpternlogv16sf_2 */
    case 5230:  /* *avx512f_vpternlogv16sf_2 */
    case 5229:  /* *avx512f_vpternlogv16sf_2 */
    case 5228:  /* *avx512f_vpternlogv16sf_2 */
    case 5227:  /* *avx512f_vpternlogv16sf_2 */
    case 5226:  /* *avx512f_vpternlogv16sf_2 */
    case 5225:  /* *avx512f_vpternlogv16sf_2 */
    case 5224:  /* *avx512f_vpternlogv16sf_2 */
    case 5223:  /* *avx512f_vpternlogv16sf_2 */
    case 5222:  /* *avx512f_vpternlogv16sf_2 */
    case 5221:  /* *avx512f_vpternlogv16sf_2 */
    case 5220:  /* *avx512f_vpternlogv16sf_2 */
    case 5219:  /* *avx512f_vpternlogv16sf_2 */
    case 5218:  /* *avx512f_vpternlogv16sf_2 */
    case 5217:  /* *avx512f_vpternlogv16sf_2 */
    case 5216:  /* *avx512f_vpternlogv16sf_2 */
    case 5215:  /* *avx512f_vpternlogv16sf_2 */
    case 5214:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5213:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5212:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5211:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5210:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5209:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5208:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5207:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5206:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5205:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5204:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5203:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5202:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5201:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5200:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5199:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5198:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5197:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5196:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5195:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5194:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5193:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5192:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5191:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5190:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5189:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5188:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5187:  /* *avx512vl_vpternlogv16hf_2 */
    case 5186:  /* *avx512vl_vpternlogv16hf_2 */
    case 5185:  /* *avx512vl_vpternlogv16hf_2 */
    case 5184:  /* *avx512vl_vpternlogv16hf_2 */
    case 5183:  /* *avx512vl_vpternlogv16hf_2 */
    case 5182:  /* *avx512vl_vpternlogv16hf_2 */
    case 5181:  /* *avx512vl_vpternlogv16hf_2 */
    case 5180:  /* *avx512vl_vpternlogv16hf_2 */
    case 5179:  /* *avx512vl_vpternlogv16hf_2 */
    case 5178:  /* *avx512vl_vpternlogv16hf_2 */
    case 5177:  /* *avx512vl_vpternlogv16hf_2 */
    case 5176:  /* *avx512vl_vpternlogv16hf_2 */
    case 5175:  /* *avx512vl_vpternlogv16hf_2 */
    case 5174:  /* *avx512vl_vpternlogv16hf_2 */
    case 5173:  /* *avx512vl_vpternlogv16hf_2 */
    case 5172:  /* *avx512vl_vpternlogv16hf_2 */
    case 5171:  /* *avx512vl_vpternlogv16hf_2 */
    case 5170:  /* *avx512vl_vpternlogv16hf_2 */
    case 5169:  /* *avx512vl_vpternlogv16hf_2 */
    case 5168:  /* *avx512vl_vpternlogv16hf_2 */
    case 5167:  /* *avx512vl_vpternlogv16hf_2 */
    case 5166:  /* *avx512vl_vpternlogv16hf_2 */
    case 5165:  /* *avx512vl_vpternlogv16hf_2 */
    case 5164:  /* *avx512vl_vpternlogv16hf_2 */
    case 5163:  /* *avx512vl_vpternlogv16hf_2 */
    case 5162:  /* *avx512vl_vpternlogv16hf_2 */
    case 5161:  /* *avx512vl_vpternlogv16hf_2 */
    case 5160:  /* *avx512bw_vpternlogv32hf_2 */
    case 5159:  /* *avx512bw_vpternlogv32hf_2 */
    case 5158:  /* *avx512bw_vpternlogv32hf_2 */
    case 5157:  /* *avx512bw_vpternlogv32hf_2 */
    case 5156:  /* *avx512bw_vpternlogv32hf_2 */
    case 5155:  /* *avx512bw_vpternlogv32hf_2 */
    case 5154:  /* *avx512bw_vpternlogv32hf_2 */
    case 5153:  /* *avx512bw_vpternlogv32hf_2 */
    case 5152:  /* *avx512bw_vpternlogv32hf_2 */
    case 5151:  /* *avx512bw_vpternlogv32hf_2 */
    case 5150:  /* *avx512bw_vpternlogv32hf_2 */
    case 5149:  /* *avx512bw_vpternlogv32hf_2 */
    case 5148:  /* *avx512bw_vpternlogv32hf_2 */
    case 5147:  /* *avx512bw_vpternlogv32hf_2 */
    case 5146:  /* *avx512bw_vpternlogv32hf_2 */
    case 5145:  /* *avx512bw_vpternlogv32hf_2 */
    case 5144:  /* *avx512bw_vpternlogv32hf_2 */
    case 5143:  /* *avx512bw_vpternlogv32hf_2 */
    case 5142:  /* *avx512bw_vpternlogv32hf_2 */
    case 5141:  /* *avx512bw_vpternlogv32hf_2 */
    case 5140:  /* *avx512bw_vpternlogv32hf_2 */
    case 5139:  /* *avx512bw_vpternlogv32hf_2 */
    case 5138:  /* *avx512bw_vpternlogv32hf_2 */
    case 5137:  /* *avx512bw_vpternlogv32hf_2 */
    case 5136:  /* *avx512bw_vpternlogv32hf_2 */
    case 5135:  /* *avx512bw_vpternlogv32hf_2 */
    case 5134:  /* *avx512bw_vpternlogv32hf_2 */
    case 5133:  /* *avx512vl_vpternlogv2di_2 */
    case 5132:  /* *avx512vl_vpternlogv2di_2 */
    case 5131:  /* *avx512vl_vpternlogv2di_2 */
    case 5130:  /* *avx512vl_vpternlogv2di_2 */
    case 5129:  /* *avx512vl_vpternlogv2di_2 */
    case 5128:  /* *avx512vl_vpternlogv2di_2 */
    case 5127:  /* *avx512vl_vpternlogv2di_2 */
    case 5126:  /* *avx512vl_vpternlogv2di_2 */
    case 5125:  /* *avx512vl_vpternlogv2di_2 */
    case 5124:  /* *avx512vl_vpternlogv2di_2 */
    case 5123:  /* *avx512vl_vpternlogv2di_2 */
    case 5122:  /* *avx512vl_vpternlogv2di_2 */
    case 5121:  /* *avx512vl_vpternlogv2di_2 */
    case 5120:  /* *avx512vl_vpternlogv2di_2 */
    case 5119:  /* *avx512vl_vpternlogv2di_2 */
    case 5118:  /* *avx512vl_vpternlogv2di_2 */
    case 5117:  /* *avx512vl_vpternlogv2di_2 */
    case 5116:  /* *avx512vl_vpternlogv2di_2 */
    case 5115:  /* *avx512vl_vpternlogv2di_2 */
    case 5114:  /* *avx512vl_vpternlogv2di_2 */
    case 5113:  /* *avx512vl_vpternlogv2di_2 */
    case 5112:  /* *avx512vl_vpternlogv2di_2 */
    case 5111:  /* *avx512vl_vpternlogv2di_2 */
    case 5110:  /* *avx512vl_vpternlogv2di_2 */
    case 5109:  /* *avx512vl_vpternlogv2di_2 */
    case 5108:  /* *avx512vl_vpternlogv2di_2 */
    case 5107:  /* *avx512vl_vpternlogv2di_2 */
    case 5106:  /* *avx512vl_vpternlogv4di_2 */
    case 5105:  /* *avx512vl_vpternlogv4di_2 */
    case 5104:  /* *avx512vl_vpternlogv4di_2 */
    case 5103:  /* *avx512vl_vpternlogv4di_2 */
    case 5102:  /* *avx512vl_vpternlogv4di_2 */
    case 5101:  /* *avx512vl_vpternlogv4di_2 */
    case 5100:  /* *avx512vl_vpternlogv4di_2 */
    case 5099:  /* *avx512vl_vpternlogv4di_2 */
    case 5098:  /* *avx512vl_vpternlogv4di_2 */
    case 5097:  /* *avx512vl_vpternlogv4di_2 */
    case 5096:  /* *avx512vl_vpternlogv4di_2 */
    case 5095:  /* *avx512vl_vpternlogv4di_2 */
    case 5094:  /* *avx512vl_vpternlogv4di_2 */
    case 5093:  /* *avx512vl_vpternlogv4di_2 */
    case 5092:  /* *avx512vl_vpternlogv4di_2 */
    case 5091:  /* *avx512vl_vpternlogv4di_2 */
    case 5090:  /* *avx512vl_vpternlogv4di_2 */
    case 5089:  /* *avx512vl_vpternlogv4di_2 */
    case 5088:  /* *avx512vl_vpternlogv4di_2 */
    case 5087:  /* *avx512vl_vpternlogv4di_2 */
    case 5086:  /* *avx512vl_vpternlogv4di_2 */
    case 5085:  /* *avx512vl_vpternlogv4di_2 */
    case 5084:  /* *avx512vl_vpternlogv4di_2 */
    case 5083:  /* *avx512vl_vpternlogv4di_2 */
    case 5082:  /* *avx512vl_vpternlogv4di_2 */
    case 5081:  /* *avx512vl_vpternlogv4di_2 */
    case 5080:  /* *avx512vl_vpternlogv4di_2 */
    case 5079:  /* *avx512f_vpternlogv8di_2 */
    case 5078:  /* *avx512f_vpternlogv8di_2 */
    case 5077:  /* *avx512f_vpternlogv8di_2 */
    case 5076:  /* *avx512f_vpternlogv8di_2 */
    case 5075:  /* *avx512f_vpternlogv8di_2 */
    case 5074:  /* *avx512f_vpternlogv8di_2 */
    case 5073:  /* *avx512f_vpternlogv8di_2 */
    case 5072:  /* *avx512f_vpternlogv8di_2 */
    case 5071:  /* *avx512f_vpternlogv8di_2 */
    case 5070:  /* *avx512f_vpternlogv8di_2 */
    case 5069:  /* *avx512f_vpternlogv8di_2 */
    case 5068:  /* *avx512f_vpternlogv8di_2 */
    case 5067:  /* *avx512f_vpternlogv8di_2 */
    case 5066:  /* *avx512f_vpternlogv8di_2 */
    case 5065:  /* *avx512f_vpternlogv8di_2 */
    case 5064:  /* *avx512f_vpternlogv8di_2 */
    case 5063:  /* *avx512f_vpternlogv8di_2 */
    case 5062:  /* *avx512f_vpternlogv8di_2 */
    case 5061:  /* *avx512f_vpternlogv8di_2 */
    case 5060:  /* *avx512f_vpternlogv8di_2 */
    case 5059:  /* *avx512f_vpternlogv8di_2 */
    case 5058:  /* *avx512f_vpternlogv8di_2 */
    case 5057:  /* *avx512f_vpternlogv8di_2 */
    case 5056:  /* *avx512f_vpternlogv8di_2 */
    case 5055:  /* *avx512f_vpternlogv8di_2 */
    case 5054:  /* *avx512f_vpternlogv8di_2 */
    case 5053:  /* *avx512f_vpternlogv8di_2 */
    case 5052:  /* *avx512vl_vpternlogv4si_2 */
    case 5051:  /* *avx512vl_vpternlogv4si_2 */
    case 5050:  /* *avx512vl_vpternlogv4si_2 */
    case 5049:  /* *avx512vl_vpternlogv4si_2 */
    case 5048:  /* *avx512vl_vpternlogv4si_2 */
    case 5047:  /* *avx512vl_vpternlogv4si_2 */
    case 5046:  /* *avx512vl_vpternlogv4si_2 */
    case 5045:  /* *avx512vl_vpternlogv4si_2 */
    case 5044:  /* *avx512vl_vpternlogv4si_2 */
    case 5043:  /* *avx512vl_vpternlogv4si_2 */
    case 5042:  /* *avx512vl_vpternlogv4si_2 */
    case 5041:  /* *avx512vl_vpternlogv4si_2 */
    case 5040:  /* *avx512vl_vpternlogv4si_2 */
    case 5039:  /* *avx512vl_vpternlogv4si_2 */
    case 5038:  /* *avx512vl_vpternlogv4si_2 */
    case 5037:  /* *avx512vl_vpternlogv4si_2 */
    case 5036:  /* *avx512vl_vpternlogv4si_2 */
    case 5035:  /* *avx512vl_vpternlogv4si_2 */
    case 5034:  /* *avx512vl_vpternlogv4si_2 */
    case 5033:  /* *avx512vl_vpternlogv4si_2 */
    case 5032:  /* *avx512vl_vpternlogv4si_2 */
    case 5031:  /* *avx512vl_vpternlogv4si_2 */
    case 5030:  /* *avx512vl_vpternlogv4si_2 */
    case 5029:  /* *avx512vl_vpternlogv4si_2 */
    case 5028:  /* *avx512vl_vpternlogv4si_2 */
    case 5027:  /* *avx512vl_vpternlogv4si_2 */
    case 5026:  /* *avx512vl_vpternlogv4si_2 */
    case 5025:  /* *avx512vl_vpternlogv8si_2 */
    case 5024:  /* *avx512vl_vpternlogv8si_2 */
    case 5023:  /* *avx512vl_vpternlogv8si_2 */
    case 5022:  /* *avx512vl_vpternlogv8si_2 */
    case 5021:  /* *avx512vl_vpternlogv8si_2 */
    case 5020:  /* *avx512vl_vpternlogv8si_2 */
    case 5019:  /* *avx512vl_vpternlogv8si_2 */
    case 5018:  /* *avx512vl_vpternlogv8si_2 */
    case 5017:  /* *avx512vl_vpternlogv8si_2 */
    case 5016:  /* *avx512vl_vpternlogv8si_2 */
    case 5015:  /* *avx512vl_vpternlogv8si_2 */
    case 5014:  /* *avx512vl_vpternlogv8si_2 */
    case 5013:  /* *avx512vl_vpternlogv8si_2 */
    case 5012:  /* *avx512vl_vpternlogv8si_2 */
    case 5011:  /* *avx512vl_vpternlogv8si_2 */
    case 5010:  /* *avx512vl_vpternlogv8si_2 */
    case 5009:  /* *avx512vl_vpternlogv8si_2 */
    case 5008:  /* *avx512vl_vpternlogv8si_2 */
    case 5007:  /* *avx512vl_vpternlogv8si_2 */
    case 5006:  /* *avx512vl_vpternlogv8si_2 */
    case 5005:  /* *avx512vl_vpternlogv8si_2 */
    case 5004:  /* *avx512vl_vpternlogv8si_2 */
    case 5003:  /* *avx512vl_vpternlogv8si_2 */
    case 5002:  /* *avx512vl_vpternlogv8si_2 */
    case 5001:  /* *avx512vl_vpternlogv8si_2 */
    case 5000:  /* *avx512vl_vpternlogv8si_2 */
    case 4999:  /* *avx512vl_vpternlogv8si_2 */
    case 4998:  /* *avx512f_vpternlogv16si_2 */
    case 4997:  /* *avx512f_vpternlogv16si_2 */
    case 4996:  /* *avx512f_vpternlogv16si_2 */
    case 4995:  /* *avx512f_vpternlogv16si_2 */
    case 4994:  /* *avx512f_vpternlogv16si_2 */
    case 4993:  /* *avx512f_vpternlogv16si_2 */
    case 4992:  /* *avx512f_vpternlogv16si_2 */
    case 4991:  /* *avx512f_vpternlogv16si_2 */
    case 4990:  /* *avx512f_vpternlogv16si_2 */
    case 4989:  /* *avx512f_vpternlogv16si_2 */
    case 4988:  /* *avx512f_vpternlogv16si_2 */
    case 4987:  /* *avx512f_vpternlogv16si_2 */
    case 4986:  /* *avx512f_vpternlogv16si_2 */
    case 4985:  /* *avx512f_vpternlogv16si_2 */
    case 4984:  /* *avx512f_vpternlogv16si_2 */
    case 4983:  /* *avx512f_vpternlogv16si_2 */
    case 4982:  /* *avx512f_vpternlogv16si_2 */
    case 4981:  /* *avx512f_vpternlogv16si_2 */
    case 4980:  /* *avx512f_vpternlogv16si_2 */
    case 4979:  /* *avx512f_vpternlogv16si_2 */
    case 4978:  /* *avx512f_vpternlogv16si_2 */
    case 4977:  /* *avx512f_vpternlogv16si_2 */
    case 4976:  /* *avx512f_vpternlogv16si_2 */
    case 4975:  /* *avx512f_vpternlogv16si_2 */
    case 4974:  /* *avx512f_vpternlogv16si_2 */
    case 4973:  /* *avx512f_vpternlogv16si_2 */
    case 4972:  /* *avx512f_vpternlogv16si_2 */
    case 4971:  /* *avx512vl_vpternlogv8hi_2 */
    case 4970:  /* *avx512vl_vpternlogv8hi_2 */
    case 4969:  /* *avx512vl_vpternlogv8hi_2 */
    case 4968:  /* *avx512vl_vpternlogv8hi_2 */
    case 4967:  /* *avx512vl_vpternlogv8hi_2 */
    case 4966:  /* *avx512vl_vpternlogv8hi_2 */
    case 4965:  /* *avx512vl_vpternlogv8hi_2 */
    case 4964:  /* *avx512vl_vpternlogv8hi_2 */
    case 4963:  /* *avx512vl_vpternlogv8hi_2 */
    case 4962:  /* *avx512vl_vpternlogv8hi_2 */
    case 4961:  /* *avx512vl_vpternlogv8hi_2 */
    case 4960:  /* *avx512vl_vpternlogv8hi_2 */
    case 4959:  /* *avx512vl_vpternlogv8hi_2 */
    case 4958:  /* *avx512vl_vpternlogv8hi_2 */
    case 4957:  /* *avx512vl_vpternlogv8hi_2 */
    case 4956:  /* *avx512vl_vpternlogv8hi_2 */
    case 4955:  /* *avx512vl_vpternlogv8hi_2 */
    case 4954:  /* *avx512vl_vpternlogv8hi_2 */
    case 4953:  /* *avx512vl_vpternlogv8hi_2 */
    case 4952:  /* *avx512vl_vpternlogv8hi_2 */
    case 4951:  /* *avx512vl_vpternlogv8hi_2 */
    case 4950:  /* *avx512vl_vpternlogv8hi_2 */
    case 4949:  /* *avx512vl_vpternlogv8hi_2 */
    case 4948:  /* *avx512vl_vpternlogv8hi_2 */
    case 4947:  /* *avx512vl_vpternlogv8hi_2 */
    case 4946:  /* *avx512vl_vpternlogv8hi_2 */
    case 4945:  /* *avx512vl_vpternlogv8hi_2 */
    case 4944:  /* *avx512vl_vpternlogv16hi_2 */
    case 4943:  /* *avx512vl_vpternlogv16hi_2 */
    case 4942:  /* *avx512vl_vpternlogv16hi_2 */
    case 4941:  /* *avx512vl_vpternlogv16hi_2 */
    case 4940:  /* *avx512vl_vpternlogv16hi_2 */
    case 4939:  /* *avx512vl_vpternlogv16hi_2 */
    case 4938:  /* *avx512vl_vpternlogv16hi_2 */
    case 4937:  /* *avx512vl_vpternlogv16hi_2 */
    case 4936:  /* *avx512vl_vpternlogv16hi_2 */
    case 4935:  /* *avx512vl_vpternlogv16hi_2 */
    case 4934:  /* *avx512vl_vpternlogv16hi_2 */
    case 4933:  /* *avx512vl_vpternlogv16hi_2 */
    case 4932:  /* *avx512vl_vpternlogv16hi_2 */
    case 4931:  /* *avx512vl_vpternlogv16hi_2 */
    case 4930:  /* *avx512vl_vpternlogv16hi_2 */
    case 4929:  /* *avx512vl_vpternlogv16hi_2 */
    case 4928:  /* *avx512vl_vpternlogv16hi_2 */
    case 4927:  /* *avx512vl_vpternlogv16hi_2 */
    case 4926:  /* *avx512vl_vpternlogv16hi_2 */
    case 4925:  /* *avx512vl_vpternlogv16hi_2 */
    case 4924:  /* *avx512vl_vpternlogv16hi_2 */
    case 4923:  /* *avx512vl_vpternlogv16hi_2 */
    case 4922:  /* *avx512vl_vpternlogv16hi_2 */
    case 4921:  /* *avx512vl_vpternlogv16hi_2 */
    case 4920:  /* *avx512vl_vpternlogv16hi_2 */
    case 4919:  /* *avx512vl_vpternlogv16hi_2 */
    case 4918:  /* *avx512vl_vpternlogv16hi_2 */
    case 4917:  /* *avx512bw_vpternlogv32hi_2 */
    case 4916:  /* *avx512bw_vpternlogv32hi_2 */
    case 4915:  /* *avx512bw_vpternlogv32hi_2 */
    case 4914:  /* *avx512bw_vpternlogv32hi_2 */
    case 4913:  /* *avx512bw_vpternlogv32hi_2 */
    case 4912:  /* *avx512bw_vpternlogv32hi_2 */
    case 4911:  /* *avx512bw_vpternlogv32hi_2 */
    case 4910:  /* *avx512bw_vpternlogv32hi_2 */
    case 4909:  /* *avx512bw_vpternlogv32hi_2 */
    case 4908:  /* *avx512bw_vpternlogv32hi_2 */
    case 4907:  /* *avx512bw_vpternlogv32hi_2 */
    case 4906:  /* *avx512bw_vpternlogv32hi_2 */
    case 4905:  /* *avx512bw_vpternlogv32hi_2 */
    case 4904:  /* *avx512bw_vpternlogv32hi_2 */
    case 4903:  /* *avx512bw_vpternlogv32hi_2 */
    case 4902:  /* *avx512bw_vpternlogv32hi_2 */
    case 4901:  /* *avx512bw_vpternlogv32hi_2 */
    case 4900:  /* *avx512bw_vpternlogv32hi_2 */
    case 4899:  /* *avx512bw_vpternlogv32hi_2 */
    case 4898:  /* *avx512bw_vpternlogv32hi_2 */
    case 4897:  /* *avx512bw_vpternlogv32hi_2 */
    case 4896:  /* *avx512bw_vpternlogv32hi_2 */
    case 4895:  /* *avx512bw_vpternlogv32hi_2 */
    case 4894:  /* *avx512bw_vpternlogv32hi_2 */
    case 4893:  /* *avx512bw_vpternlogv32hi_2 */
    case 4892:  /* *avx512bw_vpternlogv32hi_2 */
    case 4891:  /* *avx512bw_vpternlogv32hi_2 */
    case 4890:  /* *avx512vl_vpternlogv16qi_2 */
    case 4889:  /* *avx512vl_vpternlogv16qi_2 */
    case 4888:  /* *avx512vl_vpternlogv16qi_2 */
    case 4887:  /* *avx512vl_vpternlogv16qi_2 */
    case 4886:  /* *avx512vl_vpternlogv16qi_2 */
    case 4885:  /* *avx512vl_vpternlogv16qi_2 */
    case 4884:  /* *avx512vl_vpternlogv16qi_2 */
    case 4883:  /* *avx512vl_vpternlogv16qi_2 */
    case 4882:  /* *avx512vl_vpternlogv16qi_2 */
    case 4881:  /* *avx512vl_vpternlogv16qi_2 */
    case 4880:  /* *avx512vl_vpternlogv16qi_2 */
    case 4879:  /* *avx512vl_vpternlogv16qi_2 */
    case 4878:  /* *avx512vl_vpternlogv16qi_2 */
    case 4877:  /* *avx512vl_vpternlogv16qi_2 */
    case 4876:  /* *avx512vl_vpternlogv16qi_2 */
    case 4875:  /* *avx512vl_vpternlogv16qi_2 */
    case 4874:  /* *avx512vl_vpternlogv16qi_2 */
    case 4873:  /* *avx512vl_vpternlogv16qi_2 */
    case 4872:  /* *avx512vl_vpternlogv16qi_2 */
    case 4871:  /* *avx512vl_vpternlogv16qi_2 */
    case 4870:  /* *avx512vl_vpternlogv16qi_2 */
    case 4869:  /* *avx512vl_vpternlogv16qi_2 */
    case 4868:  /* *avx512vl_vpternlogv16qi_2 */
    case 4867:  /* *avx512vl_vpternlogv16qi_2 */
    case 4866:  /* *avx512vl_vpternlogv16qi_2 */
    case 4865:  /* *avx512vl_vpternlogv16qi_2 */
    case 4864:  /* *avx512vl_vpternlogv16qi_2 */
    case 4863:  /* *avx512vl_vpternlogv32qi_2 */
    case 4862:  /* *avx512vl_vpternlogv32qi_2 */
    case 4861:  /* *avx512vl_vpternlogv32qi_2 */
    case 4860:  /* *avx512vl_vpternlogv32qi_2 */
    case 4859:  /* *avx512vl_vpternlogv32qi_2 */
    case 4858:  /* *avx512vl_vpternlogv32qi_2 */
    case 4857:  /* *avx512vl_vpternlogv32qi_2 */
    case 4856:  /* *avx512vl_vpternlogv32qi_2 */
    case 4855:  /* *avx512vl_vpternlogv32qi_2 */
    case 4854:  /* *avx512vl_vpternlogv32qi_2 */
    case 4853:  /* *avx512vl_vpternlogv32qi_2 */
    case 4852:  /* *avx512vl_vpternlogv32qi_2 */
    case 4851:  /* *avx512vl_vpternlogv32qi_2 */
    case 4850:  /* *avx512vl_vpternlogv32qi_2 */
    case 4849:  /* *avx512vl_vpternlogv32qi_2 */
    case 4848:  /* *avx512vl_vpternlogv32qi_2 */
    case 4847:  /* *avx512vl_vpternlogv32qi_2 */
    case 4846:  /* *avx512vl_vpternlogv32qi_2 */
    case 4845:  /* *avx512vl_vpternlogv32qi_2 */
    case 4844:  /* *avx512vl_vpternlogv32qi_2 */
    case 4843:  /* *avx512vl_vpternlogv32qi_2 */
    case 4842:  /* *avx512vl_vpternlogv32qi_2 */
    case 4841:  /* *avx512vl_vpternlogv32qi_2 */
    case 4840:  /* *avx512vl_vpternlogv32qi_2 */
    case 4839:  /* *avx512vl_vpternlogv32qi_2 */
    case 4838:  /* *avx512vl_vpternlogv32qi_2 */
    case 4837:  /* *avx512vl_vpternlogv32qi_2 */
    case 4836:  /* *avx512bw_vpternlogv64qi_2 */
    case 4835:  /* *avx512bw_vpternlogv64qi_2 */
    case 4834:  /* *avx512bw_vpternlogv64qi_2 */
    case 4833:  /* *avx512bw_vpternlogv64qi_2 */
    case 4832:  /* *avx512bw_vpternlogv64qi_2 */
    case 4831:  /* *avx512bw_vpternlogv64qi_2 */
    case 4830:  /* *avx512bw_vpternlogv64qi_2 */
    case 4829:  /* *avx512bw_vpternlogv64qi_2 */
    case 4828:  /* *avx512bw_vpternlogv64qi_2 */
    case 4827:  /* *avx512bw_vpternlogv64qi_2 */
    case 4826:  /* *avx512bw_vpternlogv64qi_2 */
    case 4825:  /* *avx512bw_vpternlogv64qi_2 */
    case 4824:  /* *avx512bw_vpternlogv64qi_2 */
    case 4823:  /* *avx512bw_vpternlogv64qi_2 */
    case 4822:  /* *avx512bw_vpternlogv64qi_2 */
    case 4821:  /* *avx512bw_vpternlogv64qi_2 */
    case 4820:  /* *avx512bw_vpternlogv64qi_2 */
    case 4819:  /* *avx512bw_vpternlogv64qi_2 */
    case 4818:  /* *avx512bw_vpternlogv64qi_2 */
    case 4817:  /* *avx512bw_vpternlogv64qi_2 */
    case 4816:  /* *avx512bw_vpternlogv64qi_2 */
    case 4815:  /* *avx512bw_vpternlogv64qi_2 */
    case 4814:  /* *avx512bw_vpternlogv64qi_2 */
    case 4813:  /* *avx512bw_vpternlogv64qi_2 */
    case 4812:  /* *avx512bw_vpternlogv64qi_2 */
    case 4811:  /* *avx512bw_vpternlogv64qi_2 */
    case 4810:  /* *avx512bw_vpternlogv64qi_2 */
    case 278:  /* *leahi_general_3b */
    case 277:  /* *leaqi_general_3b */
    case 276:  /* *leahi_general_3 */
    case 275:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7490:  /* xop_pmacssdd */
    case 7489:  /* xop_pmacsdd */
    case 7488:  /* xop_pmacssww */
    case 7487:  /* xop_pmacsww */
    case 5565:  /* *avx512vl_vpternlogv2df_3 */
    case 5564:  /* *avx512vl_vpternlogv2df_3 */
    case 5563:  /* *avx512vl_vpternlogv2df_3 */
    case 5562:  /* *avx512vl_vpternlogv2df_3 */
    case 5561:  /* *avx512vl_vpternlogv2df_3 */
    case 5560:  /* *avx512vl_vpternlogv2df_3 */
    case 5559:  /* *avx512vl_vpternlogv2df_3 */
    case 5558:  /* *avx512vl_vpternlogv2df_3 */
    case 5557:  /* *avx512vl_vpternlogv2df_3 */
    case 5556:  /* *avx512vl_vpternlogv4df_3 */
    case 5555:  /* *avx512vl_vpternlogv4df_3 */
    case 5554:  /* *avx512vl_vpternlogv4df_3 */
    case 5553:  /* *avx512vl_vpternlogv4df_3 */
    case 5552:  /* *avx512vl_vpternlogv4df_3 */
    case 5551:  /* *avx512vl_vpternlogv4df_3 */
    case 5550:  /* *avx512vl_vpternlogv4df_3 */
    case 5549:  /* *avx512vl_vpternlogv4df_3 */
    case 5548:  /* *avx512vl_vpternlogv4df_3 */
    case 5547:  /* *avx512f_vpternlogv8df_3 */
    case 5546:  /* *avx512f_vpternlogv8df_3 */
    case 5545:  /* *avx512f_vpternlogv8df_3 */
    case 5544:  /* *avx512f_vpternlogv8df_3 */
    case 5543:  /* *avx512f_vpternlogv8df_3 */
    case 5542:  /* *avx512f_vpternlogv8df_3 */
    case 5541:  /* *avx512f_vpternlogv8df_3 */
    case 5540:  /* *avx512f_vpternlogv8df_3 */
    case 5539:  /* *avx512f_vpternlogv8df_3 */
    case 5538:  /* *avx512vl_vpternlogv4sf_3 */
    case 5537:  /* *avx512vl_vpternlogv4sf_3 */
    case 5536:  /* *avx512vl_vpternlogv4sf_3 */
    case 5535:  /* *avx512vl_vpternlogv4sf_3 */
    case 5534:  /* *avx512vl_vpternlogv4sf_3 */
    case 5533:  /* *avx512vl_vpternlogv4sf_3 */
    case 5532:  /* *avx512vl_vpternlogv4sf_3 */
    case 5531:  /* *avx512vl_vpternlogv4sf_3 */
    case 5530:  /* *avx512vl_vpternlogv4sf_3 */
    case 5529:  /* *avx512vl_vpternlogv8sf_3 */
    case 5528:  /* *avx512vl_vpternlogv8sf_3 */
    case 5527:  /* *avx512vl_vpternlogv8sf_3 */
    case 5526:  /* *avx512vl_vpternlogv8sf_3 */
    case 5525:  /* *avx512vl_vpternlogv8sf_3 */
    case 5524:  /* *avx512vl_vpternlogv8sf_3 */
    case 5523:  /* *avx512vl_vpternlogv8sf_3 */
    case 5522:  /* *avx512vl_vpternlogv8sf_3 */
    case 5521:  /* *avx512vl_vpternlogv8sf_3 */
    case 5520:  /* *avx512f_vpternlogv16sf_3 */
    case 5519:  /* *avx512f_vpternlogv16sf_3 */
    case 5518:  /* *avx512f_vpternlogv16sf_3 */
    case 5517:  /* *avx512f_vpternlogv16sf_3 */
    case 5516:  /* *avx512f_vpternlogv16sf_3 */
    case 5515:  /* *avx512f_vpternlogv16sf_3 */
    case 5514:  /* *avx512f_vpternlogv16sf_3 */
    case 5513:  /* *avx512f_vpternlogv16sf_3 */
    case 5512:  /* *avx512f_vpternlogv16sf_3 */
    case 5511:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5510:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5509:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5508:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5507:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5506:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5505:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5504:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5503:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5502:  /* *avx512vl_vpternlogv16hf_3 */
    case 5501:  /* *avx512vl_vpternlogv16hf_3 */
    case 5500:  /* *avx512vl_vpternlogv16hf_3 */
    case 5499:  /* *avx512vl_vpternlogv16hf_3 */
    case 5498:  /* *avx512vl_vpternlogv16hf_3 */
    case 5497:  /* *avx512vl_vpternlogv16hf_3 */
    case 5496:  /* *avx512vl_vpternlogv16hf_3 */
    case 5495:  /* *avx512vl_vpternlogv16hf_3 */
    case 5494:  /* *avx512vl_vpternlogv16hf_3 */
    case 5493:  /* *avx512bw_vpternlogv32hf_3 */
    case 5492:  /* *avx512bw_vpternlogv32hf_3 */
    case 5491:  /* *avx512bw_vpternlogv32hf_3 */
    case 5490:  /* *avx512bw_vpternlogv32hf_3 */
    case 5489:  /* *avx512bw_vpternlogv32hf_3 */
    case 5488:  /* *avx512bw_vpternlogv32hf_3 */
    case 5487:  /* *avx512bw_vpternlogv32hf_3 */
    case 5486:  /* *avx512bw_vpternlogv32hf_3 */
    case 5485:  /* *avx512bw_vpternlogv32hf_3 */
    case 5484:  /* *avx512vl_vpternlogv2di_3 */
    case 5483:  /* *avx512vl_vpternlogv2di_3 */
    case 5482:  /* *avx512vl_vpternlogv2di_3 */
    case 5481:  /* *avx512vl_vpternlogv2di_3 */
    case 5480:  /* *avx512vl_vpternlogv2di_3 */
    case 5479:  /* *avx512vl_vpternlogv2di_3 */
    case 5478:  /* *avx512vl_vpternlogv2di_3 */
    case 5477:  /* *avx512vl_vpternlogv2di_3 */
    case 5476:  /* *avx512vl_vpternlogv2di_3 */
    case 5475:  /* *avx512vl_vpternlogv4di_3 */
    case 5474:  /* *avx512vl_vpternlogv4di_3 */
    case 5473:  /* *avx512vl_vpternlogv4di_3 */
    case 5472:  /* *avx512vl_vpternlogv4di_3 */
    case 5471:  /* *avx512vl_vpternlogv4di_3 */
    case 5470:  /* *avx512vl_vpternlogv4di_3 */
    case 5469:  /* *avx512vl_vpternlogv4di_3 */
    case 5468:  /* *avx512vl_vpternlogv4di_3 */
    case 5467:  /* *avx512vl_vpternlogv4di_3 */
    case 5466:  /* *avx512f_vpternlogv8di_3 */
    case 5465:  /* *avx512f_vpternlogv8di_3 */
    case 5464:  /* *avx512f_vpternlogv8di_3 */
    case 5463:  /* *avx512f_vpternlogv8di_3 */
    case 5462:  /* *avx512f_vpternlogv8di_3 */
    case 5461:  /* *avx512f_vpternlogv8di_3 */
    case 5460:  /* *avx512f_vpternlogv8di_3 */
    case 5459:  /* *avx512f_vpternlogv8di_3 */
    case 5458:  /* *avx512f_vpternlogv8di_3 */
    case 5457:  /* *avx512vl_vpternlogv4si_3 */
    case 5456:  /* *avx512vl_vpternlogv4si_3 */
    case 5455:  /* *avx512vl_vpternlogv4si_3 */
    case 5454:  /* *avx512vl_vpternlogv4si_3 */
    case 5453:  /* *avx512vl_vpternlogv4si_3 */
    case 5452:  /* *avx512vl_vpternlogv4si_3 */
    case 5451:  /* *avx512vl_vpternlogv4si_3 */
    case 5450:  /* *avx512vl_vpternlogv4si_3 */
    case 5449:  /* *avx512vl_vpternlogv4si_3 */
    case 5448:  /* *avx512vl_vpternlogv8si_3 */
    case 5447:  /* *avx512vl_vpternlogv8si_3 */
    case 5446:  /* *avx512vl_vpternlogv8si_3 */
    case 5445:  /* *avx512vl_vpternlogv8si_3 */
    case 5444:  /* *avx512vl_vpternlogv8si_3 */
    case 5443:  /* *avx512vl_vpternlogv8si_3 */
    case 5442:  /* *avx512vl_vpternlogv8si_3 */
    case 5441:  /* *avx512vl_vpternlogv8si_3 */
    case 5440:  /* *avx512vl_vpternlogv8si_3 */
    case 5439:  /* *avx512f_vpternlogv16si_3 */
    case 5438:  /* *avx512f_vpternlogv16si_3 */
    case 5437:  /* *avx512f_vpternlogv16si_3 */
    case 5436:  /* *avx512f_vpternlogv16si_3 */
    case 5435:  /* *avx512f_vpternlogv16si_3 */
    case 5434:  /* *avx512f_vpternlogv16si_3 */
    case 5433:  /* *avx512f_vpternlogv16si_3 */
    case 5432:  /* *avx512f_vpternlogv16si_3 */
    case 5431:  /* *avx512f_vpternlogv16si_3 */
    case 5430:  /* *avx512vl_vpternlogv8hi_3 */
    case 5429:  /* *avx512vl_vpternlogv8hi_3 */
    case 5428:  /* *avx512vl_vpternlogv8hi_3 */
    case 5427:  /* *avx512vl_vpternlogv8hi_3 */
    case 5426:  /* *avx512vl_vpternlogv8hi_3 */
    case 5425:  /* *avx512vl_vpternlogv8hi_3 */
    case 5424:  /* *avx512vl_vpternlogv8hi_3 */
    case 5423:  /* *avx512vl_vpternlogv8hi_3 */
    case 5422:  /* *avx512vl_vpternlogv8hi_3 */
    case 5421:  /* *avx512vl_vpternlogv16hi_3 */
    case 5420:  /* *avx512vl_vpternlogv16hi_3 */
    case 5419:  /* *avx512vl_vpternlogv16hi_3 */
    case 5418:  /* *avx512vl_vpternlogv16hi_3 */
    case 5417:  /* *avx512vl_vpternlogv16hi_3 */
    case 5416:  /* *avx512vl_vpternlogv16hi_3 */
    case 5415:  /* *avx512vl_vpternlogv16hi_3 */
    case 5414:  /* *avx512vl_vpternlogv16hi_3 */
    case 5413:  /* *avx512vl_vpternlogv16hi_3 */
    case 5412:  /* *avx512bw_vpternlogv32hi_3 */
    case 5411:  /* *avx512bw_vpternlogv32hi_3 */
    case 5410:  /* *avx512bw_vpternlogv32hi_3 */
    case 5409:  /* *avx512bw_vpternlogv32hi_3 */
    case 5408:  /* *avx512bw_vpternlogv32hi_3 */
    case 5407:  /* *avx512bw_vpternlogv32hi_3 */
    case 5406:  /* *avx512bw_vpternlogv32hi_3 */
    case 5405:  /* *avx512bw_vpternlogv32hi_3 */
    case 5404:  /* *avx512bw_vpternlogv32hi_3 */
    case 5403:  /* *avx512vl_vpternlogv16qi_3 */
    case 5402:  /* *avx512vl_vpternlogv16qi_3 */
    case 5401:  /* *avx512vl_vpternlogv16qi_3 */
    case 5400:  /* *avx512vl_vpternlogv16qi_3 */
    case 5399:  /* *avx512vl_vpternlogv16qi_3 */
    case 5398:  /* *avx512vl_vpternlogv16qi_3 */
    case 5397:  /* *avx512vl_vpternlogv16qi_3 */
    case 5396:  /* *avx512vl_vpternlogv16qi_3 */
    case 5395:  /* *avx512vl_vpternlogv16qi_3 */
    case 5394:  /* *avx512vl_vpternlogv32qi_3 */
    case 5393:  /* *avx512vl_vpternlogv32qi_3 */
    case 5392:  /* *avx512vl_vpternlogv32qi_3 */
    case 5391:  /* *avx512vl_vpternlogv32qi_3 */
    case 5390:  /* *avx512vl_vpternlogv32qi_3 */
    case 5389:  /* *avx512vl_vpternlogv32qi_3 */
    case 5388:  /* *avx512vl_vpternlogv32qi_3 */
    case 5387:  /* *avx512vl_vpternlogv32qi_3 */
    case 5386:  /* *avx512vl_vpternlogv32qi_3 */
    case 5385:  /* *avx512bw_vpternlogv64qi_3 */
    case 5384:  /* *avx512bw_vpternlogv64qi_3 */
    case 5383:  /* *avx512bw_vpternlogv64qi_3 */
    case 5382:  /* *avx512bw_vpternlogv64qi_3 */
    case 5381:  /* *avx512bw_vpternlogv64qi_3 */
    case 5380:  /* *avx512bw_vpternlogv64qi_3 */
    case 5379:  /* *avx512bw_vpternlogv64qi_3 */
    case 5378:  /* *avx512bw_vpternlogv64qi_3 */
    case 5377:  /* *avx512bw_vpternlogv64qi_3 */
    case 804:  /* *extendv2di2_highpart_stv */
    case 615:  /* *concatditi3_5 */
    case 614:  /* *concatditi3_5 */
    case 613:  /* *concatditi3_5 */
    case 612:  /* *concatsidi3_5 */
    case 611:  /* *concatsidi3_5 */
    case 610:  /* *concatsidi3_5 */
    case 284:  /* *leasi_general_4 */
    case 283:  /* *leasi_general_4 */
    case 282:  /* *leahi_general_4 */
    case 281:  /* *leahi_general_4 */
    case 280:  /* *leaqi_general_4 */
    case 279:  /* *leaqi_general_4 */
    case 274:  /* *leahi_general_2b */
    case 273:  /* *leaqi_general_2b */
    case 272:  /* *leahi_general_2 */
    case 271:  /* *leaqi_general_2 */
    case 270:  /* *leahi_general_1 */
    case 269:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 268:  /* *addvdi4_overflow_2 */
    case 267:  /* *addvsi4_overflow_2 */
    case 266:  /* *addvhi4_overflow_2 */
    case 265:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 264:  /* *addvdi4_overflow_1 */
    case 263:  /* *addvsi4_overflow_1 */
    case 262:  /* *addvhi4_overflow_1 */
    case 261:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 435:  /* *mulvsi4_1 */
    case 434:  /* *mulvhi4_1 */
    case 322:  /* *subvti4_doubleword_1 */
    case 321:  /* *subvdi4_doubleword_1 */
    case 318:  /* subvdi4_1 */
    case 317:  /* subvsi4_1 */
    case 316:  /* subvhi4_1 */
    case 315:  /* subvqi4_1 */
    case 260:  /* *addvti4_doubleword_1 */
    case 259:  /* *addvdi4_doubleword_1 */
    case 256:  /* addvdi4_1 */
    case 255:  /* addvsi4_1 */
    case 254:  /* addvhi4_1 */
    case 253:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 439:  /* *umulvqi4 */
    case 438:  /* *mulvqi4 */
    case 433:  /* *mulvhi4 */
    case 432:  /* *mulvsi4 */
    case 320:  /* *subvti4_doubleword */
    case 319:  /* *subvdi4_doubleword */
    case 314:  /* *subvdi4 */
    case 313:  /* *subvsi4 */
    case 312:  /* *subvhi4 */
    case 311:  /* *subvqi4 */
    case 258:  /* *addvti4_doubleword */
    case 257:  /* *addvdi4_doubleword */
    case 252:  /* *addvdi4 */
    case 251:  /* *addvsi4 */
    case 250:  /* *addvhi4 */
    case 249:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 548:  /* *xorqi_extsi_2 */
    case 547:  /* *iorqi_extsi_2 */
    case 546:  /* *andqi_extsi_2 */
    case 545:  /* *xorqi_exthi_2 */
    case 544:  /* *iorqi_exthi_2 */
    case 543:  /* *andqi_exthi_2 */
    case 248:  /* *subqi_extsi_2 */
    case 247:  /* *addqi_extsi_2 */
    case 246:  /* *subqi_exthi_2 */
    case 245:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 802:  /* *ashrqi_extsi_1 */
    case 801:  /* *lshrqi_extsi_1 */
    case 800:  /* *ashrqi_exthi_1 */
    case 799:  /* *lshrqi_exthi_1 */
    case 737:  /* *ashlqi_extsi_1 */
    case 736:  /* *ashlqi_exthi_1 */
    case 533:  /* *xorqi_extsi_1 */
    case 532:  /* *iorqi_extsi_1 */
    case 531:  /* *andqi_extsi_1 */
    case 530:  /* *xorqi_exthi_1 */
    case 529:  /* *iorqi_exthi_1 */
    case 528:  /* *andqi_exthi_1 */
    case 310:  /* *subqi_extsi_1 */
    case 309:  /* *subqi_exthi_1 */
    case 244:  /* *addqi_extsi_1 */
    case 243:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 527:  /* *xorqi_ext2si_0 */
    case 526:  /* *iorqi_ext2si_0 */
    case 525:  /* *andqi_ext2si_0 */
    case 524:  /* *xorqi_ext2hi_0 */
    case 523:  /* *iorqi_ext2hi_0 */
    case 522:  /* *andqi_ext2hi_0 */
    case 308:  /* *subqi_ext2si_0 */
    case 307:  /* *subqi_ext2hi_0 */
    case 242:  /* *addqi_ext2si_0 */
    case 241:  /* *addqi_ext2hi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 521:  /* *xorqi_extsi_0 */
    case 520:  /* *iorqi_extsi_0 */
    case 519:  /* *andqi_extsi_0 */
    case 518:  /* *xorqi_exthi_0 */
    case 517:  /* *iorqi_exthi_0 */
    case 516:  /* *andqi_exthi_0 */
    case 240:  /* *addqi_extsi_0 */
    case 239:  /* *addqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 798:  /* *ashrdi3_cconly */
    case 797:  /* *lshrdi3_cconly */
    case 796:  /* *ashrsi3_cconly */
    case 795:  /* *lshrsi3_cconly */
    case 794:  /* *ashrhi3_cconly */
    case 793:  /* *lshrhi3_cconly */
    case 792:  /* *ashrqi3_cconly */
    case 791:  /* *lshrqi3_cconly */
    case 735:  /* *ashldi3_cconly */
    case 734:  /* *ashlsi3_cconly */
    case 733:  /* *ashlhi3_cconly */
    case 732:  /* *ashlqi3_cconly */
    case 597:  /* *xordi_3 */
    case 596:  /* *iordi_3 */
    case 595:  /* *xorsi_3 */
    case 594:  /* *iorsi_3 */
    case 593:  /* *xorhi_3 */
    case 592:  /* *iorhi_3 */
    case 591:  /* *xorqi_3 */
    case 590:  /* *iorqi_3 */
    case 238:  /* *adddi_5 */
    case 237:  /* *addsi_5 */
    case 236:  /* *addhi_5 */
    case 235:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 234:  /* *addsi_4 */
    case 233:  /* *addhi_4 */
    case 232:  /* *addqi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 231:  /* *adddi_3 */
    case 230:  /* *addsi_3 */
    case 229:  /* *addhi_3 */
    case 228:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 790:  /* *ashrdi3_cmp */
    case 789:  /* *lshrdi3_cmp */
    case 788:  /* *ashrsi3_cmp */
    case 787:  /* *lshrsi3_cmp */
    case 786:  /* *ashrhi3_cmp */
    case 785:  /* *lshrhi3_cmp */
    case 784:  /* *ashrqi3_cmp */
    case 783:  /* *lshrqi3_cmp */
    case 731:  /* *ashldi3_cmp */
    case 730:  /* *ashlsi3_cmp */
    case 729:  /* *ashlhi3_cmp */
    case 728:  /* *ashlqi3_cmp */
    case 589:  /* *xordi_2 */
    case 588:  /* *iordi_2 */
    case 587:  /* *xorsi_2 */
    case 586:  /* *iorsi_2 */
    case 585:  /* *xorhi_2 */
    case 584:  /* *iorhi_2 */
    case 583:  /* *xorqi_2 */
    case 582:  /* *iorqi_2 */
    case 515:  /* *andsi_2 */
    case 514:  /* *andhi_2 */
    case 513:  /* *andqi_2 */
    case 512:  /* *andqi_2_maybe_si */
    case 304:  /* *subdi_2 */
    case 303:  /* *subsi_2 */
    case 302:  /* *subhi_2 */
    case 301:  /* *subqi_2 */
    case 227:  /* *adddi_2 */
    case 226:  /* *addsi_2 */
    case 225:  /* *addhi_2 */
    case 224:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 511:  /* *xorqi_extdi_2_slp */
    case 510:  /* *iorqi_extdi_2_slp */
    case 509:  /* *andqi_extdi_2_slp */
    case 508:  /* *xorqi_extsi_2_slp */
    case 507:  /* *iorqi_extsi_2_slp */
    case 506:  /* *andqi_extsi_2_slp */
    case 505:  /* *xorqi_exthi_2_slp */
    case 504:  /* *iorqi_exthi_2_slp */
    case 503:  /* *andqi_exthi_2_slp */
    case 300:  /* *subqi_extdi_2_slp */
    case 299:  /* *subqi_extsi_2_slp */
    case 298:  /* *subqi_exthi_2_slp */
    case 223:  /* *addqi_extdi_2_slp */
    case 222:  /* *addqi_extsi_2_slp */
    case 221:  /* *addqi_exthi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 502:  /* *xorqi_extdi_1_slp */
    case 501:  /* *iorqi_extdi_1_slp */
    case 500:  /* *andqi_extdi_1_slp */
    case 499:  /* *xorqi_extsi_1_slp */
    case 498:  /* *iorqi_extsi_1_slp */
    case 497:  /* *andqi_extsi_1_slp */
    case 496:  /* *xorqi_exthi_1_slp */
    case 495:  /* *iorqi_exthi_1_slp */
    case 494:  /* *andqi_exthi_1_slp */
    case 220:  /* *addqi_extdi_1_slp */
    case 219:  /* *addqi_extsi_1_slp */
    case 218:  /* *addqi_exthi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 838:  /* *rotrhi3_1_slp */
    case 837:  /* *rotlhi3_1_slp */
    case 836:  /* *rotrqi3_1_slp */
    case 835:  /* *rotlqi3_1_slp */
    case 782:  /* *ashrhi3_1_slp */
    case 781:  /* *lshrhi3_1_slp */
    case 780:  /* *ashrqi3_1_slp */
    case 779:  /* *lshrqi3_1_slp */
    case 727:  /* *ashlhi3_1_slp */
    case 726:  /* *ashlqi3_1_slp */
    case 493:  /* *xorhi_1_slp */
    case 492:  /* *iorhi_1_slp */
    case 491:  /* *andhi_1_slp */
    case 490:  /* *xorqi_1_slp */
    case 489:  /* *iorqi_1_slp */
    case 488:  /* *andqi_1_slp */
    case 294:  /* *subhi_1_slp */
    case 293:  /* *subqi_1_slp */
    case 217:  /* *addhi_1_slp */
    case 216:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 211:  /* *adddi3_doubleword_concat_zext */
    case 210:  /* *adddi3_doubleword_concat_zext */
    case 209:  /* *adddi3_doubleword_concat_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 208:  /* *adddi3_doubleword_concat */
    case 207:  /* *adddi3_doubleword_concat */
    case 206:  /* *adddi3_doubleword_concat */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 408:  /* *adddi3_ne_0 */
    case 407:  /* *addsi3_ne_0 */
    case 406:  /* *addhi3_ne_0 */
    case 405:  /* *addqi3_ne_0 */
    case 404:  /* *adddi3_eq_0 */
    case 403:  /* *addsi3_eq_0 */
    case 402:  /* *addhi3_eq_0 */
    case 401:  /* *addqi3_eq_0 */
    case 205:  /* *addti3_doubleword_zext */
    case 204:  /* *adddi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1763:  /* klshiftrtdi */
    case 1762:  /* kashiftdi */
    case 1761:  /* klshiftrtsi */
    case 1760:  /* kashiftsi */
    case 1759:  /* klshiftrthi */
    case 1758:  /* kashifthi */
    case 1757:  /* klshiftrtqi */
    case 1756:  /* kashiftqi */
    case 1755:  /* kadddi */
    case 1754:  /* kaddsi */
    case 1753:  /* kaddhi */
    case 1752:  /* kaddqi */
    case 1738:  /* kxordi */
    case 1737:  /* kiordi */
    case 1736:  /* kanddi */
    case 1735:  /* kxorsi */
    case 1734:  /* kiorsi */
    case 1733:  /* kandsi */
    case 1732:  /* kxorhi */
    case 1731:  /* kiorhi */
    case 1730:  /* kandhi */
    case 1729:  /* kxorqi */
    case 1728:  /* kiorqi */
    case 1727:  /* kandqi */
    case 1483:  /* *xorv2hi3 */
    case 1482:  /* *iorv2hi3 */
    case 1481:  /* *andv2hi3 */
    case 1480:  /* *xorv2qi3 */
    case 1479:  /* *iorv2qi3 */
    case 1478:  /* *andv2qi3 */
    case 1477:  /* *xorv4qi3 */
    case 1476:  /* *iorv4qi3 */
    case 1475:  /* *andv4qi3 */
    case 1419:  /* ashrv2qi3 */
    case 1418:  /* lshrv2qi3 */
    case 1417:  /* ashlv2qi3 */
    case 1352:  /* subv2qi3 */
    case 1351:  /* addv2qi3 */
    case 1182:  /* pro_epilogue_adjust_stack_sub_di */
    case 1181:  /* pro_epilogue_adjust_stack_sub_si */
    case 1180:  /* pro_epilogue_adjust_stack_add_di */
    case 1179:  /* pro_epilogue_adjust_stack_add_si */
    case 1178:  /* *umindi3_1 */
    case 1177:  /* *umaxdi3_1 */
    case 1176:  /* *smindi3_1 */
    case 1175:  /* *smaxdi3_1 */
    case 1174:  /* *uminsi3_1 */
    case 1173:  /* *umaxsi3_1 */
    case 1172:  /* *sminsi3_1 */
    case 1171:  /* *smaxsi3_1 */
    case 1170:  /* *uminhi3_1 */
    case 1169:  /* *umaxhi3_1 */
    case 1168:  /* *sminhi3_1 */
    case 1167:  /* *smaxhi3_1 */
    case 1166:  /* *uminqi3_1 */
    case 1165:  /* *umaxqi3_1 */
    case 1164:  /* *sminqi3_1 */
    case 1163:  /* *smaxqi3_1 */
    case 1162:  /* *uminti3_doubleword */
    case 1161:  /* *umaxti3_doubleword */
    case 1160:  /* *sminti3_doubleword */
    case 1159:  /* *smaxti3_doubleword */
    case 1158:  /* *umindi3_doubleword */
    case 1157:  /* *umaxdi3_doubleword */
    case 1156:  /* *smindi3_doubleword */
    case 1155:  /* *smaxdi3_doubleword */
    case 834:  /* *rotrhi3_1 */
    case 833:  /* *rotlhi3_1 */
    case 832:  /* *rotrqi3_1 */
    case 831:  /* *rotlqi3_1 */
    case 830:  /* *rotrdi3_1 */
    case 829:  /* *rotldi3_1 */
    case 828:  /* *rotrsi3_1 */
    case 827:  /* *rotlsi3_1 */
    case 778:  /* *lshrhi3_1 */
    case 777:  /* *lshrqi3_1 */
    case 776:  /* *ashrhi3_1 */
    case 775:  /* *ashrqi3_1 */
    case 774:  /* *lshrdi3_1 */
    case 773:  /* *lshrsi3_1 */
    case 772:  /* *ashrdi3_1 */
    case 771:  /* *ashrsi3_1 */
    case 768:  /* ashrdi3_cvt */
    case 767:  /* ashrsi3_cvt */
    case 755:  /* ashrdi3_doubleword */
    case 754:  /* lshrdi3_doubleword */
    case 725:  /* *ashlqi3_1 */
    case 724:  /* *ashlhi3_1 */
    case 723:  /* *ashldi3_1 */
    case 722:  /* *ashlsi3_1 */
    case 705:  /* ashldi3_doubleword */
    case 580:  /* *xorqi_1 */
    case 579:  /* *iorqi_1 */
    case 572:  /* *xordi_1 */
    case 571:  /* *iordi_1 */
    case 570:  /* *xorsi_1 */
    case 569:  /* *iorsi_1 */
    case 568:  /* *xorhi_1 */
    case 567:  /* *iorhi_1 */
    case 566:  /* *xorti3_doubleword */
    case 565:  /* *iorti3_doubleword */
    case 564:  /* *xordi3_doubleword */
    case 563:  /* *iordi3_doubleword */
    case 487:  /* *andqi_1 */
    case 486:  /* *andsi_1 */
    case 485:  /* *andhi_1 */
    case 484:  /* *andti3_doubleword */
    case 483:  /* *anddi3_doubleword */
    case 431:  /* *mulqi3_1 */
    case 430:  /* *mulsi3_1 */
    case 429:  /* *mulhi3_1 */
    case 364:  /* *subdi3_carry_0r */
    case 363:  /* *subsi3_carry_0r */
    case 362:  /* *subhi3_carry_0r */
    case 361:  /* *subqi3_carry_0r */
    case 360:  /* *subdi3_carry_0 */
    case 359:  /* *subsi3_carry_0 */
    case 358:  /* *subhi3_carry_0 */
    case 357:  /* *subqi3_carry_0 */
    case 292:  /* *subdi_1 */
    case 291:  /* *subsi_1 */
    case 290:  /* *subhi_1 */
    case 289:  /* *subqi_1 */
    case 286:  /* *subti3_doubleword */
    case 285:  /* *subdi3_doubleword */
    case 215:  /* *addqi_1 */
    case 214:  /* *addhi_1 */
    case 213:  /* *adddi_1 */
    case 212:  /* *addsi_1 */
    case 203:  /* *addti3_doubleword */
    case 202:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 7050:  /* sse_stmxcsr */
    case 1284:  /* sttilecfg */
    case 1262:  /* rdpid */
    case 1231:  /* lwp_slwpcbdi */
    case 1230:  /* lwp_slwpcbsi */
    case 1226:  /* fnstsw */
    case 1214:  /* fxsave */
    case 1212:  /* rdtsc */
    case 1207:  /* *prefetch_prefetchwt1 */
    case 1052:  /* x86_fnstsw_1 */
    case 1004:  /* *load_tp_x32_zext */
    case 1003:  /* *load_tp_di */
    case 1002:  /* *load_tp_si */
    case 180:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 199:  /* floatunssixf2_i387_with_xmm */
    case 198:  /* floatunssidf2_i387_with_xmm */
    case 197:  /* floatunssisf2_i387_with_xmm */
    case 179:  /* fix_truncsi_i387 */
    case 178:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 194:  /* floatdixf2_i387_with_xmm */
    case 193:  /* floatdidf2_i387_with_xmm */
    case 192:  /* floatdisf2_i387_with_xmm */
    case 177:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 1800:  /* *negv2df2 */
    case 1799:  /* *absv2df2 */
    case 1798:  /* *negv4df2 */
    case 1797:  /* *absv4df2 */
    case 1796:  /* *negv8df2 */
    case 1795:  /* *absv8df2 */
    case 1794:  /* *negv4sf2 */
    case 1793:  /* *absv4sf2 */
    case 1792:  /* *negv8sf2 */
    case 1791:  /* *absv8sf2 */
    case 1790:  /* *negv16sf2 */
    case 1789:  /* *absv16sf2 */
    case 1788:  /* *negv8hf2 */
    case 1787:  /* *absv8hf2 */
    case 1786:  /* *negv16hf2 */
    case 1785:  /* *absv16hf2 */
    case 1784:  /* *negv32hf2 */
    case 1783:  /* *absv32hf2 */
    case 1332:  /* *mmx_negv2hf */
    case 1331:  /* *mmx_absv2hf */
    case 943:  /* ffssi2_no_cmove */
    case 678:  /* *negdf2_1 */
    case 677:  /* *absdf2_1 */
    case 676:  /* *negsf2_1 */
    case 675:  /* *abssf2_1 */
    case 674:  /* *neghf2_1 */
    case 673:  /* *abshf2_1 */
    case 665:  /* *negtf2_1 */
    case 664:  /* *abstf2_1 */
    case 173:  /* fix_truncdi_i387_fisttp */
    case 172:  /* fix_truncsi_i387_fisttp */
    case 171:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 168:  /* *fixuns_truncdf_1 */
    case 167:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 150:  /* *extendqisi_ext_1 */
    case 149:  /* *extendqisi_ext_1 */
    case 148:  /* *extendqihi_ext_1 */
    case 147:  /* *extendqihi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 143:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1190:  /* probe_stack_range_di */
    case 1189:  /* probe_stack_range_si */
    case 961:  /* bmi_bextr_si */
    case 126:  /* push2p_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1714:  /* movdi_to_sse */
    case 1194:  /* stack_protect_set_1_di_di */
    case 1193:  /* stack_protect_set_1_si_di */
    case 1192:  /* stack_protect_set_1_di_si */
    case 1191:  /* stack_protect_set_1_si_si */
    case 1071:  /* lrintxfdi2 */
    case 127:  /* pop2p_di */
    case 124:  /* pop2_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8897:  /* atomic_storesi_1 */
    case 8896:  /* atomic_storehi_1 */
    case 8895:  /* atomic_storeqi_1 */
    case 8820:  /* avx512vp2intersect_2intersectv16si */
    case 8819:  /* avx512vp2intersect_2intersectv4si */
    case 8818:  /* avx512vp2intersect_2intersectv8si */
    case 8817:  /* avx512vp2intersect_2intersectv2di */
    case 8816:  /* avx512vp2intersect_2intersectv4di */
    case 8815:  /* avx512vp2intersect_2intersectv8di */
    case 8811:  /* avx512vl_vpshufbitqmbv32qi */
    case 8809:  /* avx512vl_vpshufbitqmbv16qi */
    case 8807:  /* avx512vl_vpshufbitqmbv64qi */
    case 8803:  /* vaesenclast_v64qi */
    case 8802:  /* vaesenclast_v16qi */
    case 8801:  /* vaesenclast_v32qi */
    case 8800:  /* vaesenc_v64qi */
    case 8799:  /* vaesenc_v16qi */
    case 8798:  /* vaesenc_v32qi */
    case 8797:  /* vaesdeclast_v64qi */
    case 8796:  /* vaesdeclast_v16qi */
    case 8795:  /* vaesdeclast_v32qi */
    case 8794:  /* vaesdec_v64qi */
    case 8793:  /* vaesdec_v16qi */
    case 8792:  /* vaesdec_v32qi */
    case 8664:  /* vgf2p8mulb_v16qi */
    case 8662:  /* vgf2p8mulb_v32qi */
    case 8660:  /* vgf2p8mulb_v64qi */
    case 8602:  /* vpmultishiftqbv32qi */
    case 8600:  /* vpmultishiftqbv16qi */
    case 8598:  /* vpmultishiftqbv64qi */
    case 8573:  /* vsm4rnds4_v4si */
    case 8572:  /* vsm4rnds4_v8si */
    case 8571:  /* vsm4key4_v4si */
    case 8570:  /* vsm4key4_v8si */
    case 8568:  /* vsha512msg2 */
    case 8567:  /* vsha512msg1 */
    case 8562:  /* sha256msg2 */
    case 8561:  /* sha256msg1 */
    case 8559:  /* sha1nexte */
    case 8558:  /* sha1msg2 */
    case 8557:  /* sha1msg1 */
    case 8511:  /* avx512vl_getmantv2df */
    case 8507:  /* avx512vl_getmantv4df */
    case 8503:  /* avx512f_getmantv8df */
    case 8499:  /* avx512vl_getmantv4sf */
    case 8495:  /* avx512vl_getmantv8sf */
    case 8491:  /* avx512f_getmantv16sf */
    case 8487:  /* avx512fp16_getmantv8hf */
    case 8483:  /* avx512vl_getmantv16hf */
    case 8479:  /* avx512bw_getmantv32hf */
    case 8471:  /* avx512dq_fpclassv2df */
    case 8469:  /* avx512dq_fpclassv4df */
    case 8467:  /* avx512dq_fpclassv8df */
    case 8465:  /* avx512dq_fpclassv4sf */
    case 8463:  /* avx512dq_fpclassv8sf */
    case 8461:  /* avx512dq_fpclassv16sf */
    case 8459:  /* avx512dq_fpclassv8hf */
    case 8457:  /* avx512dq_fpclassv16hf */
    case 8455:  /* avx512dq_fpclassv32hf */
    case 8141:  /* *avx512f_vcvtps2ph512 */
    case 8137:  /* *avx512f_vcvtps2ph512 */
    case 8135:  /* *vcvtps2ph256 */
    case 8133:  /* vcvtps2ph256 */
    case 8132:  /* *vcvtps2ph_store */
    case 7862:  /* avx_vpermilvarv2df3 */
    case 7860:  /* avx_vpermilvarv4df3 */
    case 7858:  /* avx512f_vpermilvarv8df3 */
    case 7856:  /* avx_vpermilvarv4sf3 */
    case 7854:  /* avx_vpermilvarv8sf3 */
    case 7852:  /* avx512f_vpermilvarv16sf3 */
    case 7653:  /* avx512bw_permvarv32bf */
    case 7651:  /* avx512vl_permvarv16bf */
    case 7649:  /* avx512vl_permvarv8bf */
    case 7647:  /* avx512bw_permvarv32hf */
    case 7645:  /* avx512vl_permvarv16hf */
    case 7643:  /* avx512fp16_permvarv8hf */
    case 7641:  /* avx512bw_permvarv32hi */
    case 7639:  /* avx512vl_permvarv16hi */
    case 7637:  /* avx512vl_permvarv8hi */
    case 7635:  /* avx512vl_permvarv32qi */
    case 7633:  /* avx512vl_permvarv16qi */
    case 7631:  /* avx512bw_permvarv64qi */
    case 7629:  /* avx2_permvarv4df */
    case 7627:  /* avx2_permvarv4di */
    case 7625:  /* avx512f_permvarv8df */
    case 7623:  /* avx512f_permvarv8di */
    case 7621:  /* avx512f_permvarv16sf */
    case 7619:  /* avx512f_permvarv16si */
    case 7617:  /* avx2_permvarv8sf */
    case 7615:  /* avx2_permvarv8si */
    case 7587:  /* aeskeygenassist */
    case 7585:  /* aesdeclast */
    case 7584:  /* aesdec */
    case 7583:  /* aesenclast */
    case 7582:  /* aesenc */
    case 7416:  /* sse4_1_roundpd */
    case 7415:  /* avx_roundpd256 */
    case 7414:  /* sse4_1_roundps */
    case 7413:  /* avx_roundps256 */
    case 7182:  /* sse4_1_packusdw */
    case 7180:  /* avx2_packusdw */
    case 7178:  /* avx512bw_packusdw */
    case 7146:  /* sse4a_insertq */
    case 7144:  /* sse4a_extrq */
    case 7107:  /* ssse3_psignv2si3 */
    case 7106:  /* ssse3_psignv4hi3 */
    case 7105:  /* ssse3_psignv8qi3 */
    case 7104:  /* ssse3_psignv4si3 */
    case 7103:  /* avx2_psignv8si3 */
    case 7102:  /* ssse3_psignv8hi3 */
    case 7101:  /* avx2_psignv16hi3 */
    case 7100:  /* ssse3_psignv16qi3 */
    case 7099:  /* avx2_psignv32qi3 */
    case 7096:  /* ssse3_pshufbv16qi3 */
    case 7094:  /* avx2_pshufbv32qi3 */
    case 7092:  /* avx512bw_pshufbv64qi3 */
    case 7078:  /* avx512bw_pmaddubsw512v32hi */
    case 7076:  /* avx512bw_pmaddubsw512v16hi */
    case 7074:  /* avx512bw_pmaddubsw512v8hi */
    case 7029:  /* *sse2_psadbw */
    case 7028:  /* *avx2_psadbw */
    case 7027:  /* *avx512f_psadbw */
    case 6978:  /* *avx512bw_pshufhwv32hi */
    case 6972:  /* *avx512bw_pshuflwv32hi */
    case 6846:  /* sse2_packuswb */
    case 6844:  /* avx2_packuswb */
    case 6842:  /* avx512bw_packuswb */
    case 6684:  /* avx512vl_testnmv2di3 */
    case 6682:  /* avx512vl_testnmv4di3 */
    case 6680:  /* avx512f_testnmv8di3 */
    case 6678:  /* avx512vl_testnmv4si3 */
    case 6676:  /* avx512vl_testnmv8si3 */
    case 6674:  /* avx512f_testnmv16si3 */
    case 6672:  /* avx512vl_testnmv8hi3 */
    case 6670:  /* avx512vl_testnmv16hi3 */
    case 6668:  /* avx512bw_testnmv32hi3 */
    case 6666:  /* avx512vl_testnmv16qi3 */
    case 6664:  /* avx512vl_testnmv32qi3 */
    case 6662:  /* avx512bw_testnmv64qi3 */
    case 6660:  /* avx512vl_testmv2di3 */
    case 6658:  /* avx512vl_testmv4di3 */
    case 6656:  /* avx512f_testmv8di3 */
    case 6654:  /* avx512vl_testmv4si3 */
    case 6652:  /* avx512vl_testmv8si3 */
    case 6650:  /* avx512f_testmv16si3 */
    case 6648:  /* avx512vl_testmv8hi3 */
    case 6646:  /* avx512vl_testmv16hi3 */
    case 6644:  /* avx512bw_testmv32hi3 */
    case 6642:  /* avx512vl_testmv16qi3 */
    case 6640:  /* avx512vl_testmv32qi3 */
    case 6638:  /* avx512bw_testmv64qi3 */
    case 6175:  /* avx512bw_pmaddwd512v8hi */
    case 6173:  /* avx512bw_pmaddwd512v16hi */
    case 6171:  /* avx512bw_pmaddwd512v32hi */
    case 5720:  /* avx512vl_rndscalev2df */
    case 5716:  /* avx512vl_rndscalev4df */
    case 5712:  /* avx512f_rndscalev8df */
    case 5708:  /* avx512vl_rndscalev4sf */
    case 5704:  /* avx512vl_rndscalev8sf */
    case 5700:  /* avx512f_rndscalev16sf */
    case 5696:  /* avx512fp16_rndscalev8hf */
    case 5692:  /* avx512vl_rndscalev16hf */
    case 5688:  /* avx512bw_rndscalev32hf */
    case 4206:  /* avx512vl_scalefv2df */
    case 4202:  /* avx512vl_scalefv4df */
    case 4198:  /* avx512f_scalefv8df */
    case 4194:  /* avx512vl_scalefv4sf */
    case 4190:  /* avx512vl_scalefv8sf */
    case 4186:  /* avx512f_scalefv16sf */
    case 4182:  /* avx512fp16_scalefv8hf */
    case 4178:  /* avx512vl_scalefv16hf */
    case 4174:  /* avx512bw_scalefv32hf */
    case 3369:  /* avx512fp16_fcmulc_v8hf */
    case 3367:  /* avx512fp16_fmulc_v8hf */
    case 3365:  /* avx512vl_fcmulc_v16hf */
    case 3363:  /* avx512vl_fmulc_v16hf */
    case 3359:  /* avx512bw_fcmulc_v32hf */
    case 3355:  /* avx512bw_fmulc_v32hf */
    case 2637:  /* *avx512vl_eqv2di3_1 */
    case 2635:  /* *avx512vl_eqv2di3_1 */
    case 2633:  /* *avx512vl_eqv4di3_1 */
    case 2631:  /* *avx512vl_eqv4di3_1 */
    case 2629:  /* *avx512f_eqv8di3_1 */
    case 2627:  /* *avx512f_eqv8di3_1 */
    case 2625:  /* *avx512vl_eqv4si3_1 */
    case 2623:  /* *avx512vl_eqv4si3_1 */
    case 2621:  /* *avx512vl_eqv8si3_1 */
    case 2619:  /* *avx512vl_eqv8si3_1 */
    case 2617:  /* *avx512f_eqv16si3_1 */
    case 2615:  /* *avx512f_eqv16si3_1 */
    case 2565:  /* *avx512vl_eqv8hi3_1 */
    case 2563:  /* *avx512vl_eqv8hi3_1 */
    case 2561:  /* *avx512vl_eqv16hi3_1 */
    case 2559:  /* *avx512vl_eqv16hi3_1 */
    case 2557:  /* *avx512bw_eqv32hi3_1 */
    case 2555:  /* *avx512bw_eqv32hi3_1 */
    case 2553:  /* *avx512vl_eqv32qi3_1 */
    case 2551:  /* *avx512vl_eqv32qi3_1 */
    case 2549:  /* *avx512vl_eqv16qi3_1 */
    case 2547:  /* *avx512vl_eqv16qi3_1 */
    case 2545:  /* *avx512bw_eqv64qi3_1 */
    case 2543:  /* *avx512bw_eqv64qi3_1 */
    case 2278:  /* *reducepv2df */
    case 2274:  /* *reducepv4df */
    case 2270:  /* *reducepv8df */
    case 2266:  /* *reducepv4sf */
    case 2262:  /* *reducepv8sf */
    case 2258:  /* *reducepv16sf */
    case 2254:  /* *reducepv8hf */
    case 2250:  /* *reducepv16hf */
    case 2246:  /* *reducepv32hf */
    case 2200:  /* ieee_minv2df3 */
    case 2198:  /* ieee_maxv2df3 */
    case 2196:  /* ieee_minv4df3 */
    case 2194:  /* ieee_maxv4df3 */
    case 2190:  /* ieee_minv8df3 */
    case 2186:  /* ieee_maxv8df3 */
    case 2184:  /* ieee_minv4sf3 */
    case 2182:  /* ieee_maxv4sf3 */
    case 2180:  /* ieee_minv8sf3 */
    case 2178:  /* ieee_maxv8sf3 */
    case 2174:  /* ieee_minv16sf3 */
    case 2170:  /* ieee_maxv16sf3 */
    case 2168:  /* ieee_minv8hf3 */
    case 2166:  /* ieee_maxv8hf3 */
    case 2164:  /* ieee_minv16hf3 */
    case 2162:  /* ieee_maxv16hf3 */
    case 2158:  /* ieee_minv32hf3 */
    case 2154:  /* ieee_maxv32hf3 */
    case 1545:  /* *mmx_psadbw */
    case 1505:  /* mmx_pshufbv4qi3 */
    case 1485:  /* mmx_packuswb */
    case 1315:  /* mmx_rsqit1v2sf3 */
    case 1313:  /* mmx_rcpit2v2sf3 */
    case 1312:  /* mmx_rcpit1v2sf3 */
    case 1310:  /* mmx_ieee_minv2sf3 */
    case 1309:  /* mmx_ieee_maxv2sf3 */
    case 1210:  /* sse4_2_crc32si */
    case 1209:  /* sse4_2_crc32hi */
    case 1208:  /* sse4_2_crc32qi */
    case 1150:  /* *ieee_smindf3 */
    case 1149:  /* *ieee_smaxdf3 */
    case 1148:  /* *ieee_sminsf3 */
    case 1147:  /* *ieee_smaxsf3 */
    case 1146:  /* *ieee_sminhf3 */
    case 1145:  /* *ieee_smaxhf3 */
    case 1069:  /* sse4_1_rounddf2 */
    case 1068:  /* sse4_1_roundsf2 */
    case 1067:  /* sse4_1_roundhf2 */
    case 1066:  /* avx512f_scalefdf2 */
    case 1065:  /* avx512f_scalefsf2 */
    case 977:  /* bmi2_pext_si3 */
    case 976:  /* bmi2_pdep_si3 */
    case 123:  /* push2_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 117:  /* *insvdi_lowpart_1 */
    case 116:  /* *insvdi_lowpart_1 */
    case 115:  /* *insvdi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 110:  /* *insvqi_2 */
    case 109:  /* *insvqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 694:  /* *one_cmplhi_1_slp */
    case 693:  /* *one_cmplqi_1_slp */
    case 114:  /* *insvqi_3 */
    case 113:  /* *insvqi_3 */
    case 112:  /* *insvqi_3 */
    case 111:  /* *insvqi_3 */
    case 108:  /* *insvqi_1 */
    case 107:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 104:  /* *extzvqi */
    case 103:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1750:  /* knotdi */
    case 1749:  /* knotsi */
    case 1748:  /* knothi */
    case 1747:  /* knotqi */
    case 1338:  /* negv2qi2 */
    case 1129:  /* *x86_movsicc_0_m1_neg */
    case 1128:  /* *x86_movhicc_0_m1_neg */
    case 1127:  /* *x86_movqicc_0_m1_neg */
    case 1126:  /* *x86_movsicc_0_m1_se */
    case 1125:  /* *x86_movsicc_0_m1 */
    case 992:  /* popcounthi2 */
    case 988:  /* popcountsi2 */
    case 951:  /* clzsi2_lzcnt */
    case 947:  /* ctzsi2 */
    case 672:  /* *negxf2_i387_1 */
    case 671:  /* *absxf2_i387_1 */
    case 670:  /* *negdf2_i387_1 */
    case 669:  /* *absdf2_i387_1 */
    case 668:  /* *negsf2_i387_1 */
    case 667:  /* *abssf2_i387_1 */
    case 659:  /* *absdi2_1 */
    case 658:  /* *abssi2_1 */
    case 657:  /* *abshi2_1 */
    case 656:  /* *absqi2_1 */
    case 653:  /* *absti2_doubleword */
    case 652:  /* *absdi2_doubleword */
    case 633:  /* *negdi_1 */
    case 632:  /* *negsi_1 */
    case 631:  /* *neghi_1 */
    case 630:  /* *negqi_1 */
    case 629:  /* *negti2_doubleword */
    case 628:  /* *negdi2_doubleword */
    case 176:  /* *fix_truncdi_i387_1 */
    case 175:  /* *fix_truncsi_i387_1 */
    case 174:  /* *fix_trunchi_i387_1 */
    case 141:  /* zero_extendqihi2_and */
    case 138:  /* zero_extendhisi2_and */
    case 137:  /* zero_extendqisi2_and */
    case 100:  /* *extvsi_1_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 97:  /* *movstrictqi_extdi_1 */
    case 96:  /* *movstrictqi_extsi_1 */
    case 95:  /* *movstrictqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 910:  /* *sibcall_memory */
    case 909:  /* *sibcall_memory */
    case 94:  /* *movstricthi_xor */
    case 93:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 135:  /* *swapxf */
    case 90:  /* *swaphi */
    case 89:  /* *swapqi */
    case 88:  /* swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 8832:  /* avx512f_cvtneps2bf16_v8sf */
    case 8830:  /* avx512f_cvtneps2bf16_v16sf */
    case 8829:  /* vcvtneps2bf16_v8sf */
    case 8646:  /* vpopcountv8hi */
    case 8644:  /* vpopcountv16hi */
    case 8642:  /* vpopcountv32hi */
    case 8640:  /* vpopcountv32qi */
    case 8638:  /* vpopcountv16qi */
    case 8636:  /* vpopcountv64qi */
    case 8634:  /* vpopcountv2di */
    case 8632:  /* vpopcountv4di */
    case 8630:  /* vpopcountv8di */
    case 8628:  /* vpopcountv4si */
    case 8626:  /* vpopcountv8si */
    case 8624:  /* vpopcountv16si */
    case 8579:  /* avx512f_pd512_256pd */
    case 8578:  /* avx512f_ps512_256ps */
    case 8577:  /* avx512f_si512_256si */
    case 8543:  /* clzv2di2 */
    case 8541:  /* clzv4di2 */
    case 8539:  /* clzv8di2 */
    case 8537:  /* clzv4si2 */
    case 8535:  /* clzv8si2 */
    case 8533:  /* clzv16si2 */
    case 8028:  /* avx_pd256_pd */
    case 8027:  /* avx_ps256_ps */
    case 8026:  /* avx_si256_si */
    case 7844:  /* *avx512dq_broadcastv4df_1 */
    case 7842:  /* *avx512dq_broadcastv4di_1 */
    case 7840:  /* *avx512dq_broadcastv8df_1 */
    case 7838:  /* *avx512dq_broadcastv8di_1 */
    case 7836:  /* *avx512dq_broadcastv16si_1 */
    case 7834:  /* *avx512dq_broadcastv16sf_1 */
    case 7832:  /* *avx512vl_broadcastv8sf_1 */
    case 7830:  /* *avx512vl_broadcastv8si_1 */
    case 7811:  /* vec_dupv4df */
    case 7810:  /* vec_dupv4di */
    case 7809:  /* vec_dupv8sf */
    case 7808:  /* vec_dupv8si */
    case 7807:  /* *vec_dupv8bf */
    case 7806:  /* *vec_dupv16bf */
    case 7805:  /* *vec_dupv8hf */
    case 7804:  /* *vec_dupv16hf */
    case 7803:  /* *vec_dupv4si */
    case 7802:  /* *vec_dupv8si */
    case 7801:  /* *vec_dupv8hi */
    case 7800:  /* *vec_dupv16hi */
    case 7799:  /* *vec_dupv16qi */
    case 7798:  /* *vec_dupv32qi */
    case 7792:  /* *vec_dupv2di */
    case 7791:  /* *vec_dupv4si */
    case 7790:  /* vec_dupv4sf */
    case 7788:  /* *avx512vl_vec_dup_gprv2df */
    case 7786:  /* *avx512vl_vec_dup_gprv4df */
    case 7784:  /* *avx512f_vec_dup_gprv8df */
    case 7782:  /* *avx512vl_vec_dup_gprv4sf */
    case 7780:  /* *avx512vl_vec_dup_gprv8sf */
    case 7778:  /* *avx512f_vec_dup_gprv16sf */
    case 7776:  /* *avx512vl_vec_dup_gprv2di */
    case 7774:  /* *avx512vl_vec_dup_gprv4di */
    case 7772:  /* *avx512f_vec_dup_gprv8di */
    case 7770:  /* *avx512vl_vec_dup_gprv4si */
    case 7768:  /* *avx512vl_vec_dup_gprv8si */
    case 7766:  /* *avx512f_vec_dup_gprv16si */
    case 7764:  /* *avx512vl_vec_dup_gprv8bf */
    case 7762:  /* *avx512vl_vec_dup_gprv16bf */
    case 7760:  /* *avx512bw_vec_dup_gprv32bf */
    case 7758:  /* *avx512fp16_vec_dup_gprv8hf */
    case 7756:  /* *avx512vl_vec_dup_gprv16hf */
    case 7754:  /* *avx512bw_vec_dup_gprv32hf */
    case 7752:  /* *avx512vl_vec_dup_gprv8hi */
    case 7750:  /* *avx512vl_vec_dup_gprv16hi */
    case 7748:  /* *avx512bw_vec_dup_gprv32hi */
    case 7746:  /* *avx512vl_vec_dup_gprv32qi */
    case 7744:  /* *avx512vl_vec_dup_gprv16qi */
    case 7742:  /* *avx512bw_vec_dup_gprv64qi */
    case 7740:  /* *avx512f_broadcastv8di */
    case 7738:  /* *avx512f_broadcastv8df */
    case 7736:  /* *avx512f_broadcastv16si */
    case 7734:  /* *avx512f_broadcastv16sf */
    case 7372:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 7370:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 7362:  /* avx2_zero_extendv4siv4di2 */
    case 7360:  /* avx2_sign_extendv4siv4di2 */
    case 7356:  /* avx512f_zero_extendv8siv8di2 */
    case 7354:  /* avx512f_sign_extendv8siv8di2 */
    case 7348:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 7346:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 7336:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 7334:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 7328:  /* avx512f_zero_extendv8hiv8di2 */
    case 7326:  /* avx512f_sign_extendv8hiv8di2 */
    case 7321:  /* *sse4_1_zero_extendv2qiv2di2_1 */
    case 7319:  /* *sse4_1_sign_extendv2qiv2di2_1 */
    case 7309:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 7307:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 7297:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 7295:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 7281:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 7279:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 7269:  /* avx2_zero_extendv8hiv8si2 */
    case 7267:  /* avx2_sign_extendv8hiv8si2 */
    case 7261:  /* avx512f_zero_extendv16hiv16si2 */
    case 7259:  /* avx512f_sign_extendv16hiv16si2 */
    case 7253:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 7251:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 7241:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 7239:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 7233:  /* *avx512f_zero_extendv16qiv16si2 */
    case 7231:  /* *avx512f_sign_extendv16qiv16si2 */
    case 7221:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 7219:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 7209:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 7207:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 7201:  /* avx2_zero_extendv16qiv16hi2 */
    case 7199:  /* avx2_sign_extendv16qiv16hi2 */
    case 7126:  /* *absv2di2 */
    case 7125:  /* *absv4di2 */
    case 7124:  /* *absv8di2 */
    case 7123:  /* *absv4si2 */
    case 7122:  /* *absv8si2 */
    case 7121:  /* *absv16si2 */
    case 7120:  /* *absv8hi2 */
    case 7119:  /* *absv16hi2 */
    case 7118:  /* *absv32hi2 */
    case 7117:  /* *absv16qi2 */
    case 7116:  /* *absv32qi2 */
    case 7115:  /* *absv64qi2 */
    case 6998:  /* *vec_extractv2di_1 */
    case 6995:  /* *vec_extractv2di_0_sse */
    case 6994:  /* *vec_extractv4si_0 */
    case 6986:  /* *vec_extractv8hi_0_mem */
    case 6985:  /* *vec_extractv16qi_0_mem */
    case 6029:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 6028:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 6027:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 6008:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 6007:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 6006:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 5986:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 5985:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 5984:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 5953:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 5952:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 5951:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 5950:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 5949:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 5948:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 5907:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 5906:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 5905:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 5904:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 5903:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 5902:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 5871:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 5870:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 5869:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 5868:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 5867:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 5866:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 5850:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 5849:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 5848:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 5820:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 5819:  /* *avx512vl_truncatev16hiv16qi2 */
    case 5818:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 5817:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 5816:  /* *avx512vl_truncatev8siv8hi2 */
    case 5815:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 5814:  /* *avx512vl_us_truncatev4div4si2 */
    case 5813:  /* *avx512vl_truncatev4div4si2 */
    case 5812:  /* *avx512vl_ss_truncatev4div4si2 */
    case 5807:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 5806:  /* avx512bw_truncatev32hiv32qi2 */
    case 5805:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 5787:  /* *avx512f_us_truncatev8div8hi2 */
    case 5786:  /* *avx512f_truncatev8div8hi2 */
    case 5785:  /* *avx512f_ss_truncatev8div8hi2 */
    case 5784:  /* *avx512f_us_truncatev8div8si2 */
    case 5783:  /* *avx512f_truncatev8div8si2 */
    case 5782:  /* *avx512f_ss_truncatev8div8si2 */
    case 5781:  /* *avx512f_us_truncatev16siv16hi2 */
    case 5780:  /* *avx512f_truncatev16siv16hi2 */
    case 5779:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 5778:  /* *avx512f_us_truncatev16siv16qi2 */
    case 5777:  /* *avx512f_truncatev16siv16qi2 */
    case 5776:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 5771:  /* vec_dupv2df */
    case 5766:  /* *vec_extractv2df_0_sse */
    case 5765:  /* sse2_storelpd */
    case 5764:  /* *vec_extractv2df_1_sse */
    case 5763:  /* sse2_storehpd */
    case 4143:  /* *vec_extractv8bf_0 */
    case 4142:  /* *vec_extractv16bf_0 */
    case 4141:  /* *vec_extractv32bf_0 */
    case 4140:  /* *vec_extractv8hf_0 */
    case 4139:  /* *vec_extractv16hf_0 */
    case 4138:  /* *vec_extractv32hf_0 */
    case 4137:  /* vec_extract_hi_v32qi */
    case 4136:  /* vec_extract_lo_v32qi */
    case 4135:  /* vec_extract_hi_v64qi */
    case 4134:  /* vec_extract_lo_v64qi */
    case 4133:  /* vec_extract_hi_v16bf */
    case 4132:  /* vec_extract_hi_v16hf */
    case 4131:  /* vec_extract_hi_v16hi */
    case 4130:  /* vec_extract_lo_v16bf */
    case 4129:  /* vec_extract_lo_v16hf */
    case 4128:  /* vec_extract_lo_v16hi */
    case 4127:  /* vec_extract_hi_v32bf */
    case 4126:  /* vec_extract_hi_v32hf */
    case 4125:  /* vec_extract_hi_v32hi */
    case 4124:  /* vec_extract_lo_v32bf */
    case 4123:  /* vec_extract_lo_v32hf */
    case 4122:  /* vec_extract_lo_v32hi */
    case 4121:  /* vec_extract_hi_v8sf */
    case 4120:  /* vec_extract_hi_v8si */
    case 4117:  /* vec_extract_lo_v8sf */
    case 4116:  /* vec_extract_lo_v8si */
    case 4113:  /* vec_extract_hi_v4df */
    case 4112:  /* vec_extract_hi_v4di */
    case 4109:  /* vec_extract_lo_v4df */
    case 4108:  /* vec_extract_lo_v4di */
    case 4105:  /* vec_extract_lo_v16si */
    case 4104:  /* vec_extract_lo_v16sf */
    case 4101:  /* vec_extract_hi_v16si */
    case 4100:  /* vec_extract_hi_v16sf */
    case 4097:  /* vec_extract_hi_v8di */
    case 4096:  /* vec_extract_hi_v8df */
    case 4093:  /* vec_extract_lo_v8di */
    case 4092:  /* vec_extract_lo_v8df */
    case 4079:  /* *vec_extractv4sf_0 */
    case 4028:  /* sse_storelps */
    case 4026:  /* sse_storehps */
    case 3990:  /* sse2_cvtps2pd_1 */
    case 3954:  /* avx_cvtps2pd256 */
    case 3950:  /* avx512f_cvtps2pd512 */
    case 3945:  /* avx_cvtpd2ps256 */
    case 3941:  /* *avx512f_cvtpd2ps512 */
    case 3926:  /* *fixuns_truncv4sfv4si2 */
    case 3924:  /* *fixuns_truncv8sfv8si2 */
    case 3918:  /* fixuns_truncv4sfv4di2 */
    case 3916:  /* fix_truncv4sfv4di2 */
    case 3912:  /* fixuns_truncv8sfv8di2 */
    case 3908:  /* fix_truncv8sfv8di2 */
    case 3890:  /* fixuns_truncv2dfv2di2 */
    case 3888:  /* fix_truncv2dfv2di2 */
    case 3886:  /* fixuns_truncv4dfv4di2 */
    case 3884:  /* fix_truncv4dfv4di2 */
    case 3880:  /* fixuns_truncv8dfv8di2 */
    case 3876:  /* fix_truncv8dfv8di2 */
    case 3874:  /* fixuns_truncv4dfv4si2 */
    case 3872:  /* fix_truncv4dfv4si2 */
    case 3865:  /* fixuns_truncv8dfv8si2 */
    case 3861:  /* fix_truncv8dfv8si2 */
    case 3832:  /* floatunsv4siv4df2 */
    case 3830:  /* floatunsv8siv8df2 */
    case 3822:  /* floatunsv4div4sf2 */
    case 3820:  /* floatv4div4sf2 */
    case 3816:  /* floatunsv8div8sf2 */
    case 3812:  /* floatv8div8sf2 */
    case 3808:  /* floatunsv2div2df2 */
    case 3804:  /* floatv2div2df2 */
    case 3800:  /* floatunsv4div4df2 */
    case 3796:  /* floatv4div4df2 */
    case 3792:  /* floatunsv8div8df2 */
    case 3788:  /* floatv8div8df2 */
    case 3786:  /* floatv4siv4df2 */
    case 3784:  /* floatv8siv8df2 */
    case 3769:  /* sse2_cvttpd2pi */
    case 3767:  /* sse2_cvtpi2pd */
    case 3765:  /* fix_truncv4sfv4si2 */
    case 3763:  /* fix_truncv8sfv8si2 */
    case 3759:  /* fixuns_truncv16sfv16si2 */
    case 3755:  /* fix_truncv16sfv16si2 */
    case 3715:  /* *floatunsv4siv4sf2 */
    case 3711:  /* *floatunsv8siv8sf2 */
    case 3707:  /* *floatunsv16siv16sf2 */
    case 3705:  /* floatv4siv4sf2 */
    case 3703:  /* floatv8siv8sf2 */
    case 3699:  /* floatv16siv16sf2 */
    case 3649:  /* avx512fp16_vcvtps2ph_v8sf */
    case 3645:  /* avx512fp16_vcvtps2ph_v16sf */
    case 3641:  /* avx512fp16_vcvtpd2ph_v8df */
    case 3639:  /* *avx512fp16_float_extend_phv2df2_load */
    case 3635:  /* *avx512fp16_float_extend_phv4sf2_load */
    case 3633:  /* *avx512fp16_float_extend_phv4df2_load */
    case 3625:  /* avx512fp16_float_extend_phv8sf2 */
    case 3621:  /* avx512fp16_float_extend_phv16sf2 */
    case 3617:  /* avx512fp16_float_extend_phv8df2 */
    case 3616:  /* avx512fp16_fixuns_truncsi2_mem */
    case 3615:  /* avx512fp16_fix_truncsi2_mem */
    case 3609:  /* *avx512fp16_fixuns_truncv2di2_load */
    case 3607:  /* *avx512fp16_fix_truncv2di2_load */
    case 3601:  /* *avx512fp16_fixuns_truncv4di2_load */
    case 3599:  /* *avx512fp16_fix_truncv4di2_load */
    case 3597:  /* *avx512fp16_fixuns_truncv4si2_load */
    case 3595:  /* *avx512fp16_fix_truncv4si2_load */
    case 3583:  /* avx512fp16_fixuns_truncv8di2 */
    case 3579:  /* avx512fp16_fix_truncv8di2 */
    case 3575:  /* avx512fp16_fixuns_truncv16si2 */
    case 3571:  /* avx512fp16_fix_truncv16si2 */
    case 3567:  /* avx512fp16_fixuns_truncv8si2 */
    case 3563:  /* avx512fp16_fix_truncv8si2 */
    case 3559:  /* avx512fp16_fixuns_truncv32hi2 */
    case 3555:  /* avx512fp16_fix_truncv32hi2 */
    case 3551:  /* avx512fp16_fixuns_truncv16hi2 */
    case 3547:  /* avx512fp16_fix_truncv16hi2 */
    case 3543:  /* avx512fp16_fixuns_truncv8hi2 */
    case 3539:  /* avx512fp16_fix_truncv8hi2 */
    case 3507:  /* avx512fp16_vcvtuqq2ph_v8di */
    case 3503:  /* avx512fp16_vcvtqq2ph_v8di */
    case 3499:  /* avx512fp16_vcvtudq2ph_v16si */
    case 3495:  /* avx512fp16_vcvtdq2ph_v16si */
    case 3491:  /* avx512fp16_vcvtudq2ph_v8si */
    case 3487:  /* avx512fp16_vcvtdq2ph_v8si */
    case 3483:  /* avx512fp16_vcvtuw2ph_v32hi */
    case 3479:  /* avx512fp16_vcvtw2ph_v32hi */
    case 3475:  /* avx512fp16_vcvtuw2ph_v16hi */
    case 3471:  /* avx512fp16_vcvtw2ph_v16hi */
    case 3467:  /* avx512fp16_vcvtuw2ph_v8hi */
    case 3463:  /* avx512fp16_vcvtw2ph_v8hi */
    case 2050:  /* sse2_sqrtv2df2 */
    case 2048:  /* avx_sqrtv4df2 */
    case 2044:  /* avx512f_sqrtv8df2 */
    case 2042:  /* sse_sqrtv4sf2 */
    case 2040:  /* avx_sqrtv8sf2 */
    case 2036:  /* avx512f_sqrtv16sf2 */
    case 2034:  /* avx512fp16_sqrtv8hf2 */
    case 2032:  /* avx512fp16_sqrtv16hf2 */
    case 2028:  /* avx512fp16_sqrtv32hf2 */
    case 1539:  /* *vec_dupv2hi */
    case 1538:  /* *vec_dupv2bf */
    case 1537:  /* *vec_dupv2hf */
    case 1518:  /* *vec_extractv2si_1 */
    case 1516:  /* *vec_extractv2si_0 */
    case 1514:  /* *vec_dupv2si */
    case 1512:  /* mmx_pswapdv2si2 */
    case 1497:  /* truncv2hiv2qi2 */
    case 1459:  /* one_cmplv2hi2 */
    case 1458:  /* one_cmplv2qi2 */
    case 1457:  /* one_cmplv4qi2 */
    case 1403:  /* absv2hi2 */
    case 1402:  /* absv2qi2 */
    case 1401:  /* absv4qi2 */
    case 1400:  /* ssse3_absv2si2 */
    case 1399:  /* ssse3_absv4hi2 */
    case 1398:  /* ssse3_absv8qi2 */
    case 1330:  /* *vec_extractv2sf_1 */
    case 1329:  /* *vec_extractv2sf_0 */
    case 1327:  /* *vec_dupv2sf */
    case 1326:  /* mmx_pswapdv2sf2 */
    case 1323:  /* mmx_floatv2siv2sf2 */
    case 1322:  /* mmx_fix_truncv2sfv2si2 */
    case 1051:  /* *sqrtdf2_sse */
    case 1050:  /* *sqrtsf2_sse */
    case 1049:  /* sqrthf2 */
    case 1046:  /* sqrtxf2 */
    case 995:  /* *bswaphi2_movbe */
    case 994:  /* *bswapsi2 */
    case 993:  /* *bswapsi2_movbe */
    case 824:  /* rotr32di2_doubleword */
    case 823:  /* rotl32di2_doubleword */
    case 692:  /* *one_cmplqi2_1 */
    case 691:  /* *one_cmpldi2_1 */
    case 690:  /* *one_cmplsi2_1 */
    case 689:  /* *one_cmplhi2_1 */
    case 688:  /* *one_cmplti2_doubleword */
    case 687:  /* *one_cmpldi2_doubleword */
    case 686:  /* *negxf2_i387 */
    case 685:  /* *absxf2_i387 */
    case 684:  /* *negdf2_i387 */
    case 683:  /* *absdf2_i387 */
    case 682:  /* *negsf2_i387 */
    case 681:  /* *abssf2_i387 */
    case 196:  /* *floatunssidf2_avx512 */
    case 195:  /* *floatunssisf2_avx512 */
    case 191:  /* *floatdidf2_i387 */
    case 190:  /* *floatdisf2_i387 */
    case 189:  /* floatunssihf2 */
    case 188:  /* floatsihf2 */
    case 187:  /* *floatsidf2 */
    case 186:  /* *floatsisf2 */
    case 185:  /* floatdixf2 */
    case 184:  /* floatsixf2 */
    case 183:  /* floathixf2 */
    case 182:  /* floathidf2 */
    case 181:  /* floathisf2 */
    case 170:  /* fix_truncdfsi_sse */
    case 169:  /* fix_truncsfsi_sse */
    case 166:  /* fixuns_truncdfsi2_avx512f */
    case 165:  /* fixuns_truncsfsi2_avx512f */
    case 164:  /* fixuns_trunchfsi2 */
    case 163:  /* fix_trunchfsi2 */
    case 162:  /* truncsfbf2 */
    case 161:  /* *truncdfhf2 */
    case 160:  /* *truncsfhf2 */
    case 159:  /* truncxfdf2 */
    case 158:  /* truncxfsf2 */
    case 157:  /* truncdfsf2 */
    case 156:  /* *extenddfxf2_i387 */
    case 155:  /* *extendsfxf2_i387 */
    case 153:  /* *extendhfdf2 */
    case 152:  /* *extendhfsf2 */
    case 151:  /* *extendsfdf2 */
    case 146:  /* extendqihi2 */
    case 145:  /* extendqisi2 */
    case 144:  /* extendhisi2 */
    case 142:  /* *zero_extendqihi2 */
    case 140:  /* *zero_extendhisi2 */
    case 139:  /* *zero_extendqisi2 */
    case 136:  /* *zero_extendsidi2 */
    case 102:  /* *extzvsi */
    case 101:  /* *extzvhi */
    case 99:  /* *extvsi */
    case 98:  /* *extvhi */
    case 87:  /* *movabsdi_2 */
    case 86:  /* *movabssi_2 */
    case 85:  /* *movabshi_2 */
    case 84:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 908:  /* *sibcall */
    case 907:  /* *sibcall */
    case 904:  /* *call */
    case 903:  /* *call */
    case 893:  /* *setcc_qi_slp */
    case 106:  /* insvsi_1 */
    case 105:  /* insvhi_1 */
    case 92:  /* *movstricthi_1 */
    case 91:  /* *movstrictqi_1 */
    case 83:  /* *movabsdi_1 */
    case 82:  /* *movabssi_1 */
    case 81:  /* *movabshi_1 */
    case 80:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 8902:  /* storedi_via_sse */
    case 8901:  /* loaddi_via_sse */
    case 8900:  /* storedi_via_fpu */
    case 8899:  /* loaddi_via_fpu */
    case 8555:  /* *conflictv2di */
    case 8553:  /* *conflictv4di */
    case 8551:  /* *conflictv8di */
    case 8549:  /* *conflictv4si */
    case 8547:  /* *conflictv8si */
    case 8545:  /* *conflictv16si */
    case 8126:  /* *avx512f_vcvtph2ps512 */
    case 8124:  /* vcvtph2ps256 */
    case 8122:  /* *vcvtph2ps_load */
    case 7586:  /* aesimc */
    case 7559:  /* xop_frczv4df2 */
    case 7558:  /* xop_frczv8sf2 */
    case 7557:  /* xop_frczv2df2 */
    case 7556:  /* xop_frczv4sf2 */
    case 7555:  /* xop_frczdf2 */
    case 7554:  /* xop_frczsf2 */
    case 7475:  /* *avx512er_rsqrt28v8df */
    case 7471:  /* *avx512er_rsqrt28v16sf */
    case 7459:  /* *avx512er_rcp28v8df */
    case 7455:  /* *avx512er_rcp28v16sf */
    case 7451:  /* avx512er_exp2v8df */
    case 7447:  /* avx512er_exp2v16sf */
    case 7198:  /* sse4_1_phminposuw */
    case 7175:  /* sse4_1_movntdqa */
    case 7174:  /* avx2_movntdqa */
    case 7173:  /* avx512f_movntdqa */
    case 7140:  /* sse4a_movntdf */
    case 7139:  /* sse4a_movntsf */
    case 7043:  /* sse2_pmovmskb */
    case 7042:  /* avx2_pmovmskb */
    case 7033:  /* sse2_movmskpd */
    case 7032:  /* avx_movmskpd256 */
    case 7031:  /* sse_movmskps */
    case 7030:  /* avx_movmskps256 */
    case 5604:  /* avx512vl_getexpv2df */
    case 5600:  /* avx512vl_getexpv4df */
    case 5596:  /* avx512f_getexpv8df */
    case 5592:  /* avx512vl_getexpv4sf */
    case 5588:  /* avx512vl_getexpv8sf */
    case 5584:  /* avx512f_getexpv16sf */
    case 5580:  /* avx512fp16_getexpv8hf */
    case 5576:  /* avx512vl_getexpv16hf */
    case 5572:  /* avx512bw_getexpv32hf */
    case 3969:  /* avx512vl_cvtq2maskv2di */
    case 3968:  /* avx512vl_cvtq2maskv4di */
    case 3967:  /* avx512f_cvtq2maskv8di */
    case 3966:  /* avx512vl_cvtd2maskv4si */
    case 3965:  /* avx512vl_cvtd2maskv8si */
    case 3964:  /* avx512f_cvtd2maskv16si */
    case 3963:  /* avx512vl_cvtw2maskv8hi */
    case 3962:  /* avx512vl_cvtw2maskv16hi */
    case 3961:  /* avx512bw_cvtw2maskv32hi */
    case 3960:  /* avx512vl_cvtb2maskv32qi */
    case 3959:  /* avx512vl_cvtb2maskv16qi */
    case 3958:  /* avx512bw_cvtb2maskv64qi */
    case 3906:  /* fixuns_notruncv2dfv2di2 */
    case 3904:  /* fixuns_notruncv4dfv4di2 */
    case 3900:  /* fixuns_notruncv8dfv8di2 */
    case 3898:  /* fix_notruncv2dfv2di2 */
    case 3896:  /* fix_notruncv4dfv4di2 */
    case 3892:  /* fix_notruncv8dfv8di2 */
    case 3854:  /* fixuns_notruncv4dfv4si2 */
    case 3850:  /* fixuns_notruncv8dfv8si2 */
    case 3844:  /* avx_cvtpd2dq256 */
    case 3840:  /* avx512f_cvtpd2dq512 */
    case 3781:  /* sse2_cvtsd2si_2 */
    case 3768:  /* sse2_cvtpd2pi */
    case 3751:  /* *avx512dq_cvtps2uqqv4di */
    case 3747:  /* *avx512dq_cvtps2uqqv8di */
    case 3743:  /* *avx512dq_cvtps2qqv4di */
    case 3739:  /* *avx512dq_cvtps2qqv8di */
    case 3735:  /* *avx512vl_fixuns_notruncv4sfv4si */
    case 3731:  /* *avx512vl_fixuns_notruncv8sfv8si */
    case 3727:  /* *avx512f_fixuns_notruncv16sfv16si */
    case 3723:  /* avx512f_fix_notruncv16sfv16si */
    case 3721:  /* sse2_fix_notruncv4sfv4si */
    case 3719:  /* avx_fix_notruncv8sfv8si */
    case 3693:  /* sse_cvtss2si_2 */
    case 3534:  /* avx512fp16_vcvtsh2si_2 */
    case 3533:  /* avx512fp16_vcvtsh2usi_2 */
    case 3459:  /* avx512fp16_vcvtph2qq_v2di */
    case 3455:  /* avx512fp16_vcvtph2uqq_v2di */
    case 3451:  /* avx512fp16_vcvtph2dq_v4si */
    case 3447:  /* avx512fp16_vcvtph2udq_v4si */
    case 3443:  /* avx512fp16_vcvtph2w_v8hi */
    case 3439:  /* avx512fp16_vcvtph2uw_v8hi */
    case 3435:  /* avx512fp16_vcvtph2qq_v4di */
    case 3431:  /* avx512fp16_vcvtph2uqq_v4di */
    case 3427:  /* avx512fp16_vcvtph2dq_v8si */
    case 3423:  /* avx512fp16_vcvtph2udq_v8si */
    case 3419:  /* avx512fp16_vcvtph2w_v16hi */
    case 3415:  /* avx512fp16_vcvtph2uw_v16hi */
    case 3411:  /* avx512fp16_vcvtph2qq_v8di */
    case 3407:  /* avx512fp16_vcvtph2uqq_v8di */
    case 3403:  /* avx512fp16_vcvtph2dq_v16si */
    case 3399:  /* avx512fp16_vcvtph2udq_v16si */
    case 3395:  /* avx512fp16_vcvtph2w_v32hi */
    case 3391:  /* avx512fp16_vcvtph2uw_v32hi */
    case 2094:  /* *rsqrt14v2df */
    case 2092:  /* *rsqrt14v4df */
    case 2090:  /* *rsqrt14v8df */
    case 2088:  /* *rsqrt14v4sf */
    case 2086:  /* *rsqrt14v8sf */
    case 2084:  /* *rsqrt14v16sf */
    case 2082:  /* avx512fp16_rsqrtv8hf2 */
    case 2080:  /* avx512fp16_rsqrtv16hf2 */
    case 2078:  /* avx512fp16_rsqrtv32hf2 */
    case 2077:  /* sse_rsqrtv4sf2 */
    case 2076:  /* avx_rsqrtv8sf2 */
    case 2022:  /* *rcp14v2df */
    case 2020:  /* *rcp14v4df */
    case 2018:  /* *rcp14v8df */
    case 2016:  /* *rcp14v4sf */
    case 2014:  /* *rcp14v8sf */
    case 2012:  /* *rcp14v16sf */
    case 2007:  /* avx512fp16_rcpv8hf2 */
    case 2005:  /* avx512fp16_rcpv16hf2 */
    case 2003:  /* avx512fp16_rcpv32hf2 */
    case 2000:  /* sse_rcpv4sf2 */
    case 1999:  /* avx_rcpv8sf2 */
    case 1726:  /* sse2_movntv2di */
    case 1725:  /* avx_movntv4di */
    case 1724:  /* avx512f_movntv8di */
    case 1723:  /* sse2_movntv2df */
    case 1722:  /* avx_movntv4df */
    case 1721:  /* avx512f_movntv8df */
    case 1720:  /* sse_movntv4sf */
    case 1719:  /* avx_movntv8sf */
    case 1718:  /* avx512f_movntv16sf */
    case 1717:  /* sse2_movntisi */
    case 1716:  /* sse3_lddqu */
    case 1715:  /* avx_lddqu256 */
    case 1652:  /* *avx512vl_loadv8bf */
    case 1651:  /* *avx512vl_loadv16bf */
    case 1650:  /* *avx512bw_loadv32bf */
    case 1649:  /* *avx512fp16_loadv8hf */
    case 1648:  /* *avx512vl_loadv16hf */
    case 1647:  /* *avx512bw_loadv32hf */
    case 1646:  /* *avx512vl_loadv8hi */
    case 1645:  /* *avx512vl_loadv16hi */
    case 1644:  /* *avx512bw_loadv32hi */
    case 1643:  /* *avx512vl_loadv32qi */
    case 1642:  /* *avx512vl_loadv16qi */
    case 1641:  /* *avx512bw_loadv64qi */
    case 1628:  /* *avx512vl_loadv2df */
    case 1627:  /* *avx512vl_loadv4df */
    case 1626:  /* *avx512f_loadv8df */
    case 1625:  /* *avx512vl_loadv4sf */
    case 1624:  /* *avx512vl_loadv8sf */
    case 1623:  /* *avx512f_loadv16sf */
    case 1622:  /* *avx512vl_loadv2di */
    case 1621:  /* *avx512vl_loadv4di */
    case 1620:  /* *avx512f_loadv8di */
    case 1619:  /* *avx512vl_loadv4si */
    case 1618:  /* *avx512vl_loadv8si */
    case 1617:  /* *avx512f_loadv16si */
    case 1546:  /* mmx_pmovmskb */
    case 1314:  /* mmx_rsqrtv2sf2 */
    case 1311:  /* mmx_rcpv2sf2 */
    case 1303:  /* sse_movntq */
    case 1265:  /* movdirisi */
    case 1240:  /* rdsspsi */
    case 1223:  /* xgetbv */
    case 1219:  /* xsaves */
    case 1218:  /* xsavec */
    case 1217:  /* xsaveopt */
    case 1216:  /* xsave */
    case 1211:  /* rdpmc */
    case 1097:  /* movmsk_df */
    case 1096:  /* fxamxf2_i387 */
    case 1095:  /* fxamdf2_i387 */
    case 1094:  /* fxamsf2_i387 */
    case 1073:  /* lrintxfsi2 */
    case 1072:  /* lrintxfhi2 */
    case 1070:  /* rintxf2 */
    case 1063:  /* *f2xm1xf2_i387 */
    case 1056:  /* cosxf2 */
    case 1055:  /* sinxf2 */
    case 1048:  /* rsqrthf2 */
    case 1047:  /* *rsqrtsf2_sse */
    case 1045:  /* truncxfdf2_i387_noop_unspec */
    case 1044:  /* truncxfsf2_i387_noop_unspec */
    case 1019:  /* rcphf2 */
    case 1018:  /* *rcpsf2_sse */
    case 154:  /* extendbfsf2_1 */
    case 67:  /* popfldi1 */
    case 66:  /* popflsi1 */
    case 65:  /* pushfldi2 */
    case 64:  /* pushflsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 889:  /* *setcc_si_1_and */
    case 888:  /* *setcc_hi_1_and */
    case 125:  /* popp_di */
    case 72:  /* *movsi_or */
    case 71:  /* *movhi_or */
    case 70:  /* *movsi_and */
    case 69:  /* *movhi_and */
    case 68:  /* *movsi_xor */
    case 63:  /* *popdi1_epilogue */
    case 62:  /* *popsi1_epilogue */
    case 59:  /* *pushdi2_prologue */
    case 58:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 8814:  /* *movp2hi_internal */
    case 8813:  /* *movp2qi_internal */
    case 8605:  /* *movv64si_internal */
    case 8604:  /* *movv64sf_internal */
    case 1577:  /* movv2df_internal */
    case 1576:  /* movv4df_internal */
    case 1575:  /* movv8df_internal */
    case 1574:  /* movv4sf_internal */
    case 1573:  /* movv8sf_internal */
    case 1572:  /* movv16sf_internal */
    case 1571:  /* movv8bf_internal */
    case 1570:  /* movv16bf_internal */
    case 1569:  /* movv32bf_internal */
    case 1568:  /* movv8hf_internal */
    case 1567:  /* movv16hf_internal */
    case 1566:  /* movv32hf_internal */
    case 1565:  /* movv1ti_internal */
    case 1564:  /* movv2ti_internal */
    case 1563:  /* movv4ti_internal */
    case 1562:  /* movv2di_internal */
    case 1561:  /* movv4di_internal */
    case 1560:  /* movv8di_internal */
    case 1559:  /* movv4si_internal */
    case 1558:  /* movv8si_internal */
    case 1557:  /* movv16si_internal */
    case 1556:  /* movv8hi_internal */
    case 1555:  /* movv16hi_internal */
    case 1554:  /* movv32hi_internal */
    case 1553:  /* movv16qi_internal */
    case 1552:  /* movv32qi_internal */
    case 1551:  /* movv64qi_internal */
    case 1302:  /* *pushv2qi2 */
    case 1301:  /* *movv2qi_internal */
    case 1300:  /* *movv2hf_imm */
    case 1299:  /* *movv2hi_imm */
    case 1298:  /* *movv4qi_imm */
    case 1297:  /* *movv2qi_imm */
    case 1296:  /* *movv2bf_internal */
    case 1295:  /* *movv2hf_internal */
    case 1294:  /* *movv1si_internal */
    case 1293:  /* *movv2hi_internal */
    case 1292:  /* *movv4qi_internal */
    case 1291:  /* *movv4bf_internal */
    case 1290:  /* *movv4hf_internal */
    case 1289:  /* *movv2sf_internal */
    case 1288:  /* *movv1di_internal */
    case 1287:  /* *movv2si_internal */
    case 1286:  /* *movv4hi_internal */
    case 1285:  /* *movv8qi_internal */
    case 1206:  /* *prefetch_3dnow */
    case 892:  /* *setcc_qi */
    case 891:  /* *setcc_si_1_movzbl */
    case 890:  /* *setcc_hi_1_movzbl */
    case 201:  /* *leadi */
    case 200:  /* *leasi */
    case 134:  /* *movbf_internal */
    case 133:  /* *movhf_internal */
    case 132:  /* *movsf_internal */
    case 131:  /* *movdf_internal */
    case 130:  /* *movxf_internal */
    case 129:  /* *movtf_internal */
    case 128:  /* *pushsf */
    case 122:  /* *pushbf */
    case 121:  /* *pushhf */
    case 120:  /* *pushdf */
    case 119:  /* *pushxf */
    case 118:  /* *pushtf */
    case 79:  /* *movqi_internal */
    case 78:  /* *movhi_internal */
    case 77:  /* *movsi_internal */
    case 76:  /* *movdi_internal */
    case 75:  /* *movti_internal */
    case 74:  /* *movoi_internal_avx */
    case 73:  /* *movxi_internal_avx512f */
    case 61:  /* *popdi1 */
    case 60:  /* *popsi1 */
    case 57:  /* *pushhi2 */
    case 56:  /* *pushqi2 */
    case 55:  /* *pushsi2 */
    case 54:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 7590:  /* avx_vzeroupper_callee_abi */
    case 1550:  /* *mmx_femms */
    case 1549:  /* *mmx_emms */
    case 1280:  /* serialize */
    case 1279:  /* speculation_barrier */
    case 1269:  /* xresldtrk */
    case 1268:  /* xsusldtrk */
    case 1264:  /* wbnoinvd */
    case 1263:  /* wbinvd */
    case 1252:  /* xtest_1 */
    case 1250:  /* xend */
    case 1248:  /* nop_endbr */
    case 1246:  /* setssbsy */
    case 1242:  /* saveprevssp */
    case 1227:  /* fnclex */
    case 1204:  /* ud2 */
    case 1203:  /* trap */
    case 1098:  /* cld */
    case 941:  /* *leave */
    case 940:  /* eh_return_internal */
    case 934:  /* nop */
    case 930:  /* simple_return_internal_long */
    case 929:  /* interrupt_return */
    case 928:  /* simple_return_internal */
    case 925:  /* blockage */
    case 376:  /* *setcc_qi_negqi_ccc_2_ccc */
    case 375:  /* *setcc_qi_negqi_ccc_2_cc */
    case 374:  /* *setcc_qi_negqi_ccc_1_ccc */
    case 373:  /* *setcc_qi_negqi_ccc_1_cc */
    case 372:  /* *setccc */
    case 371:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 370:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
    case 53:  /* *x86_cmc */
    case 52:  /* x86_stc */
      break;

    case 51:  /* *cmpiuhf */
    case 49:  /* *cmpiudf */
    case 47:  /* *cmpiusf */
    case 45:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 998:  /* parityqi2_cmp */
    case 43:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 42:  /* *cmpuxf_i387 */
    case 41:  /* *cmpudf_i387 */
    case 40:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 39:  /* *cmpxf_si_i387 */
    case 38:  /* *cmpdf_si_i387 */
    case 37:  /* *cmpsf_si_i387 */
    case 36:  /* *cmpxf_hi_i387 */
    case 35:  /* *cmpdf_hi_i387 */
    case 34:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 7046:  /* *sse2_pmovmskb_lt */
    case 7045:  /* *avx2_pmovmskb_lt */
    case 7037:  /* *sse2_movmskpd_lt */
    case 7036:  /* *avx_movmskpd256_lt */
    case 7035:  /* *sse_movmskps_lt */
    case 7034:  /* *avx_movmskps256_lt */
    case 33:  /* *cmpdf_i387 */
    case 32:  /* *cmpsf_i387 */
    case 31:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 28:  /* *cmpqi_extdi_4 */
    case 27:  /* *cmpqi_extsi_4 */
    case 26:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 25:  /* *cmpqi_extdi_3 */
    case 24:  /* *cmpqi_extsi_3 */
    case 23:  /* *cmpqi_exthi_3 */
    case 22:  /* *cmpqi_extdi_2 */
    case 21:  /* *cmpqi_extsi_2 */
    case 20:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 19:  /* *cmpqi_extdi_1 */
    case 18:  /* *cmpqi_extsi_1 */
    case 17:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 467:  /* *testsi_1 */
    case 466:  /* *testhi_1 */
    case 465:  /* *testqi_1 */
    case 464:  /* *testqi_1_maybe_si */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 50:  /* *cmpihf */
    case 48:  /* *cmpidf */
    case 46:  /* *cmpisf */
    case 44:  /* *cmpixf_i387 */
    case 30:  /* *cmpti_doubleword */
    case 29:  /* *cmpdi_doubleword */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}

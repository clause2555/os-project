/* Generated automatically by the program `genopinit'
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

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x103c10, CODE_FOR_extendqihi2 },
  { 0x103c11, CODE_FOR_extendqisi2 },
  { 0x104011, CODE_FOR_extendhisi2 },
  { 0x104412, CODE_FOR_extendsidi2 },
  { 0x10ac2d, CODE_FOR_extendhfsf2 },
  { 0x10ac2e, CODE_FOR_extendhfdf2 },
  { 0x10b02d, CODE_FOR_extendbfsf2 },
  { 0x10b42e, CODE_FOR_extendsfdf2 },
  { 0x10b42f, CODE_FOR_extendsfxf2 },
  { 0x10b82f, CODE_FOR_extenddfxf2 },
  { 0x111046, CODE_FOR_extendv2qiv2hi2 },
  { 0x111052, CODE_FOR_extendv2qiv2di2 },
  { 0x111451, CODE_FOR_extendv4qiv4si2 },
  { 0x111457, CODE_FOR_extendv4qiv4di2 },
  { 0x111852, CODE_FOR_extendv2hiv2di2 },
  { 0x112050, CODE_FOR_extendv8qiv8hi2 },
  { 0x112056, CODE_FOR_extendv8qiv8si2 },
  { 0x11205c, CODE_FOR_extendv8qiv8di2 },
  { 0x112451, CODE_FOR_extendv4hiv4si2 },
  { 0x112457, CODE_FOR_extendv4hiv4di2 },
  { 0x112852, CODE_FOR_extendv2siv2di2 },
  { 0x113c55, CODE_FOR_extendv16qiv16hi2 },
  { 0x113c5b, CODE_FOR_extendv16qiv16si2 },
  { 0x114056, CODE_FOR_extendv8hiv8si2 },
  { 0x11405c, CODE_FOR_extendv8hiv8di2 },
  { 0x114457, CODE_FOR_extendv4siv4di2 },
  { 0x11505a, CODE_FOR_extendv32qiv32hi2 },
  { 0x11545b, CODE_FOR_extendv16hiv16si2 },
  { 0x11585c, CODE_FOR_extendv8siv8di2 },
  { 0x11906d, CODE_FOR_extendv2hfv2df2 },
  { 0x119c6c, CODE_FOR_extendv4hfv4sf2 },
  { 0x119c71, CODE_FOR_extendv4hfv4df2 },
  { 0x11ac70, CODE_FOR_extendv8hfv8sf2 },
  { 0x11ac76, CODE_FOR_extendv8hfv8df2 },
  { 0x11b071, CODE_FOR_extendv4sfv4df2 },
  { 0x11bc75, CODE_FOR_extendv16hfv16sf2 },
  { 0x11c076, CODE_FOR_extendv8sfv8df2 },
  { 0x20b42b, CODE_FOR_truncsfhf2 },
  { 0x20b42c, CODE_FOR_truncsfbf2 },
  { 0x20b82b, CODE_FOR_truncdfhf2 },
  { 0x20b82d, CODE_FOR_truncdfsf2 },
  { 0x20bc2d, CODE_FOR_truncxfsf2 },
  { 0x20bc2e, CODE_FOR_truncxfdf2 },
  { 0x211844, CODE_FOR_truncv2hiv2qi2 },
  { 0x214048, CODE_FOR_truncv8hiv8qi2 },
  { 0x214445, CODE_FOR_truncv4siv4qi2 },
  { 0x214449, CODE_FOR_truncv4siv4hi2 },
  { 0x214844, CODE_FOR_truncv2div2qi2 },
  { 0x214846, CODE_FOR_truncv2div2hi2 },
  { 0x21484a, CODE_FOR_truncv2div2si2 },
  { 0x21544f, CODE_FOR_truncv16hiv16qi2 },
  { 0x215848, CODE_FOR_truncv8siv8qi2 },
  { 0x215850, CODE_FOR_truncv8siv8hi2 },
  { 0x215c45, CODE_FOR_truncv4div4qi2 },
  { 0x215c49, CODE_FOR_truncv4div4hi2 },
  { 0x215c51, CODE_FOR_truncv4div4si2 },
  { 0x216854, CODE_FOR_truncv32hiv32qi2 },
  { 0x216c4f, CODE_FOR_truncv16siv16qi2 },
  { 0x216c55, CODE_FOR_truncv16siv16hi2 },
  { 0x217048, CODE_FOR_truncv8div8qi2 },
  { 0x217050, CODE_FOR_truncv8div8hi2 },
  { 0x217056, CODE_FOR_truncv8div8si2 },
  { 0x21b067, CODE_FOR_truncv4sfv4hf2 },
  { 0x21b464, CODE_FOR_truncv2dfv2hf2 },
  { 0x21c06b, CODE_FOR_truncv8sfv8hf2 },
  { 0x21c467, CODE_FOR_truncv4dfv4hf2 },
  { 0x21c46c, CODE_FOR_truncv4dfv4sf2 },
  { 0x21d46f, CODE_FOR_truncv16sfv16hf2 },
  { 0x21d86b, CODE_FOR_truncv8dfv8hf2 },
  { 0x21d870, CODE_FOR_truncv8dfv8sf2 },
  { 0x303c10, CODE_FOR_zero_extendqihi2 },
  { 0x303c11, CODE_FOR_zero_extendqisi2 },
  { 0x304011, CODE_FOR_zero_extendhisi2 },
  { 0x304412, CODE_FOR_zero_extendsidi2 },
  { 0x311046, CODE_FOR_zero_extendv2qiv2hi2 },
  { 0x311052, CODE_FOR_zero_extendv2qiv2di2 },
  { 0x311451, CODE_FOR_zero_extendv4qiv4si2 },
  { 0x311457, CODE_FOR_zero_extendv4qiv4di2 },
  { 0x311852, CODE_FOR_zero_extendv2hiv2di2 },
  { 0x312050, CODE_FOR_zero_extendv8qiv8hi2 },
  { 0x312056, CODE_FOR_zero_extendv8qiv8si2 },
  { 0x31205c, CODE_FOR_zero_extendv8qiv8di2 },
  { 0x312451, CODE_FOR_zero_extendv4hiv4si2 },
  { 0x312457, CODE_FOR_zero_extendv4hiv4di2 },
  { 0x312852, CODE_FOR_zero_extendv2siv2di2 },
  { 0x313c55, CODE_FOR_zero_extendv16qiv16hi2 },
  { 0x313c5b, CODE_FOR_zero_extendv16qiv16si2 },
  { 0x314056, CODE_FOR_zero_extendv8hiv8si2 },
  { 0x31405c, CODE_FOR_zero_extendv8hiv8di2 },
  { 0x314457, CODE_FOR_zero_extendv4siv4di2 },
  { 0x31505a, CODE_FOR_zero_extendv32qiv32hi2 },
  { 0x31545b, CODE_FOR_zero_extendv16hiv16si2 },
  { 0x31585c, CODE_FOR_zero_extendv8siv8di2 },
  { 0x60402d, CODE_FOR_floathisf2 },
  { 0x60402e, CODE_FOR_floathidf2 },
  { 0x60402f, CODE_FOR_floathixf2 },
  { 0x60442b, CODE_FOR_floatsihf2 },
  { 0x60442d, CODE_FOR_floatsisf2 },
  { 0x60442e, CODE_FOR_floatsidf2 },
  { 0x60442f, CODE_FOR_floatsixf2 },
  { 0x60482d, CODE_FOR_floatdisf2 },
  { 0x60482e, CODE_FOR_floatdidf2 },
  { 0x60482f, CODE_FOR_floatdixf2 },
  { 0x611864, CODE_FOR_floatv2hiv2hf2 },
  { 0x61406b, CODE_FOR_floatv8hiv8hf2 },
  { 0x614467, CODE_FOR_floatv4siv4hf2 },
  { 0x61446c, CODE_FOR_floatv4siv4sf2 },
  { 0x614471, CODE_FOR_floatv4siv4df2 },
  { 0x614864, CODE_FOR_floatv2div2hf2 },
  { 0x614868, CODE_FOR_floatv2div2sf2 },
  { 0x61486d, CODE_FOR_floatv2div2df2 },
  { 0x61546f, CODE_FOR_floatv16hiv16hf2 },
  { 0x61586b, CODE_FOR_floatv8siv8hf2 },
  { 0x615870, CODE_FOR_floatv8siv8sf2 },
  { 0x615876, CODE_FOR_floatv8siv8df2 },
  { 0x615c67, CODE_FOR_floatv4div4hf2 },
  { 0x615c6c, CODE_FOR_floatv4div4sf2 },
  { 0x615c71, CODE_FOR_floatv4div4df2 },
  { 0x616874, CODE_FOR_floatv32hiv32hf2 },
  { 0x616c6f, CODE_FOR_floatv16siv16hf2 },
  { 0x616c75, CODE_FOR_floatv16siv16sf2 },
  { 0x61706b, CODE_FOR_floatv8div8hf2 },
  { 0x617070, CODE_FOR_floatv8div8sf2 },
  { 0x617076, CODE_FOR_floatv8div8df2 },
  { 0x703c2d, CODE_FOR_floatunsqisf2 },
  { 0x703c2e, CODE_FOR_floatunsqidf2 },
  { 0x70402d, CODE_FOR_floatunshisf2 },
  { 0x70402e, CODE_FOR_floatunshidf2 },
  { 0x70442b, CODE_FOR_floatunssihf2 },
  { 0x70442d, CODE_FOR_floatunssisf2 },
  { 0x70442e, CODE_FOR_floatunssidf2 },
  { 0x70442f, CODE_FOR_floatunssixf2 },
  { 0x711864, CODE_FOR_floatunsv2hiv2hf2 },
  { 0x71406b, CODE_FOR_floatunsv8hiv8hf2 },
  { 0x714467, CODE_FOR_floatunsv4siv4hf2 },
  { 0x71446c, CODE_FOR_floatunsv4siv4sf2 },
  { 0x714471, CODE_FOR_floatunsv4siv4df2 },
  { 0x714864, CODE_FOR_floatunsv2div2hf2 },
  { 0x714868, CODE_FOR_floatunsv2div2sf2 },
  { 0x71486d, CODE_FOR_floatunsv2div2df2 },
  { 0x71546f, CODE_FOR_floatunsv16hiv16hf2 },
  { 0x71586b, CODE_FOR_floatunsv8siv8hf2 },
  { 0x715870, CODE_FOR_floatunsv8siv8sf2 },
  { 0x715876, CODE_FOR_floatunsv8siv8df2 },
  { 0x715c67, CODE_FOR_floatunsv4div4hf2 },
  { 0x715c6c, CODE_FOR_floatunsv4div4sf2 },
  { 0x715c71, CODE_FOR_floatunsv4div4df2 },
  { 0x716874, CODE_FOR_floatunsv32hiv32hf2 },
  { 0x716c6f, CODE_FOR_floatunsv16siv16hf2 },
  { 0x716c75, CODE_FOR_floatunsv16siv16sf2 },
  { 0x71706b, CODE_FOR_floatunsv8div8hf2 },
  { 0x717070, CODE_FOR_floatunsv8div8sf2 },
  { 0x717076, CODE_FOR_floatunsv8div8df2 },
  { 0x80ac11, CODE_FOR_lrinthfsi2 },
  { 0x80b411, CODE_FOR_lrintsfsi2 },
  { 0x80b811, CODE_FOR_lrintdfsi2 },
  { 0x80bc10, CODE_FOR_lrintxfhi2 },
  { 0x80bc11, CODE_FOR_lrintxfsi2 },
  { 0x80bc12, CODE_FOR_lrintxfdi2 },
  { 0x819046, CODE_FOR_lrintv2hfv2hi2 },
  { 0x81ac50, CODE_FOR_lrintv8hfv8hi2 },
  { 0x81b051, CODE_FOR_lrintv4sfv4si2 },
  { 0x81b452, CODE_FOR_lrintv2dfv2di2 },
  { 0x81bc55, CODE_FOR_lrintv16hfv16hi2 },
  { 0x81c056, CODE_FOR_lrintv8sfv8si2 },
  { 0x81c457, CODE_FOR_lrintv4dfv4di2 },
  { 0x81d05a, CODE_FOR_lrintv32hfv32hi2 },
  { 0x81d45b, CODE_FOR_lrintv16sfv16si2 },
  { 0x81d85c, CODE_FOR_lrintv8dfv8di2 },
  { 0x90ac10, CODE_FOR_lroundhfhi2 },
  { 0x90ac11, CODE_FOR_lroundhfsi2 },
  { 0x90b410, CODE_FOR_lroundsfhi2 },
  { 0x90b411, CODE_FOR_lroundsfsi2 },
  { 0x90b412, CODE_FOR_lroundsfdi2 },
  { 0x90b810, CODE_FOR_lrounddfhi2 },
  { 0x90b811, CODE_FOR_lrounddfsi2 },
  { 0x90b812, CODE_FOR_lrounddfdi2 },
  { 0x90bc10, CODE_FOR_lroundxfhi2 },
  { 0x90bc11, CODE_FOR_lroundxfsi2 },
  { 0x90bc12, CODE_FOR_lroundxfdi2 },
  { 0x919046, CODE_FOR_lroundv2hfv2hi2 },
  { 0x91ac50, CODE_FOR_lroundv8hfv8hi2 },
  { 0x91b051, CODE_FOR_lroundv4sfv4si2 },
  { 0x91b452, CODE_FOR_lroundv2dfv2di2 },
  { 0x91bc55, CODE_FOR_lroundv16hfv16hi2 },
  { 0x91c056, CODE_FOR_lroundv8sfv8si2 },
  { 0x91c457, CODE_FOR_lroundv4dfv4di2 },
  { 0x91d05a, CODE_FOR_lroundv32hfv32hi2 },
  { 0x91d45b, CODE_FOR_lroundv16sfv16si2 },
  { 0x91d85c, CODE_FOR_lroundv8dfv8di2 },
  { 0xa0ac11, CODE_FOR_lfloorhfsi2 },
  { 0xa0b411, CODE_FOR_lfloorsfsi2 },
  { 0xa0b811, CODE_FOR_lfloordfsi2 },
  { 0xa0bc10, CODE_FOR_lfloorxfhi2 },
  { 0xa0bc11, CODE_FOR_lfloorxfsi2 },
  { 0xa0bc12, CODE_FOR_lfloorxfdi2 },
  { 0xa19046, CODE_FOR_lfloorv2hfv2hi2 },
  { 0xa1ac50, CODE_FOR_lfloorv8hfv8hi2 },
  { 0xa1b051, CODE_FOR_lfloorv4sfv4si2 },
  { 0xa1b452, CODE_FOR_lfloorv2dfv2di2 },
  { 0xa1bc55, CODE_FOR_lfloorv16hfv16hi2 },
  { 0xa1c056, CODE_FOR_lfloorv8sfv8si2 },
  { 0xa1c457, CODE_FOR_lfloorv4dfv4di2 },
  { 0xa1d05a, CODE_FOR_lfloorv32hfv32hi2 },
  { 0xa1d45b, CODE_FOR_lfloorv16sfv16si2 },
  { 0xa1d85c, CODE_FOR_lfloorv8dfv8di2 },
  { 0xb0ac11, CODE_FOR_lceilhfsi2 },
  { 0xb0b411, CODE_FOR_lceilsfsi2 },
  { 0xb0b811, CODE_FOR_lceildfsi2 },
  { 0xb0bc10, CODE_FOR_lceilxfhi2 },
  { 0xb0bc11, CODE_FOR_lceilxfsi2 },
  { 0xb0bc12, CODE_FOR_lceilxfdi2 },
  { 0xb19046, CODE_FOR_lceilv2hfv2hi2 },
  { 0xb1ac50, CODE_FOR_lceilv8hfv8hi2 },
  { 0xb1b051, CODE_FOR_lceilv4sfv4si2 },
  { 0xb1b452, CODE_FOR_lceilv2dfv2di2 },
  { 0xb1bc55, CODE_FOR_lceilv16hfv16hi2 },
  { 0xb1c056, CODE_FOR_lceilv8sfv8si2 },
  { 0xb1c457, CODE_FOR_lceilv4dfv4di2 },
  { 0xb1d05a, CODE_FOR_lceilv32hfv32hi2 },
  { 0xb1d45b, CODE_FOR_lceilv16sfv16si2 },
  { 0xb1d85c, CODE_FOR_lceilv8dfv8di2 },
  { 0x100ac11, CODE_FOR_fix_trunchfsi2 },
  { 0x100b410, CODE_FOR_fix_truncsfhi2 },
  { 0x100b411, CODE_FOR_fix_truncsfsi2 },
  { 0x100b412, CODE_FOR_fix_truncsfdi2 },
  { 0x100b810, CODE_FOR_fix_truncdfhi2 },
  { 0x100b811, CODE_FOR_fix_truncdfsi2 },
  { 0x100b812, CODE_FOR_fix_truncdfdi2 },
  { 0x100bc10, CODE_FOR_fix_truncxfhi2 },
  { 0x100bc11, CODE_FOR_fix_truncxfsi2 },
  { 0x100bc12, CODE_FOR_fix_truncxfdi2 },
  { 0x1019046, CODE_FOR_fix_truncv2hfv2hi2 },
  { 0x1019052, CODE_FOR_fix_truncv2hfv2di2 },
  { 0x1019c51, CODE_FOR_fix_truncv4hfv4si2 },
  { 0x1019c57, CODE_FOR_fix_truncv4hfv4di2 },
  { 0x101a052, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x101ac50, CODE_FOR_fix_truncv8hfv8hi2 },
  { 0x101ac56, CODE_FOR_fix_truncv8hfv8si2 },
  { 0x101ac5c, CODE_FOR_fix_truncv8hfv8di2 },
  { 0x101b051, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x101b057, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x101b452, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x101bc55, CODE_FOR_fix_truncv16hfv16hi2 },
  { 0x101bc5b, CODE_FOR_fix_truncv16hfv16si2 },
  { 0x101c056, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x101c05c, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x101c451, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x101c457, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x101d05a, CODE_FOR_fix_truncv32hfv32hi2 },
  { 0x101d45b, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x101d856, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x101d85c, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x110ac10, CODE_FOR_fixuns_trunchfhi2 },
  { 0x110ac11, CODE_FOR_fixuns_trunchfsi2 },
  { 0x110b410, CODE_FOR_fixuns_truncsfhi2 },
  { 0x110b411, CODE_FOR_fixuns_truncsfsi2 },
  { 0x110b810, CODE_FOR_fixuns_truncdfhi2 },
  { 0x110b811, CODE_FOR_fixuns_truncdfsi2 },
  { 0x1119046, CODE_FOR_fixuns_truncv2hfv2hi2 },
  { 0x1119052, CODE_FOR_fixuns_truncv2hfv2di2 },
  { 0x1119c51, CODE_FOR_fixuns_truncv4hfv4si2 },
  { 0x1119c57, CODE_FOR_fixuns_truncv4hfv4di2 },
  { 0x111a052, CODE_FOR_fixuns_truncv2sfv2di2 },
  { 0x111ac50, CODE_FOR_fixuns_truncv8hfv8hi2 },
  { 0x111ac56, CODE_FOR_fixuns_truncv8hfv8si2 },
  { 0x111ac5c, CODE_FOR_fixuns_truncv8hfv8di2 },
  { 0x111b051, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x111b057, CODE_FOR_fixuns_truncv4sfv4di2 },
  { 0x111b452, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x111bc55, CODE_FOR_fixuns_truncv16hfv16hi2 },
  { 0x111bc5b, CODE_FOR_fixuns_truncv16hfv16si2 },
  { 0x111c056, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x111c05c, CODE_FOR_fixuns_truncv8sfv8di2 },
  { 0x111c451, CODE_FOR_fixuns_truncv4dfv4si2 },
  { 0x111c457, CODE_FOR_fixuns_truncv4dfv4di2 },
  { 0x111d05a, CODE_FOR_fixuns_truncv32hfv32hi2 },
  { 0x111d45b, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x111d856, CODE_FOR_fixuns_truncv8dfv8si2 },
  { 0x111d85c, CODE_FOR_fixuns_truncv8dfv8di2 },
  { 0x1203c10, CODE_FOR_mulqihi3 },
  { 0x1204412, CODE_FOR_mulsidi3 },
  { 0x1303c10, CODE_FOR_umulqihi3 },
  { 0x1304412, CODE_FOR_umulsidi3 },
  { 0x2311044, CODE_FOR_vcondv2qiv2qi },
  { 0x2311445, CODE_FOR_vcondv4qiv4qi },
  { 0x2311846, CODE_FOR_vcondv2hiv2hi },
  { 0x2313c4f, CODE_FOR_vcondv16qiv16qi },
  { 0x2313c50, CODE_FOR_vcondv8hiv16qi },
  { 0x2313c51, CODE_FOR_vcondv4siv16qi },
  { 0x2313c52, CODE_FOR_vcondv2div16qi },
  { 0x2313c6a, CODE_FOR_vcondv8bfv16qi },
  { 0x2313c6b, CODE_FOR_vcondv8hfv16qi },
  { 0x2313c6c, CODE_FOR_vcondv4sfv16qi },
  { 0x2313c6d, CODE_FOR_vcondv2dfv16qi },
  { 0x231404f, CODE_FOR_vcondv16qiv8hi },
  { 0x2314050, CODE_FOR_vcondv8hiv8hi },
  { 0x2314051, CODE_FOR_vcondv4siv8hi },
  { 0x2314052, CODE_FOR_vcondv2div8hi },
  { 0x231406a, CODE_FOR_vcondv8bfv8hi },
  { 0x231406b, CODE_FOR_vcondv8hfv8hi },
  { 0x231406c, CODE_FOR_vcondv4sfv8hi },
  { 0x231406d, CODE_FOR_vcondv2dfv8hi },
  { 0x231444f, CODE_FOR_vcondv16qiv4si },
  { 0x2314450, CODE_FOR_vcondv8hiv4si },
  { 0x2314451, CODE_FOR_vcondv4siv4si },
  { 0x2314452, CODE_FOR_vcondv2div4si },
  { 0x231446a, CODE_FOR_vcondv8bfv4si },
  { 0x231446b, CODE_FOR_vcondv8hfv4si },
  { 0x231446c, CODE_FOR_vcondv4sfv4si },
  { 0x231446d, CODE_FOR_vcondv2dfv4si },
  { 0x2314852, CODE_FOR_vcondv2div2di },
  { 0x231486d, CODE_FOR_vcondv2dfv2di },
  { 0x2315054, CODE_FOR_vcondv32qiv32qi },
  { 0x2315055, CODE_FOR_vcondv16hiv32qi },
  { 0x2315056, CODE_FOR_vcondv8siv32qi },
  { 0x2315057, CODE_FOR_vcondv4div32qi },
  { 0x231506e, CODE_FOR_vcondv16bfv32qi },
  { 0x231506f, CODE_FOR_vcondv16hfv32qi },
  { 0x2315070, CODE_FOR_vcondv8sfv32qi },
  { 0x2315071, CODE_FOR_vcondv4dfv32qi },
  { 0x2315454, CODE_FOR_vcondv32qiv16hi },
  { 0x2315455, CODE_FOR_vcondv16hiv16hi },
  { 0x2315456, CODE_FOR_vcondv8siv16hi },
  { 0x2315457, CODE_FOR_vcondv4div16hi },
  { 0x231546e, CODE_FOR_vcondv16bfv16hi },
  { 0x231546f, CODE_FOR_vcondv16hfv16hi },
  { 0x2315470, CODE_FOR_vcondv8sfv16hi },
  { 0x2315471, CODE_FOR_vcondv4dfv16hi },
  { 0x2315854, CODE_FOR_vcondv32qiv8si },
  { 0x2315855, CODE_FOR_vcondv16hiv8si },
  { 0x2315856, CODE_FOR_vcondv8siv8si },
  { 0x2315857, CODE_FOR_vcondv4div8si },
  { 0x231586e, CODE_FOR_vcondv16bfv8si },
  { 0x231586f, CODE_FOR_vcondv16hfv8si },
  { 0x2315870, CODE_FOR_vcondv8sfv8si },
  { 0x2315871, CODE_FOR_vcondv4dfv8si },
  { 0x2315c54, CODE_FOR_vcondv32qiv4di },
  { 0x2315c55, CODE_FOR_vcondv16hiv4di },
  { 0x2315c56, CODE_FOR_vcondv8siv4di },
  { 0x2315c57, CODE_FOR_vcondv4div4di },
  { 0x2315c6e, CODE_FOR_vcondv16bfv4di },
  { 0x2315c6f, CODE_FOR_vcondv16hfv4di },
  { 0x2315c70, CODE_FOR_vcondv8sfv4di },
  { 0x2315c71, CODE_FOR_vcondv4dfv4di },
  { 0x2316459, CODE_FOR_vcondv64qiv64qi },
  { 0x231645a, CODE_FOR_vcondv32hiv64qi },
  { 0x231645b, CODE_FOR_vcondv16siv64qi },
  { 0x231645c, CODE_FOR_vcondv8div64qi },
  { 0x2316473, CODE_FOR_vcondv32bfv64qi },
  { 0x2316474, CODE_FOR_vcondv32hfv64qi },
  { 0x2316475, CODE_FOR_vcondv16sfv64qi },
  { 0x2316476, CODE_FOR_vcondv8dfv64qi },
  { 0x2316859, CODE_FOR_vcondv64qiv32hi },
  { 0x231685a, CODE_FOR_vcondv32hiv32hi },
  { 0x231685b, CODE_FOR_vcondv16siv32hi },
  { 0x231685c, CODE_FOR_vcondv8div32hi },
  { 0x2316873, CODE_FOR_vcondv32bfv32hi },
  { 0x2316874, CODE_FOR_vcondv32hfv32hi },
  { 0x2316875, CODE_FOR_vcondv16sfv32hi },
  { 0x2316876, CODE_FOR_vcondv8dfv32hi },
  { 0x2316c59, CODE_FOR_vcondv64qiv16si },
  { 0x2316c5a, CODE_FOR_vcondv32hiv16si },
  { 0x2316c5b, CODE_FOR_vcondv16siv16si },
  { 0x2316c5c, CODE_FOR_vcondv8div16si },
  { 0x2316c73, CODE_FOR_vcondv32bfv16si },
  { 0x2316c74, CODE_FOR_vcondv32hfv16si },
  { 0x2316c75, CODE_FOR_vcondv16sfv16si },
  { 0x2316c76, CODE_FOR_vcondv8dfv16si },
  { 0x2317059, CODE_FOR_vcondv64qiv8di },
  { 0x231705a, CODE_FOR_vcondv32hiv8di },
  { 0x231705b, CODE_FOR_vcondv16siv8di },
  { 0x231705c, CODE_FOR_vcondv8div8di },
  { 0x2317073, CODE_FOR_vcondv32bfv8di },
  { 0x2317074, CODE_FOR_vcondv32hfv8di },
  { 0x2317075, CODE_FOR_vcondv16sfv8di },
  { 0x2317076, CODE_FOR_vcondv8dfv8di },
  { 0x231ac50, CODE_FOR_vcondv8hiv8hf },
  { 0x231ac55, CODE_FOR_vcondv16hiv8hf },
  { 0x231ac5a, CODE_FOR_vcondv32hiv8hf },
  { 0x231ac6a, CODE_FOR_vcondv8bfv8hf },
  { 0x231ac6b, CODE_FOR_vcondv8hfv8hf },
  { 0x231ac6e, CODE_FOR_vcondv16bfv8hf },
  { 0x231ac6f, CODE_FOR_vcondv16hfv8hf },
  { 0x231ac73, CODE_FOR_vcondv32bfv8hf },
  { 0x231ac74, CODE_FOR_vcondv32hfv8hf },
  { 0x231b04f, CODE_FOR_vcondv16qiv4sf },
  { 0x231b050, CODE_FOR_vcondv8hiv4sf },
  { 0x231b051, CODE_FOR_vcondv4siv4sf },
  { 0x231b052, CODE_FOR_vcondv2div4sf },
  { 0x231b06a, CODE_FOR_vcondv8bfv4sf },
  { 0x231b06b, CODE_FOR_vcondv8hfv4sf },
  { 0x231b06c, CODE_FOR_vcondv4sfv4sf },
  { 0x231b06d, CODE_FOR_vcondv2dfv4sf },
  { 0x231b44f, CODE_FOR_vcondv16qiv2df },
  { 0x231b450, CODE_FOR_vcondv8hiv2df },
  { 0x231b451, CODE_FOR_vcondv4siv2df },
  { 0x231b452, CODE_FOR_vcondv2div2df },
  { 0x231b46a, CODE_FOR_vcondv8bfv2df },
  { 0x231b46b, CODE_FOR_vcondv8hfv2df },
  { 0x231b46c, CODE_FOR_vcondv4sfv2df },
  { 0x231b46d, CODE_FOR_vcondv2dfv2df },
  { 0x231bc50, CODE_FOR_vcondv8hiv16hf },
  { 0x231bc55, CODE_FOR_vcondv16hiv16hf },
  { 0x231bc5a, CODE_FOR_vcondv32hiv16hf },
  { 0x231bc6a, CODE_FOR_vcondv8bfv16hf },
  { 0x231bc6b, CODE_FOR_vcondv8hfv16hf },
  { 0x231bc6e, CODE_FOR_vcondv16bfv16hf },
  { 0x231bc6f, CODE_FOR_vcondv16hfv16hf },
  { 0x231bc73, CODE_FOR_vcondv32bfv16hf },
  { 0x231bc74, CODE_FOR_vcondv32hfv16hf },
  { 0x231c054, CODE_FOR_vcondv32qiv8sf },
  { 0x231c055, CODE_FOR_vcondv16hiv8sf },
  { 0x231c056, CODE_FOR_vcondv8siv8sf },
  { 0x231c057, CODE_FOR_vcondv4div8sf },
  { 0x231c06e, CODE_FOR_vcondv16bfv8sf },
  { 0x231c06f, CODE_FOR_vcondv16hfv8sf },
  { 0x231c070, CODE_FOR_vcondv8sfv8sf },
  { 0x231c071, CODE_FOR_vcondv4dfv8sf },
  { 0x231c454, CODE_FOR_vcondv32qiv4df },
  { 0x231c455, CODE_FOR_vcondv16hiv4df },
  { 0x231c456, CODE_FOR_vcondv8siv4df },
  { 0x231c457, CODE_FOR_vcondv4div4df },
  { 0x231c46e, CODE_FOR_vcondv16bfv4df },
  { 0x231c46f, CODE_FOR_vcondv16hfv4df },
  { 0x231c470, CODE_FOR_vcondv8sfv4df },
  { 0x231c471, CODE_FOR_vcondv4dfv4df },
  { 0x231d050, CODE_FOR_vcondv8hiv32hf },
  { 0x231d055, CODE_FOR_vcondv16hiv32hf },
  { 0x231d05a, CODE_FOR_vcondv32hiv32hf },
  { 0x231d06a, CODE_FOR_vcondv8bfv32hf },
  { 0x231d06b, CODE_FOR_vcondv8hfv32hf },
  { 0x231d06e, CODE_FOR_vcondv16bfv32hf },
  { 0x231d06f, CODE_FOR_vcondv16hfv32hf },
  { 0x231d073, CODE_FOR_vcondv32bfv32hf },
  { 0x231d074, CODE_FOR_vcondv32hfv32hf },
  { 0x231d459, CODE_FOR_vcondv64qiv16sf },
  { 0x231d45a, CODE_FOR_vcondv32hiv16sf },
  { 0x231d45b, CODE_FOR_vcondv16siv16sf },
  { 0x231d45c, CODE_FOR_vcondv8div16sf },
  { 0x231d473, CODE_FOR_vcondv32bfv16sf },
  { 0x231d474, CODE_FOR_vcondv32hfv16sf },
  { 0x231d475, CODE_FOR_vcondv16sfv16sf },
  { 0x231d476, CODE_FOR_vcondv8dfv16sf },
  { 0x231d859, CODE_FOR_vcondv64qiv8df },
  { 0x231d85a, CODE_FOR_vcondv32hiv8df },
  { 0x231d85b, CODE_FOR_vcondv16siv8df },
  { 0x231d85c, CODE_FOR_vcondv8div8df },
  { 0x231d873, CODE_FOR_vcondv32bfv8df },
  { 0x231d874, CODE_FOR_vcondv32hfv8df },
  { 0x231d875, CODE_FOR_vcondv16sfv8df },
  { 0x231d876, CODE_FOR_vcondv8dfv8df },
  { 0x2411044, CODE_FOR_vconduv2qiv2qi },
  { 0x2411445, CODE_FOR_vconduv4qiv4qi },
  { 0x2411846, CODE_FOR_vconduv2hiv2hi },
  { 0x2413c4f, CODE_FOR_vconduv16qiv16qi },
  { 0x2413c50, CODE_FOR_vconduv8hiv16qi },
  { 0x2413c51, CODE_FOR_vconduv4siv16qi },
  { 0x2413c52, CODE_FOR_vconduv2div16qi },
  { 0x2413c6a, CODE_FOR_vconduv8bfv16qi },
  { 0x2413c6b, CODE_FOR_vconduv8hfv16qi },
  { 0x2413c6c, CODE_FOR_vconduv4sfv16qi },
  { 0x2413c6d, CODE_FOR_vconduv2dfv16qi },
  { 0x241404f, CODE_FOR_vconduv16qiv8hi },
  { 0x2414050, CODE_FOR_vconduv8hiv8hi },
  { 0x2414051, CODE_FOR_vconduv4siv8hi },
  { 0x2414052, CODE_FOR_vconduv2div8hi },
  { 0x241406a, CODE_FOR_vconduv8bfv8hi },
  { 0x241406b, CODE_FOR_vconduv8hfv8hi },
  { 0x241406c, CODE_FOR_vconduv4sfv8hi },
  { 0x241406d, CODE_FOR_vconduv2dfv8hi },
  { 0x241444f, CODE_FOR_vconduv16qiv4si },
  { 0x2414450, CODE_FOR_vconduv8hiv4si },
  { 0x2414451, CODE_FOR_vconduv4siv4si },
  { 0x2414452, CODE_FOR_vconduv2div4si },
  { 0x241446a, CODE_FOR_vconduv8bfv4si },
  { 0x241446b, CODE_FOR_vconduv8hfv4si },
  { 0x241446c, CODE_FOR_vconduv4sfv4si },
  { 0x241446d, CODE_FOR_vconduv2dfv4si },
  { 0x2414852, CODE_FOR_vconduv2div2di },
  { 0x241486d, CODE_FOR_vconduv2dfv2di },
  { 0x2415054, CODE_FOR_vconduv32qiv32qi },
  { 0x2415055, CODE_FOR_vconduv16hiv32qi },
  { 0x2415056, CODE_FOR_vconduv8siv32qi },
  { 0x2415057, CODE_FOR_vconduv4div32qi },
  { 0x241506e, CODE_FOR_vconduv16bfv32qi },
  { 0x241506f, CODE_FOR_vconduv16hfv32qi },
  { 0x2415070, CODE_FOR_vconduv8sfv32qi },
  { 0x2415071, CODE_FOR_vconduv4dfv32qi },
  { 0x2415454, CODE_FOR_vconduv32qiv16hi },
  { 0x2415455, CODE_FOR_vconduv16hiv16hi },
  { 0x2415456, CODE_FOR_vconduv8siv16hi },
  { 0x2415457, CODE_FOR_vconduv4div16hi },
  { 0x241546e, CODE_FOR_vconduv16bfv16hi },
  { 0x241546f, CODE_FOR_vconduv16hfv16hi },
  { 0x2415470, CODE_FOR_vconduv8sfv16hi },
  { 0x2415471, CODE_FOR_vconduv4dfv16hi },
  { 0x2415854, CODE_FOR_vconduv32qiv8si },
  { 0x2415855, CODE_FOR_vconduv16hiv8si },
  { 0x2415856, CODE_FOR_vconduv8siv8si },
  { 0x2415857, CODE_FOR_vconduv4div8si },
  { 0x241586e, CODE_FOR_vconduv16bfv8si },
  { 0x241586f, CODE_FOR_vconduv16hfv8si },
  { 0x2415870, CODE_FOR_vconduv8sfv8si },
  { 0x2415871, CODE_FOR_vconduv4dfv8si },
  { 0x2415c54, CODE_FOR_vconduv32qiv4di },
  { 0x2415c55, CODE_FOR_vconduv16hiv4di },
  { 0x2415c56, CODE_FOR_vconduv8siv4di },
  { 0x2415c57, CODE_FOR_vconduv4div4di },
  { 0x2415c6e, CODE_FOR_vconduv16bfv4di },
  { 0x2415c6f, CODE_FOR_vconduv16hfv4di },
  { 0x2415c70, CODE_FOR_vconduv8sfv4di },
  { 0x2415c71, CODE_FOR_vconduv4dfv4di },
  { 0x2416459, CODE_FOR_vconduv64qiv64qi },
  { 0x241645a, CODE_FOR_vconduv32hiv64qi },
  { 0x241645b, CODE_FOR_vconduv16siv64qi },
  { 0x241645c, CODE_FOR_vconduv8div64qi },
  { 0x2416473, CODE_FOR_vconduv32bfv64qi },
  { 0x2416474, CODE_FOR_vconduv32hfv64qi },
  { 0x2416475, CODE_FOR_vconduv16sfv64qi },
  { 0x2416476, CODE_FOR_vconduv8dfv64qi },
  { 0x2416859, CODE_FOR_vconduv64qiv32hi },
  { 0x241685a, CODE_FOR_vconduv32hiv32hi },
  { 0x241685b, CODE_FOR_vconduv16siv32hi },
  { 0x241685c, CODE_FOR_vconduv8div32hi },
  { 0x2416873, CODE_FOR_vconduv32bfv32hi },
  { 0x2416874, CODE_FOR_vconduv32hfv32hi },
  { 0x2416875, CODE_FOR_vconduv16sfv32hi },
  { 0x2416876, CODE_FOR_vconduv8dfv32hi },
  { 0x2416c59, CODE_FOR_vconduv64qiv16si },
  { 0x2416c5a, CODE_FOR_vconduv32hiv16si },
  { 0x2416c5b, CODE_FOR_vconduv16siv16si },
  { 0x2416c5c, CODE_FOR_vconduv8div16si },
  { 0x2416c73, CODE_FOR_vconduv32bfv16si },
  { 0x2416c74, CODE_FOR_vconduv32hfv16si },
  { 0x2416c75, CODE_FOR_vconduv16sfv16si },
  { 0x2416c76, CODE_FOR_vconduv8dfv16si },
  { 0x2417059, CODE_FOR_vconduv64qiv8di },
  { 0x241705a, CODE_FOR_vconduv32hiv8di },
  { 0x241705b, CODE_FOR_vconduv16siv8di },
  { 0x241705c, CODE_FOR_vconduv8div8di },
  { 0x2417073, CODE_FOR_vconduv32bfv8di },
  { 0x2417074, CODE_FOR_vconduv32hfv8di },
  { 0x2417075, CODE_FOR_vconduv16sfv8di },
  { 0x2417076, CODE_FOR_vconduv8dfv8di },
  { 0x2514852, CODE_FOR_vcondeqv2div2di },
  { 0x251486d, CODE_FOR_vcondeqv2dfv2di },
  { 0x2603c46, CODE_FOR_vcond_mask_v2hiqi },
  { 0x2603c50, CODE_FOR_vcond_mask_v8hiqi },
  { 0x2603c51, CODE_FOR_vcond_mask_v4siqi },
  { 0x2603c52, CODE_FOR_vcond_mask_v2diqi },
  { 0x2603c56, CODE_FOR_vcond_mask_v8siqi },
  { 0x2603c57, CODE_FOR_vcond_mask_v4diqi },
  { 0x2603c5c, CODE_FOR_vcond_mask_v8diqi },
  { 0x2603c64, CODE_FOR_vcond_mask_v2hfqi },
  { 0x2603c65, CODE_FOR_vcond_mask_v2bfqi },
  { 0x2603c6a, CODE_FOR_vcond_mask_v8bfqi },
  { 0x2603c6b, CODE_FOR_vcond_mask_v8hfqi },
  { 0x2603c6c, CODE_FOR_vcond_mask_v4sfqi },
  { 0x2603c6d, CODE_FOR_vcond_mask_v2dfqi },
  { 0x2603c70, CODE_FOR_vcond_mask_v8sfqi },
  { 0x2603c71, CODE_FOR_vcond_mask_v4dfqi },
  { 0x2603c76, CODE_FOR_vcond_mask_v8dfqi },
  { 0x260404f, CODE_FOR_vcond_mask_v16qihi },
  { 0x2604055, CODE_FOR_vcond_mask_v16hihi },
  { 0x260405b, CODE_FOR_vcond_mask_v16sihi },
  { 0x260406e, CODE_FOR_vcond_mask_v16bfhi },
  { 0x260406f, CODE_FOR_vcond_mask_v16hfhi },
  { 0x2604075, CODE_FOR_vcond_mask_v16sfhi },
  { 0x2604454, CODE_FOR_vcond_mask_v32qisi },
  { 0x260445a, CODE_FOR_vcond_mask_v32hisi },
  { 0x2604473, CODE_FOR_vcond_mask_v32bfsi },
  { 0x2604474, CODE_FOR_vcond_mask_v32hfsi },
  { 0x2604859, CODE_FOR_vcond_mask_v64qidi },
  { 0x2611044, CODE_FOR_vcond_mask_v2qiv2qi },
  { 0x2611445, CODE_FOR_vcond_mask_v4qiv4qi },
  { 0x2611846, CODE_FOR_vcond_mask_v2hiv2hi },
  { 0x2611864, CODE_FOR_vcond_mask_v2hfv2hi },
  { 0x2611865, CODE_FOR_vcond_mask_v2bfv2hi },
  { 0x2613c4f, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x2614050, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x2614451, CODE_FOR_vcond_mask_v4siv4si },
  { 0x261446c, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x2614852, CODE_FOR_vcond_mask_v2div2di },
  { 0x261486d, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x2614c53, CODE_FOR_vcond_mask_v1tiv1ti },
  { 0x2615054, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x2615455, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x2615856, CODE_FOR_vcond_mask_v8siv8si },
  { 0x2615870, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x2615c57, CODE_FOR_vcond_mask_v4div4di },
  { 0x2615c71, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x2703c50, CODE_FOR_vec_cmpv8hiqi },
  { 0x2703c51, CODE_FOR_vec_cmpv4siqi },
  { 0x2703c52, CODE_FOR_vec_cmpv2diqi },
  { 0x2703c56, CODE_FOR_vec_cmpv8siqi },
  { 0x2703c57, CODE_FOR_vec_cmpv4diqi },
  { 0x2703c5c, CODE_FOR_vec_cmpv8diqi },
  { 0x2703c64, CODE_FOR_vec_cmpv2hfqi },
  { 0x2703c6b, CODE_FOR_vec_cmpv8hfqi },
  { 0x2703c6c, CODE_FOR_vec_cmpv4sfqi },
  { 0x2703c6d, CODE_FOR_vec_cmpv2dfqi },
  { 0x2703c70, CODE_FOR_vec_cmpv8sfqi },
  { 0x2703c71, CODE_FOR_vec_cmpv4dfqi },
  { 0x2703c76, CODE_FOR_vec_cmpv8dfqi },
  { 0x270404f, CODE_FOR_vec_cmpv16qihi },
  { 0x2704055, CODE_FOR_vec_cmpv16hihi },
  { 0x270405b, CODE_FOR_vec_cmpv16sihi },
  { 0x270406f, CODE_FOR_vec_cmpv16hfhi },
  { 0x2704075, CODE_FOR_vec_cmpv16sfhi },
  { 0x2704454, CODE_FOR_vec_cmpv32qisi },
  { 0x270445a, CODE_FOR_vec_cmpv32hisi },
  { 0x2704474, CODE_FOR_vec_cmpv32hfsi },
  { 0x2704859, CODE_FOR_vec_cmpv64qidi },
  { 0x2711044, CODE_FOR_vec_cmpv2qiv2qi },
  { 0x2711445, CODE_FOR_vec_cmpv4qiv4qi },
  { 0x2711846, CODE_FOR_vec_cmpv2hiv2hi },
  { 0x2713c4f, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x2714050, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x2714451, CODE_FOR_vec_cmpv4siv4si },
  { 0x271446c, CODE_FOR_vec_cmpv4sfv4si },
  { 0x2714852, CODE_FOR_vec_cmpv2div2di },
  { 0x271486d, CODE_FOR_vec_cmpv2dfv2di },
  { 0x2715054, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x2715455, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x2715856, CODE_FOR_vec_cmpv8siv8si },
  { 0x2715870, CODE_FOR_vec_cmpv8sfv8si },
  { 0x2715c57, CODE_FOR_vec_cmpv4div4di },
  { 0x2715c71, CODE_FOR_vec_cmpv4dfv4di },
  { 0x2803c50, CODE_FOR_vec_cmpuv8hiqi },
  { 0x2803c51, CODE_FOR_vec_cmpuv4siqi },
  { 0x2803c52, CODE_FOR_vec_cmpuv2diqi },
  { 0x2803c56, CODE_FOR_vec_cmpuv8siqi },
  { 0x2803c57, CODE_FOR_vec_cmpuv4diqi },
  { 0x2803c5c, CODE_FOR_vec_cmpuv8diqi },
  { 0x280404f, CODE_FOR_vec_cmpuv16qihi },
  { 0x2804055, CODE_FOR_vec_cmpuv16hihi },
  { 0x280405b, CODE_FOR_vec_cmpuv16sihi },
  { 0x2804454, CODE_FOR_vec_cmpuv32qisi },
  { 0x280445a, CODE_FOR_vec_cmpuv32hisi },
  { 0x2804859, CODE_FOR_vec_cmpuv64qidi },
  { 0x2811044, CODE_FOR_vec_cmpuv2qiv2qi },
  { 0x2811445, CODE_FOR_vec_cmpuv4qiv4qi },
  { 0x2811846, CODE_FOR_vec_cmpuv2hiv2hi },
  { 0x2813c4f, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x2814050, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x2814451, CODE_FOR_vec_cmpuv4siv4si },
  { 0x2814852, CODE_FOR_vec_cmpuv2div2di },
  { 0x2815054, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x2815455, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x2815856, CODE_FOR_vec_cmpuv8siv8si },
  { 0x2815c57, CODE_FOR_vec_cmpuv4div4di },
  { 0x2914852, CODE_FOR_vec_cmpeqv2div2di },
  { 0x2914c53, CODE_FOR_vec_cmpeqv1tiv1ti },
  { 0x2a03c50, CODE_FOR_maskloadv8hiqi },
  { 0x2a03c51, CODE_FOR_maskloadv4siqi },
  { 0x2a03c52, CODE_FOR_maskloadv2diqi },
  { 0x2a03c56, CODE_FOR_maskloadv8siqi },
  { 0x2a03c57, CODE_FOR_maskloadv4diqi },
  { 0x2a03c5c, CODE_FOR_maskloadv8diqi },
  { 0x2a03c6a, CODE_FOR_maskloadv8bfqi },
  { 0x2a03c6b, CODE_FOR_maskloadv8hfqi },
  { 0x2a03c6c, CODE_FOR_maskloadv4sfqi },
  { 0x2a03c6d, CODE_FOR_maskloadv2dfqi },
  { 0x2a03c70, CODE_FOR_maskloadv8sfqi },
  { 0x2a03c71, CODE_FOR_maskloadv4dfqi },
  { 0x2a03c76, CODE_FOR_maskloadv8dfqi },
  { 0x2a0404f, CODE_FOR_maskloadv16qihi },
  { 0x2a04055, CODE_FOR_maskloadv16hihi },
  { 0x2a0405b, CODE_FOR_maskloadv16sihi },
  { 0x2a0406e, CODE_FOR_maskloadv16bfhi },
  { 0x2a0406f, CODE_FOR_maskloadv16hfhi },
  { 0x2a04075, CODE_FOR_maskloadv16sfhi },
  { 0x2a04454, CODE_FOR_maskloadv32qisi },
  { 0x2a0445a, CODE_FOR_maskloadv32hisi },
  { 0x2a04473, CODE_FOR_maskloadv32bfsi },
  { 0x2a04474, CODE_FOR_maskloadv32hfsi },
  { 0x2a04859, CODE_FOR_maskloadv64qidi },
  { 0x2a14451, CODE_FOR_maskloadv4siv4si },
  { 0x2a1446c, CODE_FOR_maskloadv4sfv4si },
  { 0x2a14852, CODE_FOR_maskloadv2div2di },
  { 0x2a1486d, CODE_FOR_maskloadv2dfv2di },
  { 0x2a15856, CODE_FOR_maskloadv8siv8si },
  { 0x2a15870, CODE_FOR_maskloadv8sfv8si },
  { 0x2a15c57, CODE_FOR_maskloadv4div4di },
  { 0x2a15c71, CODE_FOR_maskloadv4dfv4di },
  { 0x2b03c50, CODE_FOR_maskstorev8hiqi },
  { 0x2b03c51, CODE_FOR_maskstorev4siqi },
  { 0x2b03c52, CODE_FOR_maskstorev2diqi },
  { 0x2b03c56, CODE_FOR_maskstorev8siqi },
  { 0x2b03c57, CODE_FOR_maskstorev4diqi },
  { 0x2b03c5c, CODE_FOR_maskstorev8diqi },
  { 0x2b03c6a, CODE_FOR_maskstorev8bfqi },
  { 0x2b03c6b, CODE_FOR_maskstorev8hfqi },
  { 0x2b03c6c, CODE_FOR_maskstorev4sfqi },
  { 0x2b03c6d, CODE_FOR_maskstorev2dfqi },
  { 0x2b03c70, CODE_FOR_maskstorev8sfqi },
  { 0x2b03c71, CODE_FOR_maskstorev4dfqi },
  { 0x2b03c76, CODE_FOR_maskstorev8dfqi },
  { 0x2b0404f, CODE_FOR_maskstorev16qihi },
  { 0x2b04055, CODE_FOR_maskstorev16hihi },
  { 0x2b0405b, CODE_FOR_maskstorev16sihi },
  { 0x2b0406e, CODE_FOR_maskstorev16bfhi },
  { 0x2b0406f, CODE_FOR_maskstorev16hfhi },
  { 0x2b04075, CODE_FOR_maskstorev16sfhi },
  { 0x2b04454, CODE_FOR_maskstorev32qisi },
  { 0x2b0445a, CODE_FOR_maskstorev32hisi },
  { 0x2b04473, CODE_FOR_maskstorev32bfsi },
  { 0x2b04474, CODE_FOR_maskstorev32hfsi },
  { 0x2b04859, CODE_FOR_maskstorev64qidi },
  { 0x2b14451, CODE_FOR_maskstorev4siv4si },
  { 0x2b1446c, CODE_FOR_maskstorev4sfv4si },
  { 0x2b14852, CODE_FOR_maskstorev2div2di },
  { 0x2b1486d, CODE_FOR_maskstorev2dfv2di },
  { 0x2b15856, CODE_FOR_maskstorev8siv8si },
  { 0x2b15870, CODE_FOR_maskstorev8sfv8si },
  { 0x2b15c57, CODE_FOR_maskstorev4div4di },
  { 0x2b15c71, CODE_FOR_maskstorev4dfv4di },
  { 0x3403c45, CODE_FOR_vec_extractv4qiqi },
  { 0x3403c4f, CODE_FOR_vec_extractv16qiqi },
  { 0x3403c54, CODE_FOR_vec_extractv32qiqi },
  { 0x3403c59, CODE_FOR_vec_extractv64qiqi },
  { 0x3404046, CODE_FOR_vec_extractv2hihi },
  { 0x3404049, CODE_FOR_vec_extractv4hihi },
  { 0x3404050, CODE_FOR_vec_extractv8hihi },
  { 0x3404055, CODE_FOR_vec_extractv16hihi },
  { 0x340405a, CODE_FOR_vec_extractv32hihi },
  { 0x340444a, CODE_FOR_vec_extractv2sisi },
  { 0x3404451, CODE_FOR_vec_extractv4sisi },
  { 0x3404456, CODE_FOR_vec_extractv8sisi },
  { 0x340445b, CODE_FOR_vec_extractv16sisi },
  { 0x3404852, CODE_FOR_vec_extractv2didi },
  { 0x3404857, CODE_FOR_vec_extractv4didi },
  { 0x340485c, CODE_FOR_vec_extractv8didi },
  { 0x3404c58, CODE_FOR_vec_extractv2titi },
  { 0x3404c5d, CODE_FOR_vec_extractv4titi },
  { 0x340ac64, CODE_FOR_vec_extractv2hfhf },
  { 0x340ac67, CODE_FOR_vec_extractv4hfhf },
  { 0x340ac6b, CODE_FOR_vec_extractv8hfhf },
  { 0x340ac6f, CODE_FOR_vec_extractv16hfhf },
  { 0x340ac74, CODE_FOR_vec_extractv32hfhf },
  { 0x340b065, CODE_FOR_vec_extractv2bfbf },
  { 0x340b066, CODE_FOR_vec_extractv4bfbf },
  { 0x340b06a, CODE_FOR_vec_extractv8bfbf },
  { 0x340b06e, CODE_FOR_vec_extractv16bfbf },
  { 0x340b073, CODE_FOR_vec_extractv32bfbf },
  { 0x340b468, CODE_FOR_vec_extractv2sfsf },
  { 0x340b46c, CODE_FOR_vec_extractv4sfsf },
  { 0x340b470, CODE_FOR_vec_extractv8sfsf },
  { 0x340b475, CODE_FOR_vec_extractv16sfsf },
  { 0x340b86d, CODE_FOR_vec_extractv2dfdf },
  { 0x340b871, CODE_FOR_vec_extractv4dfdf },
  { 0x340b876, CODE_FOR_vec_extractv8dfdf },
  { 0x3413c54, CODE_FOR_vec_extractv32qiv16qi },
  { 0x3414055, CODE_FOR_vec_extractv16hiv8hi },
  { 0x3414456, CODE_FOR_vec_extractv8siv4si },
  { 0x3414857, CODE_FOR_vec_extractv4div2di },
  { 0x3415059, CODE_FOR_vec_extractv64qiv32qi },
  { 0x341545a, CODE_FOR_vec_extractv32hiv16hi },
  { 0x341585b, CODE_FOR_vec_extractv16siv8si },
  { 0x3415c5c, CODE_FOR_vec_extractv8div4di },
  { 0x341a86e, CODE_FOR_vec_extractv16bfv8bf },
  { 0x341ac6f, CODE_FOR_vec_extractv16hfv8hf },
  { 0x341b070, CODE_FOR_vec_extractv8sfv4sf },
  { 0x341b471, CODE_FOR_vec_extractv4dfv2df },
  { 0x341b873, CODE_FOR_vec_extractv32bfv16bf },
  { 0x341bc74, CODE_FOR_vec_extractv32hfv16hf },
  { 0x341c075, CODE_FOR_vec_extractv16sfv8sf },
  { 0x341c476, CODE_FOR_vec_extractv8dfv4df },
  { 0x3503c45, CODE_FOR_vec_initv4qiqi },
  { 0x3503c48, CODE_FOR_vec_initv8qiqi },
  { 0x3503c4f, CODE_FOR_vec_initv16qiqi },
  { 0x3503c54, CODE_FOR_vec_initv32qiqi },
  { 0x3503c59, CODE_FOR_vec_initv64qiqi },
  { 0x3504046, CODE_FOR_vec_initv2hihi },
  { 0x3504049, CODE_FOR_vec_initv4hihi },
  { 0x3504050, CODE_FOR_vec_initv8hihi },
  { 0x3504055, CODE_FOR_vec_initv16hihi },
  { 0x350405a, CODE_FOR_vec_initv32hihi },
  { 0x350444a, CODE_FOR_vec_initv2sisi },
  { 0x3504451, CODE_FOR_vec_initv4sisi },
  { 0x3504456, CODE_FOR_vec_initv8sisi },
  { 0x350445b, CODE_FOR_vec_initv16sisi },
  { 0x3504852, CODE_FOR_vec_initv2didi },
  { 0x3504857, CODE_FOR_vec_initv4didi },
  { 0x350485c, CODE_FOR_vec_initv8didi },
  { 0x3504c58, CODE_FOR_vec_initv2titi },
  { 0x3504c5d, CODE_FOR_vec_initv4titi },
  { 0x350ac64, CODE_FOR_vec_initv2hfhf },
  { 0x350ac6b, CODE_FOR_vec_initv8hfhf },
  { 0x350ac6f, CODE_FOR_vec_initv16hfhf },
  { 0x350ac74, CODE_FOR_vec_initv32hfhf },
  { 0x350b065, CODE_FOR_vec_initv2bfbf },
  { 0x350b06a, CODE_FOR_vec_initv8bfbf },
  { 0x350b06e, CODE_FOR_vec_initv16bfbf },
  { 0x350b073, CODE_FOR_vec_initv32bfbf },
  { 0x350b468, CODE_FOR_vec_initv2sfsf },
  { 0x350b46c, CODE_FOR_vec_initv4sfsf },
  { 0x350b470, CODE_FOR_vec_initv8sfsf },
  { 0x350b475, CODE_FOR_vec_initv16sfsf },
  { 0x350b86d, CODE_FOR_vec_initv2dfdf },
  { 0x350b871, CODE_FOR_vec_initv4dfdf },
  { 0x350b876, CODE_FOR_vec_initv8dfdf },
  { 0x351204f, CODE_FOR_vec_initv16qiv8qi },
  { 0x3512450, CODE_FOR_vec_initv8hiv4hi },
  { 0x3512851, CODE_FOR_vec_initv4siv2si },
  { 0x3513c54, CODE_FOR_vec_initv32qiv16qi },
  { 0x3514055, CODE_FOR_vec_initv16hiv8hi },
  { 0x3514456, CODE_FOR_vec_initv8siv4si },
  { 0x3514857, CODE_FOR_vec_initv4div2di },
  { 0x3515059, CODE_FOR_vec_initv64qiv32qi },
  { 0x351545a, CODE_FOR_vec_initv32hiv16hi },
  { 0x351585b, CODE_FOR_vec_initv16siv8si },
  { 0x3515c5c, CODE_FOR_vec_initv8div4di },
  { 0x351605d, CODE_FOR_vec_initv4tiv2ti },
  { 0x351986a, CODE_FOR_vec_initv8bfv4bf },
  { 0x3519c6b, CODE_FOR_vec_initv8hfv4hf },
  { 0x351a06c, CODE_FOR_vec_initv4sfv2sf },
  { 0x351a86e, CODE_FOR_vec_initv16bfv8bf },
  { 0x351ac6f, CODE_FOR_vec_initv16hfv8hf },
  { 0x351b070, CODE_FOR_vec_initv8sfv4sf },
  { 0x351b471, CODE_FOR_vec_initv4dfv2df },
  { 0x351b873, CODE_FOR_vec_initv32bfv16bf },
  { 0x351bc74, CODE_FOR_vec_initv32hfv16hf },
  { 0x351c075, CODE_FOR_vec_initv16sfv8sf },
  { 0x351c476, CODE_FOR_vec_initv8dfv4df },
  { 0x370000f, CODE_FOR_addqi3 },
  { 0x3700010, CODE_FOR_addhi3 },
  { 0x3700011, CODE_FOR_addsi3 },
  { 0x3700012, CODE_FOR_adddi3 },
  { 0x370002b, CODE_FOR_addhf3 },
  { 0x370002d, CODE_FOR_addsf3 },
  { 0x370002e, CODE_FOR_adddf3 },
  { 0x370002f, CODE_FOR_addxf3 },
  { 0x3700044, CODE_FOR_addv2qi3 },
  { 0x3700045, CODE_FOR_addv4qi3 },
  { 0x3700046, CODE_FOR_addv2hi3 },
  { 0x370004f, CODE_FOR_addv16qi3 },
  { 0x3700050, CODE_FOR_addv8hi3 },
  { 0x3700051, CODE_FOR_addv4si3 },
  { 0x3700052, CODE_FOR_addv2di3 },
  { 0x3700054, CODE_FOR_addv32qi3 },
  { 0x3700055, CODE_FOR_addv16hi3 },
  { 0x3700056, CODE_FOR_addv8si3 },
  { 0x3700057, CODE_FOR_addv4di3 },
  { 0x3700059, CODE_FOR_addv64qi3 },
  { 0x370005a, CODE_FOR_addv32hi3 },
  { 0x370005b, CODE_FOR_addv16si3 },
  { 0x370005c, CODE_FOR_addv8di3 },
  { 0x3700064, CODE_FOR_addv2hf3 },
  { 0x370006b, CODE_FOR_addv8hf3 },
  { 0x370006c, CODE_FOR_addv4sf3 },
  { 0x370006d, CODE_FOR_addv2df3 },
  { 0x370006f, CODE_FOR_addv16hf3 },
  { 0x3700070, CODE_FOR_addv8sf3 },
  { 0x3700071, CODE_FOR_addv4df3 },
  { 0x3700074, CODE_FOR_addv32hf3 },
  { 0x3700075, CODE_FOR_addv16sf3 },
  { 0x3700076, CODE_FOR_addv8df3 },
  { 0x3b0000f, CODE_FOR_subqi3 },
  { 0x3b00010, CODE_FOR_subhi3 },
  { 0x3b00011, CODE_FOR_subsi3 },
  { 0x3b00012, CODE_FOR_subdi3 },
  { 0x3b0002b, CODE_FOR_subhf3 },
  { 0x3b0002d, CODE_FOR_subsf3 },
  { 0x3b0002e, CODE_FOR_subdf3 },
  { 0x3b0002f, CODE_FOR_subxf3 },
  { 0x3b00044, CODE_FOR_subv2qi3 },
  { 0x3b00045, CODE_FOR_subv4qi3 },
  { 0x3b00046, CODE_FOR_subv2hi3 },
  { 0x3b0004f, CODE_FOR_subv16qi3 },
  { 0x3b00050, CODE_FOR_subv8hi3 },
  { 0x3b00051, CODE_FOR_subv4si3 },
  { 0x3b00052, CODE_FOR_subv2di3 },
  { 0x3b00054, CODE_FOR_subv32qi3 },
  { 0x3b00055, CODE_FOR_subv16hi3 },
  { 0x3b00056, CODE_FOR_subv8si3 },
  { 0x3b00057, CODE_FOR_subv4di3 },
  { 0x3b00059, CODE_FOR_subv64qi3 },
  { 0x3b0005a, CODE_FOR_subv32hi3 },
  { 0x3b0005b, CODE_FOR_subv16si3 },
  { 0x3b0005c, CODE_FOR_subv8di3 },
  { 0x3b00064, CODE_FOR_subv2hf3 },
  { 0x3b0006b, CODE_FOR_subv8hf3 },
  { 0x3b0006c, CODE_FOR_subv4sf3 },
  { 0x3b0006d, CODE_FOR_subv2df3 },
  { 0x3b0006f, CODE_FOR_subv16hf3 },
  { 0x3b00070, CODE_FOR_subv8sf3 },
  { 0x3b00071, CODE_FOR_subv4df3 },
  { 0x3b00074, CODE_FOR_subv32hf3 },
  { 0x3b00075, CODE_FOR_subv16sf3 },
  { 0x3b00076, CODE_FOR_subv8df3 },
  { 0x3f0000f, CODE_FOR_mulqi3 },
  { 0x3f00010, CODE_FOR_mulhi3 },
  { 0x3f00011, CODE_FOR_mulsi3 },
  { 0x3f0002b, CODE_FOR_mulhf3 },
  { 0x3f0002d, CODE_FOR_mulsf3 },
  { 0x3f0002e, CODE_FOR_muldf3 },
  { 0x3f0002f, CODE_FOR_mulxf3 },
  { 0x3f00045, CODE_FOR_mulv4qi3 },
  { 0x3f00046, CODE_FOR_mulv2hi3 },
  { 0x3f0004f, CODE_FOR_mulv16qi3 },
  { 0x3f00050, CODE_FOR_mulv8hi3 },
  { 0x3f00051, CODE_FOR_mulv4si3 },
  { 0x3f00052, CODE_FOR_mulv2di3 },
  { 0x3f00054, CODE_FOR_mulv32qi3 },
  { 0x3f00055, CODE_FOR_mulv16hi3 },
  { 0x3f00056, CODE_FOR_mulv8si3 },
  { 0x3f00057, CODE_FOR_mulv4di3 },
  { 0x3f00059, CODE_FOR_mulv64qi3 },
  { 0x3f0005a, CODE_FOR_mulv32hi3 },
  { 0x3f0005b, CODE_FOR_mulv16si3 },
  { 0x3f0005c, CODE_FOR_mulv8di3 },
  { 0x3f00064, CODE_FOR_mulv2hf3 },
  { 0x3f0006b, CODE_FOR_mulv8hf3 },
  { 0x3f0006c, CODE_FOR_mulv4sf3 },
  { 0x3f0006d, CODE_FOR_mulv2df3 },
  { 0x3f0006f, CODE_FOR_mulv16hf3 },
  { 0x3f00070, CODE_FOR_mulv8sf3 },
  { 0x3f00071, CODE_FOR_mulv4df3 },
  { 0x3f00074, CODE_FOR_mulv32hf3 },
  { 0x3f00075, CODE_FOR_mulv16sf3 },
  { 0x3f00076, CODE_FOR_mulv8df3 },
  { 0x430002b, CODE_FOR_divhf3 },
  { 0x430002d, CODE_FOR_divsf3 },
  { 0x430002e, CODE_FOR_divdf3 },
  { 0x430002f, CODE_FOR_divxf3 },
  { 0x4300064, CODE_FOR_divv2hf3 },
  { 0x4300067, CODE_FOR_divv4hf3 },
  { 0x430006b, CODE_FOR_divv8hf3 },
  { 0x430006c, CODE_FOR_divv4sf3 },
  { 0x430006d, CODE_FOR_divv2df3 },
  { 0x430006f, CODE_FOR_divv16hf3 },
  { 0x4300070, CODE_FOR_divv8sf3 },
  { 0x4300071, CODE_FOR_divv4df3 },
  { 0x4300074, CODE_FOR_divv32hf3 },
  { 0x4300075, CODE_FOR_divv16sf3 },
  { 0x4300076, CODE_FOR_divv8df3 },
  { 0x480000f, CODE_FOR_divmodqi4 },
  { 0x4800010, CODE_FOR_divmodhi4 },
  { 0x4800011, CODE_FOR_divmodsi4 },
  { 0x490000f, CODE_FOR_udivmodqi4 },
  { 0x4900010, CODE_FOR_udivmodhi4 },
  { 0x4900011, CODE_FOR_udivmodsi4 },
  { 0x4d0000f, CODE_FOR_andqi3 },
  { 0x4d00010, CODE_FOR_andhi3 },
  { 0x4d00011, CODE_FOR_andsi3 },
  { 0x4d00012, CODE_FOR_anddi3 },
  { 0x4d0002b, CODE_FOR_andhf3 },
  { 0x4d0002c, CODE_FOR_andbf3 },
  { 0x4d0002d, CODE_FOR_andsf3 },
  { 0x4d0002e, CODE_FOR_anddf3 },
  { 0x4d00030, CODE_FOR_andtf3 },
  { 0x4d00044, CODE_FOR_andv2qi3 },
  { 0x4d00045, CODE_FOR_andv4qi3 },
  { 0x4d00046, CODE_FOR_andv2hi3 },
  { 0x4d0004f, CODE_FOR_andv16qi3 },
  { 0x4d00050, CODE_FOR_andv8hi3 },
  { 0x4d00051, CODE_FOR_andv4si3 },
  { 0x4d00052, CODE_FOR_andv2di3 },
  { 0x4d00053, CODE_FOR_andv1ti3 },
  { 0x4d00054, CODE_FOR_andv32qi3 },
  { 0x4d00055, CODE_FOR_andv16hi3 },
  { 0x4d00056, CODE_FOR_andv8si3 },
  { 0x4d00057, CODE_FOR_andv4di3 },
  { 0x4d00059, CODE_FOR_andv64qi3 },
  { 0x4d0005a, CODE_FOR_andv32hi3 },
  { 0x4d0005b, CODE_FOR_andv16si3 },
  { 0x4d0005c, CODE_FOR_andv8di3 },
  { 0x4d00064, CODE_FOR_andv2hf3 },
  { 0x4d0006b, CODE_FOR_andv8hf3 },
  { 0x4d0006c, CODE_FOR_andv4sf3 },
  { 0x4d0006d, CODE_FOR_andv2df3 },
  { 0x4d0006f, CODE_FOR_andv16hf3 },
  { 0x4d00070, CODE_FOR_andv8sf3 },
  { 0x4d00071, CODE_FOR_andv4df3 },
  { 0x4d00074, CODE_FOR_andv32hf3 },
  { 0x4d00075, CODE_FOR_andv16sf3 },
  { 0x4d00076, CODE_FOR_andv8df3 },
  { 0x4e0000f, CODE_FOR_iorqi3 },
  { 0x4e00010, CODE_FOR_iorhi3 },
  { 0x4e00011, CODE_FOR_iorsi3 },
  { 0x4e00012, CODE_FOR_iordi3 },
  { 0x4e0002b, CODE_FOR_iorhf3 },
  { 0x4e0002c, CODE_FOR_iorbf3 },
  { 0x4e0002d, CODE_FOR_iorsf3 },
  { 0x4e0002e, CODE_FOR_iordf3 },
  { 0x4e00030, CODE_FOR_iortf3 },
  { 0x4e00044, CODE_FOR_iorv2qi3 },
  { 0x4e00045, CODE_FOR_iorv4qi3 },
  { 0x4e00046, CODE_FOR_iorv2hi3 },
  { 0x4e0004f, CODE_FOR_iorv16qi3 },
  { 0x4e00050, CODE_FOR_iorv8hi3 },
  { 0x4e00051, CODE_FOR_iorv4si3 },
  { 0x4e00052, CODE_FOR_iorv2di3 },
  { 0x4e00053, CODE_FOR_iorv1ti3 },
  { 0x4e00054, CODE_FOR_iorv32qi3 },
  { 0x4e00055, CODE_FOR_iorv16hi3 },
  { 0x4e00056, CODE_FOR_iorv8si3 },
  { 0x4e00057, CODE_FOR_iorv4di3 },
  { 0x4e00059, CODE_FOR_iorv64qi3 },
  { 0x4e0005a, CODE_FOR_iorv32hi3 },
  { 0x4e0005b, CODE_FOR_iorv16si3 },
  { 0x4e0005c, CODE_FOR_iorv8di3 },
  { 0x4e00064, CODE_FOR_iorv2hf3 },
  { 0x4e0006b, CODE_FOR_iorv8hf3 },
  { 0x4e0006c, CODE_FOR_iorv4sf3 },
  { 0x4e0006d, CODE_FOR_iorv2df3 },
  { 0x4e0006f, CODE_FOR_iorv16hf3 },
  { 0x4e00070, CODE_FOR_iorv8sf3 },
  { 0x4e00071, CODE_FOR_iorv4df3 },
  { 0x4e00074, CODE_FOR_iorv32hf3 },
  { 0x4e00075, CODE_FOR_iorv16sf3 },
  { 0x4e00076, CODE_FOR_iorv8df3 },
  { 0x4f0000f, CODE_FOR_xorqi3 },
  { 0x4f00010, CODE_FOR_xorhi3 },
  { 0x4f00011, CODE_FOR_xorsi3 },
  { 0x4f00012, CODE_FOR_xordi3 },
  { 0x4f0002b, CODE_FOR_xorhf3 },
  { 0x4f0002c, CODE_FOR_xorbf3 },
  { 0x4f0002d, CODE_FOR_xorsf3 },
  { 0x4f0002e, CODE_FOR_xordf3 },
  { 0x4f00030, CODE_FOR_xortf3 },
  { 0x4f00044, CODE_FOR_xorv2qi3 },
  { 0x4f00045, CODE_FOR_xorv4qi3 },
  { 0x4f00046, CODE_FOR_xorv2hi3 },
  { 0x4f0004f, CODE_FOR_xorv16qi3 },
  { 0x4f00050, CODE_FOR_xorv8hi3 },
  { 0x4f00051, CODE_FOR_xorv4si3 },
  { 0x4f00052, CODE_FOR_xorv2di3 },
  { 0x4f00053, CODE_FOR_xorv1ti3 },
  { 0x4f00054, CODE_FOR_xorv32qi3 },
  { 0x4f00055, CODE_FOR_xorv16hi3 },
  { 0x4f00056, CODE_FOR_xorv8si3 },
  { 0x4f00057, CODE_FOR_xorv4di3 },
  { 0x4f00059, CODE_FOR_xorv64qi3 },
  { 0x4f0005a, CODE_FOR_xorv32hi3 },
  { 0x4f0005b, CODE_FOR_xorv16si3 },
  { 0x4f0005c, CODE_FOR_xorv8di3 },
  { 0x4f00064, CODE_FOR_xorv2hf3 },
  { 0x4f0006b, CODE_FOR_xorv8hf3 },
  { 0x4f0006c, CODE_FOR_xorv4sf3 },
  { 0x4f0006d, CODE_FOR_xorv2df3 },
  { 0x4f0006f, CODE_FOR_xorv16hf3 },
  { 0x4f00070, CODE_FOR_xorv8sf3 },
  { 0x4f00071, CODE_FOR_xorv4df3 },
  { 0x4f00074, CODE_FOR_xorv32hf3 },
  { 0x4f00075, CODE_FOR_xorv16sf3 },
  { 0x4f00076, CODE_FOR_xorv8df3 },
  { 0x500000f, CODE_FOR_ashlqi3 },
  { 0x5000010, CODE_FOR_ashlhi3 },
  { 0x5000011, CODE_FOR_ashlsi3 },
  { 0x5000012, CODE_FOR_ashldi3 },
  { 0x5000044, CODE_FOR_ashlv2qi3 },
  { 0x5000045, CODE_FOR_ashlv4qi3 },
  { 0x5000046, CODE_FOR_ashlv2hi3 },
  { 0x500004f, CODE_FOR_ashlv16qi3 },
  { 0x5000050, CODE_FOR_ashlv8hi3 },
  { 0x5000051, CODE_FOR_ashlv4si3 },
  { 0x5000052, CODE_FOR_ashlv2di3 },
  { 0x5000054, CODE_FOR_ashlv32qi3 },
  { 0x5000055, CODE_FOR_ashlv16hi3 },
  { 0x5000056, CODE_FOR_ashlv8si3 },
  { 0x5000057, CODE_FOR_ashlv4di3 },
  { 0x5000059, CODE_FOR_ashlv64qi3 },
  { 0x500005a, CODE_FOR_ashlv32hi3 },
  { 0x500005b, CODE_FOR_ashlv16si3 },
  { 0x500005c, CODE_FOR_ashlv8di3 },
  { 0x530000f, CODE_FOR_ashrqi3 },
  { 0x5300010, CODE_FOR_ashrhi3 },
  { 0x5300011, CODE_FOR_ashrsi3 },
  { 0x5300012, CODE_FOR_ashrdi3 },
  { 0x5300044, CODE_FOR_ashrv2qi3 },
  { 0x5300045, CODE_FOR_ashrv4qi3 },
  { 0x5300046, CODE_FOR_ashrv2hi3 },
  { 0x530004f, CODE_FOR_ashrv16qi3 },
  { 0x5300050, CODE_FOR_ashrv8hi3 },
  { 0x5300051, CODE_FOR_ashrv4si3 },
  { 0x5300052, CODE_FOR_ashrv2di3 },
  { 0x5300054, CODE_FOR_ashrv32qi3 },
  { 0x5300055, CODE_FOR_ashrv16hi3 },
  { 0x5300056, CODE_FOR_ashrv8si3 },
  { 0x5300057, CODE_FOR_ashrv4di3 },
  { 0x5300059, CODE_FOR_ashrv64qi3 },
  { 0x530005a, CODE_FOR_ashrv32hi3 },
  { 0x530005b, CODE_FOR_ashrv16si3 },
  { 0x530005c, CODE_FOR_ashrv8di3 },
  { 0x540000f, CODE_FOR_lshrqi3 },
  { 0x5400010, CODE_FOR_lshrhi3 },
  { 0x5400011, CODE_FOR_lshrsi3 },
  { 0x5400012, CODE_FOR_lshrdi3 },
  { 0x5400044, CODE_FOR_lshrv2qi3 },
  { 0x5400045, CODE_FOR_lshrv4qi3 },
  { 0x5400046, CODE_FOR_lshrv2hi3 },
  { 0x540004f, CODE_FOR_lshrv16qi3 },
  { 0x5400050, CODE_FOR_lshrv8hi3 },
  { 0x5400051, CODE_FOR_lshrv4si3 },
  { 0x5400052, CODE_FOR_lshrv2di3 },
  { 0x5400054, CODE_FOR_lshrv32qi3 },
  { 0x5400055, CODE_FOR_lshrv16hi3 },
  { 0x5400056, CODE_FOR_lshrv8si3 },
  { 0x5400057, CODE_FOR_lshrv4di3 },
  { 0x5400059, CODE_FOR_lshrv64qi3 },
  { 0x540005a, CODE_FOR_lshrv32hi3 },
  { 0x540005b, CODE_FOR_lshrv16si3 },
  { 0x540005c, CODE_FOR_lshrv8di3 },
  { 0x550000f, CODE_FOR_rotlqi3 },
  { 0x5500010, CODE_FOR_rotlhi3 },
  { 0x5500011, CODE_FOR_rotlsi3 },
  { 0x5500012, CODE_FOR_rotldi3 },
  { 0x550004f, CODE_FOR_rotlv16qi3 },
  { 0x5500050, CODE_FOR_rotlv8hi3 },
  { 0x5500051, CODE_FOR_rotlv4si3 },
  { 0x5500052, CODE_FOR_rotlv2di3 },
  { 0x560000f, CODE_FOR_rotrqi3 },
  { 0x5600010, CODE_FOR_rotrhi3 },
  { 0x5600011, CODE_FOR_rotrsi3 },
  { 0x5600012, CODE_FOR_rotrdi3 },
  { 0x560004f, CODE_FOR_rotrv16qi3 },
  { 0x5600050, CODE_FOR_rotrv8hi3 },
  { 0x5600051, CODE_FOR_rotrv4si3 },
  { 0x5600052, CODE_FOR_rotrv2di3 },
  { 0x5700045, CODE_FOR_vashlv4qi3 },
  { 0x570004f, CODE_FOR_vashlv16qi3 },
  { 0x5700050, CODE_FOR_vashlv8hi3 },
  { 0x5700051, CODE_FOR_vashlv4si3 },
  { 0x5700052, CODE_FOR_vashlv2di3 },
  { 0x5700054, CODE_FOR_vashlv32qi3 },
  { 0x5700055, CODE_FOR_vashlv16hi3 },
  { 0x5700056, CODE_FOR_vashlv8si3 },
  { 0x5700057, CODE_FOR_vashlv4di3 },
  { 0x5700059, CODE_FOR_vashlv64qi3 },
  { 0x570005a, CODE_FOR_vashlv32hi3 },
  { 0x570005b, CODE_FOR_vashlv16si3 },
  { 0x570005c, CODE_FOR_vashlv8di3 },
  { 0x5800045, CODE_FOR_vashrv4qi3 },
  { 0x580004f, CODE_FOR_vashrv16qi3 },
  { 0x5800050, CODE_FOR_vashrv8hi3 },
  { 0x5800051, CODE_FOR_vashrv4si3 },
  { 0x5800052, CODE_FOR_vashrv2di3 },
  { 0x5800054, CODE_FOR_vashrv32qi3 },
  { 0x5800055, CODE_FOR_vashrv16hi3 },
  { 0x5800056, CODE_FOR_vashrv8si3 },
  { 0x5800057, CODE_FOR_vashrv4di3 },
  { 0x5800059, CODE_FOR_vashrv64qi3 },
  { 0x580005a, CODE_FOR_vashrv32hi3 },
  { 0x580005b, CODE_FOR_vashrv16si3 },
  { 0x580005c, CODE_FOR_vashrv8di3 },
  { 0x5900045, CODE_FOR_vlshrv4qi3 },
  { 0x590004f, CODE_FOR_vlshrv16qi3 },
  { 0x5900050, CODE_FOR_vlshrv8hi3 },
  { 0x5900051, CODE_FOR_vlshrv4si3 },
  { 0x5900052, CODE_FOR_vlshrv2di3 },
  { 0x5900054, CODE_FOR_vlshrv32qi3 },
  { 0x5900055, CODE_FOR_vlshrv16hi3 },
  { 0x5900056, CODE_FOR_vlshrv8si3 },
  { 0x5900057, CODE_FOR_vlshrv4di3 },
  { 0x5900059, CODE_FOR_vlshrv64qi3 },
  { 0x590005a, CODE_FOR_vlshrv32hi3 },
  { 0x590005b, CODE_FOR_vlshrv16si3 },
  { 0x590005c, CODE_FOR_vlshrv8di3 },
  { 0x5a0004f, CODE_FOR_vrotlv16qi3 },
  { 0x5a00050, CODE_FOR_vrotlv8hi3 },
  { 0x5a00051, CODE_FOR_vrotlv4si3 },
  { 0x5a00052, CODE_FOR_vrotlv2di3 },
  { 0x5b0004f, CODE_FOR_vrotrv16qi3 },
  { 0x5b00050, CODE_FOR_vrotrv8hi3 },
  { 0x5b00051, CODE_FOR_vrotrv4si3 },
  { 0x5b00052, CODE_FOR_vrotrv2di3 },
  { 0x5c0000f, CODE_FOR_sminqi3 },
  { 0x5c00010, CODE_FOR_sminhi3 },
  { 0x5c00011, CODE_FOR_sminsi3 },
  { 0x5c00012, CODE_FOR_smindi3 },
  { 0x5c0002b, CODE_FOR_sminhf3 },
  { 0x5c0002d, CODE_FOR_sminsf3 },
  { 0x5c0002e, CODE_FOR_smindf3 },
  { 0x5c00044, CODE_FOR_sminv2qi3 },
  { 0x5c00045, CODE_FOR_sminv4qi3 },
  { 0x5c00046, CODE_FOR_sminv2hi3 },
  { 0x5c0004f, CODE_FOR_sminv16qi3 },
  { 0x5c00050, CODE_FOR_sminv8hi3 },
  { 0x5c00051, CODE_FOR_sminv4si3 },
  { 0x5c00052, CODE_FOR_sminv2di3 },
  { 0x5c00054, CODE_FOR_sminv32qi3 },
  { 0x5c00055, CODE_FOR_sminv16hi3 },
  { 0x5c00056, CODE_FOR_sminv8si3 },
  { 0x5c00057, CODE_FOR_sminv4di3 },
  { 0x5c00059, CODE_FOR_sminv64qi3 },
  { 0x5c0005a, CODE_FOR_sminv32hi3 },
  { 0x5c0005b, CODE_FOR_sminv16si3 },
  { 0x5c0005c, CODE_FOR_sminv8di3 },
  { 0x5c00064, CODE_FOR_sminv2hf3 },
  { 0x5c0006b, CODE_FOR_sminv8hf3 },
  { 0x5c0006c, CODE_FOR_sminv4sf3 },
  { 0x5c0006d, CODE_FOR_sminv2df3 },
  { 0x5c0006f, CODE_FOR_sminv16hf3 },
  { 0x5c00070, CODE_FOR_sminv8sf3 },
  { 0x5c00071, CODE_FOR_sminv4df3 },
  { 0x5c00074, CODE_FOR_sminv32hf3 },
  { 0x5c00075, CODE_FOR_sminv16sf3 },
  { 0x5c00076, CODE_FOR_sminv8df3 },
  { 0x5d0000f, CODE_FOR_smaxqi3 },
  { 0x5d00010, CODE_FOR_smaxhi3 },
  { 0x5d00011, CODE_FOR_smaxsi3 },
  { 0x5d00012, CODE_FOR_smaxdi3 },
  { 0x5d0002b, CODE_FOR_smaxhf3 },
  { 0x5d0002d, CODE_FOR_smaxsf3 },
  { 0x5d0002e, CODE_FOR_smaxdf3 },
  { 0x5d00044, CODE_FOR_smaxv2qi3 },
  { 0x5d00045, CODE_FOR_smaxv4qi3 },
  { 0x5d00046, CODE_FOR_smaxv2hi3 },
  { 0x5d0004f, CODE_FOR_smaxv16qi3 },
  { 0x5d00050, CODE_FOR_smaxv8hi3 },
  { 0x5d00051, CODE_FOR_smaxv4si3 },
  { 0x5d00052, CODE_FOR_smaxv2di3 },
  { 0x5d00054, CODE_FOR_smaxv32qi3 },
  { 0x5d00055, CODE_FOR_smaxv16hi3 },
  { 0x5d00056, CODE_FOR_smaxv8si3 },
  { 0x5d00057, CODE_FOR_smaxv4di3 },
  { 0x5d00059, CODE_FOR_smaxv64qi3 },
  { 0x5d0005a, CODE_FOR_smaxv32hi3 },
  { 0x5d0005b, CODE_FOR_smaxv16si3 },
  { 0x5d0005c, CODE_FOR_smaxv8di3 },
  { 0x5d00064, CODE_FOR_smaxv2hf3 },
  { 0x5d0006b, CODE_FOR_smaxv8hf3 },
  { 0x5d0006c, CODE_FOR_smaxv4sf3 },
  { 0x5d0006d, CODE_FOR_smaxv2df3 },
  { 0x5d0006f, CODE_FOR_smaxv16hf3 },
  { 0x5d00070, CODE_FOR_smaxv8sf3 },
  { 0x5d00071, CODE_FOR_smaxv4df3 },
  { 0x5d00074, CODE_FOR_smaxv32hf3 },
  { 0x5d00075, CODE_FOR_smaxv16sf3 },
  { 0x5d00076, CODE_FOR_smaxv8df3 },
  { 0x5e0000f, CODE_FOR_uminqi3 },
  { 0x5e00010, CODE_FOR_uminhi3 },
  { 0x5e00011, CODE_FOR_uminsi3 },
  { 0x5e00012, CODE_FOR_umindi3 },
  { 0x5e00044, CODE_FOR_uminv2qi3 },
  { 0x5e00045, CODE_FOR_uminv4qi3 },
  { 0x5e00046, CODE_FOR_uminv2hi3 },
  { 0x5e0004f, CODE_FOR_uminv16qi3 },
  { 0x5e00050, CODE_FOR_uminv8hi3 },
  { 0x5e00051, CODE_FOR_uminv4si3 },
  { 0x5e00052, CODE_FOR_uminv2di3 },
  { 0x5e00054, CODE_FOR_uminv32qi3 },
  { 0x5e00055, CODE_FOR_uminv16hi3 },
  { 0x5e00056, CODE_FOR_uminv8si3 },
  { 0x5e00057, CODE_FOR_uminv4di3 },
  { 0x5e00059, CODE_FOR_uminv64qi3 },
  { 0x5e0005a, CODE_FOR_uminv32hi3 },
  { 0x5e0005b, CODE_FOR_uminv16si3 },
  { 0x5e0005c, CODE_FOR_uminv8di3 },
  { 0x5f0000f, CODE_FOR_umaxqi3 },
  { 0x5f00010, CODE_FOR_umaxhi3 },
  { 0x5f00011, CODE_FOR_umaxsi3 },
  { 0x5f00012, CODE_FOR_umaxdi3 },
  { 0x5f00044, CODE_FOR_umaxv2qi3 },
  { 0x5f00045, CODE_FOR_umaxv4qi3 },
  { 0x5f00046, CODE_FOR_umaxv2hi3 },
  { 0x5f0004f, CODE_FOR_umaxv16qi3 },
  { 0x5f00050, CODE_FOR_umaxv8hi3 },
  { 0x5f00051, CODE_FOR_umaxv4si3 },
  { 0x5f00052, CODE_FOR_umaxv2di3 },
  { 0x5f00054, CODE_FOR_umaxv32qi3 },
  { 0x5f00055, CODE_FOR_umaxv16hi3 },
  { 0x5f00056, CODE_FOR_umaxv8si3 },
  { 0x5f00057, CODE_FOR_umaxv4di3 },
  { 0x5f00059, CODE_FOR_umaxv64qi3 },
  { 0x5f0005a, CODE_FOR_umaxv32hi3 },
  { 0x5f0005b, CODE_FOR_umaxv16si3 },
  { 0x5f0005c, CODE_FOR_umaxv8di3 },
  { 0x600000f, CODE_FOR_negqi2 },
  { 0x6000010, CODE_FOR_neghi2 },
  { 0x6000011, CODE_FOR_negsi2 },
  { 0x6000012, CODE_FOR_negdi2 },
  { 0x600002b, CODE_FOR_neghf2 },
  { 0x600002d, CODE_FOR_negsf2 },
  { 0x600002e, CODE_FOR_negdf2 },
  { 0x600002f, CODE_FOR_negxf2 },
  { 0x6000030, CODE_FOR_negtf2 },
  { 0x6000044, CODE_FOR_negv2qi2 },
  { 0x6000045, CODE_FOR_negv4qi2 },
  { 0x6000046, CODE_FOR_negv2hi2 },
  { 0x600004f, CODE_FOR_negv16qi2 },
  { 0x6000050, CODE_FOR_negv8hi2 },
  { 0x6000051, CODE_FOR_negv4si2 },
  { 0x6000052, CODE_FOR_negv2di2 },
  { 0x6000054, CODE_FOR_negv32qi2 },
  { 0x6000055, CODE_FOR_negv16hi2 },
  { 0x6000056, CODE_FOR_negv8si2 },
  { 0x6000057, CODE_FOR_negv4di2 },
  { 0x6000059, CODE_FOR_negv64qi2 },
  { 0x600005a, CODE_FOR_negv32hi2 },
  { 0x600005b, CODE_FOR_negv16si2 },
  { 0x600005c, CODE_FOR_negv8di2 },
  { 0x6000064, CODE_FOR_negv2hf2 },
  { 0x600006b, CODE_FOR_negv8hf2 },
  { 0x600006c, CODE_FOR_negv4sf2 },
  { 0x600006d, CODE_FOR_negv2df2 },
  { 0x600006f, CODE_FOR_negv16hf2 },
  { 0x6000070, CODE_FOR_negv8sf2 },
  { 0x6000071, CODE_FOR_negv4df2 },
  { 0x6000074, CODE_FOR_negv32hf2 },
  { 0x6000075, CODE_FOR_negv16sf2 },
  { 0x6000076, CODE_FOR_negv8df2 },
  { 0x640000f, CODE_FOR_absqi2 },
  { 0x6400010, CODE_FOR_abshi2 },
  { 0x6400011, CODE_FOR_abssi2 },
  { 0x6400012, CODE_FOR_absdi2 },
  { 0x640002b, CODE_FOR_abshf2 },
  { 0x640002d, CODE_FOR_abssf2 },
  { 0x640002e, CODE_FOR_absdf2 },
  { 0x640002f, CODE_FOR_absxf2 },
  { 0x6400030, CODE_FOR_abstf2 },
  { 0x6400044, CODE_FOR_absv2qi2 },
  { 0x6400045, CODE_FOR_absv4qi2 },
  { 0x6400046, CODE_FOR_absv2hi2 },
  { 0x640004f, CODE_FOR_absv16qi2 },
  { 0x6400050, CODE_FOR_absv8hi2 },
  { 0x6400051, CODE_FOR_absv4si2 },
  { 0x6400052, CODE_FOR_absv2di2 },
  { 0x6400054, CODE_FOR_absv32qi2 },
  { 0x6400055, CODE_FOR_absv16hi2 },
  { 0x6400056, CODE_FOR_absv8si2 },
  { 0x6400057, CODE_FOR_absv4di2 },
  { 0x6400059, CODE_FOR_absv64qi2 },
  { 0x640005a, CODE_FOR_absv32hi2 },
  { 0x640005b, CODE_FOR_absv16si2 },
  { 0x640005c, CODE_FOR_absv8di2 },
  { 0x6400064, CODE_FOR_absv2hf2 },
  { 0x640006b, CODE_FOR_absv8hf2 },
  { 0x640006c, CODE_FOR_absv4sf2 },
  { 0x640006d, CODE_FOR_absv2df2 },
  { 0x640006f, CODE_FOR_absv16hf2 },
  { 0x6400070, CODE_FOR_absv8sf2 },
  { 0x6400071, CODE_FOR_absv4df2 },
  { 0x6400074, CODE_FOR_absv32hf2 },
  { 0x6400075, CODE_FOR_absv16sf2 },
  { 0x6400076, CODE_FOR_absv8df2 },
  { 0x660000f, CODE_FOR_one_cmplqi2 },
  { 0x6600010, CODE_FOR_one_cmplhi2 },
  { 0x6600011, CODE_FOR_one_cmplsi2 },
  { 0x6600012, CODE_FOR_one_cmpldi2 },
  { 0x6600044, CODE_FOR_one_cmplv2qi2 },
  { 0x6600045, CODE_FOR_one_cmplv4qi2 },
  { 0x6600046, CODE_FOR_one_cmplv2hi2 },
  { 0x660004f, CODE_FOR_one_cmplv16qi2 },
  { 0x6600050, CODE_FOR_one_cmplv8hi2 },
  { 0x6600051, CODE_FOR_one_cmplv4si2 },
  { 0x6600052, CODE_FOR_one_cmplv2di2 },
  { 0x6600053, CODE_FOR_one_cmplv1ti2 },
  { 0x6600054, CODE_FOR_one_cmplv32qi2 },
  { 0x6600055, CODE_FOR_one_cmplv16hi2 },
  { 0x6600056, CODE_FOR_one_cmplv8si2 },
  { 0x6600057, CODE_FOR_one_cmplv4di2 },
  { 0x6600059, CODE_FOR_one_cmplv64qi2 },
  { 0x660005a, CODE_FOR_one_cmplv32hi2 },
  { 0x660005b, CODE_FOR_one_cmplv16si2 },
  { 0x660005c, CODE_FOR_one_cmplv8di2 },
  { 0x6700010, CODE_FOR_bswaphi2 },
  { 0x6700011, CODE_FOR_bswapsi2 },
  { 0x6800011, CODE_FOR_ffssi2 },
  { 0x6900011, CODE_FOR_clzsi2 },
  { 0x6900051, CODE_FOR_clzv4si2 },
  { 0x6900052, CODE_FOR_clzv2di2 },
  { 0x6900056, CODE_FOR_clzv8si2 },
  { 0x6900057, CODE_FOR_clzv4di2 },
  { 0x690005b, CODE_FOR_clzv16si2 },
  { 0x690005c, CODE_FOR_clzv8di2 },
  { 0x6a00011, CODE_FOR_ctzsi2 },
  { 0x6c00010, CODE_FOR_popcounthi2 },
  { 0x6c00011, CODE_FOR_popcountsi2 },
  { 0x6c0004f, CODE_FOR_popcountv16qi2 },
  { 0x6c00050, CODE_FOR_popcountv8hi2 },
  { 0x6c00051, CODE_FOR_popcountv4si2 },
  { 0x6c00052, CODE_FOR_popcountv2di2 },
  { 0x6c00054, CODE_FOR_popcountv32qi2 },
  { 0x6c00055, CODE_FOR_popcountv16hi2 },
  { 0x6c00056, CODE_FOR_popcountv8si2 },
  { 0x6c00057, CODE_FOR_popcountv4di2 },
  { 0x6c00059, CODE_FOR_popcountv64qi2 },
  { 0x6c0005a, CODE_FOR_popcountv32hi2 },
  { 0x6c0005b, CODE_FOR_popcountv16si2 },
  { 0x6c0005c, CODE_FOR_popcountv8di2 },
  { 0x6d0000f, CODE_FOR_parityqi2 },
  { 0x6d00010, CODE_FOR_parityhi2 },
  { 0x6d00011, CODE_FOR_paritysi2 },
  { 0x6d00012, CODE_FOR_paritydi2 },
  { 0x780002b, CODE_FOR_sqrthf2 },
  { 0x780002d, CODE_FOR_sqrtsf2 },
  { 0x780002e, CODE_FOR_sqrtdf2 },
  { 0x780002f, CODE_FOR_sqrtxf2 },
  { 0x7800064, CODE_FOR_sqrtv2hf2 },
  { 0x780006b, CODE_FOR_sqrtv8hf2 },
  { 0x780006c, CODE_FOR_sqrtv4sf2 },
  { 0x780006d, CODE_FOR_sqrtv2df2 },
  { 0x780006f, CODE_FOR_sqrtv16hf2 },
  { 0x7800070, CODE_FOR_sqrtv8sf2 },
  { 0x7800071, CODE_FOR_sqrtv4df2 },
  { 0x7800074, CODE_FOR_sqrtv32hf2 },
  { 0x7800075, CODE_FOR_sqrtv16sf2 },
  { 0x7800076, CODE_FOR_sqrtv8df2 },
  { 0x870000f, CODE_FOR_movqi },
  { 0x8700010, CODE_FOR_movhi },
  { 0x8700011, CODE_FOR_movsi },
  { 0x8700012, CODE_FOR_movdi },
  { 0x8700013, CODE_FOR_movti },
  { 0x8700014, CODE_FOR_movoi },
  { 0x8700015, CODE_FOR_movxi },
  { 0x8700016, CODE_FOR_movp2qi },
  { 0x8700017, CODE_FOR_movp2hi },
  { 0x870002b, CODE_FOR_movhf },
  { 0x870002c, CODE_FOR_movbf },
  { 0x870002d, CODE_FOR_movsf },
  { 0x870002e, CODE_FOR_movdf },
  { 0x870002f, CODE_FOR_movxf },
  { 0x8700030, CODE_FOR_movtf },
  { 0x8700039, CODE_FOR_movcdi },
  { 0x8700044, CODE_FOR_movv2qi },
  { 0x8700045, CODE_FOR_movv4qi },
  { 0x8700046, CODE_FOR_movv2hi },
  { 0x8700047, CODE_FOR_movv1si },
  { 0x8700048, CODE_FOR_movv8qi },
  { 0x8700049, CODE_FOR_movv4hi },
  { 0x870004a, CODE_FOR_movv2si },
  { 0x870004b, CODE_FOR_movv1di },
  { 0x870004f, CODE_FOR_movv16qi },
  { 0x8700050, CODE_FOR_movv8hi },
  { 0x8700051, CODE_FOR_movv4si },
  { 0x8700052, CODE_FOR_movv2di },
  { 0x8700053, CODE_FOR_movv1ti },
  { 0x8700054, CODE_FOR_movv32qi },
  { 0x8700055, CODE_FOR_movv16hi },
  { 0x8700056, CODE_FOR_movv8si },
  { 0x8700057, CODE_FOR_movv4di },
  { 0x8700058, CODE_FOR_movv2ti },
  { 0x8700059, CODE_FOR_movv64qi },
  { 0x870005a, CODE_FOR_movv32hi },
  { 0x870005b, CODE_FOR_movv16si },
  { 0x870005c, CODE_FOR_movv8di },
  { 0x870005d, CODE_FOR_movv4ti },
  { 0x8700063, CODE_FOR_movv64si },
  { 0x8700064, CODE_FOR_movv2hf },
  { 0x8700065, CODE_FOR_movv2bf },
  { 0x8700066, CODE_FOR_movv4bf },
  { 0x8700067, CODE_FOR_movv4hf },
  { 0x8700068, CODE_FOR_movv2sf },
  { 0x870006a, CODE_FOR_movv8bf },
  { 0x870006b, CODE_FOR_movv8hf },
  { 0x870006c, CODE_FOR_movv4sf },
  { 0x870006d, CODE_FOR_movv2df },
  { 0x870006e, CODE_FOR_movv16bf },
  { 0x870006f, CODE_FOR_movv16hf },
  { 0x8700070, CODE_FOR_movv8sf },
  { 0x8700071, CODE_FOR_movv4df },
  { 0x8700073, CODE_FOR_movv32bf },
  { 0x8700074, CODE_FOR_movv32hf },
  { 0x8700075, CODE_FOR_movv16sf },
  { 0x8700076, CODE_FOR_movv8df },
  { 0x870007f, CODE_FOR_movv64sf },
  { 0x880000f, CODE_FOR_movstrictqi },
  { 0x8800010, CODE_FOR_movstricthi },
  { 0x8900044, CODE_FOR_movmisalignv2qi },
  { 0x8900045, CODE_FOR_movmisalignv4qi },
  { 0x8900046, CODE_FOR_movmisalignv2hi },
  { 0x8900047, CODE_FOR_movmisalignv1si },
  { 0x8900048, CODE_FOR_movmisalignv8qi },
  { 0x8900049, CODE_FOR_movmisalignv4hi },
  { 0x890004a, CODE_FOR_movmisalignv2si },
  { 0x890004b, CODE_FOR_movmisalignv1di },
  { 0x890004f, CODE_FOR_movmisalignv16qi },
  { 0x8900050, CODE_FOR_movmisalignv8hi },
  { 0x8900051, CODE_FOR_movmisalignv4si },
  { 0x8900052, CODE_FOR_movmisalignv2di },
  { 0x8900053, CODE_FOR_movmisalignv1ti },
  { 0x8900054, CODE_FOR_movmisalignv32qi },
  { 0x8900055, CODE_FOR_movmisalignv16hi },
  { 0x8900056, CODE_FOR_movmisalignv8si },
  { 0x8900057, CODE_FOR_movmisalignv4di },
  { 0x8900058, CODE_FOR_movmisalignv2ti },
  { 0x8900059, CODE_FOR_movmisalignv64qi },
  { 0x890005a, CODE_FOR_movmisalignv32hi },
  { 0x890005b, CODE_FOR_movmisalignv16si },
  { 0x890005c, CODE_FOR_movmisalignv8di },
  { 0x890005d, CODE_FOR_movmisalignv4ti },
  { 0x8900064, CODE_FOR_movmisalignv2hf },
  { 0x8900065, CODE_FOR_movmisalignv2bf },
  { 0x8900066, CODE_FOR_movmisalignv4bf },
  { 0x8900067, CODE_FOR_movmisalignv4hf },
  { 0x8900068, CODE_FOR_movmisalignv2sf },
  { 0x890006a, CODE_FOR_movmisalignv8bf },
  { 0x890006b, CODE_FOR_movmisalignv8hf },
  { 0x890006c, CODE_FOR_movmisalignv4sf },
  { 0x890006d, CODE_FOR_movmisalignv2df },
  { 0x890006e, CODE_FOR_movmisalignv16bf },
  { 0x890006f, CODE_FOR_movmisalignv16hf },
  { 0x8900070, CODE_FOR_movmisalignv8sf },
  { 0x8900071, CODE_FOR_movmisalignv4df },
  { 0x8900073, CODE_FOR_movmisalignv32bf },
  { 0x8900074, CODE_FOR_movmisalignv32hf },
  { 0x8900075, CODE_FOR_movmisalignv16sf },
  { 0x8900076, CODE_FOR_movmisalignv8df },
  { 0x8a00011, CODE_FOR_storentsi },
  { 0x8a0002d, CODE_FOR_storentsf },
  { 0x8a0002e, CODE_FOR_storentdf },
  { 0x8a00052, CODE_FOR_storentv2di },
  { 0x8a00057, CODE_FOR_storentv4di },
  { 0x8a0005c, CODE_FOR_storentv8di },
  { 0x8a0006c, CODE_FOR_storentv4sf },
  { 0x8a0006d, CODE_FOR_storentv2df },
  { 0x8a00070, CODE_FOR_storentv8sf },
  { 0x8a00071, CODE_FOR_storentv4df },
  { 0x8a00075, CODE_FOR_storentv16sf },
  { 0x8a00076, CODE_FOR_storentv8df },
  { 0x8b00010, CODE_FOR_insvhi },
  { 0x8b00011, CODE_FOR_insvsi },
  { 0x8c00010, CODE_FOR_extvhi },
  { 0x8c00011, CODE_FOR_extvsi },
  { 0x8d00010, CODE_FOR_extzvhi },
  { 0x8d00011, CODE_FOR_extzvsi },
  { 0x9400002, CODE_FOR_cbranchcc4 },
  { 0x940000f, CODE_FOR_cbranchqi4 },
  { 0x9400010, CODE_FOR_cbranchhi4 },
  { 0x9400011, CODE_FOR_cbranchsi4 },
  { 0x9400012, CODE_FOR_cbranchdi4 },
  { 0x9400013, CODE_FOR_cbranchti4 },
  { 0x9400014, CODE_FOR_cbranchoi4 },
  { 0x9400015, CODE_FOR_cbranchxi4 },
  { 0x940002b, CODE_FOR_cbranchhf4 },
  { 0x940002c, CODE_FOR_cbranchbf4 },
  { 0x940002d, CODE_FOR_cbranchsf4 },
  { 0x940002e, CODE_FOR_cbranchdf4 },
  { 0x940002f, CODE_FOR_cbranchxf4 },
  { 0x940004f, CODE_FOR_cbranchv16qi4 },
  { 0x9400050, CODE_FOR_cbranchv8hi4 },
  { 0x9400051, CODE_FOR_cbranchv4si4 },
  { 0x9400052, CODE_FOR_cbranchv2di4 },
  { 0x9400054, CODE_FOR_cbranchv32qi4 },
  { 0x9400055, CODE_FOR_cbranchv16hi4 },
  { 0x9400056, CODE_FOR_cbranchv8si4 },
  { 0x9400057, CODE_FOR_cbranchv4di4 },
  { 0x9400059, CODE_FOR_cbranchv64qi4 },
  { 0x940005a, CODE_FOR_cbranchv32hi4 },
  { 0x940005b, CODE_FOR_cbranchv16si4 },
  { 0x940005c, CODE_FOR_cbranchv8di4 },
  { 0x970000f, CODE_FOR_addqicc },
  { 0x9700010, CODE_FOR_addhicc },
  { 0x9700011, CODE_FOR_addsicc },
  { 0x9a0000f, CODE_FOR_movqicc },
  { 0x9a00010, CODE_FOR_movhicc },
  { 0x9a00011, CODE_FOR_movsicc },
  { 0x9a0002b, CODE_FOR_movhfcc },
  { 0x9a0002d, CODE_FOR_movsfcc },
  { 0x9a0002e, CODE_FOR_movdfcc },
  { 0x9a0002f, CODE_FOR_movxfcc },
  { 0x9b0004f, CODE_FOR_cond_addv16qi },
  { 0x9b00050, CODE_FOR_cond_addv8hi },
  { 0x9b00051, CODE_FOR_cond_addv4si },
  { 0x9b00052, CODE_FOR_cond_addv2di },
  { 0x9b00054, CODE_FOR_cond_addv32qi },
  { 0x9b00055, CODE_FOR_cond_addv16hi },
  { 0x9b00056, CODE_FOR_cond_addv8si },
  { 0x9b00057, CODE_FOR_cond_addv4di },
  { 0x9b00059, CODE_FOR_cond_addv64qi },
  { 0x9b0005a, CODE_FOR_cond_addv32hi },
  { 0x9b0005b, CODE_FOR_cond_addv16si },
  { 0x9b0005c, CODE_FOR_cond_addv8di },
  { 0x9b0006b, CODE_FOR_cond_addv8hf },
  { 0x9b0006c, CODE_FOR_cond_addv4sf },
  { 0x9b0006d, CODE_FOR_cond_addv2df },
  { 0x9b0006f, CODE_FOR_cond_addv16hf },
  { 0x9b00070, CODE_FOR_cond_addv8sf },
  { 0x9b00071, CODE_FOR_cond_addv4df },
  { 0x9b00074, CODE_FOR_cond_addv32hf },
  { 0x9b00075, CODE_FOR_cond_addv16sf },
  { 0x9b00076, CODE_FOR_cond_addv8df },
  { 0x9c0004f, CODE_FOR_cond_subv16qi },
  { 0x9c00050, CODE_FOR_cond_subv8hi },
  { 0x9c00051, CODE_FOR_cond_subv4si },
  { 0x9c00052, CODE_FOR_cond_subv2di },
  { 0x9c00054, CODE_FOR_cond_subv32qi },
  { 0x9c00055, CODE_FOR_cond_subv16hi },
  { 0x9c00056, CODE_FOR_cond_subv8si },
  { 0x9c00057, CODE_FOR_cond_subv4di },
  { 0x9c00059, CODE_FOR_cond_subv64qi },
  { 0x9c0005a, CODE_FOR_cond_subv32hi },
  { 0x9c0005b, CODE_FOR_cond_subv16si },
  { 0x9c0005c, CODE_FOR_cond_subv8di },
  { 0x9c0006b, CODE_FOR_cond_subv8hf },
  { 0x9c0006c, CODE_FOR_cond_subv4sf },
  { 0x9c0006d, CODE_FOR_cond_subv2df },
  { 0x9c0006f, CODE_FOR_cond_subv16hf },
  { 0x9c00070, CODE_FOR_cond_subv8sf },
  { 0x9c00071, CODE_FOR_cond_subv4df },
  { 0x9c00074, CODE_FOR_cond_subv32hf },
  { 0x9c00075, CODE_FOR_cond_subv16sf },
  { 0x9c00076, CODE_FOR_cond_subv8df },
  { 0x9d00050, CODE_FOR_cond_mulv8hi },
  { 0x9d00051, CODE_FOR_cond_mulv4si },
  { 0x9d00052, CODE_FOR_cond_mulv2di },
  { 0x9d00055, CODE_FOR_cond_mulv16hi },
  { 0x9d00056, CODE_FOR_cond_mulv8si },
  { 0x9d00057, CODE_FOR_cond_mulv4di },
  { 0x9d0005a, CODE_FOR_cond_mulv32hi },
  { 0x9d0005b, CODE_FOR_cond_mulv16si },
  { 0x9d0005c, CODE_FOR_cond_mulv8di },
  { 0x9d0006b, CODE_FOR_cond_mulv8hf },
  { 0x9d0006c, CODE_FOR_cond_mulv4sf },
  { 0x9d0006d, CODE_FOR_cond_mulv2df },
  { 0x9d0006f, CODE_FOR_cond_mulv16hf },
  { 0x9d00070, CODE_FOR_cond_mulv8sf },
  { 0x9d00071, CODE_FOR_cond_mulv4df },
  { 0x9d00074, CODE_FOR_cond_mulv32hf },
  { 0x9d00075, CODE_FOR_cond_mulv16sf },
  { 0x9d00076, CODE_FOR_cond_mulv8df },
  { 0x9e0006b, CODE_FOR_cond_divv8hf },
  { 0x9e0006c, CODE_FOR_cond_divv4sf },
  { 0x9e0006d, CODE_FOR_cond_divv2df },
  { 0x9e0006f, CODE_FOR_cond_divv16hf },
  { 0x9e00070, CODE_FOR_cond_divv8sf },
  { 0x9e00071, CODE_FOR_cond_divv4df },
  { 0x9e00074, CODE_FOR_cond_divv32hf },
  { 0x9e00075, CODE_FOR_cond_divv16sf },
  { 0x9e00076, CODE_FOR_cond_divv8df },
  { 0xa200051, CODE_FOR_cond_andv4si },
  { 0xa200052, CODE_FOR_cond_andv2di },
  { 0xa200056, CODE_FOR_cond_andv8si },
  { 0xa200057, CODE_FOR_cond_andv4di },
  { 0xa20005b, CODE_FOR_cond_andv16si },
  { 0xa20005c, CODE_FOR_cond_andv8di },
  { 0xa300051, CODE_FOR_cond_iorv4si },
  { 0xa300052, CODE_FOR_cond_iorv2di },
  { 0xa300056, CODE_FOR_cond_iorv8si },
  { 0xa300057, CODE_FOR_cond_iorv4di },
  { 0xa30005b, CODE_FOR_cond_iorv16si },
  { 0xa30005c, CODE_FOR_cond_iorv8di },
  { 0xa400051, CODE_FOR_cond_xorv4si },
  { 0xa400052, CODE_FOR_cond_xorv2di },
  { 0xa400056, CODE_FOR_cond_xorv8si },
  { 0xa400057, CODE_FOR_cond_xorv4di },
  { 0xa40005b, CODE_FOR_cond_xorv16si },
  { 0xa40005c, CODE_FOR_cond_xorv8di },
  { 0xa500050, CODE_FOR_cond_ashlv8hi },
  { 0xa500051, CODE_FOR_cond_ashlv4si },
  { 0xa500052, CODE_FOR_cond_ashlv2di },
  { 0xa500055, CODE_FOR_cond_ashlv16hi },
  { 0xa500056, CODE_FOR_cond_ashlv8si },
  { 0xa500057, CODE_FOR_cond_ashlv4di },
  { 0xa50005a, CODE_FOR_cond_ashlv32hi },
  { 0xa50005b, CODE_FOR_cond_ashlv16si },
  { 0xa50005c, CODE_FOR_cond_ashlv8di },
  { 0xa600050, CODE_FOR_cond_ashrv8hi },
  { 0xa600051, CODE_FOR_cond_ashrv4si },
  { 0xa600052, CODE_FOR_cond_ashrv2di },
  { 0xa600055, CODE_FOR_cond_ashrv16hi },
  { 0xa600056, CODE_FOR_cond_ashrv8si },
  { 0xa600057, CODE_FOR_cond_ashrv4di },
  { 0xa60005a, CODE_FOR_cond_ashrv32hi },
  { 0xa60005b, CODE_FOR_cond_ashrv16si },
  { 0xa60005c, CODE_FOR_cond_ashrv8di },
  { 0xa700050, CODE_FOR_cond_lshrv8hi },
  { 0xa700051, CODE_FOR_cond_lshrv4si },
  { 0xa700052, CODE_FOR_cond_lshrv2di },
  { 0xa700055, CODE_FOR_cond_lshrv16hi },
  { 0xa700056, CODE_FOR_cond_lshrv8si },
  { 0xa700057, CODE_FOR_cond_lshrv4di },
  { 0xa70005a, CODE_FOR_cond_lshrv32hi },
  { 0xa70005b, CODE_FOR_cond_lshrv16si },
  { 0xa70005c, CODE_FOR_cond_lshrv8di },
  { 0xa80004f, CODE_FOR_cond_sminv16qi },
  { 0xa800050, CODE_FOR_cond_sminv8hi },
  { 0xa800051, CODE_FOR_cond_sminv4si },
  { 0xa800052, CODE_FOR_cond_sminv2di },
  { 0xa800054, CODE_FOR_cond_sminv32qi },
  { 0xa800055, CODE_FOR_cond_sminv16hi },
  { 0xa800056, CODE_FOR_cond_sminv8si },
  { 0xa800057, CODE_FOR_cond_sminv4di },
  { 0xa800059, CODE_FOR_cond_sminv64qi },
  { 0xa80005a, CODE_FOR_cond_sminv32hi },
  { 0xa80005b, CODE_FOR_cond_sminv16si },
  { 0xa80005c, CODE_FOR_cond_sminv8di },
  { 0xa80006b, CODE_FOR_cond_sminv8hf },
  { 0xa80006c, CODE_FOR_cond_sminv4sf },
  { 0xa80006d, CODE_FOR_cond_sminv2df },
  { 0xa80006f, CODE_FOR_cond_sminv16hf },
  { 0xa800070, CODE_FOR_cond_sminv8sf },
  { 0xa800071, CODE_FOR_cond_sminv4df },
  { 0xa800074, CODE_FOR_cond_sminv32hf },
  { 0xa800075, CODE_FOR_cond_sminv16sf },
  { 0xa800076, CODE_FOR_cond_sminv8df },
  { 0xa90004f, CODE_FOR_cond_smaxv16qi },
  { 0xa900050, CODE_FOR_cond_smaxv8hi },
  { 0xa900051, CODE_FOR_cond_smaxv4si },
  { 0xa900052, CODE_FOR_cond_smaxv2di },
  { 0xa900054, CODE_FOR_cond_smaxv32qi },
  { 0xa900055, CODE_FOR_cond_smaxv16hi },
  { 0xa900056, CODE_FOR_cond_smaxv8si },
  { 0xa900057, CODE_FOR_cond_smaxv4di },
  { 0xa900059, CODE_FOR_cond_smaxv64qi },
  { 0xa90005a, CODE_FOR_cond_smaxv32hi },
  { 0xa90005b, CODE_FOR_cond_smaxv16si },
  { 0xa90005c, CODE_FOR_cond_smaxv8di },
  { 0xa90006b, CODE_FOR_cond_smaxv8hf },
  { 0xa90006c, CODE_FOR_cond_smaxv4sf },
  { 0xa90006d, CODE_FOR_cond_smaxv2df },
  { 0xa90006f, CODE_FOR_cond_smaxv16hf },
  { 0xa900070, CODE_FOR_cond_smaxv8sf },
  { 0xa900071, CODE_FOR_cond_smaxv4df },
  { 0xa900074, CODE_FOR_cond_smaxv32hf },
  { 0xa900075, CODE_FOR_cond_smaxv16sf },
  { 0xa900076, CODE_FOR_cond_smaxv8df },
  { 0xaa0004f, CODE_FOR_cond_uminv16qi },
  { 0xaa00050, CODE_FOR_cond_uminv8hi },
  { 0xaa00051, CODE_FOR_cond_uminv4si },
  { 0xaa00052, CODE_FOR_cond_uminv2di },
  { 0xaa00054, CODE_FOR_cond_uminv32qi },
  { 0xaa00055, CODE_FOR_cond_uminv16hi },
  { 0xaa00056, CODE_FOR_cond_uminv8si },
  { 0xaa00057, CODE_FOR_cond_uminv4di },
  { 0xaa00059, CODE_FOR_cond_uminv64qi },
  { 0xaa0005a, CODE_FOR_cond_uminv32hi },
  { 0xaa0005b, CODE_FOR_cond_uminv16si },
  { 0xaa0005c, CODE_FOR_cond_uminv8di },
  { 0xab0004f, CODE_FOR_cond_umaxv16qi },
  { 0xab00050, CODE_FOR_cond_umaxv8hi },
  { 0xab00051, CODE_FOR_cond_umaxv4si },
  { 0xab00052, CODE_FOR_cond_umaxv2di },
  { 0xab00054, CODE_FOR_cond_umaxv32qi },
  { 0xab00055, CODE_FOR_cond_umaxv16hi },
  { 0xab00056, CODE_FOR_cond_umaxv8si },
  { 0xab00057, CODE_FOR_cond_umaxv4di },
  { 0xab00059, CODE_FOR_cond_umaxv64qi },
  { 0xab0005a, CODE_FOR_cond_umaxv32hi },
  { 0xab0005b, CODE_FOR_cond_umaxv16si },
  { 0xab0005c, CODE_FOR_cond_umaxv8di },
  { 0xaf0006b, CODE_FOR_cond_fmav8hf },
  { 0xaf0006c, CODE_FOR_cond_fmav4sf },
  { 0xaf0006d, CODE_FOR_cond_fmav2df },
  { 0xaf0006f, CODE_FOR_cond_fmav16hf },
  { 0xaf00070, CODE_FOR_cond_fmav8sf },
  { 0xaf00071, CODE_FOR_cond_fmav4df },
  { 0xaf00074, CODE_FOR_cond_fmav32hf },
  { 0xaf00075, CODE_FOR_cond_fmav16sf },
  { 0xaf00076, CODE_FOR_cond_fmav8df },
  { 0xb00006b, CODE_FOR_cond_fmsv8hf },
  { 0xb00006c, CODE_FOR_cond_fmsv4sf },
  { 0xb00006d, CODE_FOR_cond_fmsv2df },
  { 0xb00006f, CODE_FOR_cond_fmsv16hf },
  { 0xb000070, CODE_FOR_cond_fmsv8sf },
  { 0xb000071, CODE_FOR_cond_fmsv4df },
  { 0xb000074, CODE_FOR_cond_fmsv32hf },
  { 0xb000075, CODE_FOR_cond_fmsv16sf },
  { 0xb000076, CODE_FOR_cond_fmsv8df },
  { 0xb10006b, CODE_FOR_cond_fnmav8hf },
  { 0xb10006c, CODE_FOR_cond_fnmav4sf },
  { 0xb10006d, CODE_FOR_cond_fnmav2df },
  { 0xb10006f, CODE_FOR_cond_fnmav16hf },
  { 0xb100070, CODE_FOR_cond_fnmav8sf },
  { 0xb100071, CODE_FOR_cond_fnmav4df },
  { 0xb100074, CODE_FOR_cond_fnmav32hf },
  { 0xb100075, CODE_FOR_cond_fnmav16sf },
  { 0xb100076, CODE_FOR_cond_fnmav8df },
  { 0xb20006b, CODE_FOR_cond_fnmsv8hf },
  { 0xb20006c, CODE_FOR_cond_fnmsv4sf },
  { 0xb20006d, CODE_FOR_cond_fnmsv2df },
  { 0xb20006f, CODE_FOR_cond_fnmsv16hf },
  { 0xb200070, CODE_FOR_cond_fnmsv8sf },
  { 0xb200071, CODE_FOR_cond_fnmsv4df },
  { 0xb200074, CODE_FOR_cond_fnmsv32hf },
  { 0xb200075, CODE_FOR_cond_fnmsv16sf },
  { 0xb200076, CODE_FOR_cond_fnmsv8df },
  { 0xd100002, CODE_FOR_cstorecc4 },
  { 0xd10000f, CODE_FOR_cstoreqi4 },
  { 0xd100010, CODE_FOR_cstorehi4 },
  { 0xd100011, CODE_FOR_cstoresi4 },
  { 0xd100012, CODE_FOR_cstoredi4 },
  { 0xd10002b, CODE_FOR_cstorehf4 },
  { 0xd10002c, CODE_FOR_cstorebf4 },
  { 0xd10002d, CODE_FOR_cstoresf4 },
  { 0xd10002e, CODE_FOR_cstoredf4 },
  { 0xd10002f, CODE_FOR_cstorexf4 },
  { 0xd30000f, CODE_FOR_addvqi4 },
  { 0xd300010, CODE_FOR_addvhi4 },
  { 0xd300011, CODE_FOR_addvsi4 },
  { 0xd300012, CODE_FOR_addvdi4 },
  { 0xd40000f, CODE_FOR_subvqi4 },
  { 0xd400010, CODE_FOR_subvhi4 },
  { 0xd400011, CODE_FOR_subvsi4 },
  { 0xd400012, CODE_FOR_subvdi4 },
  { 0xd50000f, CODE_FOR_mulvqi4 },
  { 0xd500010, CODE_FOR_mulvhi4 },
  { 0xd500011, CODE_FOR_mulvsi4 },
  { 0xd60000f, CODE_FOR_uaddvqi4 },
  { 0xd600010, CODE_FOR_uaddvhi4 },
  { 0xd600011, CODE_FOR_uaddvsi4 },
  { 0xd600012, CODE_FOR_uaddvdi4 },
  { 0xd70000f, CODE_FOR_usubvqi4 },
  { 0xd700010, CODE_FOR_usubvhi4 },
  { 0xd700011, CODE_FOR_usubvsi4 },
  { 0xd80000f, CODE_FOR_umulvqi4 },
  { 0xd800010, CODE_FOR_umulvhi4 },
  { 0xd800011, CODE_FOR_umulvsi4 },
  { 0xd90000f, CODE_FOR_negvqi3 },
  { 0xd900010, CODE_FOR_negvhi3 },
  { 0xd900011, CODE_FOR_negvsi3 },
  { 0xda00011, CODE_FOR_uaddcsi5 },
  { 0xdb00011, CODE_FOR_usubcsi5 },
  { 0xdd0002d, CODE_FOR_spaceshipsf3 },
  { 0xdd0002e, CODE_FOR_spaceshipdf3 },
  { 0xdd0002f, CODE_FOR_spaceshipxf3 },
  { 0xde00011, CODE_FOR_smulsi3_highpart },
  { 0xde00046, CODE_FOR_smulv2hi3_highpart },
  { 0xde00050, CODE_FOR_smulv8hi3_highpart },
  { 0xde00055, CODE_FOR_smulv16hi3_highpart },
  { 0xde0005a, CODE_FOR_smulv32hi3_highpart },
  { 0xdf00011, CODE_FOR_umulsi3_highpart },
  { 0xdf00046, CODE_FOR_umulv2hi3_highpart },
  { 0xdf00050, CODE_FOR_umulv8hi3_highpart },
  { 0xdf00055, CODE_FOR_umulv16hi3_highpart },
  { 0xdf0005a, CODE_FOR_umulv32hi3_highpart },
  { 0xe000011, CODE_FOR_cmpmemsi },
  { 0xe200011, CODE_FOR_cmpstrnsi },
  { 0xe300011, CODE_FOR_cpymemsi },
  { 0xe500011, CODE_FOR_setmemsi },
  { 0xe600011, CODE_FOR_strlensi },
  { 0xe600012, CODE_FOR_strlendi },
  { 0xe80002b, CODE_FOR_fmahf4 },
  { 0xe80002d, CODE_FOR_fmasf4 },
  { 0xe80002e, CODE_FOR_fmadf4 },
  { 0xe800064, CODE_FOR_fmav2hf4 },
  { 0xe80006b, CODE_FOR_fmav8hf4 },
  { 0xe80006c, CODE_FOR_fmav4sf4 },
  { 0xe80006d, CODE_FOR_fmav2df4 },
  { 0xe80006f, CODE_FOR_fmav16hf4 },
  { 0xe800070, CODE_FOR_fmav8sf4 },
  { 0xe800071, CODE_FOR_fmav4df4 },
  { 0xe800074, CODE_FOR_fmav32hf4 },
  { 0xe800075, CODE_FOR_fmav16sf4 },
  { 0xe800076, CODE_FOR_fmav8df4 },
  { 0xe90002b, CODE_FOR_fmshf4 },
  { 0xe90002d, CODE_FOR_fmssf4 },
  { 0xe90002e, CODE_FOR_fmsdf4 },
  { 0xe900064, CODE_FOR_fmsv2hf4 },
  { 0xe90006b, CODE_FOR_fmsv8hf4 },
  { 0xe90006c, CODE_FOR_fmsv4sf4 },
  { 0xe90006d, CODE_FOR_fmsv2df4 },
  { 0xe90006f, CODE_FOR_fmsv16hf4 },
  { 0xe900070, CODE_FOR_fmsv8sf4 },
  { 0xe900071, CODE_FOR_fmsv4df4 },
  { 0xe900074, CODE_FOR_fmsv32hf4 },
  { 0xe900075, CODE_FOR_fmsv16sf4 },
  { 0xe900076, CODE_FOR_fmsv8df4 },
  { 0xea0002b, CODE_FOR_fnmahf4 },
  { 0xea0002d, CODE_FOR_fnmasf4 },
  { 0xea0002e, CODE_FOR_fnmadf4 },
  { 0xea00064, CODE_FOR_fnmav2hf4 },
  { 0xea0006b, CODE_FOR_fnmav8hf4 },
  { 0xea0006c, CODE_FOR_fnmav4sf4 },
  { 0xea0006d, CODE_FOR_fnmav2df4 },
  { 0xea0006f, CODE_FOR_fnmav16hf4 },
  { 0xea00070, CODE_FOR_fnmav8sf4 },
  { 0xea00071, CODE_FOR_fnmav4df4 },
  { 0xea00074, CODE_FOR_fnmav32hf4 },
  { 0xea00075, CODE_FOR_fnmav16sf4 },
  { 0xea00076, CODE_FOR_fnmav8df4 },
  { 0xeb0002b, CODE_FOR_fnmshf4 },
  { 0xeb0002d, CODE_FOR_fnmssf4 },
  { 0xeb0002e, CODE_FOR_fnmsdf4 },
  { 0xeb00064, CODE_FOR_fnmsv2hf4 },
  { 0xeb0006b, CODE_FOR_fnmsv8hf4 },
  { 0xeb0006c, CODE_FOR_fnmsv4sf4 },
  { 0xeb0006d, CODE_FOR_fnmsv2df4 },
  { 0xeb0006f, CODE_FOR_fnmsv16hf4 },
  { 0xeb00070, CODE_FOR_fnmsv8sf4 },
  { 0xeb00071, CODE_FOR_fnmsv4df4 },
  { 0xeb00074, CODE_FOR_fnmsv32hf4 },
  { 0xeb00075, CODE_FOR_fnmsv16sf4 },
  { 0xeb00076, CODE_FOR_fnmsv8df4 },
  { 0xec0002b, CODE_FOR_rinthf2 },
  { 0xec0002d, CODE_FOR_rintsf2 },
  { 0xec0002e, CODE_FOR_rintdf2 },
  { 0xec0002f, CODE_FOR_rintxf2 },
  { 0xec00064, CODE_FOR_rintv2hf2 },
  { 0xec0006b, CODE_FOR_rintv8hf2 },
  { 0xec0006c, CODE_FOR_rintv4sf2 },
  { 0xec0006d, CODE_FOR_rintv2df2 },
  { 0xec0006f, CODE_FOR_rintv16hf2 },
  { 0xec00070, CODE_FOR_rintv8sf2 },
  { 0xec00071, CODE_FOR_rintv4df2 },
  { 0xec00074, CODE_FOR_rintv32hf2 },
  { 0xec00075, CODE_FOR_rintv16sf2 },
  { 0xec00076, CODE_FOR_rintv8df2 },
  { 0xed0002b, CODE_FOR_roundhf2 },
  { 0xed0002d, CODE_FOR_roundsf2 },
  { 0xed0002e, CODE_FOR_rounddf2 },
  { 0xed0002f, CODE_FOR_roundxf2 },
  { 0xed00064, CODE_FOR_roundv2hf2 },
  { 0xed0006b, CODE_FOR_roundv8hf2 },
  { 0xed0006c, CODE_FOR_roundv4sf2 },
  { 0xed0006d, CODE_FOR_roundv2df2 },
  { 0xed0006f, CODE_FOR_roundv16hf2 },
  { 0xed00070, CODE_FOR_roundv8sf2 },
  { 0xed00071, CODE_FOR_roundv4df2 },
  { 0xed00074, CODE_FOR_roundv32hf2 },
  { 0xed00075, CODE_FOR_roundv16sf2 },
  { 0xed00076, CODE_FOR_roundv8df2 },
  { 0xee0002b, CODE_FOR_roundevenhf2 },
  { 0xee0002d, CODE_FOR_roundevensf2 },
  { 0xee0002e, CODE_FOR_roundevendf2 },
  { 0xee0002f, CODE_FOR_roundevenxf2 },
  { 0xef0002b, CODE_FOR_floorhf2 },
  { 0xef0002d, CODE_FOR_floorsf2 },
  { 0xef0002e, CODE_FOR_floordf2 },
  { 0xef0002f, CODE_FOR_floorxf2 },
  { 0xef00064, CODE_FOR_floorv2hf2 },
  { 0xef0006b, CODE_FOR_floorv8hf2 },
  { 0xef0006c, CODE_FOR_floorv4sf2 },
  { 0xef0006d, CODE_FOR_floorv2df2 },
  { 0xef0006f, CODE_FOR_floorv16hf2 },
  { 0xef00070, CODE_FOR_floorv8sf2 },
  { 0xef00071, CODE_FOR_floorv4df2 },
  { 0xef00074, CODE_FOR_floorv32hf2 },
  { 0xef00075, CODE_FOR_floorv16sf2 },
  { 0xef00076, CODE_FOR_floorv8df2 },
  { 0xf00002b, CODE_FOR_ceilhf2 },
  { 0xf00002d, CODE_FOR_ceilsf2 },
  { 0xf00002e, CODE_FOR_ceildf2 },
  { 0xf00002f, CODE_FOR_ceilxf2 },
  { 0xf000064, CODE_FOR_ceilv2hf2 },
  { 0xf00006b, CODE_FOR_ceilv8hf2 },
  { 0xf00006c, CODE_FOR_ceilv4sf2 },
  { 0xf00006d, CODE_FOR_ceilv2df2 },
  { 0xf00006f, CODE_FOR_ceilv16hf2 },
  { 0xf000070, CODE_FOR_ceilv8sf2 },
  { 0xf000071, CODE_FOR_ceilv4df2 },
  { 0xf000074, CODE_FOR_ceilv32hf2 },
  { 0xf000075, CODE_FOR_ceilv16sf2 },
  { 0xf000076, CODE_FOR_ceilv8df2 },
  { 0xf10002b, CODE_FOR_btrunchf2 },
  { 0xf10002d, CODE_FOR_btruncsf2 },
  { 0xf10002e, CODE_FOR_btruncdf2 },
  { 0xf10002f, CODE_FOR_btruncxf2 },
  { 0xf100064, CODE_FOR_btruncv2hf2 },
  { 0xf10006b, CODE_FOR_btruncv8hf2 },
  { 0xf10006c, CODE_FOR_btruncv4sf2 },
  { 0xf10006d, CODE_FOR_btruncv2df2 },
  { 0xf10006f, CODE_FOR_btruncv16hf2 },
  { 0xf100070, CODE_FOR_btruncv8sf2 },
  { 0xf100071, CODE_FOR_btruncv4df2 },
  { 0xf100074, CODE_FOR_btruncv32hf2 },
  { 0xf100075, CODE_FOR_btruncv16sf2 },
  { 0xf100076, CODE_FOR_btruncv8df2 },
  { 0xf20002b, CODE_FOR_nearbyinthf2 },
  { 0xf20002d, CODE_FOR_nearbyintsf2 },
  { 0xf20002e, CODE_FOR_nearbyintdf2 },
  { 0xf20002f, CODE_FOR_nearbyintxf2 },
  { 0xf200064, CODE_FOR_nearbyintv2hf2 },
  { 0xf20006b, CODE_FOR_nearbyintv8hf2 },
  { 0xf20006c, CODE_FOR_nearbyintv4sf2 },
  { 0xf20006d, CODE_FOR_nearbyintv2df2 },
  { 0xf20006f, CODE_FOR_nearbyintv16hf2 },
  { 0xf200070, CODE_FOR_nearbyintv8sf2 },
  { 0xf200071, CODE_FOR_nearbyintv4df2 },
  { 0xf200074, CODE_FOR_nearbyintv32hf2 },
  { 0xf200075, CODE_FOR_nearbyintv16sf2 },
  { 0xf200076, CODE_FOR_nearbyintv8df2 },
  { 0xf30002d, CODE_FOR_acossf2 },
  { 0xf30002e, CODE_FOR_acosdf2 },
  { 0xf30002f, CODE_FOR_acosxf2 },
  { 0xf40002d, CODE_FOR_acoshsf2 },
  { 0xf40002e, CODE_FOR_acoshdf2 },
  { 0xf40002f, CODE_FOR_acoshxf2 },
  { 0xf50002d, CODE_FOR_asinsf2 },
  { 0xf50002e, CODE_FOR_asindf2 },
  { 0xf50002f, CODE_FOR_asinxf2 },
  { 0xf60002d, CODE_FOR_asinhsf2 },
  { 0xf60002e, CODE_FOR_asinhdf2 },
  { 0xf60002f, CODE_FOR_asinhxf2 },
  { 0xf70002d, CODE_FOR_atan2sf3 },
  { 0xf70002e, CODE_FOR_atan2df3 },
  { 0xf70002f, CODE_FOR_atan2xf3 },
  { 0xf80002d, CODE_FOR_atansf2 },
  { 0xf80002e, CODE_FOR_atandf2 },
  { 0xf80002f, CODE_FOR_atanxf2 },
  { 0xf90002d, CODE_FOR_atanhsf2 },
  { 0xf90002e, CODE_FOR_atanhdf2 },
  { 0xf90002f, CODE_FOR_atanhxf2 },
  { 0xfa0002b, CODE_FOR_copysignhf3 },
  { 0xfa0002d, CODE_FOR_copysignsf3 },
  { 0xfa0002e, CODE_FOR_copysigndf3 },
  { 0xfa00030, CODE_FOR_copysigntf3 },
  { 0xfa00064, CODE_FOR_copysignv2hf3 },
  { 0xfa0006b, CODE_FOR_copysignv8hf3 },
  { 0xfa0006c, CODE_FOR_copysignv4sf3 },
  { 0xfa0006d, CODE_FOR_copysignv2df3 },
  { 0xfa0006f, CODE_FOR_copysignv16hf3 },
  { 0xfa00070, CODE_FOR_copysignv8sf3 },
  { 0xfa00071, CODE_FOR_copysignv4df3 },
  { 0xfa00074, CODE_FOR_copysignv32hf3 },
  { 0xfa00075, CODE_FOR_copysignv16sf3 },
  { 0xfa00076, CODE_FOR_copysignv8df3 },
  { 0xfb0002b, CODE_FOR_xorsignhf3 },
  { 0xfb0002d, CODE_FOR_xorsignsf3 },
  { 0xfb0002e, CODE_FOR_xorsigndf3 },
  { 0xfb00064, CODE_FOR_xorsignv2hf3 },
  { 0xfb0006b, CODE_FOR_xorsignv8hf3 },
  { 0xfb0006c, CODE_FOR_xorsignv4sf3 },
  { 0xfb0006d, CODE_FOR_xorsignv2df3 },
  { 0xfb0006f, CODE_FOR_xorsignv16hf3 },
  { 0xfb00070, CODE_FOR_xorsignv8sf3 },
  { 0xfb00071, CODE_FOR_xorsignv4df3 },
  { 0xfb00074, CODE_FOR_xorsignv32hf3 },
  { 0xfb00075, CODE_FOR_xorsignv16sf3 },
  { 0xfb00076, CODE_FOR_xorsignv8df3 },
  { 0xfe00067, CODE_FOR_cmulv4hf3 },
  { 0xfe0006b, CODE_FOR_cmulv8hf3 },
  { 0xfe0006f, CODE_FOR_cmulv16hf3 },
  { 0xfe00074, CODE_FOR_cmulv32hf3 },
  { 0xff00067, CODE_FOR_cmul_conjv4hf3 },
  { 0xff0006b, CODE_FOR_cmul_conjv8hf3 },
  { 0xff0006f, CODE_FOR_cmul_conjv16hf3 },
  { 0xff00074, CODE_FOR_cmul_conjv32hf3 },
  { 0x10000067, CODE_FOR_cmlav4hf4 },
  { 0x1000006b, CODE_FOR_cmlav8hf4 },
  { 0x1000006f, CODE_FOR_cmlav16hf4 },
  { 0x10000074, CODE_FOR_cmlav32hf4 },
  { 0x10100067, CODE_FOR_cmla_conjv4hf4 },
  { 0x1010006b, CODE_FOR_cmla_conjv8hf4 },
  { 0x1010006f, CODE_FOR_cmla_conjv16hf4 },
  { 0x10100074, CODE_FOR_cmla_conjv32hf4 },
  { 0x1040002d, CODE_FOR_cossf2 },
  { 0x1040002e, CODE_FOR_cosdf2 },
  { 0x1040002f, CODE_FOR_cosxf2 },
  { 0x1050002d, CODE_FOR_coshsf2 },
  { 0x1050002e, CODE_FOR_coshdf2 },
  { 0x1050002f, CODE_FOR_coshxf2 },
  { 0x1060002d, CODE_FOR_exp10sf2 },
  { 0x1060002e, CODE_FOR_exp10df2 },
  { 0x1060002f, CODE_FOR_exp10xf2 },
  { 0x1070002d, CODE_FOR_exp2sf2 },
  { 0x1070002e, CODE_FOR_exp2df2 },
  { 0x1070002f, CODE_FOR_exp2xf2 },
  { 0x10700075, CODE_FOR_exp2v16sf2 },
  { 0x10700076, CODE_FOR_exp2v8df2 },
  { 0x1080002d, CODE_FOR_expsf2 },
  { 0x1080002e, CODE_FOR_expdf2 },
  { 0x1080002f, CODE_FOR_expxf2 },
  { 0x1090002d, CODE_FOR_expm1sf2 },
  { 0x1090002e, CODE_FOR_expm1df2 },
  { 0x1090002f, CODE_FOR_expm1xf2 },
  { 0x10a0002d, CODE_FOR_fmodsf3 },
  { 0x10a0002e, CODE_FOR_fmoddf3 },
  { 0x10a0002f, CODE_FOR_fmodxf3 },
  { 0x10b0002d, CODE_FOR_hypotsf3 },
  { 0x10b0002e, CODE_FOR_hypotdf3 },
  { 0x10c0002d, CODE_FOR_ilogbsf2 },
  { 0x10c0002e, CODE_FOR_ilogbdf2 },
  { 0x10c0002f, CODE_FOR_ilogbxf2 },
  { 0x10e0002f, CODE_FOR_issignalingxf2 },
  { 0x10f0002d, CODE_FOR_ldexpsf3 },
  { 0x10f0002e, CODE_FOR_ldexpdf3 },
  { 0x10f0002f, CODE_FOR_ldexpxf3 },
  { 0x1100002d, CODE_FOR_log10sf2 },
  { 0x1100002e, CODE_FOR_log10df2 },
  { 0x1100002f, CODE_FOR_log10xf2 },
  { 0x1110002d, CODE_FOR_log1psf2 },
  { 0x1110002e, CODE_FOR_log1pdf2 },
  { 0x1110002f, CODE_FOR_log1pxf2 },
  { 0x1120002d, CODE_FOR_log2sf2 },
  { 0x1120002e, CODE_FOR_log2df2 },
  { 0x1120002f, CODE_FOR_log2xf2 },
  { 0x1130002d, CODE_FOR_logsf2 },
  { 0x1130002e, CODE_FOR_logdf2 },
  { 0x1130002f, CODE_FOR_logxf2 },
  { 0x1140002d, CODE_FOR_logbsf2 },
  { 0x1140002e, CODE_FOR_logbdf2 },
  { 0x1140002f, CODE_FOR_logbxf2 },
  { 0x1160002d, CODE_FOR_remaindersf3 },
  { 0x1160002e, CODE_FOR_remainderdf3 },
  { 0x1160002f, CODE_FOR_remainderxf3 },
  { 0x1170002b, CODE_FOR_rsqrthf2 },
  { 0x1170002d, CODE_FOR_rsqrtsf2 },
  { 0x1170006b, CODE_FOR_rsqrtv8hf2 },
  { 0x1170006c, CODE_FOR_rsqrtv4sf2 },
  { 0x1170006f, CODE_FOR_rsqrtv16hf2 },
  { 0x11700070, CODE_FOR_rsqrtv8sf2 },
  { 0x11700074, CODE_FOR_rsqrtv32hf2 },
  { 0x11700075, CODE_FOR_rsqrtv16sf2 },
  { 0x1180002d, CODE_FOR_scalbsf3 },
  { 0x1180002e, CODE_FOR_scalbdf3 },
  { 0x1180002f, CODE_FOR_scalbxf3 },
  { 0x1190002d, CODE_FOR_signbitsf2 },
  { 0x1190002e, CODE_FOR_signbitdf2 },
  { 0x1190002f, CODE_FOR_signbitxf2 },
  { 0x11900030, CODE_FOR_signbittf2 },
  { 0x11900064, CODE_FOR_signbitv2hf2 },
  { 0x1190006c, CODE_FOR_signbitv4sf2 },
  { 0x11900070, CODE_FOR_signbitv8sf2 },
  { 0x11900075, CODE_FOR_signbitv16sf2 },
  { 0x11a0002d, CODE_FOR_significandsf2 },
  { 0x11a0002e, CODE_FOR_significanddf2 },
  { 0x11a0002f, CODE_FOR_significandxf2 },
  { 0x11b0002d, CODE_FOR_sinsf2 },
  { 0x11b0002e, CODE_FOR_sindf2 },
  { 0x11b0002f, CODE_FOR_sinxf2 },
  { 0x11c0002d, CODE_FOR_sincossf3 },
  { 0x11c0002e, CODE_FOR_sincosdf3 },
  { 0x11c0002f, CODE_FOR_sincosxf3 },
  { 0x11d0002d, CODE_FOR_sinhsf2 },
  { 0x11d0002e, CODE_FOR_sinhdf2 },
  { 0x11d0002f, CODE_FOR_sinhxf2 },
  { 0x11e0002d, CODE_FOR_tansf2 },
  { 0x11e0002e, CODE_FOR_tandf2 },
  { 0x11e0002f, CODE_FOR_tanxf2 },
  { 0x11f0002d, CODE_FOR_tanhsf2 },
  { 0x11f0002e, CODE_FOR_tanhdf2 },
  { 0x11f0002f, CODE_FOR_tanhxf2 },
  { 0x12700045, CODE_FOR_reduc_smax_scal_v4qi },
  { 0x1270004f, CODE_FOR_reduc_smax_scal_v16qi },
  { 0x12700050, CODE_FOR_reduc_smax_scal_v8hi },
  { 0x12700051, CODE_FOR_reduc_smax_scal_v4si },
  { 0x12700052, CODE_FOR_reduc_smax_scal_v2di },
  { 0x12700054, CODE_FOR_reduc_smax_scal_v32qi },
  { 0x12700055, CODE_FOR_reduc_smax_scal_v16hi },
  { 0x12700056, CODE_FOR_reduc_smax_scal_v8si },
  { 0x12700057, CODE_FOR_reduc_smax_scal_v4di },
  { 0x12700059, CODE_FOR_reduc_smax_scal_v64qi },
  { 0x1270005a, CODE_FOR_reduc_smax_scal_v32hi },
  { 0x1270005b, CODE_FOR_reduc_smax_scal_v16si },
  { 0x1270005c, CODE_FOR_reduc_smax_scal_v8di },
  { 0x1270006b, CODE_FOR_reduc_smax_scal_v8hf },
  { 0x1270006c, CODE_FOR_reduc_smax_scal_v4sf },
  { 0x1270006d, CODE_FOR_reduc_smax_scal_v2df },
  { 0x1270006f, CODE_FOR_reduc_smax_scal_v16hf },
  { 0x12700070, CODE_FOR_reduc_smax_scal_v8sf },
  { 0x12700071, CODE_FOR_reduc_smax_scal_v4df },
  { 0x12700074, CODE_FOR_reduc_smax_scal_v32hf },
  { 0x12700075, CODE_FOR_reduc_smax_scal_v16sf },
  { 0x12700076, CODE_FOR_reduc_smax_scal_v8df },
  { 0x12800045, CODE_FOR_reduc_smin_scal_v4qi },
  { 0x1280004f, CODE_FOR_reduc_smin_scal_v16qi },
  { 0x12800050, CODE_FOR_reduc_smin_scal_v8hi },
  { 0x12800051, CODE_FOR_reduc_smin_scal_v4si },
  { 0x12800052, CODE_FOR_reduc_smin_scal_v2di },
  { 0x12800054, CODE_FOR_reduc_smin_scal_v32qi },
  { 0x12800055, CODE_FOR_reduc_smin_scal_v16hi },
  { 0x12800056, CODE_FOR_reduc_smin_scal_v8si },
  { 0x12800057, CODE_FOR_reduc_smin_scal_v4di },
  { 0x12800059, CODE_FOR_reduc_smin_scal_v64qi },
  { 0x1280005a, CODE_FOR_reduc_smin_scal_v32hi },
  { 0x1280005b, CODE_FOR_reduc_smin_scal_v16si },
  { 0x1280005c, CODE_FOR_reduc_smin_scal_v8di },
  { 0x1280006b, CODE_FOR_reduc_smin_scal_v8hf },
  { 0x1280006c, CODE_FOR_reduc_smin_scal_v4sf },
  { 0x1280006d, CODE_FOR_reduc_smin_scal_v2df },
  { 0x1280006f, CODE_FOR_reduc_smin_scal_v16hf },
  { 0x12800070, CODE_FOR_reduc_smin_scal_v8sf },
  { 0x12800071, CODE_FOR_reduc_smin_scal_v4df },
  { 0x12800074, CODE_FOR_reduc_smin_scal_v32hf },
  { 0x12800075, CODE_FOR_reduc_smin_scal_v16sf },
  { 0x12800076, CODE_FOR_reduc_smin_scal_v8df },
  { 0x12900045, CODE_FOR_reduc_plus_scal_v4qi },
  { 0x1290004f, CODE_FOR_reduc_plus_scal_v16qi },
  { 0x12900050, CODE_FOR_reduc_plus_scal_v8hi },
  { 0x12900051, CODE_FOR_reduc_plus_scal_v4si },
  { 0x12900052, CODE_FOR_reduc_plus_scal_v2di },
  { 0x12900054, CODE_FOR_reduc_plus_scal_v32qi },
  { 0x12900055, CODE_FOR_reduc_plus_scal_v16hi },
  { 0x12900056, CODE_FOR_reduc_plus_scal_v8si },
  { 0x12900057, CODE_FOR_reduc_plus_scal_v4di },
  { 0x12900059, CODE_FOR_reduc_plus_scal_v64qi },
  { 0x1290005a, CODE_FOR_reduc_plus_scal_v32hi },
  { 0x1290005b, CODE_FOR_reduc_plus_scal_v16si },
  { 0x1290005c, CODE_FOR_reduc_plus_scal_v8di },
  { 0x1290006b, CODE_FOR_reduc_plus_scal_v8hf },
  { 0x1290006c, CODE_FOR_reduc_plus_scal_v4sf },
  { 0x1290006d, CODE_FOR_reduc_plus_scal_v2df },
  { 0x1290006f, CODE_FOR_reduc_plus_scal_v16hf },
  { 0x12900070, CODE_FOR_reduc_plus_scal_v8sf },
  { 0x12900071, CODE_FOR_reduc_plus_scal_v4df },
  { 0x12900074, CODE_FOR_reduc_plus_scal_v32hf },
  { 0x12900075, CODE_FOR_reduc_plus_scal_v16sf },
  { 0x12900076, CODE_FOR_reduc_plus_scal_v8df },
  { 0x12a00045, CODE_FOR_reduc_umax_scal_v4qi },
  { 0x12a00054, CODE_FOR_reduc_umax_scal_v32qi },
  { 0x12a00055, CODE_FOR_reduc_umax_scal_v16hi },
  { 0x12a00056, CODE_FOR_reduc_umax_scal_v8si },
  { 0x12a00057, CODE_FOR_reduc_umax_scal_v4di },
  { 0x12a00059, CODE_FOR_reduc_umax_scal_v64qi },
  { 0x12a0005a, CODE_FOR_reduc_umax_scal_v32hi },
  { 0x12a0005b, CODE_FOR_reduc_umax_scal_v16si },
  { 0x12a0005c, CODE_FOR_reduc_umax_scal_v8di },
  { 0x12b00045, CODE_FOR_reduc_umin_scal_v4qi },
  { 0x12b00050, CODE_FOR_reduc_umin_scal_v8hi },
  { 0x12b00054, CODE_FOR_reduc_umin_scal_v32qi },
  { 0x12b00055, CODE_FOR_reduc_umin_scal_v16hi },
  { 0x12b00056, CODE_FOR_reduc_umin_scal_v8si },
  { 0x12b00057, CODE_FOR_reduc_umin_scal_v4di },
  { 0x12b00059, CODE_FOR_reduc_umin_scal_v64qi },
  { 0x12b0005a, CODE_FOR_reduc_umin_scal_v32hi },
  { 0x12b0005b, CODE_FOR_reduc_umin_scal_v16si },
  { 0x12b0005c, CODE_FOR_reduc_umin_scal_v8di },
  { 0x12c00045, CODE_FOR_reduc_and_scal_v4qi },
  { 0x12c0004f, CODE_FOR_reduc_and_scal_v16qi },
  { 0x12c00050, CODE_FOR_reduc_and_scal_v8hi },
  { 0x12c00051, CODE_FOR_reduc_and_scal_v4si },
  { 0x12c00052, CODE_FOR_reduc_and_scal_v2di },
  { 0x12c00054, CODE_FOR_reduc_and_scal_v32qi },
  { 0x12c00055, CODE_FOR_reduc_and_scal_v16hi },
  { 0x12c00056, CODE_FOR_reduc_and_scal_v8si },
  { 0x12c00057, CODE_FOR_reduc_and_scal_v4di },
  { 0x12c00059, CODE_FOR_reduc_and_scal_v64qi },
  { 0x12c0005a, CODE_FOR_reduc_and_scal_v32hi },
  { 0x12c0005b, CODE_FOR_reduc_and_scal_v16si },
  { 0x12c0005c, CODE_FOR_reduc_and_scal_v8di },
  { 0x12d00045, CODE_FOR_reduc_ior_scal_v4qi },
  { 0x12d0004f, CODE_FOR_reduc_ior_scal_v16qi },
  { 0x12d00050, CODE_FOR_reduc_ior_scal_v8hi },
  { 0x12d00051, CODE_FOR_reduc_ior_scal_v4si },
  { 0x12d00052, CODE_FOR_reduc_ior_scal_v2di },
  { 0x12d00054, CODE_FOR_reduc_ior_scal_v32qi },
  { 0x12d00055, CODE_FOR_reduc_ior_scal_v16hi },
  { 0x12d00056, CODE_FOR_reduc_ior_scal_v8si },
  { 0x12d00057, CODE_FOR_reduc_ior_scal_v4di },
  { 0x12d00059, CODE_FOR_reduc_ior_scal_v64qi },
  { 0x12d0005a, CODE_FOR_reduc_ior_scal_v32hi },
  { 0x12d0005b, CODE_FOR_reduc_ior_scal_v16si },
  { 0x12d0005c, CODE_FOR_reduc_ior_scal_v8di },
  { 0x12e00045, CODE_FOR_reduc_xor_scal_v4qi },
  { 0x12e0004f, CODE_FOR_reduc_xor_scal_v16qi },
  { 0x12e00050, CODE_FOR_reduc_xor_scal_v8hi },
  { 0x12e00051, CODE_FOR_reduc_xor_scal_v4si },
  { 0x12e00052, CODE_FOR_reduc_xor_scal_v2di },
  { 0x12e00054, CODE_FOR_reduc_xor_scal_v32qi },
  { 0x12e00055, CODE_FOR_reduc_xor_scal_v16hi },
  { 0x12e00056, CODE_FOR_reduc_xor_scal_v8si },
  { 0x12e00057, CODE_FOR_reduc_xor_scal_v4di },
  { 0x12e00059, CODE_FOR_reduc_xor_scal_v64qi },
  { 0x12e0005a, CODE_FOR_reduc_xor_scal_v32hi },
  { 0x12e0005b, CODE_FOR_reduc_xor_scal_v16si },
  { 0x12e0005c, CODE_FOR_reduc_xor_scal_v8di },
  { 0x13a00044, CODE_FOR_uavgv2qi3_ceil },
  { 0x13a00045, CODE_FOR_uavgv4qi3_ceil },
  { 0x13a00046, CODE_FOR_uavgv2hi3_ceil },
  { 0x13a0004f, CODE_FOR_uavgv16qi3_ceil },
  { 0x13a00050, CODE_FOR_uavgv8hi3_ceil },
  { 0x13a00054, CODE_FOR_uavgv32qi3_ceil },
  { 0x13a00055, CODE_FOR_uavgv16hi3_ceil },
  { 0x13a00059, CODE_FOR_uavgv64qi3_ceil },
  { 0x13a0005a, CODE_FOR_uavgv32hi3_ceil },
  { 0x13b0004f, CODE_FOR_sdot_prodv16qi },
  { 0x13b00050, CODE_FOR_sdot_prodv8hi },
  { 0x13b00051, CODE_FOR_sdot_prodv4si },
  { 0x13b00054, CODE_FOR_sdot_prodv32qi },
  { 0x13b00055, CODE_FOR_sdot_prodv16hi },
  { 0x13b00059, CODE_FOR_sdot_prodv64qi },
  { 0x13b0005a, CODE_FOR_sdot_prodv32hi },
  { 0x13d0004f, CODE_FOR_udot_prodv16qi },
  { 0x13d00050, CODE_FOR_udot_prodv8hi },
  { 0x13d00054, CODE_FOR_udot_prodv32qi },
  { 0x13d00055, CODE_FOR_udot_prodv16hi },
  { 0x13d00059, CODE_FOR_udot_prodv64qi },
  { 0x13e0004f, CODE_FOR_usdot_prodv16qi },
  { 0x13e00050, CODE_FOR_usdot_prodv8hi },
  { 0x13e00054, CODE_FOR_usdot_prodv32qi },
  { 0x13e00055, CODE_FOR_usdot_prodv16hi },
  { 0x13e00059, CODE_FOR_usdot_prodv64qi },
  { 0x1400004f, CODE_FOR_usadv16qi },
  { 0x14000054, CODE_FOR_usadv32qi },
  { 0x14000059, CODE_FOR_usadv64qi },
  { 0x14300046, CODE_FOR_smulhrsv2hi3 },
  { 0x14300050, CODE_FOR_smulhrsv8hi3 },
  { 0x14300055, CODE_FOR_smulhrsv16hi3 },
  { 0x1430005a, CODE_FOR_smulhrsv32hi3 },
  { 0x1470006d, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0x14700071, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0x14700076, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0x1490000f, CODE_FOR_vec_pack_trunc_qi },
  { 0x14900010, CODE_FOR_vec_pack_trunc_hi },
  { 0x14900011, CODE_FOR_vec_pack_trunc_si },
  { 0x14900046, CODE_FOR_vec_pack_trunc_v2hi },
  { 0x14900050, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x14900051, CODE_FOR_vec_pack_trunc_v4si },
  { 0x14900052, CODE_FOR_vec_pack_trunc_v2di },
  { 0x14900055, CODE_FOR_vec_pack_trunc_v16hi },
  { 0x14900056, CODE_FOR_vec_pack_trunc_v8si },
  { 0x14900057, CODE_FOR_vec_pack_trunc_v4di },
  { 0x1490005a, CODE_FOR_vec_pack_trunc_v32hi },
  { 0x1490005b, CODE_FOR_vec_pack_trunc_v16si },
  { 0x1490005c, CODE_FOR_vec_pack_trunc_v8di },
  { 0x1490006c, CODE_FOR_vec_pack_trunc_v4sf },
  { 0x1490006d, CODE_FOR_vec_pack_trunc_v2df },
  { 0x14900070, CODE_FOR_vec_pack_trunc_v8sf },
  { 0x14900071, CODE_FOR_vec_pack_trunc_v4df },
  { 0x14900075, CODE_FOR_vec_pack_trunc_v16sf },
  { 0x14900076, CODE_FOR_vec_pack_trunc_v8df },
  { 0x14a0006d, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0x14a00071, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0x14a00076, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0x14b0000f, CODE_FOR_vec_pack_sbool_trunc_qi },
  { 0x14d00051, CODE_FOR_vec_packs_float_v4si },
  { 0x14d00052, CODE_FOR_vec_packs_float_v2di },
  { 0x14d00056, CODE_FOR_vec_packs_float_v8si },
  { 0x14d00057, CODE_FOR_vec_packs_float_v4di },
  { 0x14d0005b, CODE_FOR_vec_packs_float_v16si },
  { 0x14d0005c, CODE_FOR_vec_packs_float_v8di },
  { 0x14e00051, CODE_FOR_vec_packu_float_v4si },
  { 0x14e00052, CODE_FOR_vec_packu_float_v2di },
  { 0x14e00056, CODE_FOR_vec_packu_float_v8si },
  { 0x14e00057, CODE_FOR_vec_packu_float_v4di },
  { 0x14e0005b, CODE_FOR_vec_packu_float_v16si },
  { 0x14e0005c, CODE_FOR_vec_packu_float_v8di },
  { 0x14f0004f, CODE_FOR_vec_permv16qi },
  { 0x14f00050, CODE_FOR_vec_permv8hi },
  { 0x14f00051, CODE_FOR_vec_permv4si },
  { 0x14f00052, CODE_FOR_vec_permv2di },
  { 0x14f00054, CODE_FOR_vec_permv32qi },
  { 0x14f00055, CODE_FOR_vec_permv16hi },
  { 0x14f00056, CODE_FOR_vec_permv8si },
  { 0x14f00057, CODE_FOR_vec_permv4di },
  { 0x14f00059, CODE_FOR_vec_permv64qi },
  { 0x14f0005a, CODE_FOR_vec_permv32hi },
  { 0x14f0005b, CODE_FOR_vec_permv16si },
  { 0x14f0005c, CODE_FOR_vec_permv8di },
  { 0x14f0006b, CODE_FOR_vec_permv8hf },
  { 0x14f0006c, CODE_FOR_vec_permv4sf },
  { 0x14f0006d, CODE_FOR_vec_permv2df },
  { 0x14f0006f, CODE_FOR_vec_permv16hf },
  { 0x14f00070, CODE_FOR_vec_permv8sf },
  { 0x14f00071, CODE_FOR_vec_permv4df },
  { 0x14f00074, CODE_FOR_vec_permv32hf },
  { 0x14f00075, CODE_FOR_vec_permv16sf },
  { 0x14f00076, CODE_FOR_vec_permv8df },
  { 0x15100045, CODE_FOR_vec_setv4qi },
  { 0x15100046, CODE_FOR_vec_setv2hi },
  { 0x15100049, CODE_FOR_vec_setv4hi },
  { 0x1510004a, CODE_FOR_vec_setv2si },
  { 0x1510004f, CODE_FOR_vec_setv16qi },
  { 0x15100050, CODE_FOR_vec_setv8hi },
  { 0x15100051, CODE_FOR_vec_setv4si },
  { 0x15100052, CODE_FOR_vec_setv2di },
  { 0x15100054, CODE_FOR_vec_setv32qi },
  { 0x15100055, CODE_FOR_vec_setv16hi },
  { 0x15100056, CODE_FOR_vec_setv8si },
  { 0x15100057, CODE_FOR_vec_setv4di },
  { 0x15100059, CODE_FOR_vec_setv64qi },
  { 0x1510005a, CODE_FOR_vec_setv32hi },
  { 0x1510005b, CODE_FOR_vec_setv16si },
  { 0x1510005c, CODE_FOR_vec_setv8di },
  { 0x15100064, CODE_FOR_vec_setv2hf },
  { 0x15100065, CODE_FOR_vec_setv2bf },
  { 0x15100066, CODE_FOR_vec_setv4bf },
  { 0x15100067, CODE_FOR_vec_setv4hf },
  { 0x15100068, CODE_FOR_vec_setv2sf },
  { 0x1510006a, CODE_FOR_vec_setv8bf },
  { 0x1510006b, CODE_FOR_vec_setv8hf },
  { 0x1510006c, CODE_FOR_vec_setv4sf },
  { 0x1510006d, CODE_FOR_vec_setv2df },
  { 0x1510006e, CODE_FOR_vec_setv16bf },
  { 0x1510006f, CODE_FOR_vec_setv16hf },
  { 0x15100070, CODE_FOR_vec_setv8sf },
  { 0x15100071, CODE_FOR_vec_setv4df },
  { 0x15100073, CODE_FOR_vec_setv32bf },
  { 0x15100074, CODE_FOR_vec_setv32hf },
  { 0x15100075, CODE_FOR_vec_setv16sf },
  { 0x15100076, CODE_FOR_vec_setv8df },
  { 0x15200045, CODE_FOR_vec_shl_v4qi },
  { 0x15200046, CODE_FOR_vec_shl_v2hi },
  { 0x1520004f, CODE_FOR_vec_shl_v16qi },
  { 0x15200050, CODE_FOR_vec_shl_v8hi },
  { 0x15200051, CODE_FOR_vec_shl_v4si },
  { 0x15200052, CODE_FOR_vec_shl_v2di },
  { 0x15200064, CODE_FOR_vec_shl_v2hf },
  { 0x15200065, CODE_FOR_vec_shl_v2bf },
  { 0x1520006a, CODE_FOR_vec_shl_v8bf },
  { 0x1520006b, CODE_FOR_vec_shl_v8hf },
  { 0x1520006c, CODE_FOR_vec_shl_v4sf },
  { 0x1520006d, CODE_FOR_vec_shl_v2df },
  { 0x15300045, CODE_FOR_vec_shr_v4qi },
  { 0x15300046, CODE_FOR_vec_shr_v2hi },
  { 0x1530004f, CODE_FOR_vec_shr_v16qi },
  { 0x15300050, CODE_FOR_vec_shr_v8hi },
  { 0x15300051, CODE_FOR_vec_shr_v4si },
  { 0x15300052, CODE_FOR_vec_shr_v2di },
  { 0x15300064, CODE_FOR_vec_shr_v2hf },
  { 0x15300065, CODE_FOR_vec_shr_v2bf },
  { 0x1530006a, CODE_FOR_vec_shr_v8bf },
  { 0x1530006b, CODE_FOR_vec_shr_v8hf },
  { 0x1530006c, CODE_FOR_vec_shr_v4sf },
  { 0x1530006d, CODE_FOR_vec_shr_v2df },
  { 0x1540006b, CODE_FOR_vec_unpack_sfix_trunc_hi_v8hf },
  { 0x1540006c, CODE_FOR_vec_unpack_sfix_trunc_hi_v4sf },
  { 0x1540006f, CODE_FOR_vec_unpack_sfix_trunc_hi_v16hf },
  { 0x15400070, CODE_FOR_vec_unpack_sfix_trunc_hi_v8sf },
  { 0x15400074, CODE_FOR_vec_unpack_sfix_trunc_hi_v32hf },
  { 0x15400075, CODE_FOR_vec_unpack_sfix_trunc_hi_v16sf },
  { 0x1550006b, CODE_FOR_vec_unpack_sfix_trunc_lo_v8hf },
  { 0x1550006c, CODE_FOR_vec_unpack_sfix_trunc_lo_v4sf },
  { 0x1550006f, CODE_FOR_vec_unpack_sfix_trunc_lo_v16hf },
  { 0x15500070, CODE_FOR_vec_unpack_sfix_trunc_lo_v8sf },
  { 0x15500074, CODE_FOR_vec_unpack_sfix_trunc_lo_v32hf },
  { 0x15500075, CODE_FOR_vec_unpack_sfix_trunc_lo_v16sf },
  { 0x1560006b, CODE_FOR_vec_unpack_ufix_trunc_hi_v8hf },
  { 0x1560006c, CODE_FOR_vec_unpack_ufix_trunc_hi_v4sf },
  { 0x1560006f, CODE_FOR_vec_unpack_ufix_trunc_hi_v16hf },
  { 0x15600070, CODE_FOR_vec_unpack_ufix_trunc_hi_v8sf },
  { 0x15600074, CODE_FOR_vec_unpack_ufix_trunc_hi_v32hf },
  { 0x15600075, CODE_FOR_vec_unpack_ufix_trunc_hi_v16sf },
  { 0x1570006b, CODE_FOR_vec_unpack_ufix_trunc_lo_v8hf },
  { 0x1570006c, CODE_FOR_vec_unpack_ufix_trunc_lo_v4sf },
  { 0x1570006f, CODE_FOR_vec_unpack_ufix_trunc_lo_v16hf },
  { 0x15700070, CODE_FOR_vec_unpack_ufix_trunc_lo_v8sf },
  { 0x15700074, CODE_FOR_vec_unpack_ufix_trunc_lo_v32hf },
  { 0x15700075, CODE_FOR_vec_unpack_ufix_trunc_lo_v16sf },
  { 0x15800050, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0x15800051, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0x15800055, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0x15800056, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0x1580005a, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0x1580005b, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0x15900050, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0x15900051, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0x15900055, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0x15900056, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0x1590005a, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0x1590005b, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0x15a00010, CODE_FOR_vec_unpacks_hi_hi },
  { 0x15a00011, CODE_FOR_vec_unpacks_hi_si },
  { 0x15a00012, CODE_FOR_vec_unpacks_hi_di },
  { 0x15a00045, CODE_FOR_vec_unpacks_hi_v4qi },
  { 0x15a0004f, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x15a00050, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x15a00051, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x15a00054, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0x15a00055, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0x15a00056, CODE_FOR_vec_unpacks_hi_v8si },
  { 0x15a00059, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0x15a0005a, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0x15a0005b, CODE_FOR_vec_unpacks_hi_v16si },
  { 0x15a0006b, CODE_FOR_vec_unpacks_hi_v8hf },
  { 0x15a0006c, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x15a0006f, CODE_FOR_vec_unpacks_hi_v16hf },
  { 0x15a00070, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0x15a00074, CODE_FOR_vec_unpacks_hi_v32hf },
  { 0x15a00075, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0x15b00010, CODE_FOR_vec_unpacks_lo_hi },
  { 0x15b00011, CODE_FOR_vec_unpacks_lo_si },
  { 0x15b00012, CODE_FOR_vec_unpacks_lo_di },
  { 0x15b00045, CODE_FOR_vec_unpacks_lo_v4qi },
  { 0x15b0004f, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x15b00050, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x15b00051, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x15b00054, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0x15b00055, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0x15b00056, CODE_FOR_vec_unpacks_lo_v8si },
  { 0x15b00059, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0x15b0005a, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0x15b0005b, CODE_FOR_vec_unpacks_lo_v16si },
  { 0x15b0006b, CODE_FOR_vec_unpacks_lo_v8hf },
  { 0x15b0006c, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x15b0006f, CODE_FOR_vec_unpacks_lo_v16hf },
  { 0x15b00070, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0x15b00074, CODE_FOR_vec_unpacks_lo_v32hf },
  { 0x15b00075, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0x15c0000f, CODE_FOR_vec_unpacks_sbool_hi_qi },
  { 0x15d0000f, CODE_FOR_vec_unpacks_sbool_lo_qi },
  { 0x15e00050, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0x15e00051, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0x15e00055, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0x15e00056, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0x15e0005a, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0x15e0005b, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0x15f00050, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0x15f00051, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0x15f00055, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0x15f00056, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0x15f0005a, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0x15f0005b, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0x16000045, CODE_FOR_vec_unpacku_hi_v4qi },
  { 0x1600004f, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x16000050, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x16000051, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x16000054, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0x16000055, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0x16000056, CODE_FOR_vec_unpacku_hi_v8si },
  { 0x16000059, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0x1600005a, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0x1600005b, CODE_FOR_vec_unpacku_hi_v16si },
  { 0x16100045, CODE_FOR_vec_unpacku_lo_v4qi },
  { 0x1610004f, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x16100050, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x16100051, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x16100054, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0x16100055, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0x16100056, CODE_FOR_vec_unpacku_lo_v8si },
  { 0x16100059, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0x1610005a, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0x1610005b, CODE_FOR_vec_unpacku_lo_v16si },
  { 0x16200051, CODE_FOR_vec_widen_smult_even_v4si },
  { 0x16200056, CODE_FOR_vec_widen_smult_even_v8si },
  { 0x1620005b, CODE_FOR_vec_widen_smult_even_v16si },
  { 0x1630004f, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x16300050, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x16300051, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x16300054, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0x16300055, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0x16300056, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0x1640004f, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x16400050, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x16400051, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x16400054, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0x16400055, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0x16400056, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0x16500051, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0x16500056, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0x1650005b, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0x17700051, CODE_FOR_vec_widen_umult_even_v4si },
  { 0x17700056, CODE_FOR_vec_widen_umult_even_v8si },
  { 0x1770005b, CODE_FOR_vec_widen_umult_even_v16si },
  { 0x1780004f, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x17800050, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x17800051, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x17800054, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0x17800055, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0x17800056, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0x1790004f, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x17900050, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x17900051, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x17900054, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0x17900055, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0x17900056, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0x17a00051, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0x17a00056, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0x17a0005b, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0x18c0006c, CODE_FOR_vec_addsubv4sf3 },
  { 0x18c0006d, CODE_FOR_vec_addsubv2df3 },
  { 0x18c00070, CODE_FOR_vec_addsubv8sf3 },
  { 0x18c00071, CODE_FOR_vec_addsubv4df3 },
  { 0x18d0006b, CODE_FOR_vec_fmaddsubv8hf4 },
  { 0x18d0006c, CODE_FOR_vec_fmaddsubv4sf4 },
  { 0x18d0006d, CODE_FOR_vec_fmaddsubv2df4 },
  { 0x18d0006f, CODE_FOR_vec_fmaddsubv16hf4 },
  { 0x18d00070, CODE_FOR_vec_fmaddsubv8sf4 },
  { 0x18d00071, CODE_FOR_vec_fmaddsubv4df4 },
  { 0x18d00074, CODE_FOR_vec_fmaddsubv32hf4 },
  { 0x18d00075, CODE_FOR_vec_fmaddsubv16sf4 },
  { 0x18d00076, CODE_FOR_vec_fmaddsubv8df4 },
  { 0x18e0006b, CODE_FOR_vec_fmsubaddv8hf4 },
  { 0x18e0006c, CODE_FOR_vec_fmsubaddv4sf4 },
  { 0x18e0006d, CODE_FOR_vec_fmsubaddv2df4 },
  { 0x18e0006f, CODE_FOR_vec_fmsubaddv16hf4 },
  { 0x18e00070, CODE_FOR_vec_fmsubaddv8sf4 },
  { 0x18e00071, CODE_FOR_vec_fmsubaddv4df4 },
  { 0x18e00074, CODE_FOR_vec_fmsubaddv32hf4 },
  { 0x18e00075, CODE_FOR_vec_fmsubaddv16sf4 },
  { 0x18e00076, CODE_FOR_vec_fmsubaddv8df4 },
  { 0x1970000f, CODE_FOR_atomic_addqi },
  { 0x19700010, CODE_FOR_atomic_addhi },
  { 0x19700011, CODE_FOR_atomic_addsi },
  { 0x1980000f, CODE_FOR_atomic_and_fetchqi },
  { 0x19800010, CODE_FOR_atomic_and_fetchhi },
  { 0x19800011, CODE_FOR_atomic_and_fetchsi },
  { 0x19800012, CODE_FOR_atomic_and_fetchdi },
  { 0x1990000f, CODE_FOR_atomic_andqi },
  { 0x19900010, CODE_FOR_atomic_andhi },
  { 0x19900011, CODE_FOR_atomic_andsi },
  { 0x19a00010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0x19a00011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0x19b00010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0x19b00011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0x19c00010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0x19c00011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0x19d0000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0x19d00010, CODE_FOR_atomic_compare_and_swaphi },
  { 0x19d00011, CODE_FOR_atomic_compare_and_swapsi },
  { 0x19d00012, CODE_FOR_atomic_compare_and_swapdi },
  { 0x19e0000f, CODE_FOR_atomic_exchangeqi },
  { 0x19e00010, CODE_FOR_atomic_exchangehi },
  { 0x19e00011, CODE_FOR_atomic_exchangesi },
  { 0x19f0000f, CODE_FOR_atomic_fetch_addqi },
  { 0x19f00010, CODE_FOR_atomic_fetch_addhi },
  { 0x19f00011, CODE_FOR_atomic_fetch_addsi },
  { 0x1a00000f, CODE_FOR_atomic_fetch_andqi },
  { 0x1a000010, CODE_FOR_atomic_fetch_andhi },
  { 0x1a000011, CODE_FOR_atomic_fetch_andsi },
  { 0x1a000012, CODE_FOR_atomic_fetch_anddi },
  { 0x1a10000f, CODE_FOR_atomic_fetch_nandqi },
  { 0x1a100010, CODE_FOR_atomic_fetch_nandhi },
  { 0x1a100011, CODE_FOR_atomic_fetch_nandsi },
  { 0x1a100012, CODE_FOR_atomic_fetch_nanddi },
  { 0x1a20000f, CODE_FOR_atomic_fetch_orqi },
  { 0x1a200010, CODE_FOR_atomic_fetch_orhi },
  { 0x1a200011, CODE_FOR_atomic_fetch_orsi },
  { 0x1a200012, CODE_FOR_atomic_fetch_ordi },
  { 0x1a40000f, CODE_FOR_atomic_fetch_xorqi },
  { 0x1a400010, CODE_FOR_atomic_fetch_xorhi },
  { 0x1a400011, CODE_FOR_atomic_fetch_xorsi },
  { 0x1a400012, CODE_FOR_atomic_fetch_xordi },
  { 0x1a50000f, CODE_FOR_atomic_loadqi },
  { 0x1a500010, CODE_FOR_atomic_loadhi },
  { 0x1a500011, CODE_FOR_atomic_loadsi },
  { 0x1a500012, CODE_FOR_atomic_loaddi },
  { 0x1a60000f, CODE_FOR_atomic_nand_fetchqi },
  { 0x1a600010, CODE_FOR_atomic_nand_fetchhi },
  { 0x1a600011, CODE_FOR_atomic_nand_fetchsi },
  { 0x1a600012, CODE_FOR_atomic_nand_fetchdi },
  { 0x1a80000f, CODE_FOR_atomic_or_fetchqi },
  { 0x1a800010, CODE_FOR_atomic_or_fetchhi },
  { 0x1a800011, CODE_FOR_atomic_or_fetchsi },
  { 0x1a800012, CODE_FOR_atomic_or_fetchdi },
  { 0x1a90000f, CODE_FOR_atomic_orqi },
  { 0x1a900010, CODE_FOR_atomic_orhi },
  { 0x1a900011, CODE_FOR_atomic_orsi },
  { 0x1aa0000f, CODE_FOR_atomic_storeqi },
  { 0x1aa00010, CODE_FOR_atomic_storehi },
  { 0x1aa00011, CODE_FOR_atomic_storesi },
  { 0x1aa00012, CODE_FOR_atomic_storedi },
  { 0x1ac0000f, CODE_FOR_atomic_subqi },
  { 0x1ac00010, CODE_FOR_atomic_subhi },
  { 0x1ac00011, CODE_FOR_atomic_subsi },
  { 0x1ad0000f, CODE_FOR_atomic_xor_fetchqi },
  { 0x1ad00010, CODE_FOR_atomic_xor_fetchhi },
  { 0x1ad00011, CODE_FOR_atomic_xor_fetchsi },
  { 0x1ad00012, CODE_FOR_atomic_xor_fetchdi },
  { 0x1ae0000f, CODE_FOR_atomic_xorqi },
  { 0x1ae00010, CODE_FOR_atomic_xorhi },
  { 0x1ae00011, CODE_FOR_atomic_xorsi },
  { 0x1af0000f, CODE_FOR_atomic_add_fetch_cmp_0qi },
  { 0x1af00010, CODE_FOR_atomic_add_fetch_cmp_0hi },
  { 0x1af00011, CODE_FOR_atomic_add_fetch_cmp_0si },
  { 0x1b00000f, CODE_FOR_atomic_sub_fetch_cmp_0qi },
  { 0x1b000010, CODE_FOR_atomic_sub_fetch_cmp_0hi },
  { 0x1b000011, CODE_FOR_atomic_sub_fetch_cmp_0si },
  { 0x1b10000f, CODE_FOR_atomic_and_fetch_cmp_0qi },
  { 0x1b100010, CODE_FOR_atomic_and_fetch_cmp_0hi },
  { 0x1b100011, CODE_FOR_atomic_and_fetch_cmp_0si },
  { 0x1b20000f, CODE_FOR_atomic_or_fetch_cmp_0qi },
  { 0x1b200010, CODE_FOR_atomic_or_fetch_cmp_0hi },
  { 0x1b200011, CODE_FOR_atomic_or_fetch_cmp_0si },
  { 0x1b30000f, CODE_FOR_atomic_xor_fetch_cmp_0qi },
  { 0x1b300010, CODE_FOR_atomic_xor_fetch_cmp_0hi },
  { 0x1b300011, CODE_FOR_atomic_xor_fetch_cmp_0si },
  { 0x1b400011, CODE_FOR_get_thread_pointersi },
  { 0x1b400012, CODE_FOR_get_thread_pointerdi },
  { 0x1b80004f, CODE_FOR_vec_duplicatev16qi },
  { 0x1b800050, CODE_FOR_vec_duplicatev8hi },
  { 0x1b800051, CODE_FOR_vec_duplicatev4si },
  { 0x1b800054, CODE_FOR_vec_duplicatev32qi },
  { 0x1b800055, CODE_FOR_vec_duplicatev16hi },
  { 0x1b800056, CODE_FOR_vec_duplicatev8si },
  { 0x1b800059, CODE_FOR_vec_duplicatev64qi },
  { 0x1b80005a, CODE_FOR_vec_duplicatev32hi },
  { 0x1b80005b, CODE_FOR_vec_duplicatev16si },
};

static void
init_optabs_00 (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendhisi2;
  ena[3] = HAVE_extendsidi2;
  ena[4] = HAVE_extendhfsf2;
  ena[5] = HAVE_extendhfdf2;
  ena[6] = HAVE_extendbfsf2;
  ena[7] = HAVE_extendsfdf2;
  ena[8] = HAVE_extendsfxf2;
  ena[9] = HAVE_extenddfxf2;
  ena[10] = HAVE_extendv2qiv2hi2;
  ena[11] = HAVE_extendv2qiv2di2;
  ena[12] = HAVE_extendv4qiv4si2;
  ena[13] = HAVE_extendv4qiv4di2;
  ena[14] = HAVE_extendv2hiv2di2;
  ena[15] = HAVE_extendv8qiv8hi2;
  ena[16] = HAVE_extendv8qiv8si2;
  ena[17] = HAVE_extendv8qiv8di2;
  ena[18] = HAVE_extendv4hiv4si2;
  ena[19] = HAVE_extendv4hiv4di2;
  ena[20] = HAVE_extendv2siv2di2;
  ena[21] = HAVE_extendv16qiv16hi2;
  ena[22] = HAVE_extendv16qiv16si2;
  ena[23] = HAVE_extendv8hiv8si2;
  ena[24] = HAVE_extendv8hiv8di2;
  ena[25] = HAVE_extendv4siv4di2;
  ena[26] = HAVE_extendv32qiv32hi2;
  ena[27] = HAVE_extendv16hiv16si2;
  ena[28] = HAVE_extendv8siv8di2;
  ena[29] = HAVE_extendv2hfv2df2;
  ena[30] = HAVE_extendv4hfv4sf2;
  ena[31] = HAVE_extendv4hfv4df2;
  ena[32] = HAVE_extendv8hfv8sf2;
  ena[33] = HAVE_extendv8hfv8df2;
  ena[34] = HAVE_extendv4sfv4df2;
  ena[35] = HAVE_extendv16hfv16sf2;
  ena[36] = HAVE_extendv8sfv8df2;
  ena[37] = HAVE_truncsfhf2;
  ena[38] = HAVE_truncsfbf2;
  ena[39] = HAVE_truncdfhf2;
  ena[40] = HAVE_truncdfsf2;
  ena[41] = HAVE_truncxfsf2;
  ena[42] = HAVE_truncxfdf2;
  ena[43] = HAVE_truncv2hiv2qi2;
  ena[44] = HAVE_truncv8hiv8qi2;
  ena[45] = HAVE_truncv4siv4qi2;
  ena[46] = HAVE_truncv4siv4hi2;
  ena[47] = HAVE_truncv2div2qi2;
  ena[48] = HAVE_truncv2div2hi2;
  ena[49] = HAVE_truncv2div2si2;
  ena[50] = HAVE_truncv16hiv16qi2;
  ena[51] = HAVE_truncv8siv8qi2;
  ena[52] = HAVE_truncv8siv8hi2;
  ena[53] = HAVE_truncv4div4qi2;
  ena[54] = HAVE_truncv4div4hi2;
  ena[55] = HAVE_truncv4div4si2;
  ena[56] = HAVE_truncv32hiv32qi2;
  ena[57] = HAVE_truncv16siv16qi2;
  ena[58] = HAVE_truncv16siv16hi2;
  ena[59] = HAVE_truncv8div8qi2;
  ena[60] = HAVE_truncv8div8hi2;
  ena[61] = HAVE_truncv8div8si2;
  ena[62] = HAVE_truncv4sfv4hf2;
  ena[63] = HAVE_truncv2dfv2hf2;
  ena[64] = HAVE_truncv8sfv8hf2;
  ena[65] = HAVE_truncv4dfv4hf2;
  ena[66] = HAVE_truncv4dfv4sf2;
  ena[67] = HAVE_truncv16sfv16hf2;
  ena[68] = HAVE_truncv8dfv8hf2;
  ena[69] = HAVE_truncv8dfv8sf2;
  ena[70] = HAVE_zero_extendqihi2;
  ena[71] = HAVE_zero_extendqisi2;
  ena[72] = HAVE_zero_extendhisi2;
  ena[73] = HAVE_zero_extendsidi2;
  ena[74] = HAVE_zero_extendv2qiv2hi2;
  ena[75] = HAVE_zero_extendv2qiv2di2;
  ena[76] = HAVE_zero_extendv4qiv4si2;
  ena[77] = HAVE_zero_extendv4qiv4di2;
  ena[78] = HAVE_zero_extendv2hiv2di2;
  ena[79] = HAVE_zero_extendv8qiv8hi2;
  ena[80] = HAVE_zero_extendv8qiv8si2;
  ena[81] = HAVE_zero_extendv8qiv8di2;
  ena[82] = HAVE_zero_extendv4hiv4si2;
  ena[83] = HAVE_zero_extendv4hiv4di2;
  ena[84] = HAVE_zero_extendv2siv2di2;
  ena[85] = HAVE_zero_extendv16qiv16hi2;
  ena[86] = HAVE_zero_extendv16qiv16si2;
  ena[87] = HAVE_zero_extendv8hiv8si2;
  ena[88] = HAVE_zero_extendv8hiv8di2;
  ena[89] = HAVE_zero_extendv4siv4di2;
  ena[90] = HAVE_zero_extendv32qiv32hi2;
  ena[91] = HAVE_zero_extendv16hiv16si2;
  ena[92] = HAVE_zero_extendv8siv8di2;
  ena[93] = HAVE_floathisf2;
  ena[94] = HAVE_floathidf2;
  ena[95] = HAVE_floathixf2;
  ena[96] = HAVE_floatsihf2;
  ena[97] = HAVE_floatsisf2;
  ena[98] = HAVE_floatsidf2;
  ena[99] = HAVE_floatsixf2;
  ena[100] = HAVE_floatdisf2;
  ena[101] = HAVE_floatdidf2;
  ena[102] = HAVE_floatdixf2;
  ena[103] = HAVE_floatv2hiv2hf2;
  ena[104] = HAVE_floatv8hiv8hf2;
  ena[105] = HAVE_floatv4siv4hf2;
  ena[106] = HAVE_floatv4siv4sf2;
  ena[107] = HAVE_floatv4siv4df2;
  ena[108] = HAVE_floatv2div2hf2;
  ena[109] = HAVE_floatv2div2sf2;
  ena[110] = HAVE_floatv2div2df2;
  ena[111] = HAVE_floatv16hiv16hf2;
  ena[112] = HAVE_floatv8siv8hf2;
  ena[113] = HAVE_floatv8siv8sf2;
  ena[114] = HAVE_floatv8siv8df2;
  ena[115] = HAVE_floatv4div4hf2;
  ena[116] = HAVE_floatv4div4sf2;
  ena[117] = HAVE_floatv4div4df2;
  ena[118] = HAVE_floatv32hiv32hf2;
  ena[119] = HAVE_floatv16siv16hf2;
  ena[120] = HAVE_floatv16siv16sf2;
  ena[121] = HAVE_floatv8div8hf2;
  ena[122] = HAVE_floatv8div8sf2;
  ena[123] = HAVE_floatv8div8df2;
  ena[124] = HAVE_floatunsqisf2;
  ena[125] = HAVE_floatunsqidf2;
  ena[126] = HAVE_floatunshisf2;
  ena[127] = HAVE_floatunshidf2;
  ena[128] = HAVE_floatunssihf2;
  ena[129] = HAVE_floatunssisf2;
  ena[130] = HAVE_floatunssidf2;
  ena[131] = HAVE_floatunssixf2;
  ena[132] = HAVE_floatunsv2hiv2hf2;
  ena[133] = HAVE_floatunsv8hiv8hf2;
  ena[134] = HAVE_floatunsv4siv4hf2;
  ena[135] = HAVE_floatunsv4siv4sf2;
  ena[136] = HAVE_floatunsv4siv4df2;
  ena[137] = HAVE_floatunsv2div2hf2;
  ena[138] = HAVE_floatunsv2div2sf2;
  ena[139] = HAVE_floatunsv2div2df2;
  ena[140] = HAVE_floatunsv16hiv16hf2;
  ena[141] = HAVE_floatunsv8siv8hf2;
  ena[142] = HAVE_floatunsv8siv8sf2;
  ena[143] = HAVE_floatunsv8siv8df2;
  ena[144] = HAVE_floatunsv4div4hf2;
  ena[145] = HAVE_floatunsv4div4sf2;
  ena[146] = HAVE_floatunsv4div4df2;
  ena[147] = HAVE_floatunsv32hiv32hf2;
  ena[148] = HAVE_floatunsv16siv16hf2;
  ena[149] = HAVE_floatunsv16siv16sf2;
  ena[150] = HAVE_floatunsv8div8hf2;
  ena[151] = HAVE_floatunsv8div8sf2;
  ena[152] = HAVE_floatunsv8div8df2;
  ena[153] = HAVE_lrinthfsi2;
  ena[154] = HAVE_lrintsfsi2;
  ena[155] = HAVE_lrintdfsi2;
  ena[156] = HAVE_lrintxfhi2;
  ena[157] = HAVE_lrintxfsi2;
  ena[158] = HAVE_lrintxfdi2;
  ena[159] = HAVE_lrintv2hfv2hi2;
  ena[160] = HAVE_lrintv8hfv8hi2;
  ena[161] = HAVE_lrintv4sfv4si2;
  ena[162] = HAVE_lrintv2dfv2di2;
  ena[163] = HAVE_lrintv16hfv16hi2;
  ena[164] = HAVE_lrintv8sfv8si2;
  ena[165] = HAVE_lrintv4dfv4di2;
  ena[166] = HAVE_lrintv32hfv32hi2;
  ena[167] = HAVE_lrintv16sfv16si2;
  ena[168] = HAVE_lrintv8dfv8di2;
  ena[169] = HAVE_lroundhfhi2;
  ena[170] = HAVE_lroundhfsi2;
  ena[171] = HAVE_lroundsfhi2;
  ena[172] = HAVE_lroundsfsi2;
  ena[173] = HAVE_lroundsfdi2;
  ena[174] = HAVE_lrounddfhi2;
  ena[175] = HAVE_lrounddfsi2;
  ena[176] = HAVE_lrounddfdi2;
  ena[177] = HAVE_lroundxfhi2;
  ena[178] = HAVE_lroundxfsi2;
  ena[179] = HAVE_lroundxfdi2;
  ena[180] = HAVE_lroundv2hfv2hi2;
  ena[181] = HAVE_lroundv8hfv8hi2;
  ena[182] = HAVE_lroundv4sfv4si2;
  ena[183] = HAVE_lroundv2dfv2di2;
  ena[184] = HAVE_lroundv16hfv16hi2;
  ena[185] = HAVE_lroundv8sfv8si2;
  ena[186] = HAVE_lroundv4dfv4di2;
  ena[187] = HAVE_lroundv32hfv32hi2;
  ena[188] = HAVE_lroundv16sfv16si2;
  ena[189] = HAVE_lroundv8dfv8di2;
  ena[190] = HAVE_lfloorhfsi2;
  ena[191] = HAVE_lfloorsfsi2;
  ena[192] = HAVE_lfloordfsi2;
  ena[193] = HAVE_lfloorxfhi2;
  ena[194] = HAVE_lfloorxfsi2;
  ena[195] = HAVE_lfloorxfdi2;
  ena[196] = HAVE_lfloorv2hfv2hi2;
  ena[197] = HAVE_lfloorv8hfv8hi2;
  ena[198] = HAVE_lfloorv4sfv4si2;
  ena[199] = HAVE_lfloorv2dfv2di2;
  ena[200] = HAVE_lfloorv16hfv16hi2;
  ena[201] = HAVE_lfloorv8sfv8si2;
  ena[202] = HAVE_lfloorv4dfv4di2;
  ena[203] = HAVE_lfloorv32hfv32hi2;
  ena[204] = HAVE_lfloorv16sfv16si2;
  ena[205] = HAVE_lfloorv8dfv8di2;
  ena[206] = HAVE_lceilhfsi2;
  ena[207] = HAVE_lceilsfsi2;
  ena[208] = HAVE_lceildfsi2;
  ena[209] = HAVE_lceilxfhi2;
  ena[210] = HAVE_lceilxfsi2;
  ena[211] = HAVE_lceilxfdi2;
  ena[212] = HAVE_lceilv2hfv2hi2;
  ena[213] = HAVE_lceilv8hfv8hi2;
  ena[214] = HAVE_lceilv4sfv4si2;
  ena[215] = HAVE_lceilv2dfv2di2;
  ena[216] = HAVE_lceilv16hfv16hi2;
  ena[217] = HAVE_lceilv8sfv8si2;
  ena[218] = HAVE_lceilv4dfv4di2;
  ena[219] = HAVE_lceilv32hfv32hi2;
  ena[220] = HAVE_lceilv16sfv16si2;
  ena[221] = HAVE_lceilv8dfv8di2;
  ena[222] = HAVE_fix_trunchfsi2;
  ena[223] = HAVE_fix_truncsfhi2;
  ena[224] = HAVE_fix_truncsfsi2;
  ena[225] = HAVE_fix_truncsfdi2;
  ena[226] = HAVE_fix_truncdfhi2;
  ena[227] = HAVE_fix_truncdfsi2;
  ena[228] = HAVE_fix_truncdfdi2;
  ena[229] = HAVE_fix_truncxfhi2;
  ena[230] = HAVE_fix_truncxfsi2;
  ena[231] = HAVE_fix_truncxfdi2;
  ena[232] = HAVE_fix_truncv2hfv2hi2;
  ena[233] = HAVE_fix_truncv2hfv2di2;
  ena[234] = HAVE_fix_truncv4hfv4si2;
  ena[235] = HAVE_fix_truncv4hfv4di2;
  ena[236] = HAVE_fix_truncv2sfv2di2;
  ena[237] = HAVE_fix_truncv8hfv8hi2;
  ena[238] = HAVE_fix_truncv8hfv8si2;
  ena[239] = HAVE_fix_truncv8hfv8di2;
  ena[240] = HAVE_fix_truncv4sfv4si2;
  ena[241] = HAVE_fix_truncv4sfv4di2;
  ena[242] = HAVE_fix_truncv2dfv2di2;
  ena[243] = HAVE_fix_truncv16hfv16hi2;
  ena[244] = HAVE_fix_truncv16hfv16si2;
  ena[245] = HAVE_fix_truncv8sfv8si2;
  ena[246] = HAVE_fix_truncv8sfv8di2;
  ena[247] = HAVE_fix_truncv4dfv4si2;
  ena[248] = HAVE_fix_truncv4dfv4di2;
  ena[249] = HAVE_fix_truncv32hfv32hi2;
  ena[250] = HAVE_fix_truncv16sfv16si2;
  ena[251] = HAVE_fix_truncv8dfv8si2;
  ena[252] = HAVE_fix_truncv8dfv8di2;
  ena[253] = HAVE_fixuns_trunchfhi2;
  ena[254] = HAVE_fixuns_trunchfsi2;
  ena[255] = HAVE_fixuns_truncsfhi2;
  ena[256] = HAVE_fixuns_truncsfsi2;
  ena[257] = HAVE_fixuns_truncdfhi2;
  ena[258] = HAVE_fixuns_truncdfsi2;
  ena[259] = HAVE_fixuns_truncv2hfv2hi2;
  ena[260] = HAVE_fixuns_truncv2hfv2di2;
  ena[261] = HAVE_fixuns_truncv4hfv4si2;
  ena[262] = HAVE_fixuns_truncv4hfv4di2;
  ena[263] = HAVE_fixuns_truncv2sfv2di2;
  ena[264] = HAVE_fixuns_truncv8hfv8hi2;
  ena[265] = HAVE_fixuns_truncv8hfv8si2;
  ena[266] = HAVE_fixuns_truncv8hfv8di2;
  ena[267] = HAVE_fixuns_truncv4sfv4si2;
  ena[268] = HAVE_fixuns_truncv4sfv4di2;
  ena[269] = HAVE_fixuns_truncv2dfv2di2;
  ena[270] = HAVE_fixuns_truncv16hfv16hi2;
  ena[271] = HAVE_fixuns_truncv16hfv16si2;
  ena[272] = HAVE_fixuns_truncv8sfv8si2;
  ena[273] = HAVE_fixuns_truncv8sfv8di2;
  ena[274] = HAVE_fixuns_truncv4dfv4si2;
  ena[275] = HAVE_fixuns_truncv4dfv4di2;
  ena[276] = HAVE_fixuns_truncv32hfv32hi2;
  ena[277] = HAVE_fixuns_truncv16sfv16si2;
  ena[278] = HAVE_fixuns_truncv8dfv8si2;
  ena[279] = HAVE_fixuns_truncv8dfv8di2;
  ena[280] = HAVE_mulqihi3;
  ena[281] = HAVE_mulsidi3;
  ena[282] = HAVE_umulqihi3;
  ena[283] = HAVE_umulsidi3;
  ena[284] = HAVE_vcondv2qiv2qi;
  ena[285] = HAVE_vcondv4qiv4qi;
  ena[286] = HAVE_vcondv2hiv2hi;
  ena[287] = HAVE_vcondv16qiv16qi;
  ena[288] = HAVE_vcondv8hiv16qi;
  ena[289] = HAVE_vcondv4siv16qi;
  ena[290] = HAVE_vcondv2div16qi;
  ena[291] = HAVE_vcondv8bfv16qi;
  ena[292] = HAVE_vcondv8hfv16qi;
  ena[293] = HAVE_vcondv4sfv16qi;
  ena[294] = HAVE_vcondv2dfv16qi;
  ena[295] = HAVE_vcondv16qiv8hi;
  ena[296] = HAVE_vcondv8hiv8hi;
  ena[297] = HAVE_vcondv4siv8hi;
  ena[298] = HAVE_vcondv2div8hi;
  ena[299] = HAVE_vcondv8bfv8hi;
  ena[300] = HAVE_vcondv8hfv8hi;
  ena[301] = HAVE_vcondv4sfv8hi;
  ena[302] = HAVE_vcondv2dfv8hi;
  ena[303] = HAVE_vcondv16qiv4si;
  ena[304] = HAVE_vcondv8hiv4si;
  ena[305] = HAVE_vcondv4siv4si;
  ena[306] = HAVE_vcondv2div4si;
  ena[307] = HAVE_vcondv8bfv4si;
  ena[308] = HAVE_vcondv8hfv4si;
  ena[309] = HAVE_vcondv4sfv4si;
  ena[310] = HAVE_vcondv2dfv4si;
  ena[311] = HAVE_vcondv2div2di;
  ena[312] = HAVE_vcondv2dfv2di;
  ena[313] = HAVE_vcondv32qiv32qi;
  ena[314] = HAVE_vcondv16hiv32qi;
  ena[315] = HAVE_vcondv8siv32qi;
  ena[316] = HAVE_vcondv4div32qi;
  ena[317] = HAVE_vcondv16bfv32qi;
  ena[318] = HAVE_vcondv16hfv32qi;
  ena[319] = HAVE_vcondv8sfv32qi;
  ena[320] = HAVE_vcondv4dfv32qi;
  ena[321] = HAVE_vcondv32qiv16hi;
  ena[322] = HAVE_vcondv16hiv16hi;
  ena[323] = HAVE_vcondv8siv16hi;
  ena[324] = HAVE_vcondv4div16hi;
  ena[325] = HAVE_vcondv16bfv16hi;
  ena[326] = HAVE_vcondv16hfv16hi;
  ena[327] = HAVE_vcondv8sfv16hi;
  ena[328] = HAVE_vcondv4dfv16hi;
  ena[329] = HAVE_vcondv32qiv8si;
  ena[330] = HAVE_vcondv16hiv8si;
  ena[331] = HAVE_vcondv8siv8si;
  ena[332] = HAVE_vcondv4div8si;
  ena[333] = HAVE_vcondv16bfv8si;
  ena[334] = HAVE_vcondv16hfv8si;
  ena[335] = HAVE_vcondv8sfv8si;
  ena[336] = HAVE_vcondv4dfv8si;
  ena[337] = HAVE_vcondv32qiv4di;
  ena[338] = HAVE_vcondv16hiv4di;
  ena[339] = HAVE_vcondv8siv4di;
  ena[340] = HAVE_vcondv4div4di;
  ena[341] = HAVE_vcondv16bfv4di;
  ena[342] = HAVE_vcondv16hfv4di;
  ena[343] = HAVE_vcondv8sfv4di;
  ena[344] = HAVE_vcondv4dfv4di;
  ena[345] = HAVE_vcondv64qiv64qi;
  ena[346] = HAVE_vcondv32hiv64qi;
  ena[347] = HAVE_vcondv16siv64qi;
  ena[348] = HAVE_vcondv8div64qi;
  ena[349] = HAVE_vcondv32bfv64qi;
  ena[350] = HAVE_vcondv32hfv64qi;
  ena[351] = HAVE_vcondv16sfv64qi;
  ena[352] = HAVE_vcondv8dfv64qi;
  ena[353] = HAVE_vcondv64qiv32hi;
  ena[354] = HAVE_vcondv32hiv32hi;
  ena[355] = HAVE_vcondv16siv32hi;
  ena[356] = HAVE_vcondv8div32hi;
  ena[357] = HAVE_vcondv32bfv32hi;
  ena[358] = HAVE_vcondv32hfv32hi;
  ena[359] = HAVE_vcondv16sfv32hi;
  ena[360] = HAVE_vcondv8dfv32hi;
  ena[361] = HAVE_vcondv64qiv16si;
  ena[362] = HAVE_vcondv32hiv16si;
  ena[363] = HAVE_vcondv16siv16si;
  ena[364] = HAVE_vcondv8div16si;
  ena[365] = HAVE_vcondv32bfv16si;
  ena[366] = HAVE_vcondv32hfv16si;
  ena[367] = HAVE_vcondv16sfv16si;
  ena[368] = HAVE_vcondv8dfv16si;
  ena[369] = HAVE_vcondv64qiv8di;
  ena[370] = HAVE_vcondv32hiv8di;
  ena[371] = HAVE_vcondv16siv8di;
  ena[372] = HAVE_vcondv8div8di;
  ena[373] = HAVE_vcondv32bfv8di;
  ena[374] = HAVE_vcondv32hfv8di;
  ena[375] = HAVE_vcondv16sfv8di;
  ena[376] = HAVE_vcondv8dfv8di;
  ena[377] = HAVE_vcondv8hiv8hf;
  ena[378] = HAVE_vcondv16hiv8hf;
  ena[379] = HAVE_vcondv32hiv8hf;
  ena[380] = HAVE_vcondv8bfv8hf;
  ena[381] = HAVE_vcondv8hfv8hf;
  ena[382] = HAVE_vcondv16bfv8hf;
  ena[383] = HAVE_vcondv16hfv8hf;
  ena[384] = HAVE_vcondv32bfv8hf;
  ena[385] = HAVE_vcondv32hfv8hf;
  ena[386] = HAVE_vcondv16qiv4sf;
  ena[387] = HAVE_vcondv8hiv4sf;
  ena[388] = HAVE_vcondv4siv4sf;
  ena[389] = HAVE_vcondv2div4sf;
  ena[390] = HAVE_vcondv8bfv4sf;
  ena[391] = HAVE_vcondv8hfv4sf;
  ena[392] = HAVE_vcondv4sfv4sf;
  ena[393] = HAVE_vcondv2dfv4sf;
  ena[394] = HAVE_vcondv16qiv2df;
  ena[395] = HAVE_vcondv8hiv2df;
  ena[396] = HAVE_vcondv4siv2df;
  ena[397] = HAVE_vcondv2div2df;
  ena[398] = HAVE_vcondv8bfv2df;
  ena[399] = HAVE_vcondv8hfv2df;
  ena[400] = HAVE_vcondv4sfv2df;
  ena[401] = HAVE_vcondv2dfv2df;
  ena[402] = HAVE_vcondv8hiv16hf;
  ena[403] = HAVE_vcondv16hiv16hf;
  ena[404] = HAVE_vcondv32hiv16hf;
  ena[405] = HAVE_vcondv8bfv16hf;
  ena[406] = HAVE_vcondv8hfv16hf;
  ena[407] = HAVE_vcondv16bfv16hf;
  ena[408] = HAVE_vcondv16hfv16hf;
  ena[409] = HAVE_vcondv32bfv16hf;
  ena[410] = HAVE_vcondv32hfv16hf;
  ena[411] = HAVE_vcondv32qiv8sf;
  ena[412] = HAVE_vcondv16hiv8sf;
  ena[413] = HAVE_vcondv8siv8sf;
  ena[414] = HAVE_vcondv4div8sf;
  ena[415] = HAVE_vcondv16bfv8sf;
  ena[416] = HAVE_vcondv16hfv8sf;
  ena[417] = HAVE_vcondv8sfv8sf;
  ena[418] = HAVE_vcondv4dfv8sf;
  ena[419] = HAVE_vcondv32qiv4df;
  ena[420] = HAVE_vcondv16hiv4df;
  ena[421] = HAVE_vcondv8siv4df;
  ena[422] = HAVE_vcondv4div4df;
  ena[423] = HAVE_vcondv16bfv4df;
  ena[424] = HAVE_vcondv16hfv4df;
  ena[425] = HAVE_vcondv8sfv4df;
  ena[426] = HAVE_vcondv4dfv4df;
  ena[427] = HAVE_vcondv8hiv32hf;
  ena[428] = HAVE_vcondv16hiv32hf;
  ena[429] = HAVE_vcondv32hiv32hf;
  ena[430] = HAVE_vcondv8bfv32hf;
  ena[431] = HAVE_vcondv8hfv32hf;
  ena[432] = HAVE_vcondv16bfv32hf;
  ena[433] = HAVE_vcondv16hfv32hf;
  ena[434] = HAVE_vcondv32bfv32hf;
  ena[435] = HAVE_vcondv32hfv32hf;
  ena[436] = HAVE_vcondv64qiv16sf;
  ena[437] = HAVE_vcondv32hiv16sf;
  ena[438] = HAVE_vcondv16siv16sf;
  ena[439] = HAVE_vcondv8div16sf;
  ena[440] = HAVE_vcondv32bfv16sf;
  ena[441] = HAVE_vcondv32hfv16sf;
  ena[442] = HAVE_vcondv16sfv16sf;
  ena[443] = HAVE_vcondv8dfv16sf;
  ena[444] = HAVE_vcondv64qiv8df;
  ena[445] = HAVE_vcondv32hiv8df;
  ena[446] = HAVE_vcondv16siv8df;
  ena[447] = HAVE_vcondv8div8df;
  ena[448] = HAVE_vcondv32bfv8df;
  ena[449] = HAVE_vcondv32hfv8df;
  ena[450] = HAVE_vcondv16sfv8df;
  ena[451] = HAVE_vcondv8dfv8df;
  ena[452] = HAVE_vconduv2qiv2qi;
  ena[453] = HAVE_vconduv4qiv4qi;
  ena[454] = HAVE_vconduv2hiv2hi;
  ena[455] = HAVE_vconduv16qiv16qi;
  ena[456] = HAVE_vconduv8hiv16qi;
  ena[457] = HAVE_vconduv4siv16qi;
  ena[458] = HAVE_vconduv2div16qi;
  ena[459] = HAVE_vconduv8bfv16qi;
  ena[460] = HAVE_vconduv8hfv16qi;
  ena[461] = HAVE_vconduv4sfv16qi;
  ena[462] = HAVE_vconduv2dfv16qi;
  ena[463] = HAVE_vconduv16qiv8hi;
  ena[464] = HAVE_vconduv8hiv8hi;
  ena[465] = HAVE_vconduv4siv8hi;
  ena[466] = HAVE_vconduv2div8hi;
  ena[467] = HAVE_vconduv8bfv8hi;
  ena[468] = HAVE_vconduv8hfv8hi;
  ena[469] = HAVE_vconduv4sfv8hi;
  ena[470] = HAVE_vconduv2dfv8hi;
  ena[471] = HAVE_vconduv16qiv4si;
  ena[472] = HAVE_vconduv8hiv4si;
  ena[473] = HAVE_vconduv4siv4si;
  ena[474] = HAVE_vconduv2div4si;
  ena[475] = HAVE_vconduv8bfv4si;
  ena[476] = HAVE_vconduv8hfv4si;
  ena[477] = HAVE_vconduv4sfv4si;
  ena[478] = HAVE_vconduv2dfv4si;
  ena[479] = HAVE_vconduv2div2di;
  ena[480] = HAVE_vconduv2dfv2di;
  ena[481] = HAVE_vconduv32qiv32qi;
  ena[482] = HAVE_vconduv16hiv32qi;
  ena[483] = HAVE_vconduv8siv32qi;
  ena[484] = HAVE_vconduv4div32qi;
  ena[485] = HAVE_vconduv16bfv32qi;
  ena[486] = HAVE_vconduv16hfv32qi;
  ena[487] = HAVE_vconduv8sfv32qi;
  ena[488] = HAVE_vconduv4dfv32qi;
  ena[489] = HAVE_vconduv32qiv16hi;
  ena[490] = HAVE_vconduv16hiv16hi;
  ena[491] = HAVE_vconduv8siv16hi;
  ena[492] = HAVE_vconduv4div16hi;
  ena[493] = HAVE_vconduv16bfv16hi;
  ena[494] = HAVE_vconduv16hfv16hi;
  ena[495] = HAVE_vconduv8sfv16hi;
  ena[496] = HAVE_vconduv4dfv16hi;
  ena[497] = HAVE_vconduv32qiv8si;
  ena[498] = HAVE_vconduv16hiv8si;
  ena[499] = HAVE_vconduv8siv8si;
  ena[500] = HAVE_vconduv4div8si;
  ena[501] = HAVE_vconduv16bfv8si;
  ena[502] = HAVE_vconduv16hfv8si;
  ena[503] = HAVE_vconduv8sfv8si;
  ena[504] = HAVE_vconduv4dfv8si;
  ena[505] = HAVE_vconduv32qiv4di;
  ena[506] = HAVE_vconduv16hiv4di;
  ena[507] = HAVE_vconduv8siv4di;
  ena[508] = HAVE_vconduv4div4di;
  ena[509] = HAVE_vconduv16bfv4di;
  ena[510] = HAVE_vconduv16hfv4di;
  ena[511] = HAVE_vconduv8sfv4di;
  ena[512] = HAVE_vconduv4dfv4di;
  ena[513] = HAVE_vconduv64qiv64qi;
  ena[514] = HAVE_vconduv32hiv64qi;
  ena[515] = HAVE_vconduv16siv64qi;
  ena[516] = HAVE_vconduv8div64qi;
  ena[517] = HAVE_vconduv32bfv64qi;
  ena[518] = HAVE_vconduv32hfv64qi;
  ena[519] = HAVE_vconduv16sfv64qi;
  ena[520] = HAVE_vconduv8dfv64qi;
  ena[521] = HAVE_vconduv64qiv32hi;
  ena[522] = HAVE_vconduv32hiv32hi;
  ena[523] = HAVE_vconduv16siv32hi;
  ena[524] = HAVE_vconduv8div32hi;
  ena[525] = HAVE_vconduv32bfv32hi;
  ena[526] = HAVE_vconduv32hfv32hi;
  ena[527] = HAVE_vconduv16sfv32hi;
  ena[528] = HAVE_vconduv8dfv32hi;
  ena[529] = HAVE_vconduv64qiv16si;
  ena[530] = HAVE_vconduv32hiv16si;
  ena[531] = HAVE_vconduv16siv16si;
  ena[532] = HAVE_vconduv8div16si;
  ena[533] = HAVE_vconduv32bfv16si;
  ena[534] = HAVE_vconduv32hfv16si;
  ena[535] = HAVE_vconduv16sfv16si;
  ena[536] = HAVE_vconduv8dfv16si;
  ena[537] = HAVE_vconduv64qiv8di;
  ena[538] = HAVE_vconduv32hiv8di;
  ena[539] = HAVE_vconduv16siv8di;
  ena[540] = HAVE_vconduv8div8di;
  ena[541] = HAVE_vconduv32bfv8di;
  ena[542] = HAVE_vconduv32hfv8di;
  ena[543] = HAVE_vconduv16sfv8di;
  ena[544] = HAVE_vconduv8dfv8di;
  ena[545] = HAVE_vcondeqv2div2di;
  ena[546] = HAVE_vcondeqv2dfv2di;
  ena[547] = HAVE_vcond_mask_v2hiqi;
  ena[548] = HAVE_vcond_mask_v8hiqi;
  ena[549] = HAVE_vcond_mask_v4siqi;
  ena[550] = HAVE_vcond_mask_v2diqi;
  ena[551] = HAVE_vcond_mask_v8siqi;
  ena[552] = HAVE_vcond_mask_v4diqi;
  ena[553] = HAVE_vcond_mask_v8diqi;
  ena[554] = HAVE_vcond_mask_v2hfqi;
  ena[555] = HAVE_vcond_mask_v2bfqi;
  ena[556] = HAVE_vcond_mask_v8bfqi;
  ena[557] = HAVE_vcond_mask_v8hfqi;
  ena[558] = HAVE_vcond_mask_v4sfqi;
  ena[559] = HAVE_vcond_mask_v2dfqi;
  ena[560] = HAVE_vcond_mask_v8sfqi;
  ena[561] = HAVE_vcond_mask_v4dfqi;
  ena[562] = HAVE_vcond_mask_v8dfqi;
  ena[563] = HAVE_vcond_mask_v16qihi;
  ena[564] = HAVE_vcond_mask_v16hihi;
  ena[565] = HAVE_vcond_mask_v16sihi;
  ena[566] = HAVE_vcond_mask_v16bfhi;
  ena[567] = HAVE_vcond_mask_v16hfhi;
  ena[568] = HAVE_vcond_mask_v16sfhi;
  ena[569] = HAVE_vcond_mask_v32qisi;
  ena[570] = HAVE_vcond_mask_v32hisi;
  ena[571] = HAVE_vcond_mask_v32bfsi;
  ena[572] = HAVE_vcond_mask_v32hfsi;
  ena[573] = HAVE_vcond_mask_v64qidi;
  ena[574] = HAVE_vcond_mask_v2qiv2qi;
  ena[575] = HAVE_vcond_mask_v4qiv4qi;
  ena[576] = HAVE_vcond_mask_v2hiv2hi;
  ena[577] = HAVE_vcond_mask_v2hfv2hi;
  ena[578] = HAVE_vcond_mask_v2bfv2hi;
  ena[579] = HAVE_vcond_mask_v16qiv16qi;
  ena[580] = HAVE_vcond_mask_v8hiv8hi;
  ena[581] = HAVE_vcond_mask_v4siv4si;
  ena[582] = HAVE_vcond_mask_v4sfv4si;
  ena[583] = HAVE_vcond_mask_v2div2di;
  ena[584] = HAVE_vcond_mask_v2dfv2di;
  ena[585] = HAVE_vcond_mask_v1tiv1ti;
  ena[586] = HAVE_vcond_mask_v32qiv32qi;
  ena[587] = HAVE_vcond_mask_v16hiv16hi;
  ena[588] = HAVE_vcond_mask_v8siv8si;
  ena[589] = HAVE_vcond_mask_v8sfv8si;
  ena[590] = HAVE_vcond_mask_v4div4di;
  ena[591] = HAVE_vcond_mask_v4dfv4di;
  ena[592] = HAVE_vec_cmpv8hiqi;
  ena[593] = HAVE_vec_cmpv4siqi;
  ena[594] = HAVE_vec_cmpv2diqi;
  ena[595] = HAVE_vec_cmpv8siqi;
  ena[596] = HAVE_vec_cmpv4diqi;
  ena[597] = HAVE_vec_cmpv8diqi;
  ena[598] = HAVE_vec_cmpv2hfqi;
  ena[599] = HAVE_vec_cmpv8hfqi;
  ena[600] = HAVE_vec_cmpv4sfqi;
  ena[601] = HAVE_vec_cmpv2dfqi;
  ena[602] = HAVE_vec_cmpv8sfqi;
  ena[603] = HAVE_vec_cmpv4dfqi;
  ena[604] = HAVE_vec_cmpv8dfqi;
  ena[605] = HAVE_vec_cmpv16qihi;
  ena[606] = HAVE_vec_cmpv16hihi;
  ena[607] = HAVE_vec_cmpv16sihi;
  ena[608] = HAVE_vec_cmpv16hfhi;
  ena[609] = HAVE_vec_cmpv16sfhi;
  ena[610] = HAVE_vec_cmpv32qisi;
  ena[611] = HAVE_vec_cmpv32hisi;
  ena[612] = HAVE_vec_cmpv32hfsi;
  ena[613] = HAVE_vec_cmpv64qidi;
  ena[614] = HAVE_vec_cmpv2qiv2qi;
  ena[615] = HAVE_vec_cmpv4qiv4qi;
  ena[616] = HAVE_vec_cmpv2hiv2hi;
  ena[617] = HAVE_vec_cmpv16qiv16qi;
  ena[618] = HAVE_vec_cmpv8hiv8hi;
  ena[619] = HAVE_vec_cmpv4siv4si;
  ena[620] = HAVE_vec_cmpv4sfv4si;
  ena[621] = HAVE_vec_cmpv2div2di;
  ena[622] = HAVE_vec_cmpv2dfv2di;
  ena[623] = HAVE_vec_cmpv32qiv32qi;
  ena[624] = HAVE_vec_cmpv16hiv16hi;
  ena[625] = HAVE_vec_cmpv8siv8si;
  ena[626] = HAVE_vec_cmpv8sfv8si;
  ena[627] = HAVE_vec_cmpv4div4di;
  ena[628] = HAVE_vec_cmpv4dfv4di;
  ena[629] = HAVE_vec_cmpuv8hiqi;
  ena[630] = HAVE_vec_cmpuv4siqi;
  ena[631] = HAVE_vec_cmpuv2diqi;
  ena[632] = HAVE_vec_cmpuv8siqi;
  ena[633] = HAVE_vec_cmpuv4diqi;
  ena[634] = HAVE_vec_cmpuv8diqi;
  ena[635] = HAVE_vec_cmpuv16qihi;
  ena[636] = HAVE_vec_cmpuv16hihi;
  ena[637] = HAVE_vec_cmpuv16sihi;
  ena[638] = HAVE_vec_cmpuv32qisi;
  ena[639] = HAVE_vec_cmpuv32hisi;
  ena[640] = HAVE_vec_cmpuv64qidi;
  ena[641] = HAVE_vec_cmpuv2qiv2qi;
  ena[642] = HAVE_vec_cmpuv4qiv4qi;
  ena[643] = HAVE_vec_cmpuv2hiv2hi;
  ena[644] = HAVE_vec_cmpuv16qiv16qi;
  ena[645] = HAVE_vec_cmpuv8hiv8hi;
  ena[646] = HAVE_vec_cmpuv4siv4si;
  ena[647] = HAVE_vec_cmpuv2div2di;
  ena[648] = HAVE_vec_cmpuv32qiv32qi;
  ena[649] = HAVE_vec_cmpuv16hiv16hi;
  ena[650] = HAVE_vec_cmpuv8siv8si;
  ena[651] = HAVE_vec_cmpuv4div4di;
  ena[652] = HAVE_vec_cmpeqv2div2di;
  ena[653] = HAVE_vec_cmpeqv1tiv1ti;
  ena[654] = HAVE_maskloadv8hiqi;
  ena[655] = HAVE_maskloadv4siqi;
  ena[656] = HAVE_maskloadv2diqi;
  ena[657] = HAVE_maskloadv8siqi;
  ena[658] = HAVE_maskloadv4diqi;
  ena[659] = HAVE_maskloadv8diqi;
  ena[660] = HAVE_maskloadv8bfqi;
  ena[661] = HAVE_maskloadv8hfqi;
  ena[662] = HAVE_maskloadv4sfqi;
  ena[663] = HAVE_maskloadv2dfqi;
  ena[664] = HAVE_maskloadv8sfqi;
  ena[665] = HAVE_maskloadv4dfqi;
  ena[666] = HAVE_maskloadv8dfqi;
  ena[667] = HAVE_maskloadv16qihi;
  ena[668] = HAVE_maskloadv16hihi;
  ena[669] = HAVE_maskloadv16sihi;
  ena[670] = HAVE_maskloadv16bfhi;
  ena[671] = HAVE_maskloadv16hfhi;
  ena[672] = HAVE_maskloadv16sfhi;
  ena[673] = HAVE_maskloadv32qisi;
  ena[674] = HAVE_maskloadv32hisi;
  ena[675] = HAVE_maskloadv32bfsi;
  ena[676] = HAVE_maskloadv32hfsi;
  ena[677] = HAVE_maskloadv64qidi;
  ena[678] = HAVE_maskloadv4siv4si;
  ena[679] = HAVE_maskloadv4sfv4si;
  ena[680] = HAVE_maskloadv2div2di;
  ena[681] = HAVE_maskloadv2dfv2di;
  ena[682] = HAVE_maskloadv8siv8si;
  ena[683] = HAVE_maskloadv8sfv8si;
  ena[684] = HAVE_maskloadv4div4di;
  ena[685] = HAVE_maskloadv4dfv4di;
  ena[686] = HAVE_maskstorev8hiqi;
  ena[687] = HAVE_maskstorev4siqi;
  ena[688] = HAVE_maskstorev2diqi;
  ena[689] = HAVE_maskstorev8siqi;
  ena[690] = HAVE_maskstorev4diqi;
  ena[691] = HAVE_maskstorev8diqi;
  ena[692] = HAVE_maskstorev8bfqi;
  ena[693] = HAVE_maskstorev8hfqi;
  ena[694] = HAVE_maskstorev4sfqi;
  ena[695] = HAVE_maskstorev2dfqi;
  ena[696] = HAVE_maskstorev8sfqi;
  ena[697] = HAVE_maskstorev4dfqi;
  ena[698] = HAVE_maskstorev8dfqi;
  ena[699] = HAVE_maskstorev16qihi;
  ena[700] = HAVE_maskstorev16hihi;
  ena[701] = HAVE_maskstorev16sihi;
  ena[702] = HAVE_maskstorev16bfhi;
  ena[703] = HAVE_maskstorev16hfhi;
  ena[704] = HAVE_maskstorev16sfhi;
  ena[705] = HAVE_maskstorev32qisi;
  ena[706] = HAVE_maskstorev32hisi;
  ena[707] = HAVE_maskstorev32bfsi;
  ena[708] = HAVE_maskstorev32hfsi;
  ena[709] = HAVE_maskstorev64qidi;
  ena[710] = HAVE_maskstorev4siv4si;
  ena[711] = HAVE_maskstorev4sfv4si;
  ena[712] = HAVE_maskstorev2div2di;
  ena[713] = HAVE_maskstorev2dfv2di;
  ena[714] = HAVE_maskstorev8siv8si;
  ena[715] = HAVE_maskstorev8sfv8si;
  ena[716] = HAVE_maskstorev4div4di;
  ena[717] = HAVE_maskstorev4dfv4di;
  ena[718] = HAVE_vec_extractv4qiqi;
  ena[719] = HAVE_vec_extractv16qiqi;
  ena[720] = HAVE_vec_extractv32qiqi;
  ena[721] = HAVE_vec_extractv64qiqi;
  ena[722] = HAVE_vec_extractv2hihi;
  ena[723] = HAVE_vec_extractv4hihi;
  ena[724] = HAVE_vec_extractv8hihi;
  ena[725] = HAVE_vec_extractv16hihi;
  ena[726] = HAVE_vec_extractv32hihi;
  ena[727] = HAVE_vec_extractv2sisi;
  ena[728] = HAVE_vec_extractv4sisi;
  ena[729] = HAVE_vec_extractv8sisi;
  ena[730] = HAVE_vec_extractv16sisi;
  ena[731] = HAVE_vec_extractv2didi;
  ena[732] = HAVE_vec_extractv4didi;
  ena[733] = HAVE_vec_extractv8didi;
  ena[734] = HAVE_vec_extractv2titi;
  ena[735] = HAVE_vec_extractv4titi;
  ena[736] = HAVE_vec_extractv2hfhf;
  ena[737] = HAVE_vec_extractv4hfhf;
  ena[738] = HAVE_vec_extractv8hfhf;
  ena[739] = HAVE_vec_extractv16hfhf;
  ena[740] = HAVE_vec_extractv32hfhf;
  ena[741] = HAVE_vec_extractv2bfbf;
  ena[742] = HAVE_vec_extractv4bfbf;
  ena[743] = HAVE_vec_extractv8bfbf;
  ena[744] = HAVE_vec_extractv16bfbf;
  ena[745] = HAVE_vec_extractv32bfbf;
  ena[746] = HAVE_vec_extractv2sfsf;
  ena[747] = HAVE_vec_extractv4sfsf;
  ena[748] = HAVE_vec_extractv8sfsf;
  ena[749] = HAVE_vec_extractv16sfsf;
  ena[750] = HAVE_vec_extractv2dfdf;
  ena[751] = HAVE_vec_extractv4dfdf;
  ena[752] = HAVE_vec_extractv8dfdf;
  ena[753] = HAVE_vec_extractv32qiv16qi;
  ena[754] = HAVE_vec_extractv16hiv8hi;
  ena[755] = HAVE_vec_extractv8siv4si;
  ena[756] = HAVE_vec_extractv4div2di;
  ena[757] = HAVE_vec_extractv64qiv32qi;
  ena[758] = HAVE_vec_extractv32hiv16hi;
  ena[759] = HAVE_vec_extractv16siv8si;
  ena[760] = HAVE_vec_extractv8div4di;
  ena[761] = HAVE_vec_extractv16bfv8bf;
  ena[762] = HAVE_vec_extractv16hfv8hf;
  ena[763] = HAVE_vec_extractv8sfv4sf;
  ena[764] = HAVE_vec_extractv4dfv2df;
  ena[765] = HAVE_vec_extractv32bfv16bf;
  ena[766] = HAVE_vec_extractv32hfv16hf;
  ena[767] = HAVE_vec_extractv16sfv8sf;
  ena[768] = HAVE_vec_extractv8dfv4df;
  ena[769] = HAVE_vec_initv4qiqi;
  ena[770] = HAVE_vec_initv8qiqi;
  ena[771] = HAVE_vec_initv16qiqi;
  ena[772] = HAVE_vec_initv32qiqi;
  ena[773] = HAVE_vec_initv64qiqi;
  ena[774] = HAVE_vec_initv2hihi;
  ena[775] = HAVE_vec_initv4hihi;
  ena[776] = HAVE_vec_initv8hihi;
  ena[777] = HAVE_vec_initv16hihi;
  ena[778] = HAVE_vec_initv32hihi;
  ena[779] = HAVE_vec_initv2sisi;
  ena[780] = HAVE_vec_initv4sisi;
  ena[781] = HAVE_vec_initv8sisi;
  ena[782] = HAVE_vec_initv16sisi;
  ena[783] = HAVE_vec_initv2didi;
  ena[784] = HAVE_vec_initv4didi;
  ena[785] = HAVE_vec_initv8didi;
  ena[786] = HAVE_vec_initv2titi;
  ena[787] = HAVE_vec_initv4titi;
  ena[788] = HAVE_vec_initv2hfhf;
  ena[789] = HAVE_vec_initv8hfhf;
  ena[790] = HAVE_vec_initv16hfhf;
  ena[791] = HAVE_vec_initv32hfhf;
  ena[792] = HAVE_vec_initv2bfbf;
  ena[793] = HAVE_vec_initv8bfbf;
  ena[794] = HAVE_vec_initv16bfbf;
  ena[795] = HAVE_vec_initv32bfbf;
  ena[796] = HAVE_vec_initv2sfsf;
  ena[797] = HAVE_vec_initv4sfsf;
  ena[798] = HAVE_vec_initv8sfsf;
  ena[799] = HAVE_vec_initv16sfsf;
  ena[800] = HAVE_vec_initv2dfdf;
  ena[801] = HAVE_vec_initv4dfdf;
  ena[802] = HAVE_vec_initv8dfdf;
  ena[803] = HAVE_vec_initv16qiv8qi;
  ena[804] = HAVE_vec_initv8hiv4hi;
  ena[805] = HAVE_vec_initv4siv2si;
  ena[806] = HAVE_vec_initv32qiv16qi;
  ena[807] = HAVE_vec_initv16hiv8hi;
  ena[808] = HAVE_vec_initv8siv4si;
  ena[809] = HAVE_vec_initv4div2di;
  ena[810] = HAVE_vec_initv64qiv32qi;
  ena[811] = HAVE_vec_initv32hiv16hi;
  ena[812] = HAVE_vec_initv16siv8si;
  ena[813] = HAVE_vec_initv8div4di;
  ena[814] = HAVE_vec_initv4tiv2ti;
  ena[815] = HAVE_vec_initv8bfv4bf;
  ena[816] = HAVE_vec_initv8hfv4hf;
  ena[817] = HAVE_vec_initv4sfv2sf;
  ena[818] = HAVE_vec_initv16bfv8bf;
  ena[819] = HAVE_vec_initv16hfv8hf;
  ena[820] = HAVE_vec_initv8sfv4sf;
  ena[821] = HAVE_vec_initv4dfv2df;
  ena[822] = HAVE_vec_initv32bfv16bf;
  ena[823] = HAVE_vec_initv32hfv16hf;
  ena[824] = HAVE_vec_initv16sfv8sf;
  ena[825] = HAVE_vec_initv8dfv4df;
  ena[826] = HAVE_addqi3;
  ena[827] = HAVE_addhi3;
  ena[828] = HAVE_addsi3;
  ena[829] = HAVE_adddi3;
  ena[830] = HAVE_addhf3;
  ena[831] = HAVE_addsf3;
  ena[832] = HAVE_adddf3;
  ena[833] = HAVE_addxf3;
  ena[834] = HAVE_addv2qi3;
  ena[835] = HAVE_addv4qi3;
  ena[836] = HAVE_addv2hi3;
  ena[837] = HAVE_addv16qi3;
  ena[838] = HAVE_addv8hi3;
  ena[839] = HAVE_addv4si3;
  ena[840] = HAVE_addv2di3;
  ena[841] = HAVE_addv32qi3;
  ena[842] = HAVE_addv16hi3;
  ena[843] = HAVE_addv8si3;
  ena[844] = HAVE_addv4di3;
  ena[845] = HAVE_addv64qi3;
  ena[846] = HAVE_addv32hi3;
  ena[847] = HAVE_addv16si3;
  ena[848] = HAVE_addv8di3;
  ena[849] = HAVE_addv2hf3;
  ena[850] = HAVE_addv8hf3;
  ena[851] = HAVE_addv4sf3;
  ena[852] = HAVE_addv2df3;
  ena[853] = HAVE_addv16hf3;
  ena[854] = HAVE_addv8sf3;
  ena[855] = HAVE_addv4df3;
  ena[856] = HAVE_addv32hf3;
  ena[857] = HAVE_addv16sf3;
  ena[858] = HAVE_addv8df3;
  ena[859] = HAVE_subqi3;
  ena[860] = HAVE_subhi3;
  ena[861] = HAVE_subsi3;
  ena[862] = HAVE_subdi3;
  ena[863] = HAVE_subhf3;
  ena[864] = HAVE_subsf3;
  ena[865] = HAVE_subdf3;
  ena[866] = HAVE_subxf3;
  ena[867] = HAVE_subv2qi3;
  ena[868] = HAVE_subv4qi3;
  ena[869] = HAVE_subv2hi3;
  ena[870] = HAVE_subv16qi3;
  ena[871] = HAVE_subv8hi3;
  ena[872] = HAVE_subv4si3;
  ena[873] = HAVE_subv2di3;
  ena[874] = HAVE_subv32qi3;
  ena[875] = HAVE_subv16hi3;
  ena[876] = HAVE_subv8si3;
  ena[877] = HAVE_subv4di3;
  ena[878] = HAVE_subv64qi3;
  ena[879] = HAVE_subv32hi3;
  ena[880] = HAVE_subv16si3;
  ena[881] = HAVE_subv8di3;
  ena[882] = HAVE_subv2hf3;
  ena[883] = HAVE_subv8hf3;
  ena[884] = HAVE_subv4sf3;
  ena[885] = HAVE_subv2df3;
  ena[886] = HAVE_subv16hf3;
  ena[887] = HAVE_subv8sf3;
  ena[888] = HAVE_subv4df3;
  ena[889] = HAVE_subv32hf3;
  ena[890] = HAVE_subv16sf3;
  ena[891] = HAVE_subv8df3;
  ena[892] = HAVE_mulqi3;
  ena[893] = HAVE_mulhi3;
  ena[894] = HAVE_mulsi3;
  ena[895] = HAVE_mulhf3;
  ena[896] = HAVE_mulsf3;
  ena[897] = HAVE_muldf3;
  ena[898] = HAVE_mulxf3;
  ena[899] = HAVE_mulv4qi3;
  ena[900] = HAVE_mulv2hi3;
  ena[901] = HAVE_mulv16qi3;
  ena[902] = HAVE_mulv8hi3;
  ena[903] = HAVE_mulv4si3;
  ena[904] = HAVE_mulv2di3;
  ena[905] = HAVE_mulv32qi3;
  ena[906] = HAVE_mulv16hi3;
  ena[907] = HAVE_mulv8si3;
  ena[908] = HAVE_mulv4di3;
  ena[909] = HAVE_mulv64qi3;
  ena[910] = HAVE_mulv32hi3;
  ena[911] = HAVE_mulv16si3;
  ena[912] = HAVE_mulv8di3;
  ena[913] = HAVE_mulv2hf3;
  ena[914] = HAVE_mulv8hf3;
  ena[915] = HAVE_mulv4sf3;
  ena[916] = HAVE_mulv2df3;
  ena[917] = HAVE_mulv16hf3;
  ena[918] = HAVE_mulv8sf3;
  ena[919] = HAVE_mulv4df3;
  ena[920] = HAVE_mulv32hf3;
  ena[921] = HAVE_mulv16sf3;
  ena[922] = HAVE_mulv8df3;
  ena[923] = HAVE_divhf3;
  ena[924] = HAVE_divsf3;
  ena[925] = HAVE_divdf3;
  ena[926] = HAVE_divxf3;
  ena[927] = HAVE_divv2hf3;
  ena[928] = HAVE_divv4hf3;
  ena[929] = HAVE_divv8hf3;
  ena[930] = HAVE_divv4sf3;
  ena[931] = HAVE_divv2df3;
  ena[932] = HAVE_divv16hf3;
  ena[933] = HAVE_divv8sf3;
  ena[934] = HAVE_divv4df3;
  ena[935] = HAVE_divv32hf3;
  ena[936] = HAVE_divv16sf3;
  ena[937] = HAVE_divv8df3;
  ena[938] = HAVE_divmodqi4;
  ena[939] = HAVE_divmodhi4;
  ena[940] = HAVE_divmodsi4;
  ena[941] = HAVE_udivmodqi4;
  ena[942] = HAVE_udivmodhi4;
  ena[943] = HAVE_udivmodsi4;
  ena[944] = HAVE_andqi3;
  ena[945] = HAVE_andhi3;
  ena[946] = HAVE_andsi3;
  ena[947] = HAVE_anddi3;
  ena[948] = HAVE_andhf3;
  ena[949] = HAVE_andbf3;
  ena[950] = HAVE_andsf3;
  ena[951] = HAVE_anddf3;
  ena[952] = HAVE_andtf3;
  ena[953] = HAVE_andv2qi3;
  ena[954] = HAVE_andv4qi3;
  ena[955] = HAVE_andv2hi3;
  ena[956] = HAVE_andv16qi3;
  ena[957] = HAVE_andv8hi3;
  ena[958] = HAVE_andv4si3;
  ena[959] = HAVE_andv2di3;
  ena[960] = HAVE_andv1ti3;
  ena[961] = HAVE_andv32qi3;
  ena[962] = HAVE_andv16hi3;
  ena[963] = HAVE_andv8si3;
  ena[964] = HAVE_andv4di3;
  ena[965] = HAVE_andv64qi3;
  ena[966] = HAVE_andv32hi3;
  ena[967] = HAVE_andv16si3;
  ena[968] = HAVE_andv8di3;
  ena[969] = HAVE_andv2hf3;
  ena[970] = HAVE_andv8hf3;
  ena[971] = HAVE_andv4sf3;
  ena[972] = HAVE_andv2df3;
  ena[973] = HAVE_andv16hf3;
  ena[974] = HAVE_andv8sf3;
  ena[975] = HAVE_andv4df3;
  ena[976] = HAVE_andv32hf3;
  ena[977] = HAVE_andv16sf3;
  ena[978] = HAVE_andv8df3;
  ena[979] = HAVE_iorqi3;
  ena[980] = HAVE_iorhi3;
  ena[981] = HAVE_iorsi3;
  ena[982] = HAVE_iordi3;
  ena[983] = HAVE_iorhf3;
  ena[984] = HAVE_iorbf3;
  ena[985] = HAVE_iorsf3;
  ena[986] = HAVE_iordf3;
  ena[987] = HAVE_iortf3;
  ena[988] = HAVE_iorv2qi3;
  ena[989] = HAVE_iorv4qi3;
  ena[990] = HAVE_iorv2hi3;
  ena[991] = HAVE_iorv16qi3;
  ena[992] = HAVE_iorv8hi3;
  ena[993] = HAVE_iorv4si3;
  ena[994] = HAVE_iorv2di3;
  ena[995] = HAVE_iorv1ti3;
  ena[996] = HAVE_iorv32qi3;
  ena[997] = HAVE_iorv16hi3;
  ena[998] = HAVE_iorv8si3;
  ena[999] = HAVE_iorv4di3;
}

static void
init_optabs_01 (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[1000] = HAVE_iorv64qi3;
  ena[1001] = HAVE_iorv32hi3;
  ena[1002] = HAVE_iorv16si3;
  ena[1003] = HAVE_iorv8di3;
  ena[1004] = HAVE_iorv2hf3;
  ena[1005] = HAVE_iorv8hf3;
  ena[1006] = HAVE_iorv4sf3;
  ena[1007] = HAVE_iorv2df3;
  ena[1008] = HAVE_iorv16hf3;
  ena[1009] = HAVE_iorv8sf3;
  ena[1010] = HAVE_iorv4df3;
  ena[1011] = HAVE_iorv32hf3;
  ena[1012] = HAVE_iorv16sf3;
  ena[1013] = HAVE_iorv8df3;
  ena[1014] = HAVE_xorqi3;
  ena[1015] = HAVE_xorhi3;
  ena[1016] = HAVE_xorsi3;
  ena[1017] = HAVE_xordi3;
  ena[1018] = HAVE_xorhf3;
  ena[1019] = HAVE_xorbf3;
  ena[1020] = HAVE_xorsf3;
  ena[1021] = HAVE_xordf3;
  ena[1022] = HAVE_xortf3;
  ena[1023] = HAVE_xorv2qi3;
  ena[1024] = HAVE_xorv4qi3;
  ena[1025] = HAVE_xorv2hi3;
  ena[1026] = HAVE_xorv16qi3;
  ena[1027] = HAVE_xorv8hi3;
  ena[1028] = HAVE_xorv4si3;
  ena[1029] = HAVE_xorv2di3;
  ena[1030] = HAVE_xorv1ti3;
  ena[1031] = HAVE_xorv32qi3;
  ena[1032] = HAVE_xorv16hi3;
  ena[1033] = HAVE_xorv8si3;
  ena[1034] = HAVE_xorv4di3;
  ena[1035] = HAVE_xorv64qi3;
  ena[1036] = HAVE_xorv32hi3;
  ena[1037] = HAVE_xorv16si3;
  ena[1038] = HAVE_xorv8di3;
  ena[1039] = HAVE_xorv2hf3;
  ena[1040] = HAVE_xorv8hf3;
  ena[1041] = HAVE_xorv4sf3;
  ena[1042] = HAVE_xorv2df3;
  ena[1043] = HAVE_xorv16hf3;
  ena[1044] = HAVE_xorv8sf3;
  ena[1045] = HAVE_xorv4df3;
  ena[1046] = HAVE_xorv32hf3;
  ena[1047] = HAVE_xorv16sf3;
  ena[1048] = HAVE_xorv8df3;
  ena[1049] = HAVE_ashlqi3;
  ena[1050] = HAVE_ashlhi3;
  ena[1051] = HAVE_ashlsi3;
  ena[1052] = HAVE_ashldi3;
  ena[1053] = HAVE_ashlv2qi3;
  ena[1054] = HAVE_ashlv4qi3;
  ena[1055] = HAVE_ashlv2hi3;
  ena[1056] = HAVE_ashlv16qi3;
  ena[1057] = HAVE_ashlv8hi3;
  ena[1058] = HAVE_ashlv4si3;
  ena[1059] = HAVE_ashlv2di3;
  ena[1060] = HAVE_ashlv32qi3;
  ena[1061] = HAVE_ashlv16hi3;
  ena[1062] = HAVE_ashlv8si3;
  ena[1063] = HAVE_ashlv4di3;
  ena[1064] = HAVE_ashlv64qi3;
  ena[1065] = HAVE_ashlv32hi3;
  ena[1066] = HAVE_ashlv16si3;
  ena[1067] = HAVE_ashlv8di3;
  ena[1068] = HAVE_ashrqi3;
  ena[1069] = HAVE_ashrhi3;
  ena[1070] = HAVE_ashrsi3;
  ena[1071] = HAVE_ashrdi3;
  ena[1072] = HAVE_ashrv2qi3;
  ena[1073] = HAVE_ashrv4qi3;
  ena[1074] = HAVE_ashrv2hi3;
  ena[1075] = HAVE_ashrv16qi3;
  ena[1076] = HAVE_ashrv8hi3;
  ena[1077] = HAVE_ashrv4si3;
  ena[1078] = HAVE_ashrv2di3;
  ena[1079] = HAVE_ashrv32qi3;
  ena[1080] = HAVE_ashrv16hi3;
  ena[1081] = HAVE_ashrv8si3;
  ena[1082] = HAVE_ashrv4di3;
  ena[1083] = HAVE_ashrv64qi3;
  ena[1084] = HAVE_ashrv32hi3;
  ena[1085] = HAVE_ashrv16si3;
  ena[1086] = HAVE_ashrv8di3;
  ena[1087] = HAVE_lshrqi3;
  ena[1088] = HAVE_lshrhi3;
  ena[1089] = HAVE_lshrsi3;
  ena[1090] = HAVE_lshrdi3;
  ena[1091] = HAVE_lshrv2qi3;
  ena[1092] = HAVE_lshrv4qi3;
  ena[1093] = HAVE_lshrv2hi3;
  ena[1094] = HAVE_lshrv16qi3;
  ena[1095] = HAVE_lshrv8hi3;
  ena[1096] = HAVE_lshrv4si3;
  ena[1097] = HAVE_lshrv2di3;
  ena[1098] = HAVE_lshrv32qi3;
  ena[1099] = HAVE_lshrv16hi3;
  ena[1100] = HAVE_lshrv8si3;
  ena[1101] = HAVE_lshrv4di3;
  ena[1102] = HAVE_lshrv64qi3;
  ena[1103] = HAVE_lshrv32hi3;
  ena[1104] = HAVE_lshrv16si3;
  ena[1105] = HAVE_lshrv8di3;
  ena[1106] = HAVE_rotlqi3;
  ena[1107] = HAVE_rotlhi3;
  ena[1108] = HAVE_rotlsi3;
  ena[1109] = HAVE_rotldi3;
  ena[1110] = HAVE_rotlv16qi3;
  ena[1111] = HAVE_rotlv8hi3;
  ena[1112] = HAVE_rotlv4si3;
  ena[1113] = HAVE_rotlv2di3;
  ena[1114] = HAVE_rotrqi3;
  ena[1115] = HAVE_rotrhi3;
  ena[1116] = HAVE_rotrsi3;
  ena[1117] = HAVE_rotrdi3;
  ena[1118] = HAVE_rotrv16qi3;
  ena[1119] = HAVE_rotrv8hi3;
  ena[1120] = HAVE_rotrv4si3;
  ena[1121] = HAVE_rotrv2di3;
  ena[1122] = HAVE_vashlv4qi3;
  ena[1123] = HAVE_vashlv16qi3;
  ena[1124] = HAVE_vashlv8hi3;
  ena[1125] = HAVE_vashlv4si3;
  ena[1126] = HAVE_vashlv2di3;
  ena[1127] = HAVE_vashlv32qi3;
  ena[1128] = HAVE_vashlv16hi3;
  ena[1129] = HAVE_vashlv8si3;
  ena[1130] = HAVE_vashlv4di3;
  ena[1131] = HAVE_vashlv64qi3;
  ena[1132] = HAVE_vashlv32hi3;
  ena[1133] = HAVE_vashlv16si3;
  ena[1134] = HAVE_vashlv8di3;
  ena[1135] = HAVE_vashrv4qi3;
  ena[1136] = HAVE_vashrv16qi3;
  ena[1137] = HAVE_vashrv8hi3;
  ena[1138] = HAVE_vashrv4si3;
  ena[1139] = HAVE_vashrv2di3;
  ena[1140] = HAVE_vashrv32qi3;
  ena[1141] = HAVE_vashrv16hi3;
  ena[1142] = HAVE_vashrv8si3;
  ena[1143] = HAVE_vashrv4di3;
  ena[1144] = HAVE_vashrv64qi3;
  ena[1145] = HAVE_vashrv32hi3;
  ena[1146] = HAVE_vashrv16si3;
  ena[1147] = HAVE_vashrv8di3;
  ena[1148] = HAVE_vlshrv4qi3;
  ena[1149] = HAVE_vlshrv16qi3;
  ena[1150] = HAVE_vlshrv8hi3;
  ena[1151] = HAVE_vlshrv4si3;
  ena[1152] = HAVE_vlshrv2di3;
  ena[1153] = HAVE_vlshrv32qi3;
  ena[1154] = HAVE_vlshrv16hi3;
  ena[1155] = HAVE_vlshrv8si3;
  ena[1156] = HAVE_vlshrv4di3;
  ena[1157] = HAVE_vlshrv64qi3;
  ena[1158] = HAVE_vlshrv32hi3;
  ena[1159] = HAVE_vlshrv16si3;
  ena[1160] = HAVE_vlshrv8di3;
  ena[1161] = HAVE_vrotlv16qi3;
  ena[1162] = HAVE_vrotlv8hi3;
  ena[1163] = HAVE_vrotlv4si3;
  ena[1164] = HAVE_vrotlv2di3;
  ena[1165] = HAVE_vrotrv16qi3;
  ena[1166] = HAVE_vrotrv8hi3;
  ena[1167] = HAVE_vrotrv4si3;
  ena[1168] = HAVE_vrotrv2di3;
  ena[1169] = HAVE_sminqi3;
  ena[1170] = HAVE_sminhi3;
  ena[1171] = HAVE_sminsi3;
  ena[1172] = HAVE_smindi3;
  ena[1173] = HAVE_sminhf3;
  ena[1174] = HAVE_sminsf3;
  ena[1175] = HAVE_smindf3;
  ena[1176] = HAVE_sminv2qi3;
  ena[1177] = HAVE_sminv4qi3;
  ena[1178] = HAVE_sminv2hi3;
  ena[1179] = HAVE_sminv16qi3;
  ena[1180] = HAVE_sminv8hi3;
  ena[1181] = HAVE_sminv4si3;
  ena[1182] = HAVE_sminv2di3;
  ena[1183] = HAVE_sminv32qi3;
  ena[1184] = HAVE_sminv16hi3;
  ena[1185] = HAVE_sminv8si3;
  ena[1186] = HAVE_sminv4di3;
  ena[1187] = HAVE_sminv64qi3;
  ena[1188] = HAVE_sminv32hi3;
  ena[1189] = HAVE_sminv16si3;
  ena[1190] = HAVE_sminv8di3;
  ena[1191] = HAVE_sminv2hf3;
  ena[1192] = HAVE_sminv8hf3;
  ena[1193] = HAVE_sminv4sf3;
  ena[1194] = HAVE_sminv2df3;
  ena[1195] = HAVE_sminv16hf3;
  ena[1196] = HAVE_sminv8sf3;
  ena[1197] = HAVE_sminv4df3;
  ena[1198] = HAVE_sminv32hf3;
  ena[1199] = HAVE_sminv16sf3;
  ena[1200] = HAVE_sminv8df3;
  ena[1201] = HAVE_smaxqi3;
  ena[1202] = HAVE_smaxhi3;
  ena[1203] = HAVE_smaxsi3;
  ena[1204] = HAVE_smaxdi3;
  ena[1205] = HAVE_smaxhf3;
  ena[1206] = HAVE_smaxsf3;
  ena[1207] = HAVE_smaxdf3;
  ena[1208] = HAVE_smaxv2qi3;
  ena[1209] = HAVE_smaxv4qi3;
  ena[1210] = HAVE_smaxv2hi3;
  ena[1211] = HAVE_smaxv16qi3;
  ena[1212] = HAVE_smaxv8hi3;
  ena[1213] = HAVE_smaxv4si3;
  ena[1214] = HAVE_smaxv2di3;
  ena[1215] = HAVE_smaxv32qi3;
  ena[1216] = HAVE_smaxv16hi3;
  ena[1217] = HAVE_smaxv8si3;
  ena[1218] = HAVE_smaxv4di3;
  ena[1219] = HAVE_smaxv64qi3;
  ena[1220] = HAVE_smaxv32hi3;
  ena[1221] = HAVE_smaxv16si3;
  ena[1222] = HAVE_smaxv8di3;
  ena[1223] = HAVE_smaxv2hf3;
  ena[1224] = HAVE_smaxv8hf3;
  ena[1225] = HAVE_smaxv4sf3;
  ena[1226] = HAVE_smaxv2df3;
  ena[1227] = HAVE_smaxv16hf3;
  ena[1228] = HAVE_smaxv8sf3;
  ena[1229] = HAVE_smaxv4df3;
  ena[1230] = HAVE_smaxv32hf3;
  ena[1231] = HAVE_smaxv16sf3;
  ena[1232] = HAVE_smaxv8df3;
  ena[1233] = HAVE_uminqi3;
  ena[1234] = HAVE_uminhi3;
  ena[1235] = HAVE_uminsi3;
  ena[1236] = HAVE_umindi3;
  ena[1237] = HAVE_uminv2qi3;
  ena[1238] = HAVE_uminv4qi3;
  ena[1239] = HAVE_uminv2hi3;
  ena[1240] = HAVE_uminv16qi3;
  ena[1241] = HAVE_uminv8hi3;
  ena[1242] = HAVE_uminv4si3;
  ena[1243] = HAVE_uminv2di3;
  ena[1244] = HAVE_uminv32qi3;
  ena[1245] = HAVE_uminv16hi3;
  ena[1246] = HAVE_uminv8si3;
  ena[1247] = HAVE_uminv4di3;
  ena[1248] = HAVE_uminv64qi3;
  ena[1249] = HAVE_uminv32hi3;
  ena[1250] = HAVE_uminv16si3;
  ena[1251] = HAVE_uminv8di3;
  ena[1252] = HAVE_umaxqi3;
  ena[1253] = HAVE_umaxhi3;
  ena[1254] = HAVE_umaxsi3;
  ena[1255] = HAVE_umaxdi3;
  ena[1256] = HAVE_umaxv2qi3;
  ena[1257] = HAVE_umaxv4qi3;
  ena[1258] = HAVE_umaxv2hi3;
  ena[1259] = HAVE_umaxv16qi3;
  ena[1260] = HAVE_umaxv8hi3;
  ena[1261] = HAVE_umaxv4si3;
  ena[1262] = HAVE_umaxv2di3;
  ena[1263] = HAVE_umaxv32qi3;
  ena[1264] = HAVE_umaxv16hi3;
  ena[1265] = HAVE_umaxv8si3;
  ena[1266] = HAVE_umaxv4di3;
  ena[1267] = HAVE_umaxv64qi3;
  ena[1268] = HAVE_umaxv32hi3;
  ena[1269] = HAVE_umaxv16si3;
  ena[1270] = HAVE_umaxv8di3;
  ena[1271] = HAVE_negqi2;
  ena[1272] = HAVE_neghi2;
  ena[1273] = HAVE_negsi2;
  ena[1274] = HAVE_negdi2;
  ena[1275] = HAVE_neghf2;
  ena[1276] = HAVE_negsf2;
  ena[1277] = HAVE_negdf2;
  ena[1278] = HAVE_negxf2;
  ena[1279] = HAVE_negtf2;
  ena[1280] = HAVE_negv2qi2;
  ena[1281] = HAVE_negv4qi2;
  ena[1282] = HAVE_negv2hi2;
  ena[1283] = HAVE_negv16qi2;
  ena[1284] = HAVE_negv8hi2;
  ena[1285] = HAVE_negv4si2;
  ena[1286] = HAVE_negv2di2;
  ena[1287] = HAVE_negv32qi2;
  ena[1288] = HAVE_negv16hi2;
  ena[1289] = HAVE_negv8si2;
  ena[1290] = HAVE_negv4di2;
  ena[1291] = HAVE_negv64qi2;
  ena[1292] = HAVE_negv32hi2;
  ena[1293] = HAVE_negv16si2;
  ena[1294] = HAVE_negv8di2;
  ena[1295] = HAVE_negv2hf2;
  ena[1296] = HAVE_negv8hf2;
  ena[1297] = HAVE_negv4sf2;
  ena[1298] = HAVE_negv2df2;
  ena[1299] = HAVE_negv16hf2;
  ena[1300] = HAVE_negv8sf2;
  ena[1301] = HAVE_negv4df2;
  ena[1302] = HAVE_negv32hf2;
  ena[1303] = HAVE_negv16sf2;
  ena[1304] = HAVE_negv8df2;
  ena[1305] = HAVE_absqi2;
  ena[1306] = HAVE_abshi2;
  ena[1307] = HAVE_abssi2;
  ena[1308] = HAVE_absdi2;
  ena[1309] = HAVE_abshf2;
  ena[1310] = HAVE_abssf2;
  ena[1311] = HAVE_absdf2;
  ena[1312] = HAVE_absxf2;
  ena[1313] = HAVE_abstf2;
  ena[1314] = HAVE_absv2qi2;
  ena[1315] = HAVE_absv4qi2;
  ena[1316] = HAVE_absv2hi2;
  ena[1317] = HAVE_absv16qi2;
  ena[1318] = HAVE_absv8hi2;
  ena[1319] = HAVE_absv4si2;
  ena[1320] = HAVE_absv2di2;
  ena[1321] = HAVE_absv32qi2;
  ena[1322] = HAVE_absv16hi2;
  ena[1323] = HAVE_absv8si2;
  ena[1324] = HAVE_absv4di2;
  ena[1325] = HAVE_absv64qi2;
  ena[1326] = HAVE_absv32hi2;
  ena[1327] = HAVE_absv16si2;
  ena[1328] = HAVE_absv8di2;
  ena[1329] = HAVE_absv2hf2;
  ena[1330] = HAVE_absv8hf2;
  ena[1331] = HAVE_absv4sf2;
  ena[1332] = HAVE_absv2df2;
  ena[1333] = HAVE_absv16hf2;
  ena[1334] = HAVE_absv8sf2;
  ena[1335] = HAVE_absv4df2;
  ena[1336] = HAVE_absv32hf2;
  ena[1337] = HAVE_absv16sf2;
  ena[1338] = HAVE_absv8df2;
  ena[1339] = HAVE_one_cmplqi2;
  ena[1340] = HAVE_one_cmplhi2;
  ena[1341] = HAVE_one_cmplsi2;
  ena[1342] = HAVE_one_cmpldi2;
  ena[1343] = HAVE_one_cmplv2qi2;
  ena[1344] = HAVE_one_cmplv4qi2;
  ena[1345] = HAVE_one_cmplv2hi2;
  ena[1346] = HAVE_one_cmplv16qi2;
  ena[1347] = HAVE_one_cmplv8hi2;
  ena[1348] = HAVE_one_cmplv4si2;
  ena[1349] = HAVE_one_cmplv2di2;
  ena[1350] = HAVE_one_cmplv1ti2;
  ena[1351] = HAVE_one_cmplv32qi2;
  ena[1352] = HAVE_one_cmplv16hi2;
  ena[1353] = HAVE_one_cmplv8si2;
  ena[1354] = HAVE_one_cmplv4di2;
  ena[1355] = HAVE_one_cmplv64qi2;
  ena[1356] = HAVE_one_cmplv32hi2;
  ena[1357] = HAVE_one_cmplv16si2;
  ena[1358] = HAVE_one_cmplv8di2;
  ena[1359] = HAVE_bswaphi2;
  ena[1360] = HAVE_bswapsi2;
  ena[1361] = HAVE_ffssi2;
  ena[1362] = HAVE_clzsi2;
  ena[1363] = HAVE_clzv4si2;
  ena[1364] = HAVE_clzv2di2;
  ena[1365] = HAVE_clzv8si2;
  ena[1366] = HAVE_clzv4di2;
  ena[1367] = HAVE_clzv16si2;
  ena[1368] = HAVE_clzv8di2;
  ena[1369] = HAVE_ctzsi2;
  ena[1370] = HAVE_popcounthi2;
  ena[1371] = HAVE_popcountsi2;
  ena[1372] = HAVE_popcountv16qi2;
  ena[1373] = HAVE_popcountv8hi2;
  ena[1374] = HAVE_popcountv4si2;
  ena[1375] = HAVE_popcountv2di2;
  ena[1376] = HAVE_popcountv32qi2;
  ena[1377] = HAVE_popcountv16hi2;
  ena[1378] = HAVE_popcountv8si2;
  ena[1379] = HAVE_popcountv4di2;
  ena[1380] = HAVE_popcountv64qi2;
  ena[1381] = HAVE_popcountv32hi2;
  ena[1382] = HAVE_popcountv16si2;
  ena[1383] = HAVE_popcountv8di2;
  ena[1384] = HAVE_parityqi2;
  ena[1385] = HAVE_parityhi2;
  ena[1386] = HAVE_paritysi2;
  ena[1387] = HAVE_paritydi2;
  ena[1388] = HAVE_sqrthf2;
  ena[1389] = HAVE_sqrtsf2;
  ena[1390] = HAVE_sqrtdf2;
  ena[1391] = HAVE_sqrtxf2;
  ena[1392] = HAVE_sqrtv2hf2;
  ena[1393] = HAVE_sqrtv8hf2;
  ena[1394] = HAVE_sqrtv4sf2;
  ena[1395] = HAVE_sqrtv2df2;
  ena[1396] = HAVE_sqrtv16hf2;
  ena[1397] = HAVE_sqrtv8sf2;
  ena[1398] = HAVE_sqrtv4df2;
  ena[1399] = HAVE_sqrtv32hf2;
  ena[1400] = HAVE_sqrtv16sf2;
  ena[1401] = HAVE_sqrtv8df2;
  ena[1402] = HAVE_movqi;
  ena[1403] = HAVE_movhi;
  ena[1404] = HAVE_movsi;
  ena[1405] = HAVE_movdi;
  ena[1406] = HAVE_movti;
  ena[1407] = HAVE_movoi;
  ena[1408] = HAVE_movxi;
  ena[1409] = HAVE_movp2qi;
  ena[1410] = HAVE_movp2hi;
  ena[1411] = HAVE_movhf;
  ena[1412] = HAVE_movbf;
  ena[1413] = HAVE_movsf;
  ena[1414] = HAVE_movdf;
  ena[1415] = HAVE_movxf;
  ena[1416] = HAVE_movtf;
  ena[1417] = HAVE_movcdi;
  ena[1418] = HAVE_movv2qi;
  ena[1419] = HAVE_movv4qi;
  ena[1420] = HAVE_movv2hi;
  ena[1421] = HAVE_movv1si;
  ena[1422] = HAVE_movv8qi;
  ena[1423] = HAVE_movv4hi;
  ena[1424] = HAVE_movv2si;
  ena[1425] = HAVE_movv1di;
  ena[1426] = HAVE_movv16qi;
  ena[1427] = HAVE_movv8hi;
  ena[1428] = HAVE_movv4si;
  ena[1429] = HAVE_movv2di;
  ena[1430] = HAVE_movv1ti;
  ena[1431] = HAVE_movv32qi;
  ena[1432] = HAVE_movv16hi;
  ena[1433] = HAVE_movv8si;
  ena[1434] = HAVE_movv4di;
  ena[1435] = HAVE_movv2ti;
  ena[1436] = HAVE_movv64qi;
  ena[1437] = HAVE_movv32hi;
  ena[1438] = HAVE_movv16si;
  ena[1439] = HAVE_movv8di;
  ena[1440] = HAVE_movv4ti;
  ena[1441] = HAVE_movv64si;
  ena[1442] = HAVE_movv2hf;
  ena[1443] = HAVE_movv2bf;
  ena[1444] = HAVE_movv4bf;
  ena[1445] = HAVE_movv4hf;
  ena[1446] = HAVE_movv2sf;
  ena[1447] = HAVE_movv8bf;
  ena[1448] = HAVE_movv8hf;
  ena[1449] = HAVE_movv4sf;
  ena[1450] = HAVE_movv2df;
  ena[1451] = HAVE_movv16bf;
  ena[1452] = HAVE_movv16hf;
  ena[1453] = HAVE_movv8sf;
  ena[1454] = HAVE_movv4df;
  ena[1455] = HAVE_movv32bf;
  ena[1456] = HAVE_movv32hf;
  ena[1457] = HAVE_movv16sf;
  ena[1458] = HAVE_movv8df;
  ena[1459] = HAVE_movv64sf;
  ena[1460] = HAVE_movstrictqi;
  ena[1461] = HAVE_movstricthi;
  ena[1462] = HAVE_movmisalignv2qi;
  ena[1463] = HAVE_movmisalignv4qi;
  ena[1464] = HAVE_movmisalignv2hi;
  ena[1465] = HAVE_movmisalignv1si;
  ena[1466] = HAVE_movmisalignv8qi;
  ena[1467] = HAVE_movmisalignv4hi;
  ena[1468] = HAVE_movmisalignv2si;
  ena[1469] = HAVE_movmisalignv1di;
  ena[1470] = HAVE_movmisalignv16qi;
  ena[1471] = HAVE_movmisalignv8hi;
  ena[1472] = HAVE_movmisalignv4si;
  ena[1473] = HAVE_movmisalignv2di;
  ena[1474] = HAVE_movmisalignv1ti;
  ena[1475] = HAVE_movmisalignv32qi;
  ena[1476] = HAVE_movmisalignv16hi;
  ena[1477] = HAVE_movmisalignv8si;
  ena[1478] = HAVE_movmisalignv4di;
  ena[1479] = HAVE_movmisalignv2ti;
  ena[1480] = HAVE_movmisalignv64qi;
  ena[1481] = HAVE_movmisalignv32hi;
  ena[1482] = HAVE_movmisalignv16si;
  ena[1483] = HAVE_movmisalignv8di;
  ena[1484] = HAVE_movmisalignv4ti;
  ena[1485] = HAVE_movmisalignv2hf;
  ena[1486] = HAVE_movmisalignv2bf;
  ena[1487] = HAVE_movmisalignv4bf;
  ena[1488] = HAVE_movmisalignv4hf;
  ena[1489] = HAVE_movmisalignv2sf;
  ena[1490] = HAVE_movmisalignv8bf;
  ena[1491] = HAVE_movmisalignv8hf;
  ena[1492] = HAVE_movmisalignv4sf;
  ena[1493] = HAVE_movmisalignv2df;
  ena[1494] = HAVE_movmisalignv16bf;
  ena[1495] = HAVE_movmisalignv16hf;
  ena[1496] = HAVE_movmisalignv8sf;
  ena[1497] = HAVE_movmisalignv4df;
  ena[1498] = HAVE_movmisalignv32bf;
  ena[1499] = HAVE_movmisalignv32hf;
  ena[1500] = HAVE_movmisalignv16sf;
  ena[1501] = HAVE_movmisalignv8df;
  ena[1502] = HAVE_storentsi;
  ena[1503] = HAVE_storentsf;
  ena[1504] = HAVE_storentdf;
  ena[1505] = HAVE_storentv2di;
  ena[1506] = HAVE_storentv4di;
  ena[1507] = HAVE_storentv8di;
  ena[1508] = HAVE_storentv4sf;
  ena[1509] = HAVE_storentv2df;
  ena[1510] = HAVE_storentv8sf;
  ena[1511] = HAVE_storentv4df;
  ena[1512] = HAVE_storentv16sf;
  ena[1513] = HAVE_storentv8df;
  ena[1514] = HAVE_insvhi;
  ena[1515] = HAVE_insvsi;
  ena[1516] = HAVE_extvhi;
  ena[1517] = HAVE_extvsi;
  ena[1518] = HAVE_extzvhi;
  ena[1519] = HAVE_extzvsi;
  ena[1520] = HAVE_cbranchcc4;
  ena[1521] = HAVE_cbranchqi4;
  ena[1522] = HAVE_cbranchhi4;
  ena[1523] = HAVE_cbranchsi4;
  ena[1524] = HAVE_cbranchdi4;
  ena[1525] = HAVE_cbranchti4;
  ena[1526] = HAVE_cbranchoi4;
  ena[1527] = HAVE_cbranchxi4;
  ena[1528] = HAVE_cbranchhf4;
  ena[1529] = HAVE_cbranchbf4;
  ena[1530] = HAVE_cbranchsf4;
  ena[1531] = HAVE_cbranchdf4;
  ena[1532] = HAVE_cbranchxf4;
  ena[1533] = HAVE_cbranchv16qi4;
  ena[1534] = HAVE_cbranchv8hi4;
  ena[1535] = HAVE_cbranchv4si4;
  ena[1536] = HAVE_cbranchv2di4;
  ena[1537] = HAVE_cbranchv32qi4;
  ena[1538] = HAVE_cbranchv16hi4;
  ena[1539] = HAVE_cbranchv8si4;
  ena[1540] = HAVE_cbranchv4di4;
  ena[1541] = HAVE_cbranchv64qi4;
  ena[1542] = HAVE_cbranchv32hi4;
  ena[1543] = HAVE_cbranchv16si4;
  ena[1544] = HAVE_cbranchv8di4;
  ena[1545] = HAVE_addqicc;
  ena[1546] = HAVE_addhicc;
  ena[1547] = HAVE_addsicc;
  ena[1548] = HAVE_movqicc;
  ena[1549] = HAVE_movhicc;
  ena[1550] = HAVE_movsicc;
  ena[1551] = HAVE_movhfcc;
  ena[1552] = HAVE_movsfcc;
  ena[1553] = HAVE_movdfcc;
  ena[1554] = HAVE_movxfcc;
  ena[1555] = HAVE_cond_addv16qi;
  ena[1556] = HAVE_cond_addv8hi;
  ena[1557] = HAVE_cond_addv4si;
  ena[1558] = HAVE_cond_addv2di;
  ena[1559] = HAVE_cond_addv32qi;
  ena[1560] = HAVE_cond_addv16hi;
  ena[1561] = HAVE_cond_addv8si;
  ena[1562] = HAVE_cond_addv4di;
  ena[1563] = HAVE_cond_addv64qi;
  ena[1564] = HAVE_cond_addv32hi;
  ena[1565] = HAVE_cond_addv16si;
  ena[1566] = HAVE_cond_addv8di;
  ena[1567] = HAVE_cond_addv8hf;
  ena[1568] = HAVE_cond_addv4sf;
  ena[1569] = HAVE_cond_addv2df;
  ena[1570] = HAVE_cond_addv16hf;
  ena[1571] = HAVE_cond_addv8sf;
  ena[1572] = HAVE_cond_addv4df;
  ena[1573] = HAVE_cond_addv32hf;
  ena[1574] = HAVE_cond_addv16sf;
  ena[1575] = HAVE_cond_addv8df;
  ena[1576] = HAVE_cond_subv16qi;
  ena[1577] = HAVE_cond_subv8hi;
  ena[1578] = HAVE_cond_subv4si;
  ena[1579] = HAVE_cond_subv2di;
  ena[1580] = HAVE_cond_subv32qi;
  ena[1581] = HAVE_cond_subv16hi;
  ena[1582] = HAVE_cond_subv8si;
  ena[1583] = HAVE_cond_subv4di;
  ena[1584] = HAVE_cond_subv64qi;
  ena[1585] = HAVE_cond_subv32hi;
  ena[1586] = HAVE_cond_subv16si;
  ena[1587] = HAVE_cond_subv8di;
  ena[1588] = HAVE_cond_subv8hf;
  ena[1589] = HAVE_cond_subv4sf;
  ena[1590] = HAVE_cond_subv2df;
  ena[1591] = HAVE_cond_subv16hf;
  ena[1592] = HAVE_cond_subv8sf;
  ena[1593] = HAVE_cond_subv4df;
  ena[1594] = HAVE_cond_subv32hf;
  ena[1595] = HAVE_cond_subv16sf;
  ena[1596] = HAVE_cond_subv8df;
  ena[1597] = HAVE_cond_mulv8hi;
  ena[1598] = HAVE_cond_mulv4si;
  ena[1599] = HAVE_cond_mulv2di;
  ena[1600] = HAVE_cond_mulv16hi;
  ena[1601] = HAVE_cond_mulv8si;
  ena[1602] = HAVE_cond_mulv4di;
  ena[1603] = HAVE_cond_mulv32hi;
  ena[1604] = HAVE_cond_mulv16si;
  ena[1605] = HAVE_cond_mulv8di;
  ena[1606] = HAVE_cond_mulv8hf;
  ena[1607] = HAVE_cond_mulv4sf;
  ena[1608] = HAVE_cond_mulv2df;
  ena[1609] = HAVE_cond_mulv16hf;
  ena[1610] = HAVE_cond_mulv8sf;
  ena[1611] = HAVE_cond_mulv4df;
  ena[1612] = HAVE_cond_mulv32hf;
  ena[1613] = HAVE_cond_mulv16sf;
  ena[1614] = HAVE_cond_mulv8df;
  ena[1615] = HAVE_cond_divv8hf;
  ena[1616] = HAVE_cond_divv4sf;
  ena[1617] = HAVE_cond_divv2df;
  ena[1618] = HAVE_cond_divv16hf;
  ena[1619] = HAVE_cond_divv8sf;
  ena[1620] = HAVE_cond_divv4df;
  ena[1621] = HAVE_cond_divv32hf;
  ena[1622] = HAVE_cond_divv16sf;
  ena[1623] = HAVE_cond_divv8df;
  ena[1624] = HAVE_cond_andv4si;
  ena[1625] = HAVE_cond_andv2di;
  ena[1626] = HAVE_cond_andv8si;
  ena[1627] = HAVE_cond_andv4di;
  ena[1628] = HAVE_cond_andv16si;
  ena[1629] = HAVE_cond_andv8di;
  ena[1630] = HAVE_cond_iorv4si;
  ena[1631] = HAVE_cond_iorv2di;
  ena[1632] = HAVE_cond_iorv8si;
  ena[1633] = HAVE_cond_iorv4di;
  ena[1634] = HAVE_cond_iorv16si;
  ena[1635] = HAVE_cond_iorv8di;
  ena[1636] = HAVE_cond_xorv4si;
  ena[1637] = HAVE_cond_xorv2di;
  ena[1638] = HAVE_cond_xorv8si;
  ena[1639] = HAVE_cond_xorv4di;
  ena[1640] = HAVE_cond_xorv16si;
  ena[1641] = HAVE_cond_xorv8di;
  ena[1642] = HAVE_cond_ashlv8hi;
  ena[1643] = HAVE_cond_ashlv4si;
  ena[1644] = HAVE_cond_ashlv2di;
  ena[1645] = HAVE_cond_ashlv16hi;
  ena[1646] = HAVE_cond_ashlv8si;
  ena[1647] = HAVE_cond_ashlv4di;
  ena[1648] = HAVE_cond_ashlv32hi;
  ena[1649] = HAVE_cond_ashlv16si;
  ena[1650] = HAVE_cond_ashlv8di;
  ena[1651] = HAVE_cond_ashrv8hi;
  ena[1652] = HAVE_cond_ashrv4si;
  ena[1653] = HAVE_cond_ashrv2di;
  ena[1654] = HAVE_cond_ashrv16hi;
  ena[1655] = HAVE_cond_ashrv8si;
  ena[1656] = HAVE_cond_ashrv4di;
  ena[1657] = HAVE_cond_ashrv32hi;
  ena[1658] = HAVE_cond_ashrv16si;
  ena[1659] = HAVE_cond_ashrv8di;
  ena[1660] = HAVE_cond_lshrv8hi;
  ena[1661] = HAVE_cond_lshrv4si;
  ena[1662] = HAVE_cond_lshrv2di;
  ena[1663] = HAVE_cond_lshrv16hi;
  ena[1664] = HAVE_cond_lshrv8si;
  ena[1665] = HAVE_cond_lshrv4di;
  ena[1666] = HAVE_cond_lshrv32hi;
  ena[1667] = HAVE_cond_lshrv16si;
  ena[1668] = HAVE_cond_lshrv8di;
  ena[1669] = HAVE_cond_sminv16qi;
  ena[1670] = HAVE_cond_sminv8hi;
  ena[1671] = HAVE_cond_sminv4si;
  ena[1672] = HAVE_cond_sminv2di;
  ena[1673] = HAVE_cond_sminv32qi;
  ena[1674] = HAVE_cond_sminv16hi;
  ena[1675] = HAVE_cond_sminv8si;
  ena[1676] = HAVE_cond_sminv4di;
  ena[1677] = HAVE_cond_sminv64qi;
  ena[1678] = HAVE_cond_sminv32hi;
  ena[1679] = HAVE_cond_sminv16si;
  ena[1680] = HAVE_cond_sminv8di;
  ena[1681] = HAVE_cond_sminv8hf;
  ena[1682] = HAVE_cond_sminv4sf;
  ena[1683] = HAVE_cond_sminv2df;
  ena[1684] = HAVE_cond_sminv16hf;
  ena[1685] = HAVE_cond_sminv8sf;
  ena[1686] = HAVE_cond_sminv4df;
  ena[1687] = HAVE_cond_sminv32hf;
  ena[1688] = HAVE_cond_sminv16sf;
  ena[1689] = HAVE_cond_sminv8df;
  ena[1690] = HAVE_cond_smaxv16qi;
  ena[1691] = HAVE_cond_smaxv8hi;
  ena[1692] = HAVE_cond_smaxv4si;
  ena[1693] = HAVE_cond_smaxv2di;
  ena[1694] = HAVE_cond_smaxv32qi;
  ena[1695] = HAVE_cond_smaxv16hi;
  ena[1696] = HAVE_cond_smaxv8si;
  ena[1697] = HAVE_cond_smaxv4di;
  ena[1698] = HAVE_cond_smaxv64qi;
  ena[1699] = HAVE_cond_smaxv32hi;
  ena[1700] = HAVE_cond_smaxv16si;
  ena[1701] = HAVE_cond_smaxv8di;
  ena[1702] = HAVE_cond_smaxv8hf;
  ena[1703] = HAVE_cond_smaxv4sf;
  ena[1704] = HAVE_cond_smaxv2df;
  ena[1705] = HAVE_cond_smaxv16hf;
  ena[1706] = HAVE_cond_smaxv8sf;
  ena[1707] = HAVE_cond_smaxv4df;
  ena[1708] = HAVE_cond_smaxv32hf;
  ena[1709] = HAVE_cond_smaxv16sf;
  ena[1710] = HAVE_cond_smaxv8df;
  ena[1711] = HAVE_cond_uminv16qi;
  ena[1712] = HAVE_cond_uminv8hi;
  ena[1713] = HAVE_cond_uminv4si;
  ena[1714] = HAVE_cond_uminv2di;
  ena[1715] = HAVE_cond_uminv32qi;
  ena[1716] = HAVE_cond_uminv16hi;
  ena[1717] = HAVE_cond_uminv8si;
  ena[1718] = HAVE_cond_uminv4di;
  ena[1719] = HAVE_cond_uminv64qi;
  ena[1720] = HAVE_cond_uminv32hi;
  ena[1721] = HAVE_cond_uminv16si;
  ena[1722] = HAVE_cond_uminv8di;
  ena[1723] = HAVE_cond_umaxv16qi;
  ena[1724] = HAVE_cond_umaxv8hi;
  ena[1725] = HAVE_cond_umaxv4si;
  ena[1726] = HAVE_cond_umaxv2di;
  ena[1727] = HAVE_cond_umaxv32qi;
  ena[1728] = HAVE_cond_umaxv16hi;
  ena[1729] = HAVE_cond_umaxv8si;
  ena[1730] = HAVE_cond_umaxv4di;
  ena[1731] = HAVE_cond_umaxv64qi;
  ena[1732] = HAVE_cond_umaxv32hi;
  ena[1733] = HAVE_cond_umaxv16si;
  ena[1734] = HAVE_cond_umaxv8di;
  ena[1735] = HAVE_cond_fmav8hf;
  ena[1736] = HAVE_cond_fmav4sf;
  ena[1737] = HAVE_cond_fmav2df;
  ena[1738] = HAVE_cond_fmav16hf;
  ena[1739] = HAVE_cond_fmav8sf;
  ena[1740] = HAVE_cond_fmav4df;
  ena[1741] = HAVE_cond_fmav32hf;
  ena[1742] = HAVE_cond_fmav16sf;
  ena[1743] = HAVE_cond_fmav8df;
  ena[1744] = HAVE_cond_fmsv8hf;
  ena[1745] = HAVE_cond_fmsv4sf;
  ena[1746] = HAVE_cond_fmsv2df;
  ena[1747] = HAVE_cond_fmsv16hf;
  ena[1748] = HAVE_cond_fmsv8sf;
  ena[1749] = HAVE_cond_fmsv4df;
  ena[1750] = HAVE_cond_fmsv32hf;
  ena[1751] = HAVE_cond_fmsv16sf;
  ena[1752] = HAVE_cond_fmsv8df;
  ena[1753] = HAVE_cond_fnmav8hf;
  ena[1754] = HAVE_cond_fnmav4sf;
  ena[1755] = HAVE_cond_fnmav2df;
  ena[1756] = HAVE_cond_fnmav16hf;
  ena[1757] = HAVE_cond_fnmav8sf;
  ena[1758] = HAVE_cond_fnmav4df;
  ena[1759] = HAVE_cond_fnmav32hf;
  ena[1760] = HAVE_cond_fnmav16sf;
  ena[1761] = HAVE_cond_fnmav8df;
  ena[1762] = HAVE_cond_fnmsv8hf;
  ena[1763] = HAVE_cond_fnmsv4sf;
  ena[1764] = HAVE_cond_fnmsv2df;
  ena[1765] = HAVE_cond_fnmsv16hf;
  ena[1766] = HAVE_cond_fnmsv8sf;
  ena[1767] = HAVE_cond_fnmsv4df;
  ena[1768] = HAVE_cond_fnmsv32hf;
  ena[1769] = HAVE_cond_fnmsv16sf;
  ena[1770] = HAVE_cond_fnmsv8df;
  ena[1771] = HAVE_cstorecc4;
  ena[1772] = HAVE_cstoreqi4;
  ena[1773] = HAVE_cstorehi4;
  ena[1774] = HAVE_cstoresi4;
  ena[1775] = HAVE_cstoredi4;
  ena[1776] = HAVE_cstorehf4;
  ena[1777] = HAVE_cstorebf4;
  ena[1778] = HAVE_cstoresf4;
  ena[1779] = HAVE_cstoredf4;
  ena[1780] = HAVE_cstorexf4;
  ena[1781] = HAVE_addvqi4;
  ena[1782] = HAVE_addvhi4;
  ena[1783] = HAVE_addvsi4;
  ena[1784] = HAVE_addvdi4;
  ena[1785] = HAVE_subvqi4;
  ena[1786] = HAVE_subvhi4;
  ena[1787] = HAVE_subvsi4;
  ena[1788] = HAVE_subvdi4;
  ena[1789] = HAVE_mulvqi4;
  ena[1790] = HAVE_mulvhi4;
  ena[1791] = HAVE_mulvsi4;
  ena[1792] = HAVE_uaddvqi4;
  ena[1793] = HAVE_uaddvhi4;
  ena[1794] = HAVE_uaddvsi4;
  ena[1795] = HAVE_uaddvdi4;
  ena[1796] = HAVE_usubvqi4;
  ena[1797] = HAVE_usubvhi4;
  ena[1798] = HAVE_usubvsi4;
  ena[1799] = HAVE_umulvqi4;
  ena[1800] = HAVE_umulvhi4;
  ena[1801] = HAVE_umulvsi4;
  ena[1802] = HAVE_negvqi3;
  ena[1803] = HAVE_negvhi3;
  ena[1804] = HAVE_negvsi3;
  ena[1805] = HAVE_uaddcsi5;
  ena[1806] = HAVE_usubcsi5;
  ena[1807] = HAVE_spaceshipsf3;
  ena[1808] = HAVE_spaceshipdf3;
  ena[1809] = HAVE_spaceshipxf3;
  ena[1810] = HAVE_smulsi3_highpart;
  ena[1811] = HAVE_smulv2hi3_highpart;
  ena[1812] = HAVE_smulv8hi3_highpart;
  ena[1813] = HAVE_smulv16hi3_highpart;
  ena[1814] = HAVE_smulv32hi3_highpart;
  ena[1815] = HAVE_umulsi3_highpart;
  ena[1816] = HAVE_umulv2hi3_highpart;
  ena[1817] = HAVE_umulv8hi3_highpart;
  ena[1818] = HAVE_umulv16hi3_highpart;
  ena[1819] = HAVE_umulv32hi3_highpart;
  ena[1820] = HAVE_cmpmemsi;
  ena[1821] = HAVE_cmpstrnsi;
  ena[1822] = HAVE_cpymemsi;
  ena[1823] = HAVE_setmemsi;
  ena[1824] = HAVE_strlensi;
  ena[1825] = HAVE_strlendi;
  ena[1826] = HAVE_fmahf4;
  ena[1827] = HAVE_fmasf4;
  ena[1828] = HAVE_fmadf4;
  ena[1829] = HAVE_fmav2hf4;
  ena[1830] = HAVE_fmav8hf4;
  ena[1831] = HAVE_fmav4sf4;
  ena[1832] = HAVE_fmav2df4;
  ena[1833] = HAVE_fmav16hf4;
  ena[1834] = HAVE_fmav8sf4;
  ena[1835] = HAVE_fmav4df4;
  ena[1836] = HAVE_fmav32hf4;
  ena[1837] = HAVE_fmav16sf4;
  ena[1838] = HAVE_fmav8df4;
  ena[1839] = HAVE_fmshf4;
  ena[1840] = HAVE_fmssf4;
  ena[1841] = HAVE_fmsdf4;
  ena[1842] = HAVE_fmsv2hf4;
  ena[1843] = HAVE_fmsv8hf4;
  ena[1844] = HAVE_fmsv4sf4;
  ena[1845] = HAVE_fmsv2df4;
  ena[1846] = HAVE_fmsv16hf4;
  ena[1847] = HAVE_fmsv8sf4;
  ena[1848] = HAVE_fmsv4df4;
  ena[1849] = HAVE_fmsv32hf4;
  ena[1850] = HAVE_fmsv16sf4;
  ena[1851] = HAVE_fmsv8df4;
  ena[1852] = HAVE_fnmahf4;
  ena[1853] = HAVE_fnmasf4;
  ena[1854] = HAVE_fnmadf4;
  ena[1855] = HAVE_fnmav2hf4;
  ena[1856] = HAVE_fnmav8hf4;
  ena[1857] = HAVE_fnmav4sf4;
  ena[1858] = HAVE_fnmav2df4;
  ena[1859] = HAVE_fnmav16hf4;
  ena[1860] = HAVE_fnmav8sf4;
  ena[1861] = HAVE_fnmav4df4;
  ena[1862] = HAVE_fnmav32hf4;
  ena[1863] = HAVE_fnmav16sf4;
  ena[1864] = HAVE_fnmav8df4;
  ena[1865] = HAVE_fnmshf4;
  ena[1866] = HAVE_fnmssf4;
  ena[1867] = HAVE_fnmsdf4;
  ena[1868] = HAVE_fnmsv2hf4;
  ena[1869] = HAVE_fnmsv8hf4;
  ena[1870] = HAVE_fnmsv4sf4;
  ena[1871] = HAVE_fnmsv2df4;
  ena[1872] = HAVE_fnmsv16hf4;
  ena[1873] = HAVE_fnmsv8sf4;
  ena[1874] = HAVE_fnmsv4df4;
  ena[1875] = HAVE_fnmsv32hf4;
  ena[1876] = HAVE_fnmsv16sf4;
  ena[1877] = HAVE_fnmsv8df4;
  ena[1878] = HAVE_rinthf2;
  ena[1879] = HAVE_rintsf2;
  ena[1880] = HAVE_rintdf2;
  ena[1881] = HAVE_rintxf2;
  ena[1882] = HAVE_rintv2hf2;
  ena[1883] = HAVE_rintv8hf2;
  ena[1884] = HAVE_rintv4sf2;
  ena[1885] = HAVE_rintv2df2;
  ena[1886] = HAVE_rintv16hf2;
  ena[1887] = HAVE_rintv8sf2;
  ena[1888] = HAVE_rintv4df2;
  ena[1889] = HAVE_rintv32hf2;
  ena[1890] = HAVE_rintv16sf2;
  ena[1891] = HAVE_rintv8df2;
  ena[1892] = HAVE_roundhf2;
  ena[1893] = HAVE_roundsf2;
  ena[1894] = HAVE_rounddf2;
  ena[1895] = HAVE_roundxf2;
  ena[1896] = HAVE_roundv2hf2;
  ena[1897] = HAVE_roundv8hf2;
  ena[1898] = HAVE_roundv4sf2;
  ena[1899] = HAVE_roundv2df2;
  ena[1900] = HAVE_roundv16hf2;
  ena[1901] = HAVE_roundv8sf2;
  ena[1902] = HAVE_roundv4df2;
  ena[1903] = HAVE_roundv32hf2;
  ena[1904] = HAVE_roundv16sf2;
  ena[1905] = HAVE_roundv8df2;
  ena[1906] = HAVE_roundevenhf2;
  ena[1907] = HAVE_roundevensf2;
  ena[1908] = HAVE_roundevendf2;
  ena[1909] = HAVE_roundevenxf2;
  ena[1910] = HAVE_floorhf2;
  ena[1911] = HAVE_floorsf2;
  ena[1912] = HAVE_floordf2;
  ena[1913] = HAVE_floorxf2;
  ena[1914] = HAVE_floorv2hf2;
  ena[1915] = HAVE_floorv8hf2;
  ena[1916] = HAVE_floorv4sf2;
  ena[1917] = HAVE_floorv2df2;
  ena[1918] = HAVE_floorv16hf2;
  ena[1919] = HAVE_floorv8sf2;
  ena[1920] = HAVE_floorv4df2;
  ena[1921] = HAVE_floorv32hf2;
  ena[1922] = HAVE_floorv16sf2;
  ena[1923] = HAVE_floorv8df2;
  ena[1924] = HAVE_ceilhf2;
  ena[1925] = HAVE_ceilsf2;
  ena[1926] = HAVE_ceildf2;
  ena[1927] = HAVE_ceilxf2;
  ena[1928] = HAVE_ceilv2hf2;
  ena[1929] = HAVE_ceilv8hf2;
  ena[1930] = HAVE_ceilv4sf2;
  ena[1931] = HAVE_ceilv2df2;
  ena[1932] = HAVE_ceilv16hf2;
  ena[1933] = HAVE_ceilv8sf2;
  ena[1934] = HAVE_ceilv4df2;
  ena[1935] = HAVE_ceilv32hf2;
  ena[1936] = HAVE_ceilv16sf2;
  ena[1937] = HAVE_ceilv8df2;
  ena[1938] = HAVE_btrunchf2;
  ena[1939] = HAVE_btruncsf2;
  ena[1940] = HAVE_btruncdf2;
  ena[1941] = HAVE_btruncxf2;
  ena[1942] = HAVE_btruncv2hf2;
  ena[1943] = HAVE_btruncv8hf2;
  ena[1944] = HAVE_btruncv4sf2;
  ena[1945] = HAVE_btruncv2df2;
  ena[1946] = HAVE_btruncv16hf2;
  ena[1947] = HAVE_btruncv8sf2;
  ena[1948] = HAVE_btruncv4df2;
  ena[1949] = HAVE_btruncv32hf2;
  ena[1950] = HAVE_btruncv16sf2;
  ena[1951] = HAVE_btruncv8df2;
  ena[1952] = HAVE_nearbyinthf2;
  ena[1953] = HAVE_nearbyintsf2;
  ena[1954] = HAVE_nearbyintdf2;
  ena[1955] = HAVE_nearbyintxf2;
  ena[1956] = HAVE_nearbyintv2hf2;
  ena[1957] = HAVE_nearbyintv8hf2;
  ena[1958] = HAVE_nearbyintv4sf2;
  ena[1959] = HAVE_nearbyintv2df2;
  ena[1960] = HAVE_nearbyintv16hf2;
  ena[1961] = HAVE_nearbyintv8sf2;
  ena[1962] = HAVE_nearbyintv4df2;
  ena[1963] = HAVE_nearbyintv32hf2;
  ena[1964] = HAVE_nearbyintv16sf2;
  ena[1965] = HAVE_nearbyintv8df2;
  ena[1966] = HAVE_acossf2;
  ena[1967] = HAVE_acosdf2;
  ena[1968] = HAVE_acosxf2;
  ena[1969] = HAVE_acoshsf2;
  ena[1970] = HAVE_acoshdf2;
  ena[1971] = HAVE_acoshxf2;
  ena[1972] = HAVE_asinsf2;
  ena[1973] = HAVE_asindf2;
  ena[1974] = HAVE_asinxf2;
  ena[1975] = HAVE_asinhsf2;
  ena[1976] = HAVE_asinhdf2;
  ena[1977] = HAVE_asinhxf2;
  ena[1978] = HAVE_atan2sf3;
  ena[1979] = HAVE_atan2df3;
  ena[1980] = HAVE_atan2xf3;
  ena[1981] = HAVE_atansf2;
  ena[1982] = HAVE_atandf2;
  ena[1983] = HAVE_atanxf2;
  ena[1984] = HAVE_atanhsf2;
  ena[1985] = HAVE_atanhdf2;
  ena[1986] = HAVE_atanhxf2;
  ena[1987] = HAVE_copysignhf3;
  ena[1988] = HAVE_copysignsf3;
  ena[1989] = HAVE_copysigndf3;
  ena[1990] = HAVE_copysigntf3;
  ena[1991] = HAVE_copysignv2hf3;
  ena[1992] = HAVE_copysignv8hf3;
  ena[1993] = HAVE_copysignv4sf3;
  ena[1994] = HAVE_copysignv2df3;
  ena[1995] = HAVE_copysignv16hf3;
  ena[1996] = HAVE_copysignv8sf3;
  ena[1997] = HAVE_copysignv4df3;
  ena[1998] = HAVE_copysignv32hf3;
  ena[1999] = HAVE_copysignv16sf3;
}

static void
init_optabs_02 (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[2000] = HAVE_copysignv8df3;
  ena[2001] = HAVE_xorsignhf3;
  ena[2002] = HAVE_xorsignsf3;
  ena[2003] = HAVE_xorsigndf3;
  ena[2004] = HAVE_xorsignv2hf3;
  ena[2005] = HAVE_xorsignv8hf3;
  ena[2006] = HAVE_xorsignv4sf3;
  ena[2007] = HAVE_xorsignv2df3;
  ena[2008] = HAVE_xorsignv16hf3;
  ena[2009] = HAVE_xorsignv8sf3;
  ena[2010] = HAVE_xorsignv4df3;
  ena[2011] = HAVE_xorsignv32hf3;
  ena[2012] = HAVE_xorsignv16sf3;
  ena[2013] = HAVE_xorsignv8df3;
  ena[2014] = HAVE_cmulv4hf3;
  ena[2015] = HAVE_cmulv8hf3;
  ena[2016] = HAVE_cmulv16hf3;
  ena[2017] = HAVE_cmulv32hf3;
  ena[2018] = HAVE_cmul_conjv4hf3;
  ena[2019] = HAVE_cmul_conjv8hf3;
  ena[2020] = HAVE_cmul_conjv16hf3;
  ena[2021] = HAVE_cmul_conjv32hf3;
  ena[2022] = HAVE_cmlav4hf4;
  ena[2023] = HAVE_cmlav8hf4;
  ena[2024] = HAVE_cmlav16hf4;
  ena[2025] = HAVE_cmlav32hf4;
  ena[2026] = HAVE_cmla_conjv4hf4;
  ena[2027] = HAVE_cmla_conjv8hf4;
  ena[2028] = HAVE_cmla_conjv16hf4;
  ena[2029] = HAVE_cmla_conjv32hf4;
  ena[2030] = HAVE_cossf2;
  ena[2031] = HAVE_cosdf2;
  ena[2032] = HAVE_cosxf2;
  ena[2033] = HAVE_coshsf2;
  ena[2034] = HAVE_coshdf2;
  ena[2035] = HAVE_coshxf2;
  ena[2036] = HAVE_exp10sf2;
  ena[2037] = HAVE_exp10df2;
  ena[2038] = HAVE_exp10xf2;
  ena[2039] = HAVE_exp2sf2;
  ena[2040] = HAVE_exp2df2;
  ena[2041] = HAVE_exp2xf2;
  ena[2042] = HAVE_exp2v16sf2;
  ena[2043] = HAVE_exp2v8df2;
  ena[2044] = HAVE_expsf2;
  ena[2045] = HAVE_expdf2;
  ena[2046] = HAVE_expxf2;
  ena[2047] = HAVE_expm1sf2;
  ena[2048] = HAVE_expm1df2;
  ena[2049] = HAVE_expm1xf2;
  ena[2050] = HAVE_fmodsf3;
  ena[2051] = HAVE_fmoddf3;
  ena[2052] = HAVE_fmodxf3;
  ena[2053] = HAVE_hypotsf3;
  ena[2054] = HAVE_hypotdf3;
  ena[2055] = HAVE_ilogbsf2;
  ena[2056] = HAVE_ilogbdf2;
  ena[2057] = HAVE_ilogbxf2;
  ena[2058] = HAVE_issignalingxf2;
  ena[2059] = HAVE_ldexpsf3;
  ena[2060] = HAVE_ldexpdf3;
  ena[2061] = HAVE_ldexpxf3;
  ena[2062] = HAVE_log10sf2;
  ena[2063] = HAVE_log10df2;
  ena[2064] = HAVE_log10xf2;
  ena[2065] = HAVE_log1psf2;
  ena[2066] = HAVE_log1pdf2;
  ena[2067] = HAVE_log1pxf2;
  ena[2068] = HAVE_log2sf2;
  ena[2069] = HAVE_log2df2;
  ena[2070] = HAVE_log2xf2;
  ena[2071] = HAVE_logsf2;
  ena[2072] = HAVE_logdf2;
  ena[2073] = HAVE_logxf2;
  ena[2074] = HAVE_logbsf2;
  ena[2075] = HAVE_logbdf2;
  ena[2076] = HAVE_logbxf2;
  ena[2077] = HAVE_remaindersf3;
  ena[2078] = HAVE_remainderdf3;
  ena[2079] = HAVE_remainderxf3;
  ena[2080] = HAVE_rsqrthf2;
  ena[2081] = HAVE_rsqrtsf2;
  ena[2082] = HAVE_rsqrtv8hf2;
  ena[2083] = HAVE_rsqrtv4sf2;
  ena[2084] = HAVE_rsqrtv16hf2;
  ena[2085] = HAVE_rsqrtv8sf2;
  ena[2086] = HAVE_rsqrtv32hf2;
  ena[2087] = HAVE_rsqrtv16sf2;
  ena[2088] = HAVE_scalbsf3;
  ena[2089] = HAVE_scalbdf3;
  ena[2090] = HAVE_scalbxf3;
  ena[2091] = HAVE_signbitsf2;
  ena[2092] = HAVE_signbitdf2;
  ena[2093] = HAVE_signbitxf2;
  ena[2094] = HAVE_signbittf2;
  ena[2095] = HAVE_signbitv2hf2;
  ena[2096] = HAVE_signbitv4sf2;
  ena[2097] = HAVE_signbitv8sf2;
  ena[2098] = HAVE_signbitv16sf2;
  ena[2099] = HAVE_significandsf2;
  ena[2100] = HAVE_significanddf2;
  ena[2101] = HAVE_significandxf2;
  ena[2102] = HAVE_sinsf2;
  ena[2103] = HAVE_sindf2;
  ena[2104] = HAVE_sinxf2;
  ena[2105] = HAVE_sincossf3;
  ena[2106] = HAVE_sincosdf3;
  ena[2107] = HAVE_sincosxf3;
  ena[2108] = HAVE_sinhsf2;
  ena[2109] = HAVE_sinhdf2;
  ena[2110] = HAVE_sinhxf2;
  ena[2111] = HAVE_tansf2;
  ena[2112] = HAVE_tandf2;
  ena[2113] = HAVE_tanxf2;
  ena[2114] = HAVE_tanhsf2;
  ena[2115] = HAVE_tanhdf2;
  ena[2116] = HAVE_tanhxf2;
  ena[2117] = HAVE_reduc_smax_scal_v4qi;
  ena[2118] = HAVE_reduc_smax_scal_v16qi;
  ena[2119] = HAVE_reduc_smax_scal_v8hi;
  ena[2120] = HAVE_reduc_smax_scal_v4si;
  ena[2121] = HAVE_reduc_smax_scal_v2di;
  ena[2122] = HAVE_reduc_smax_scal_v32qi;
  ena[2123] = HAVE_reduc_smax_scal_v16hi;
  ena[2124] = HAVE_reduc_smax_scal_v8si;
  ena[2125] = HAVE_reduc_smax_scal_v4di;
  ena[2126] = HAVE_reduc_smax_scal_v64qi;
  ena[2127] = HAVE_reduc_smax_scal_v32hi;
  ena[2128] = HAVE_reduc_smax_scal_v16si;
  ena[2129] = HAVE_reduc_smax_scal_v8di;
  ena[2130] = HAVE_reduc_smax_scal_v8hf;
  ena[2131] = HAVE_reduc_smax_scal_v4sf;
  ena[2132] = HAVE_reduc_smax_scal_v2df;
  ena[2133] = HAVE_reduc_smax_scal_v16hf;
  ena[2134] = HAVE_reduc_smax_scal_v8sf;
  ena[2135] = HAVE_reduc_smax_scal_v4df;
  ena[2136] = HAVE_reduc_smax_scal_v32hf;
  ena[2137] = HAVE_reduc_smax_scal_v16sf;
  ena[2138] = HAVE_reduc_smax_scal_v8df;
  ena[2139] = HAVE_reduc_smin_scal_v4qi;
  ena[2140] = HAVE_reduc_smin_scal_v16qi;
  ena[2141] = HAVE_reduc_smin_scal_v8hi;
  ena[2142] = HAVE_reduc_smin_scal_v4si;
  ena[2143] = HAVE_reduc_smin_scal_v2di;
  ena[2144] = HAVE_reduc_smin_scal_v32qi;
  ena[2145] = HAVE_reduc_smin_scal_v16hi;
  ena[2146] = HAVE_reduc_smin_scal_v8si;
  ena[2147] = HAVE_reduc_smin_scal_v4di;
  ena[2148] = HAVE_reduc_smin_scal_v64qi;
  ena[2149] = HAVE_reduc_smin_scal_v32hi;
  ena[2150] = HAVE_reduc_smin_scal_v16si;
  ena[2151] = HAVE_reduc_smin_scal_v8di;
  ena[2152] = HAVE_reduc_smin_scal_v8hf;
  ena[2153] = HAVE_reduc_smin_scal_v4sf;
  ena[2154] = HAVE_reduc_smin_scal_v2df;
  ena[2155] = HAVE_reduc_smin_scal_v16hf;
  ena[2156] = HAVE_reduc_smin_scal_v8sf;
  ena[2157] = HAVE_reduc_smin_scal_v4df;
  ena[2158] = HAVE_reduc_smin_scal_v32hf;
  ena[2159] = HAVE_reduc_smin_scal_v16sf;
  ena[2160] = HAVE_reduc_smin_scal_v8df;
  ena[2161] = HAVE_reduc_plus_scal_v4qi;
  ena[2162] = HAVE_reduc_plus_scal_v16qi;
  ena[2163] = HAVE_reduc_plus_scal_v8hi;
  ena[2164] = HAVE_reduc_plus_scal_v4si;
  ena[2165] = HAVE_reduc_plus_scal_v2di;
  ena[2166] = HAVE_reduc_plus_scal_v32qi;
  ena[2167] = HAVE_reduc_plus_scal_v16hi;
  ena[2168] = HAVE_reduc_plus_scal_v8si;
  ena[2169] = HAVE_reduc_plus_scal_v4di;
  ena[2170] = HAVE_reduc_plus_scal_v64qi;
  ena[2171] = HAVE_reduc_plus_scal_v32hi;
  ena[2172] = HAVE_reduc_plus_scal_v16si;
  ena[2173] = HAVE_reduc_plus_scal_v8di;
  ena[2174] = HAVE_reduc_plus_scal_v8hf;
  ena[2175] = HAVE_reduc_plus_scal_v4sf;
  ena[2176] = HAVE_reduc_plus_scal_v2df;
  ena[2177] = HAVE_reduc_plus_scal_v16hf;
  ena[2178] = HAVE_reduc_plus_scal_v8sf;
  ena[2179] = HAVE_reduc_plus_scal_v4df;
  ena[2180] = HAVE_reduc_plus_scal_v32hf;
  ena[2181] = HAVE_reduc_plus_scal_v16sf;
  ena[2182] = HAVE_reduc_plus_scal_v8df;
  ena[2183] = HAVE_reduc_umax_scal_v4qi;
  ena[2184] = HAVE_reduc_umax_scal_v32qi;
  ena[2185] = HAVE_reduc_umax_scal_v16hi;
  ena[2186] = HAVE_reduc_umax_scal_v8si;
  ena[2187] = HAVE_reduc_umax_scal_v4di;
  ena[2188] = HAVE_reduc_umax_scal_v64qi;
  ena[2189] = HAVE_reduc_umax_scal_v32hi;
  ena[2190] = HAVE_reduc_umax_scal_v16si;
  ena[2191] = HAVE_reduc_umax_scal_v8di;
  ena[2192] = HAVE_reduc_umin_scal_v4qi;
  ena[2193] = HAVE_reduc_umin_scal_v8hi;
  ena[2194] = HAVE_reduc_umin_scal_v32qi;
  ena[2195] = HAVE_reduc_umin_scal_v16hi;
  ena[2196] = HAVE_reduc_umin_scal_v8si;
  ena[2197] = HAVE_reduc_umin_scal_v4di;
  ena[2198] = HAVE_reduc_umin_scal_v64qi;
  ena[2199] = HAVE_reduc_umin_scal_v32hi;
  ena[2200] = HAVE_reduc_umin_scal_v16si;
  ena[2201] = HAVE_reduc_umin_scal_v8di;
  ena[2202] = HAVE_reduc_and_scal_v4qi;
  ena[2203] = HAVE_reduc_and_scal_v16qi;
  ena[2204] = HAVE_reduc_and_scal_v8hi;
  ena[2205] = HAVE_reduc_and_scal_v4si;
  ena[2206] = HAVE_reduc_and_scal_v2di;
  ena[2207] = HAVE_reduc_and_scal_v32qi;
  ena[2208] = HAVE_reduc_and_scal_v16hi;
  ena[2209] = HAVE_reduc_and_scal_v8si;
  ena[2210] = HAVE_reduc_and_scal_v4di;
  ena[2211] = HAVE_reduc_and_scal_v64qi;
  ena[2212] = HAVE_reduc_and_scal_v32hi;
  ena[2213] = HAVE_reduc_and_scal_v16si;
  ena[2214] = HAVE_reduc_and_scal_v8di;
  ena[2215] = HAVE_reduc_ior_scal_v4qi;
  ena[2216] = HAVE_reduc_ior_scal_v16qi;
  ena[2217] = HAVE_reduc_ior_scal_v8hi;
  ena[2218] = HAVE_reduc_ior_scal_v4si;
  ena[2219] = HAVE_reduc_ior_scal_v2di;
  ena[2220] = HAVE_reduc_ior_scal_v32qi;
  ena[2221] = HAVE_reduc_ior_scal_v16hi;
  ena[2222] = HAVE_reduc_ior_scal_v8si;
  ena[2223] = HAVE_reduc_ior_scal_v4di;
  ena[2224] = HAVE_reduc_ior_scal_v64qi;
  ena[2225] = HAVE_reduc_ior_scal_v32hi;
  ena[2226] = HAVE_reduc_ior_scal_v16si;
  ena[2227] = HAVE_reduc_ior_scal_v8di;
  ena[2228] = HAVE_reduc_xor_scal_v4qi;
  ena[2229] = HAVE_reduc_xor_scal_v16qi;
  ena[2230] = HAVE_reduc_xor_scal_v8hi;
  ena[2231] = HAVE_reduc_xor_scal_v4si;
  ena[2232] = HAVE_reduc_xor_scal_v2di;
  ena[2233] = HAVE_reduc_xor_scal_v32qi;
  ena[2234] = HAVE_reduc_xor_scal_v16hi;
  ena[2235] = HAVE_reduc_xor_scal_v8si;
  ena[2236] = HAVE_reduc_xor_scal_v4di;
  ena[2237] = HAVE_reduc_xor_scal_v64qi;
  ena[2238] = HAVE_reduc_xor_scal_v32hi;
  ena[2239] = HAVE_reduc_xor_scal_v16si;
  ena[2240] = HAVE_reduc_xor_scal_v8di;
  ena[2241] = HAVE_uavgv2qi3_ceil;
  ena[2242] = HAVE_uavgv4qi3_ceil;
  ena[2243] = HAVE_uavgv2hi3_ceil;
  ena[2244] = HAVE_uavgv16qi3_ceil;
  ena[2245] = HAVE_uavgv8hi3_ceil;
  ena[2246] = HAVE_uavgv32qi3_ceil;
  ena[2247] = HAVE_uavgv16hi3_ceil;
  ena[2248] = HAVE_uavgv64qi3_ceil;
  ena[2249] = HAVE_uavgv32hi3_ceil;
  ena[2250] = HAVE_sdot_prodv16qi;
  ena[2251] = HAVE_sdot_prodv8hi;
  ena[2252] = HAVE_sdot_prodv4si;
  ena[2253] = HAVE_sdot_prodv32qi;
  ena[2254] = HAVE_sdot_prodv16hi;
  ena[2255] = HAVE_sdot_prodv64qi;
  ena[2256] = HAVE_sdot_prodv32hi;
  ena[2257] = HAVE_udot_prodv16qi;
  ena[2258] = HAVE_udot_prodv8hi;
  ena[2259] = HAVE_udot_prodv32qi;
  ena[2260] = HAVE_udot_prodv16hi;
  ena[2261] = HAVE_udot_prodv64qi;
  ena[2262] = HAVE_usdot_prodv16qi;
  ena[2263] = HAVE_usdot_prodv8hi;
  ena[2264] = HAVE_usdot_prodv32qi;
  ena[2265] = HAVE_usdot_prodv16hi;
  ena[2266] = HAVE_usdot_prodv64qi;
  ena[2267] = HAVE_usadv16qi;
  ena[2268] = HAVE_usadv32qi;
  ena[2269] = HAVE_usadv64qi;
  ena[2270] = HAVE_smulhrsv2hi3;
  ena[2271] = HAVE_smulhrsv8hi3;
  ena[2272] = HAVE_smulhrsv16hi3;
  ena[2273] = HAVE_smulhrsv32hi3;
  ena[2274] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[2275] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[2276] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[2277] = HAVE_vec_pack_trunc_qi;
  ena[2278] = HAVE_vec_pack_trunc_hi;
  ena[2279] = HAVE_vec_pack_trunc_si;
  ena[2280] = HAVE_vec_pack_trunc_v2hi;
  ena[2281] = HAVE_vec_pack_trunc_v8hi;
  ena[2282] = HAVE_vec_pack_trunc_v4si;
  ena[2283] = HAVE_vec_pack_trunc_v2di;
  ena[2284] = HAVE_vec_pack_trunc_v16hi;
  ena[2285] = HAVE_vec_pack_trunc_v8si;
  ena[2286] = HAVE_vec_pack_trunc_v4di;
  ena[2287] = HAVE_vec_pack_trunc_v32hi;
  ena[2288] = HAVE_vec_pack_trunc_v16si;
  ena[2289] = HAVE_vec_pack_trunc_v8di;
  ena[2290] = HAVE_vec_pack_trunc_v4sf;
  ena[2291] = HAVE_vec_pack_trunc_v2df;
  ena[2292] = HAVE_vec_pack_trunc_v8sf;
  ena[2293] = HAVE_vec_pack_trunc_v4df;
  ena[2294] = HAVE_vec_pack_trunc_v16sf;
  ena[2295] = HAVE_vec_pack_trunc_v8df;
  ena[2296] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[2297] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[2298] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[2299] = HAVE_vec_pack_sbool_trunc_qi;
  ena[2300] = HAVE_vec_packs_float_v4si;
  ena[2301] = HAVE_vec_packs_float_v2di;
  ena[2302] = HAVE_vec_packs_float_v8si;
  ena[2303] = HAVE_vec_packs_float_v4di;
  ena[2304] = HAVE_vec_packs_float_v16si;
  ena[2305] = HAVE_vec_packs_float_v8di;
  ena[2306] = HAVE_vec_packu_float_v4si;
  ena[2307] = HAVE_vec_packu_float_v2di;
  ena[2308] = HAVE_vec_packu_float_v8si;
  ena[2309] = HAVE_vec_packu_float_v4di;
  ena[2310] = HAVE_vec_packu_float_v16si;
  ena[2311] = HAVE_vec_packu_float_v8di;
  ena[2312] = HAVE_vec_permv16qi;
  ena[2313] = HAVE_vec_permv8hi;
  ena[2314] = HAVE_vec_permv4si;
  ena[2315] = HAVE_vec_permv2di;
  ena[2316] = HAVE_vec_permv32qi;
  ena[2317] = HAVE_vec_permv16hi;
  ena[2318] = HAVE_vec_permv8si;
  ena[2319] = HAVE_vec_permv4di;
  ena[2320] = HAVE_vec_permv64qi;
  ena[2321] = HAVE_vec_permv32hi;
  ena[2322] = HAVE_vec_permv16si;
  ena[2323] = HAVE_vec_permv8di;
  ena[2324] = HAVE_vec_permv8hf;
  ena[2325] = HAVE_vec_permv4sf;
  ena[2326] = HAVE_vec_permv2df;
  ena[2327] = HAVE_vec_permv16hf;
  ena[2328] = HAVE_vec_permv8sf;
  ena[2329] = HAVE_vec_permv4df;
  ena[2330] = HAVE_vec_permv32hf;
  ena[2331] = HAVE_vec_permv16sf;
  ena[2332] = HAVE_vec_permv8df;
  ena[2333] = HAVE_vec_setv4qi;
  ena[2334] = HAVE_vec_setv2hi;
  ena[2335] = HAVE_vec_setv4hi;
  ena[2336] = HAVE_vec_setv2si;
  ena[2337] = HAVE_vec_setv16qi;
  ena[2338] = HAVE_vec_setv8hi;
  ena[2339] = HAVE_vec_setv4si;
  ena[2340] = HAVE_vec_setv2di;
  ena[2341] = HAVE_vec_setv32qi;
  ena[2342] = HAVE_vec_setv16hi;
  ena[2343] = HAVE_vec_setv8si;
  ena[2344] = HAVE_vec_setv4di;
  ena[2345] = HAVE_vec_setv64qi;
  ena[2346] = HAVE_vec_setv32hi;
  ena[2347] = HAVE_vec_setv16si;
  ena[2348] = HAVE_vec_setv8di;
  ena[2349] = HAVE_vec_setv2hf;
  ena[2350] = HAVE_vec_setv2bf;
  ena[2351] = HAVE_vec_setv4bf;
  ena[2352] = HAVE_vec_setv4hf;
  ena[2353] = HAVE_vec_setv2sf;
  ena[2354] = HAVE_vec_setv8bf;
  ena[2355] = HAVE_vec_setv8hf;
  ena[2356] = HAVE_vec_setv4sf;
  ena[2357] = HAVE_vec_setv2df;
  ena[2358] = HAVE_vec_setv16bf;
  ena[2359] = HAVE_vec_setv16hf;
  ena[2360] = HAVE_vec_setv8sf;
  ena[2361] = HAVE_vec_setv4df;
  ena[2362] = HAVE_vec_setv32bf;
  ena[2363] = HAVE_vec_setv32hf;
  ena[2364] = HAVE_vec_setv16sf;
  ena[2365] = HAVE_vec_setv8df;
  ena[2366] = HAVE_vec_shl_v4qi;
  ena[2367] = HAVE_vec_shl_v2hi;
  ena[2368] = HAVE_vec_shl_v16qi;
  ena[2369] = HAVE_vec_shl_v8hi;
  ena[2370] = HAVE_vec_shl_v4si;
  ena[2371] = HAVE_vec_shl_v2di;
  ena[2372] = HAVE_vec_shl_v2hf;
  ena[2373] = HAVE_vec_shl_v2bf;
  ena[2374] = HAVE_vec_shl_v8bf;
  ena[2375] = HAVE_vec_shl_v8hf;
  ena[2376] = HAVE_vec_shl_v4sf;
  ena[2377] = HAVE_vec_shl_v2df;
  ena[2378] = HAVE_vec_shr_v4qi;
  ena[2379] = HAVE_vec_shr_v2hi;
  ena[2380] = HAVE_vec_shr_v16qi;
  ena[2381] = HAVE_vec_shr_v8hi;
  ena[2382] = HAVE_vec_shr_v4si;
  ena[2383] = HAVE_vec_shr_v2di;
  ena[2384] = HAVE_vec_shr_v2hf;
  ena[2385] = HAVE_vec_shr_v2bf;
  ena[2386] = HAVE_vec_shr_v8bf;
  ena[2387] = HAVE_vec_shr_v8hf;
  ena[2388] = HAVE_vec_shr_v4sf;
  ena[2389] = HAVE_vec_shr_v2df;
  ena[2390] = HAVE_vec_unpack_sfix_trunc_hi_v8hf;
  ena[2391] = HAVE_vec_unpack_sfix_trunc_hi_v4sf;
  ena[2392] = HAVE_vec_unpack_sfix_trunc_hi_v16hf;
  ena[2393] = HAVE_vec_unpack_sfix_trunc_hi_v8sf;
  ena[2394] = HAVE_vec_unpack_sfix_trunc_hi_v32hf;
  ena[2395] = HAVE_vec_unpack_sfix_trunc_hi_v16sf;
  ena[2396] = HAVE_vec_unpack_sfix_trunc_lo_v8hf;
  ena[2397] = HAVE_vec_unpack_sfix_trunc_lo_v4sf;
  ena[2398] = HAVE_vec_unpack_sfix_trunc_lo_v16hf;
  ena[2399] = HAVE_vec_unpack_sfix_trunc_lo_v8sf;
  ena[2400] = HAVE_vec_unpack_sfix_trunc_lo_v32hf;
  ena[2401] = HAVE_vec_unpack_sfix_trunc_lo_v16sf;
  ena[2402] = HAVE_vec_unpack_ufix_trunc_hi_v8hf;
  ena[2403] = HAVE_vec_unpack_ufix_trunc_hi_v4sf;
  ena[2404] = HAVE_vec_unpack_ufix_trunc_hi_v16hf;
  ena[2405] = HAVE_vec_unpack_ufix_trunc_hi_v8sf;
  ena[2406] = HAVE_vec_unpack_ufix_trunc_hi_v32hf;
  ena[2407] = HAVE_vec_unpack_ufix_trunc_hi_v16sf;
  ena[2408] = HAVE_vec_unpack_ufix_trunc_lo_v8hf;
  ena[2409] = HAVE_vec_unpack_ufix_trunc_lo_v4sf;
  ena[2410] = HAVE_vec_unpack_ufix_trunc_lo_v16hf;
  ena[2411] = HAVE_vec_unpack_ufix_trunc_lo_v8sf;
  ena[2412] = HAVE_vec_unpack_ufix_trunc_lo_v32hf;
  ena[2413] = HAVE_vec_unpack_ufix_trunc_lo_v16sf;
  ena[2414] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[2415] = HAVE_vec_unpacks_float_hi_v4si;
  ena[2416] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[2417] = HAVE_vec_unpacks_float_hi_v8si;
  ena[2418] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[2419] = HAVE_vec_unpacks_float_hi_v16si;
  ena[2420] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[2421] = HAVE_vec_unpacks_float_lo_v4si;
  ena[2422] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[2423] = HAVE_vec_unpacks_float_lo_v8si;
  ena[2424] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[2425] = HAVE_vec_unpacks_float_lo_v16si;
  ena[2426] = HAVE_vec_unpacks_hi_hi;
  ena[2427] = HAVE_vec_unpacks_hi_si;
  ena[2428] = HAVE_vec_unpacks_hi_di;
  ena[2429] = HAVE_vec_unpacks_hi_v4qi;
  ena[2430] = HAVE_vec_unpacks_hi_v16qi;
  ena[2431] = HAVE_vec_unpacks_hi_v8hi;
  ena[2432] = HAVE_vec_unpacks_hi_v4si;
  ena[2433] = HAVE_vec_unpacks_hi_v32qi;
  ena[2434] = HAVE_vec_unpacks_hi_v16hi;
  ena[2435] = HAVE_vec_unpacks_hi_v8si;
  ena[2436] = HAVE_vec_unpacks_hi_v64qi;
  ena[2437] = HAVE_vec_unpacks_hi_v32hi;
  ena[2438] = HAVE_vec_unpacks_hi_v16si;
  ena[2439] = HAVE_vec_unpacks_hi_v8hf;
  ena[2440] = HAVE_vec_unpacks_hi_v4sf;
  ena[2441] = HAVE_vec_unpacks_hi_v16hf;
  ena[2442] = HAVE_vec_unpacks_hi_v8sf;
  ena[2443] = HAVE_vec_unpacks_hi_v32hf;
  ena[2444] = HAVE_vec_unpacks_hi_v16sf;
  ena[2445] = HAVE_vec_unpacks_lo_hi;
  ena[2446] = HAVE_vec_unpacks_lo_si;
  ena[2447] = HAVE_vec_unpacks_lo_di;
  ena[2448] = HAVE_vec_unpacks_lo_v4qi;
  ena[2449] = HAVE_vec_unpacks_lo_v16qi;
  ena[2450] = HAVE_vec_unpacks_lo_v8hi;
  ena[2451] = HAVE_vec_unpacks_lo_v4si;
  ena[2452] = HAVE_vec_unpacks_lo_v32qi;
  ena[2453] = HAVE_vec_unpacks_lo_v16hi;
  ena[2454] = HAVE_vec_unpacks_lo_v8si;
  ena[2455] = HAVE_vec_unpacks_lo_v64qi;
  ena[2456] = HAVE_vec_unpacks_lo_v32hi;
  ena[2457] = HAVE_vec_unpacks_lo_v16si;
  ena[2458] = HAVE_vec_unpacks_lo_v8hf;
  ena[2459] = HAVE_vec_unpacks_lo_v4sf;
  ena[2460] = HAVE_vec_unpacks_lo_v16hf;
  ena[2461] = HAVE_vec_unpacks_lo_v8sf;
  ena[2462] = HAVE_vec_unpacks_lo_v32hf;
  ena[2463] = HAVE_vec_unpacks_lo_v16sf;
  ena[2464] = HAVE_vec_unpacks_sbool_hi_qi;
  ena[2465] = HAVE_vec_unpacks_sbool_lo_qi;
  ena[2466] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[2467] = HAVE_vec_unpacku_float_hi_v4si;
  ena[2468] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[2469] = HAVE_vec_unpacku_float_hi_v8si;
  ena[2470] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[2471] = HAVE_vec_unpacku_float_hi_v16si;
  ena[2472] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[2473] = HAVE_vec_unpacku_float_lo_v4si;
  ena[2474] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[2475] = HAVE_vec_unpacku_float_lo_v8si;
  ena[2476] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[2477] = HAVE_vec_unpacku_float_lo_v16si;
  ena[2478] = HAVE_vec_unpacku_hi_v4qi;
  ena[2479] = HAVE_vec_unpacku_hi_v16qi;
  ena[2480] = HAVE_vec_unpacku_hi_v8hi;
  ena[2481] = HAVE_vec_unpacku_hi_v4si;
  ena[2482] = HAVE_vec_unpacku_hi_v32qi;
  ena[2483] = HAVE_vec_unpacku_hi_v16hi;
  ena[2484] = HAVE_vec_unpacku_hi_v8si;
  ena[2485] = HAVE_vec_unpacku_hi_v64qi;
  ena[2486] = HAVE_vec_unpacku_hi_v32hi;
  ena[2487] = HAVE_vec_unpacku_hi_v16si;
  ena[2488] = HAVE_vec_unpacku_lo_v4qi;
  ena[2489] = HAVE_vec_unpacku_lo_v16qi;
  ena[2490] = HAVE_vec_unpacku_lo_v8hi;
  ena[2491] = HAVE_vec_unpacku_lo_v4si;
  ena[2492] = HAVE_vec_unpacku_lo_v32qi;
  ena[2493] = HAVE_vec_unpacku_lo_v16hi;
  ena[2494] = HAVE_vec_unpacku_lo_v8si;
  ena[2495] = HAVE_vec_unpacku_lo_v64qi;
  ena[2496] = HAVE_vec_unpacku_lo_v32hi;
  ena[2497] = HAVE_vec_unpacku_lo_v16si;
  ena[2498] = HAVE_vec_widen_smult_even_v4si;
  ena[2499] = HAVE_vec_widen_smult_even_v8si;
  ena[2500] = HAVE_vec_widen_smult_even_v16si;
  ena[2501] = HAVE_vec_widen_smult_hi_v16qi;
  ena[2502] = HAVE_vec_widen_smult_hi_v8hi;
  ena[2503] = HAVE_vec_widen_smult_hi_v4si;
  ena[2504] = HAVE_vec_widen_smult_hi_v32qi;
  ena[2505] = HAVE_vec_widen_smult_hi_v16hi;
  ena[2506] = HAVE_vec_widen_smult_hi_v8si;
  ena[2507] = HAVE_vec_widen_smult_lo_v16qi;
  ena[2508] = HAVE_vec_widen_smult_lo_v8hi;
  ena[2509] = HAVE_vec_widen_smult_lo_v4si;
  ena[2510] = HAVE_vec_widen_smult_lo_v32qi;
  ena[2511] = HAVE_vec_widen_smult_lo_v16hi;
  ena[2512] = HAVE_vec_widen_smult_lo_v8si;
  ena[2513] = HAVE_vec_widen_smult_odd_v4si;
  ena[2514] = HAVE_vec_widen_smult_odd_v8si;
  ena[2515] = HAVE_vec_widen_smult_odd_v16si;
  ena[2516] = HAVE_vec_widen_umult_even_v4si;
  ena[2517] = HAVE_vec_widen_umult_even_v8si;
  ena[2518] = HAVE_vec_widen_umult_even_v16si;
  ena[2519] = HAVE_vec_widen_umult_hi_v16qi;
  ena[2520] = HAVE_vec_widen_umult_hi_v8hi;
  ena[2521] = HAVE_vec_widen_umult_hi_v4si;
  ena[2522] = HAVE_vec_widen_umult_hi_v32qi;
  ena[2523] = HAVE_vec_widen_umult_hi_v16hi;
  ena[2524] = HAVE_vec_widen_umult_hi_v8si;
  ena[2525] = HAVE_vec_widen_umult_lo_v16qi;
  ena[2526] = HAVE_vec_widen_umult_lo_v8hi;
  ena[2527] = HAVE_vec_widen_umult_lo_v4si;
  ena[2528] = HAVE_vec_widen_umult_lo_v32qi;
  ena[2529] = HAVE_vec_widen_umult_lo_v16hi;
  ena[2530] = HAVE_vec_widen_umult_lo_v8si;
  ena[2531] = HAVE_vec_widen_umult_odd_v4si;
  ena[2532] = HAVE_vec_widen_umult_odd_v8si;
  ena[2533] = HAVE_vec_widen_umult_odd_v16si;
  ena[2534] = HAVE_vec_addsubv4sf3;
  ena[2535] = HAVE_vec_addsubv2df3;
  ena[2536] = HAVE_vec_addsubv8sf3;
  ena[2537] = HAVE_vec_addsubv4df3;
  ena[2538] = HAVE_vec_fmaddsubv8hf4;
  ena[2539] = HAVE_vec_fmaddsubv4sf4;
  ena[2540] = HAVE_vec_fmaddsubv2df4;
  ena[2541] = HAVE_vec_fmaddsubv16hf4;
  ena[2542] = HAVE_vec_fmaddsubv8sf4;
  ena[2543] = HAVE_vec_fmaddsubv4df4;
  ena[2544] = HAVE_vec_fmaddsubv32hf4;
  ena[2545] = HAVE_vec_fmaddsubv16sf4;
  ena[2546] = HAVE_vec_fmaddsubv8df4;
  ena[2547] = HAVE_vec_fmsubaddv8hf4;
  ena[2548] = HAVE_vec_fmsubaddv4sf4;
  ena[2549] = HAVE_vec_fmsubaddv2df4;
  ena[2550] = HAVE_vec_fmsubaddv16hf4;
  ena[2551] = HAVE_vec_fmsubaddv8sf4;
  ena[2552] = HAVE_vec_fmsubaddv4df4;
  ena[2553] = HAVE_vec_fmsubaddv32hf4;
  ena[2554] = HAVE_vec_fmsubaddv16sf4;
  ena[2555] = HAVE_vec_fmsubaddv8df4;
  ena[2556] = HAVE_atomic_addqi;
  ena[2557] = HAVE_atomic_addhi;
  ena[2558] = HAVE_atomic_addsi;
  ena[2559] = HAVE_atomic_and_fetchqi;
  ena[2560] = HAVE_atomic_and_fetchhi;
  ena[2561] = HAVE_atomic_and_fetchsi;
  ena[2562] = HAVE_atomic_and_fetchdi;
  ena[2563] = HAVE_atomic_andqi;
  ena[2564] = HAVE_atomic_andhi;
  ena[2565] = HAVE_atomic_andsi;
  ena[2566] = HAVE_atomic_bit_test_and_sethi;
  ena[2567] = HAVE_atomic_bit_test_and_setsi;
  ena[2568] = HAVE_atomic_bit_test_and_complementhi;
  ena[2569] = HAVE_atomic_bit_test_and_complementsi;
  ena[2570] = HAVE_atomic_bit_test_and_resethi;
  ena[2571] = HAVE_atomic_bit_test_and_resetsi;
  ena[2572] = HAVE_atomic_compare_and_swapqi;
  ena[2573] = HAVE_atomic_compare_and_swaphi;
  ena[2574] = HAVE_atomic_compare_and_swapsi;
  ena[2575] = HAVE_atomic_compare_and_swapdi;
  ena[2576] = HAVE_atomic_exchangeqi;
  ena[2577] = HAVE_atomic_exchangehi;
  ena[2578] = HAVE_atomic_exchangesi;
  ena[2579] = HAVE_atomic_fetch_addqi;
  ena[2580] = HAVE_atomic_fetch_addhi;
  ena[2581] = HAVE_atomic_fetch_addsi;
  ena[2582] = HAVE_atomic_fetch_andqi;
  ena[2583] = HAVE_atomic_fetch_andhi;
  ena[2584] = HAVE_atomic_fetch_andsi;
  ena[2585] = HAVE_atomic_fetch_anddi;
  ena[2586] = HAVE_atomic_fetch_nandqi;
  ena[2587] = HAVE_atomic_fetch_nandhi;
  ena[2588] = HAVE_atomic_fetch_nandsi;
  ena[2589] = HAVE_atomic_fetch_nanddi;
  ena[2590] = HAVE_atomic_fetch_orqi;
  ena[2591] = HAVE_atomic_fetch_orhi;
  ena[2592] = HAVE_atomic_fetch_orsi;
  ena[2593] = HAVE_atomic_fetch_ordi;
  ena[2594] = HAVE_atomic_fetch_xorqi;
  ena[2595] = HAVE_atomic_fetch_xorhi;
  ena[2596] = HAVE_atomic_fetch_xorsi;
  ena[2597] = HAVE_atomic_fetch_xordi;
  ena[2598] = HAVE_atomic_loadqi;
  ena[2599] = HAVE_atomic_loadhi;
  ena[2600] = HAVE_atomic_loadsi;
  ena[2601] = HAVE_atomic_loaddi;
  ena[2602] = HAVE_atomic_nand_fetchqi;
  ena[2603] = HAVE_atomic_nand_fetchhi;
  ena[2604] = HAVE_atomic_nand_fetchsi;
  ena[2605] = HAVE_atomic_nand_fetchdi;
  ena[2606] = HAVE_atomic_or_fetchqi;
  ena[2607] = HAVE_atomic_or_fetchhi;
  ena[2608] = HAVE_atomic_or_fetchsi;
  ena[2609] = HAVE_atomic_or_fetchdi;
  ena[2610] = HAVE_atomic_orqi;
  ena[2611] = HAVE_atomic_orhi;
  ena[2612] = HAVE_atomic_orsi;
  ena[2613] = HAVE_atomic_storeqi;
  ena[2614] = HAVE_atomic_storehi;
  ena[2615] = HAVE_atomic_storesi;
  ena[2616] = HAVE_atomic_storedi;
  ena[2617] = HAVE_atomic_subqi;
  ena[2618] = HAVE_atomic_subhi;
  ena[2619] = HAVE_atomic_subsi;
  ena[2620] = HAVE_atomic_xor_fetchqi;
  ena[2621] = HAVE_atomic_xor_fetchhi;
  ena[2622] = HAVE_atomic_xor_fetchsi;
  ena[2623] = HAVE_atomic_xor_fetchdi;
  ena[2624] = HAVE_atomic_xorqi;
  ena[2625] = HAVE_atomic_xorhi;
  ena[2626] = HAVE_atomic_xorsi;
  ena[2627] = HAVE_atomic_add_fetch_cmp_0qi;
  ena[2628] = HAVE_atomic_add_fetch_cmp_0hi;
  ena[2629] = HAVE_atomic_add_fetch_cmp_0si;
  ena[2630] = HAVE_atomic_sub_fetch_cmp_0qi;
  ena[2631] = HAVE_atomic_sub_fetch_cmp_0hi;
  ena[2632] = HAVE_atomic_sub_fetch_cmp_0si;
  ena[2633] = HAVE_atomic_and_fetch_cmp_0qi;
  ena[2634] = HAVE_atomic_and_fetch_cmp_0hi;
  ena[2635] = HAVE_atomic_and_fetch_cmp_0si;
  ena[2636] = HAVE_atomic_or_fetch_cmp_0qi;
  ena[2637] = HAVE_atomic_or_fetch_cmp_0hi;
  ena[2638] = HAVE_atomic_or_fetch_cmp_0si;
  ena[2639] = HAVE_atomic_xor_fetch_cmp_0qi;
  ena[2640] = HAVE_atomic_xor_fetch_cmp_0hi;
  ena[2641] = HAVE_atomic_xor_fetch_cmp_0si;
  ena[2642] = HAVE_get_thread_pointersi;
  ena[2643] = HAVE_get_thread_pointerdi;
  ena[2644] = HAVE_vec_duplicatev16qi;
  ena[2645] = HAVE_vec_duplicatev8hi;
  ena[2646] = HAVE_vec_duplicatev4si;
  ena[2647] = HAVE_vec_duplicatev32qi;
  ena[2648] = HAVE_vec_duplicatev16hi;
  ena[2649] = HAVE_vec_duplicatev8si;
  ena[2650] = HAVE_vec_duplicatev64qi;
  ena[2651] = HAVE_vec_duplicatev32hi;
  ena[2652] = HAVE_vec_duplicatev16si;
}

void
init_all_optabs (struct target_optabs *optabs)
{
  init_optabs_00 (optabs);
  init_optabs_01 (optabs);
  init_optabs_02 (optabs);
}

/* Returns TRUE if the target supports any of the partial vector
   optabs: while_ult_optab, len_load_optab, len_store_optab,
   mask_len_load_optab or mask_len_store_optab,
   for any mode.  */
bool
partial_vectors_supported_p (void)
{
	return false;
}
static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 20) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  unknown_optab,
  unknown_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};


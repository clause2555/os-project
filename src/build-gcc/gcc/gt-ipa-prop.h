/* Type information for ipa-prop.cc.
   Copyright (C) 2004-2024 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_hash_table_ipa_vr_ggc_hash_traits_ (void *x_p)
{
  hash_table<ipa_vr_ggc_hash_traits> * const x = (hash_table<ipa_vr_ggc_hash_traits> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct ipa_vr_ggc_hash_traits& x_r ATTRIBUTE_UNUSED)
{
  struct ipa_vr_ggc_hash_traits * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_ggc_mx_ipa_return_value_summary (void *x_p)
{
  struct ipa_return_value_summary * const x = (struct ipa_return_value_summary *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_6ipa_vr ((*x).vr);
    }
}

void
gt_ggc_mx_function_summary_ipa_return_value_summary__ (void *x_p)
{
  function_summary<ipa_return_value_summary*> * const x = (function_summary<ipa_return_value_summary*> *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_mx (x);
    }
}

void
gt_ggc_mx (struct ipa_return_value_summary *& x)
{
  if (x)
    gt_ggc_mx_ipa_return_value_summary ((void *) x);
}

void
gt_pch_nx_hash_table_ipa_vr_ggc_hash_traits_ (void *x_p)
{
  hash_table<ipa_vr_ggc_hash_traits> * const x = (hash_table<ipa_vr_ggc_hash_traits> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_34hash_table_ipa_vr_ggc_hash_traits_))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct ipa_vr_ggc_hash_traits& x_r ATTRIBUTE_UNUSED)
{
  struct ipa_vr_ggc_hash_traits * ATTRIBUTE_UNUSED x = &x_r;
}

void
gt_pch_nx_ipa_return_value_summary (void *x_p)
{
  struct ipa_return_value_summary * const x = (struct ipa_return_value_summary *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_24ipa_return_value_summary))
    {
      gt_pch_n_6ipa_vr ((*x).vr);
    }
}

void
gt_pch_nx_function_summary_ipa_return_value_summary__ (void *x_p)
{
  function_summary<ipa_return_value_summary*> * const x = (function_summary<ipa_return_value_summary*> *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_43function_summary_ipa_return_value_summary__))
    {
      gt_pch_nx (x);
    }
}

void
gt_pch_nx (struct ipa_return_value_summary *& x)
{
  if (x)
    gt_pch_nx_ipa_return_value_summary ((void *) x);
}

void
gt_pch_p_34hash_table_ipa_vr_ggc_hash_traits_ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct hash_table<ipa_vr_ggc_hash_traits> * x ATTRIBUTE_UNUSED = (struct hash_table<ipa_vr_ggc_hash_traits> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

void
gt_pch_nx (struct ipa_vr_ggc_hash_traits* x ATTRIBUTE_UNUSED,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
}

void
gt_pch_p_24ipa_return_value_summary (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct ipa_return_value_summary * x ATTRIBUTE_UNUSED = (struct ipa_return_value_summary *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).vr), NULL, cookie);
}

void
gt_pch_p_43function_summary_ipa_return_value_summary__ (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct function_summary<ipa_return_value_summary*> * x ATTRIBUTE_UNUSED = (struct function_summary<ipa_return_value_summary*> *)x_p;
  if ((void *)(x) == this_obj)
    gt_pch_nx (&((*x)), op, cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_ipa_prop_h[] = {
  {
    &ipa_return_value_sum,
    1,
    sizeof (ipa_return_value_sum),
    &gt_ggc_mx_function_summary_ipa_return_value_summary__,
    &gt_pch_nx_function_summary_ipa_return_value_summary__
  },
  {
    &ipa_vr_hash_table,
    1,
    sizeof (ipa_vr_hash_table),
    &gt_ggc_mx_hash_table_ipa_vr_ggc_hash_traits_,
    &gt_pch_nx_hash_table_ipa_vr_ggc_hash_traits_
  },
  LAST_GGC_ROOT_TAB
};

void
gt_clear_caches_gt_ipa_prop_h ()
{
  gt_cleare_cache (ipa_vr_hash_table);
}


/* Type information for stringpool.cc.
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
gt_ggc_mx_cpp_hashnode_extra (void *x_p)
{
  struct cpp_hashnode_extra * const x = (struct cpp_hashnode_extra *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_S ((*x).ident.str);
    }
}

void
gt_ggc_mx_string_pool_data (void *x_p)
{
  struct string_pool_data * const x = (struct string_pool_data *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t l0 = (size_t)(((*x)).nslots);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            {
              union tree_node * const x1 =
                ((*x).entries[i0]) ? HT_IDENT_TO_GCC_IDENT (((*x).entries[i0])) : NULL;
              gt_ggc_m_9tree_node (x1);
            }
          }
          ggc_mark ((*x).entries);
        }
      }
    }
}

void
gt_ggc_mx_string_pool_data_extra (void *x_p)
{
  struct string_pool_data_extra * const x = (struct string_pool_data_extra *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      {
        size_t l0 = (size_t)(((*x)).nslots);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            {
              struct cpp_hashnode_extra * const x1 =
                (cpp_hashnode_extra *)((*x).entries[i0]);
              gt_ggc_m_18cpp_hashnode_extra (x1);
            }
          }
          ggc_mark ((*x).entries);
        }
      }
    }
}

void
gt_pch_nx_cpp_hashnode_extra (void *x_p)
{
  struct cpp_hashnode_extra * const x = (struct cpp_hashnode_extra *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18cpp_hashnode_extra))
    {
      gt_pch_n_S2 ((*x).ident.str, 1 + ((*x).ident).len);
    }
}

void
gt_pch_nx_string_pool_data (void *x_p)
{
  struct string_pool_data * const x = (struct string_pool_data *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16string_pool_data))
    {
      {
        size_t l0 = (size_t)(((*x)).nslots);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            {
              union tree_node * const x1 =
                ((*x).entries[i0]) ? HT_IDENT_TO_GCC_IDENT (((*x).entries[i0])) : NULL;
              gt_pch_n_9tree_node (x1);
            }
          }
          gt_pch_note_object ((*x).entries, x, gt_pch_p_16string_pool_data);
        }
      }
    }
}

void
gt_pch_nx_string_pool_data_extra (void *x_p)
{
  struct string_pool_data_extra * const x = (struct string_pool_data_extra *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_22string_pool_data_extra))
    {
      {
        size_t l0 = (size_t)(((*x)).nslots);
        if ((*x).entries != NULL) {
          size_t i0;
          for (i0 = 0; i0 != (size_t)(l0); i0++) {
            {
              struct cpp_hashnode_extra * const x1 =
                (cpp_hashnode_extra *)((*x).entries[i0]);
              gt_pch_n_18cpp_hashnode_extra (x1);
            }
          }
          gt_pch_note_object ((*x).entries, x, gt_pch_p_22string_pool_data_extra);
        }
      }
    }
}

void
gt_pch_p_18cpp_hashnode_extra (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cpp_hashnode_extra * x ATTRIBUTE_UNUSED = (struct cpp_hashnode_extra *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).ident.str), NULL, cookie);
}

void
gt_pch_p_16string_pool_data (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct string_pool_data * x ATTRIBUTE_UNUSED = (struct string_pool_data *)x_p;
  {
    size_t l0 = (size_t)(((*x)).nslots);
    if ((*x).entries != NULL) {
      size_t i0;
      for (i0 = 0; i0 != (size_t)(l0) && ((void *)(*x).entries == this_obj); i0++) {
        {
          union tree_node * x1 =
            ((*x).entries[i0]) ? HT_IDENT_TO_GCC_IDENT (((*x).entries[i0])) : NULL;
          if ((void *)((*x).entries) == this_obj)
            op (&(x1), &((*x).entries[i0]), cookie);
          (*x).entries[i0] = (x1) ? GCC_IDENT_TO_HT_IDENT ((x1)) : NULL;
        }
      }
      if ((void *)(x) == this_obj)
        op (&((*x).entries), NULL, cookie);
    }
  }
}

void
gt_pch_p_22string_pool_data_extra (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct string_pool_data_extra * x ATTRIBUTE_UNUSED = (struct string_pool_data_extra *)x_p;
  {
    size_t l0 = (size_t)(((*x)).nslots);
    if ((*x).entries != NULL) {
      size_t i0;
      for (i0 = 0; i0 != (size_t)(l0) && ((void *)(*x).entries == this_obj); i0++) {
        {
          struct cpp_hashnode_extra * x1 =
            (cpp_hashnode_extra *)((*x).entries[i0]);
          if ((void *)((*x).entries) == this_obj)
            op (&(x1), &((*x).entries[i0]), cookie);
          (*x).entries[i0] = (x1) ? HT_NODE ((x1)) : nullptr;
        }
      }
      if ((void *)(x) == this_obj)
        op (&((*x).entries), NULL, cookie);
    }
  }
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_stringpool_h[] = {
  {
    &spd2,
    1,
    sizeof (spd2),
    &gt_ggc_mx_string_pool_data_extra,
    &gt_pch_nx_string_pool_data_extra
  },
  {
    &spd,
    1,
    sizeof (spd),
    &gt_ggc_mx_string_pool_data,
    &gt_pch_nx_string_pool_data
  },
  LAST_GGC_ROOT_TAB
};


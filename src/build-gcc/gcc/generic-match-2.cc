/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_with_certain_nonzero_bits2 (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 26, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
		{
		  res_ops[0] = captures[0];
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 27, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

bool
tree_float_value_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == float_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 32, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

tree
generic_simplify_1 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail81;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 40, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail81:;
  return NULL_TREE;
}

tree
generic_simplify_6 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp0, wascmp1;
      if (bitwise_inverted_equal_p (captures[1], captures[3], wascmp0)
 && bitwise_inverted_equal_p (captures[0], captures[2], wascmp1)
 && ((!wascmp0 && !wascmp1)
 || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail87;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 46, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail87:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_14 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner_op),
 const enum tree_code ARG_UNUSED (neg_inner_op),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      if (!CONSTANT_CLASS_P (captures[0])
)
		{
		  if (outer_op == PLUS_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail95;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  if (EXPR_P (_r1))
			    goto next_after_fail95;
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 54, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail95:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail96;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, neg_inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  if (EXPR_P (_r1))
			    goto next_after_fail96;
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 55, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail96:;
		    }
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0]))
)
		{
		  if (outer_op == PLUS_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail97;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, TREE_TYPE (_o1[0]), _o3[0]);
			      _o2[0] = _r3;
			    }
			    _o2[1] = captures[1];
			    _r2 = fold_build2_loc (loc, inner_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    if (EXPR_P (_r2))
			      goto next_after_fail97;
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 56, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail97:;
		    }
		  else
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail98;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  {
			    tree _o2[2], _r2;
			    {
			      tree _o3[1], _r3;
			      _o3[0] = captures[2];
			      _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, TREE_TYPE (_o1[0]), _o3[0]);
			      _o2[0] = _r3;
			    }
			    _o2[1] = captures[1];
			    _r2 = fold_build2_loc (loc, neg_inner_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			    if (EXPR_P (_r2))
			      goto next_after_fail98;
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail98:;
		    }
		}
	      else
		{
		  if (types_match (type, captures[0]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (outer_op == inner_op
 ? PLUS_EXPR : MINUS_EXPR,
 type, captures[1], captures[2]);
			  if (cst
)
			    {
			      if (INTEGRAL_TYPE_P (type) && !TREE_OVERFLOW (cst)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail99;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail99;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail99;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  cst;
				    tree _r;
				    _r = fold_build2_loc (loc, inner_op, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 58, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail99:;
				}
			      else
				{
				  if (INTEGRAL_TYPE_P (type)
 && wi::to_wide (cst) == wi::min_value (type)
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail100;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail100;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail100;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  wide_int_to_tree (type, wi::to_wide (cst));
					tree _r;
					_r = fold_build2_loc (loc, neg_inner_op, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 59, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail100:;
				    }
				  else
				    {
				      {
 tree utype = unsigned_type_for (type);
					  if (utype
)
					    {
					      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail101;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail101;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail101;
					      {
						tree res_op0;
						{
						  tree _o1[2], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  {
						    tree _o2[1], _r2;
						    _o2[0] =  TREE_OVERFLOW (cst)
 ? drop_tree_overflow (cst) : cst;
						    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o2[0]);
						    _o1[1] = _r2;
						  }
						  _r1 = fold_build2_loc (loc, inner_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 60, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail101:;
					    }
				      }
				    }
				}
			    }
		      }
		    }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_59 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail155;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 113, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail155:;
    }
  return NULL_TREE;
}

tree
generic_simplify_65 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail161;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail161;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 117, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail161:;
  return NULL_TREE;
}

tree
generic_simplify_69 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail165;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail165;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 122, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail165:;
  return NULL_TREE;
}

tree
generic_simplify_76 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail172;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail172;
      {
	tree _r;
	_r = captures[2];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 124, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail172:;
    }
  return NULL_TREE;
}

tree
generic_simplify_85 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail181;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 133, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail181:;
  return NULL_TREE;
}

tree
generic_simplify_93 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((TREE_CODE (captures[3]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (int_fits_type_p (captures[3], TREE_TYPE (captures[1]))
 || tree_nop_conversion_p (TREE_TYPE (captures[1]), type)))
 || types_match (captures[1], captures[3]))
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (TREE_TYPE (captures[1])) != OFFSET_TYPE
 && (bitop != BIT_AND_EXPR ||
0
)
 && (
 TYPE_PRECISION (TREE_TYPE (captures[1])) < TYPE_PRECISION (type)
 || (
0
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (type))
 || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT
 || !type_has_mode_precision_p (type)
 || (
0
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && single_use (captures[0])
 && single_use (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail193;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 137, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail193:;
    }
  return NULL_TREE;
}

tree
generic_simplify_107 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail210;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail210;
      {
	tree res_op0;
	{
	  tree _o1[3], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  _o1[2] = captures[5];
	  _r1 = fold_build3_loc (loc, COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_one_cst (type);
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 149, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail210:;
    }
  return NULL_TREE;
}

tree
generic_simplify_112 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner_op),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool fail = false;
 wide_int zero_mask_not;
 wide_int C0;
 wide_int cst_emit;
 if (TREE_CODE (captures[1]) == SSA_NAME)
 zero_mask_not = get_nonzero_bits (captures[1]);
 else
 fail = true;
 if (inner_op == BIT_XOR_EXPR)
 {
 C0 = wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3]));
 cst_emit = C0 | wi::to_wide (captures[3]);
 }
 else
 {
 C0 = wi::to_wide (captures[2]);
 cst_emit = C0 ^ wi::to_wide (captures[3]);
 }
      if (!fail && (C0 & zero_mask_not) == 0
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail218;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail218;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail218;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail218;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  wide_int_to_tree (type, cst_emit);
	    tree _r;
	    _r = fold_build2_loc (loc, outer_op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 157, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail218:;
	}
      else
	{
	  if (!fail && (wi::to_wide (captures[3]) & zero_mask_not) == 0
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail219;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail219;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail219;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail219;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  wide_int_to_tree (type, cst_emit);
		tree _r;
		_r = fold_build2_loc (loc, inner_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 158, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail219:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_127 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail266;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail266;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail266;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 179, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail266:;
  return NULL_TREE;
}

tree
generic_simplify_132 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && tree_int_cst_sgn (captures[4]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[3])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])),
 wi::lshift (wone, wi::to_wide (captures[4])));
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail271;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail271;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail271;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != t)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, t, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t,c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 183, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail271:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_139 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail278;
  {
    if (! tree_invariant_p (captures[3])) goto next_after_fail278;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = unshare_expr (captures[3]);
      _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[2], _r1;
      {
	tree _o2[1], _r2;
	_o2[0] = captures[4];
	_r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	if (EXPR_P (_r2))
	  goto next_after_fail278;
	_o1[0] = _r2;
      }
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail278;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 189, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail278:;
  return NULL_TREE;
}

tree
generic_simplify_148 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail287;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 198, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail287:;
  return NULL_TREE;
}

tree
generic_simplify_153 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail292;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 203, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail292:;
    }
  return NULL_TREE;
}

tree
generic_simplify_163 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail304;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail304;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail304:;
    }
  return NULL_TREE;
}

tree
generic_simplify_173 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!canonicalize_math_p ()
)
    {
      if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail316;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail316;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 220, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail316:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_184 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail328;
  {
    tree _r;
    _r =  constant_boolean_node (op == NE_EXPR ? true : false, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 232, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail328:;
  return NULL_TREE;
}

tree
generic_simplify_188 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (captures[0]) >= element_precision (captures[1])
 && types_match (captures[1], captures[3])
)
    {
      if (wi::lt_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail332;
	      {
		tree res_op0;
		res_op0 = captures[3];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 236, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail332:;
	    }
	  else
	    {
	      if (tree_expr_nonzero_p (captures[1]) && tree_expr_nonzero_p (captures[3])
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail333;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 237, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail333:;
		  }
		}
	    }
	}
      else
	{
	  if (wi::gt_p (wi::to_wide (captures[2]), 1, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	    {
	      if (TYPE_UNSIGNED (TREE_TYPE (captures[1])) || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail334;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[3];
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 238, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail334:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail335;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail335:;
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_217 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (TREE_TYPE (captures[1])) != COMPLEX_TYPE
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail389;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 291, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail389:;
    }
  return NULL_TREE;
}

tree
generic_simplify_223 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail396;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail396;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 297, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail396:;
    }
  return NULL_TREE;
}

tree
generic_simplify_230 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[1]) && single_use (captures[3])
)
    {
      {
 tree otype = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail408;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (TREE_TYPE (_o1[0]) != otype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, otype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != otype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, otype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail408:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_236 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 && ! DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      {
 format_helper fmt (REAL_MODE_FORMAT (TYPE_MODE (TREE_TYPE (captures[0]))));
 tree type1 = TREE_TYPE (captures[1]);
 bool type1_signed_p = TYPE_SIGN (type1) == SIGNED;
 tree type2 = TREE_TYPE (captures[2]);
 bool type2_signed_p = TYPE_SIGN (type2) == SIGNED;
	  if (fmt.can_represent_integral_type_p (type1)
 && fmt.can_represent_integral_type_p (type2)
)
	    {
	      if (cmp == ORDERED_EXPR || cmp == UNORDERED_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail446;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == ORDERED_EXPR, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 346, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail446:;
		}
	      else
		{
		  if (TYPE_PRECISION (type1) > TYPE_PRECISION (type2)
 && type1_signed_p >= type2_signed_p
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail447;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 347, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail447:;
		    }
		  else
		    {
		      if (TYPE_PRECISION (type1) < TYPE_PRECISION (type2)
 && type1_signed_p <= type2_signed_p
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail448;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      if (TREE_TYPE (_o1[0]) != type2)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, type2, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail448:;
			}
		      else
			{
			  if (TYPE_PRECISION (type1) == TYPE_PRECISION (type2)
 && type1_signed_p == type2_signed_p
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail449;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree res_op1;
				res_op1 = captures[2];
				tree _r;
				_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 349, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail449:;
			    }
			}
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_248 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && !wi::neg_p (wi::to_wide (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail482;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      _r3 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      _o2[0] = _r3;
	    }
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 375, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail482:;
    }
  return NULL_TREE;
}

tree
generic_simplify_255 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[1]))
 && element_precision (captures[0]) >= element_precision (captures[1])
 && wi::only_sign_bit_p (wi::to_wide (captures[2]), element_precision (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail489;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail489;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (stype);
	    tree _r;
	    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 381, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail489:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_264 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= 2 * TYPE_PRECISION (TREE_TYPE (captures[2])))
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], captures[3])
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && (optab_handler (umulv4_optab, TYPE_MODE (TREE_TYPE (captures[2])))
 != CODE_FOR_nothing)
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail516;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail516;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[3];
		_r2 = maybe_build_call_expr_loc (loc, CFN_MUL_OVERFLOW, cpx, 2, _o2[0], _o2[1]);
		if (!_r2)
		  goto next_after_fail516;
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (t);
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 399, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail516:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_267 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[3]) && single_use (captures[0])
)
    {
      {
 tree type0 = TREE_TYPE (captures[1]);
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
 if (integer_zerop (captures[2]))
 stype = NULL_TREE;
	  if (stype
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail521;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (TREE_TYPE (_o1[0]) != stype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  build_zero_cst (stype);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 404, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail521:;
	    }
      }
    }
  else
    {
      {
 bool ok = true;
 tree type0 = TREE_TYPE (captures[1]);
 if (wi::to_widest (captures[2]) == TYPE_PRECISION (type0) - 1)
 ok = false;
	  if (ok && wi::to_wide (captures[3]) == (TYPE_PRECISION (type0) - 1)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail522;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail522;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_one_cst (type0);
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail522:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_276 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail536;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 419, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail536:;
    }
  return NULL_TREE;
}

tree
generic_simplify_281 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_vector)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_scalar))
 && (useless_type_conversion_p (type, TREE_TYPE (captures[2]))
 || (element_precision (type) >= element_precision (TREE_TYPE (captures[2]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 || (element_precision (type)
 == element_precision (TREE_TYPE (captures[2])))
 || (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0])
 & wi::mask (element_precision (TREE_TYPE (captures[2])) - 1,
 true,
 element_precision (type))) == 0))))
)
    {
      if (!VECTOR_TYPE_P (type)
 && useless_type_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && element_precision (TREE_TYPE (captures[1])) < element_precision (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail541;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 424, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail541:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail542;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail542;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 425, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail542:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_303 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (TAN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail568;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TAN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail568;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail568:;
    }
  return NULL_TREE;
}

tree
generic_simplify_309 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (!TREE_OVERFLOW (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail574;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] =  build_one_cst (type);
	      _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, POW, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail574;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 455, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail574:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_318 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail585;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 466, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail585:;
    }
  return NULL_TREE;
}

tree
generic_simplify_324 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 wi::overflow_type ovf;
 wide_int prod = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[1]),
 TYPE_SIGN (TREE_TYPE (captures[1])), &ovf);
	  if (ovf
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail592;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail592;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail592;
	      {
		tree _r;
		_r =  constant_boolean_node (wi::lt_p (wi::to_wide (captures[2]), 0,
 TYPE_SIGN (TREE_TYPE (captures[2])))
 != (cmp == LT_EXPR || cmp == LE_EXPR), type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 473, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail592:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail593;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail593;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail593;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 474, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail593:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_337 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool ok = true;
 HOST_WIDE_INT val = 0;
 if (!tree_fits_shwi_p (captures[3]))
 ok = false;
 else
 {
 val = tree_to_shwi (captures[3]);
 if (op == GT_EXPR || op == LE_EXPR)
 {
 if (val == HOST_WIDE_INT_MAX)
 ok = false;
 else
 val++;
 }
 }
 HOST_WIDE_INT zero_val = tree_to_shwi (captures[2]);
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
 if (prec > MAX_FIXED_MODE_SIZE)
 ok = false;
      if (val <= 0
)
	{
	  if (ok && zero_val >= val
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail641;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail641;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail641;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 505, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail641:;
	    }
	}
      else
	{
	  if (val >= prec
)
	    {
	      if (ok && zero_val < val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail642;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail642;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail642;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 506, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail642:;
		}
	    }
	  else
	    {
	      if (ok && (zero_val < 0 || zero_val >= prec)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail643;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail643;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail643;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (val, false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  build_zero_cst (type0);
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 507, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail643:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_351 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail661;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 521, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail661:;
  return NULL_TREE;
}

tree
generic_simplify_358 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && CHAR_TYPE_SIZE == 8
 && tree_fits_uhwi_p (captures[2])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[2]);
 tree st = TYPE_PRECISION (type) > prec ? TREE_TYPE (captures[0]) : type;
	  if (TYPE_PRECISION (type) > prec
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (type)
 && bits < prec && bits + 8 >= prec
)
	    {
	      {
 tree nst = build_int_cst (integer_type_node, prec - 8);
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail672;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail672;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[2], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[1];
			  if (TREE_TYPE (_o3[0]) != st)
			    {
			      _r3 = fold_build1_loc (loc, NOP_EXPR, st, _o3[0]);
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			_o2[1] = nst;
			_r2 = fold_build2_loc (loc, LSHIFT_EXPR, st, _o2[0], _o2[1]);
			_o1[0] = _r2;
		      }
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 530, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail672:;
	      }
	    }
	  else
	    {
	      if (bits + 8 == prec
)
		{
		  if (TYPE_UNSIGNED (st)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail673;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail673;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != unsigned_char_type_node)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, unsigned_char_type_node, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 531, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail673:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail674;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail674;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != signed_char_type_node)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, signed_char_type_node, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 532, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail674:;
		    }
		}
	      else
		{
		  if (bits < prec && bits + 8 > prec
)
		    {
		      {
 tree nst = build_int_cst (integer_type_node, bits & 7);
 tree bt = TYPE_UNSIGNED (st) ? unsigned_char_type_node
 : signed_char_type_node;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail675;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail675;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[1];
				if (TREE_TYPE (_o2[0]) != bt)
				  {
				    _r2 = fold_build1_loc (loc, NOP_EXPR, bt, _o2[0]);
				  }
				else
				  _r2 = _o2[0];
				_o1[0] = _r2;
			      }
			      _o1[1] = nst;
			      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, bt, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 533, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail675:;
		      }
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_371 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 547, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail701:;
  return NULL_TREE;
}

tree
generic_simplify_374 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail704;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, hypots, type, 2, res_op0, res_op1);
    if (!_r)
      goto next_after_fail704;
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail704:;
  return NULL_TREE;
}

tree
generic_simplify_379 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail709;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 555, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail709:;
    }
  return NULL_TREE;
}

tree
generic_simplify_383 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail713;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail713;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[5];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 559, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail713:;
  return NULL_TREE;
}

tree
generic_simplify_389 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (TREE_TYPE (captures[0])) != BOOLEAN_TYPE
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 || TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail719;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 564, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail719:;
    }
  return NULL_TREE;
}

tree
generic_simplify_398 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) <= HOST_BITS_PER_WIDE_INT
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) > 0
 && tree_to_uhwi (captures[4]) < TYPE_PRECISION (type)
)
    {
      {
 unsigned int shiftc = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT mask = TREE_INT_CST_LOW (captures[5]);
 unsigned HOST_WIDE_INT newmask, zerobits = 0;
 tree shift_type = TREE_TYPE (captures[2]);
 unsigned int prec;
 if (shift == LSHIFT_EXPR)
 zerobits = ((HOST_WIDE_INT_1U << shiftc) - 1);
 else if (shift == RSHIFT_EXPR
 && type_has_mode_precision_p (shift_type))
 {
 prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 tree arg00 = captures[3];
 if (captures[2] != captures[3]
 && TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 {
 tree inner_type = TREE_TYPE (captures[3]);
 if (type_has_mode_precision_p (inner_type)
 && TYPE_PRECISION (inner_type) < prec)
 {
 prec = TYPE_PRECISION (inner_type);
 if (shiftc < prec)
 shift_type = inner_type;
 }
 }
 zerobits = HOST_WIDE_INT_M1U;
 if (shiftc < prec)
 {
 zerobits >>= HOST_BITS_PER_WIDE_INT - shiftc;
 zerobits <<= prec - shiftc;
 }
 if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && prec == TYPE_PRECISION (TREE_TYPE (captures[2])))
 {
 if ((mask & zerobits) == 0)
 shift_type = unsigned_type_for (TREE_TYPE (captures[2]));
 else
 zerobits = 0;
 }
 }
	  if ((mask & zerobits) == mask
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail728;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail728;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail728;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail728;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail728;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 572, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail728:;
	    }
	  else
	    {
	      {
 newmask = mask | zerobits;
		  if (newmask != mask && (newmask & (newmask + 1)) == 0
)
		    {
		      {
 for (prec = BITS_PER_UNIT;
 prec < HOST_BITS_PER_WIDE_INT; prec <<= 1)
 if (newmask == (HOST_WIDE_INT_1U << prec) - 1)
 break;
			  if (prec < HOST_BITS_PER_WIDE_INT
 || newmask == HOST_WIDE_INT_M1U
)
			    {
			      {
 tree newmaskt = build_int_cst_type (TREE_TYPE (captures[5]), newmask);
				  if (!tree_int_cst_equal (newmaskt, captures[5])
)
				    {
				      if (shift_type != TREE_TYPE (captures[2])
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail729;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail729;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail729;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (TREE_TYPE (_o3[0]) != shift_type)
						    {
						      _r3 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o3[0]);
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						_r2 = fold_build2_loc (loc, shift, shift_type, _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      if (TREE_TYPE (_o1[0]) != type)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 573, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail729:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail730;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail730;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail730;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 574, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail730:;
					}
				    }
			      }
			    }
		      }
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_420 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail793;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail793;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 599, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail793:;
  return NULL_TREE;
}

tree
generic_simplify_423 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail797;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 603, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail797:;
  return NULL_TREE;
}

tree
generic_simplify_426 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail800;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 606, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail800:;
  return NULL_TREE;
}

tree
generic_simplify_428 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
)
    {
      {
 tree shift_type = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail802;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != shift_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 608, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail802:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_434 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail808;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, maxmin, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 613, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail808:;
  return NULL_TREE;
}

tree
generic_simplify_440 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail816;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[0];
      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_each_one_cst (type);
    tree _r;
    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 620, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail816:;
  return NULL_TREE;
}

tree
generic_simplify_448 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (minmax == MIN_EXPR
)
	    {
	      if (known_le (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail824;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail824;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail824;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 627, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail824:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail825;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail825;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail825;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 628, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail825:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail826;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail826;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail826;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 629, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail826:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail827;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail827;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail827;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 630, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail827:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_466 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail859;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail859;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail859;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 650, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail859:;
  return NULL_TREE;
}

tree
generic_simplify_471 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail864;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail864;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail864:;
  return NULL_TREE;
}

tree
generic_simplify_477 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail871;
  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail871;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail871;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 662, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail871:;
  return NULL_TREE;
}

tree
generic_simplify_484 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 672, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail882:;
    }
  return NULL_TREE;
}

tree
generic_simplify_491 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail889;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail889;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail889;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail889;
  {
    tree _r;
    _r = captures[3];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 658, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail889:;
  return NULL_TREE;
}

tree
generic_simplify_497 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail895;
	  {
	    tree res_op0;
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[4];
	      _o1[5] = captures[5];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 6, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      if (!_r1)
	        goto next_after_fail895;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 680, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail895:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_506 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) || TYPE_UNSIGNED (TREE_TYPE (captures[1])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail904;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ovf, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail904;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail904:;
    }
  return NULL_TREE;
}

tree
generic_simplify_517 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail915;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 700, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail915:;
  return NULL_TREE;
}

tree
generic_simplify_523 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ifn),
 const combined_fn ARG_UNUSED (lfn),
 const combined_fn ARG_UNUSED (llfn))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (TYPE_PRECISION (integer_type_node)
 == TYPE_PRECISION (long_integer_type_node)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail921;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, lfn, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail921;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 706, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail921:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_534 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail932;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail932;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail932:;
    }
  return NULL_TREE;
}

tree
generic_simplify_544 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail943;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != type0)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type0, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, parity, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail943;
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail943:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_ABSU_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ABSU_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail986;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail986;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 759, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail986:;
		  }
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 760, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail987:;
	}
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail988;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail988;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail988;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail988:;
	}
        break;
      }
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 761, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail989:;
    }
  }
  return NULL_TREE;
}

tree
generic_simplify_IMAGPART_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1054;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1054:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1055;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 785, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1055:;
	      }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = PLUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1056;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1056:;
	      }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = MINUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1057;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1057:;
	      }
	      break;
	    }
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1058;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1058;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1058:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1059;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1059;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1059:;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1060;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
			  if (!_r1)
			    goto next_after_fail1060;
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1060:;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1061;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 785, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1061:;
	}
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = PLUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1062;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1062:;
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = MINUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1063;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1063:;
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_MUL_OVERFLOW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (integer_nonzerop (_q21))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_483 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	      if (integer_nonzerop (_q20))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    tree res = generic_simplify_483 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1064;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1064;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1064:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1065;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1065;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1065:;
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPI:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1066;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
		    _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
		    if (!_r1)
		      goto next_after_fail1066;
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 786, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1066:;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_MULT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (initializer_each_zero_or_onep (captures[1])
 && !HONOR_SNANS (type)
 && !HONOR_SIGNED_ZEROS (type)
)
	    {
	      {
 tree itype = FLOAT_TYPE_P (type) ? unsigned_type_for (type) : type;
		  if (itype
 && (!VECTOR_MODE_P (TYPE_MODE (type))
 || (VECTOR_MODE_P (TYPE_MODE (itype))
 && optab_handler (and_optab,
 TYPE_MODE (itype)) != CODE_FOR_nothing))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1230;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, itype, _o2[0]);
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    _r2 = fold_build2_loc (loc, NE_EXPR, itype, _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1230:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1231;
      {
	tree _r;
	_r = captures[1];
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1231:;
    }
  }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!tree_expr_maybe_nan_p (captures[0])
 && (!HONOR_NANS (type) || !tree_expr_maybe_infinite_p (captures[0]))
 && (!HONOR_SIGNED_ZEROS (type) || tree_expr_nonnegative_p (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1232;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 856, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1232:;
	}
    }
  }
if (real_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1233;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1233;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 857, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1233:;
	}
    }
  }
if (real_minus_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1234;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1234;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 858, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1234:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (uniform_integer_cst_p (_q31))
		{
		  if (uniform_integer_cst_p (_q21))
		    {
		      if (uniform_integer_cst_p (_p1))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			    {
 tree rshift_cst = uniform_integer_cst_p (captures[1]);
 tree bit_and_cst = uniform_integer_cst_p (captures[2]);
 tree mult_cst = uniform_integer_cst_p (captures[3]);
				if (VECTOR_TYPE_P (type)
 && tree_fits_uhwi_p (rshift_cst)
 && tree_fits_uhwi_p (mult_cst)
 && tree_fits_uhwi_p (bit_and_cst)
)
				  {
				    {
 HOST_WIDE_INT vec_elem_bits = vector_element_bits (type);
 poly_int64 vec_nelts = TYPE_VECTOR_SUBPARTS (type);
 poly_int64 vec_bits = vec_elem_bits * vec_nelts;
 unsigned HOST_WIDE_INT cmp_bits_i, bit_and_i, mult_i;
 unsigned HOST_WIDE_INT target_mult_i, target_bit_and_i;
 cmp_bits_i = tree_to_uhwi (rshift_cst) + 1;
 mult_i = tree_to_uhwi (mult_cst);
 target_mult_i = (HOST_WIDE_INT_1U << cmp_bits_i) - 1;
 bit_and_i = tree_to_uhwi (bit_and_cst);
 target_bit_and_i = 0;
 for (unsigned i = 0; i < vec_elem_bits / cmp_bits_i; i++)
 target_bit_and_i = (target_bit_and_i << cmp_bits_i) | 1U;
					if ((exact_log2 (cmp_bits_i)) >= 0
 && cmp_bits_i < HOST_BITS_PER_WIDE_INT
 && multiple_p (vec_bits, cmp_bits_i)
 && vec_elem_bits <= HOST_BITS_PER_WIDE_INT
 && target_mult_i == mult_i
 && target_bit_and_i == bit_and_i
)
					  {
					    {
 tree cmp_type = build_nonstandard_integer_type (cmp_bits_i, 0);
 poly_int64 vector_type_nelts = exact_div (vec_bits, cmp_bits_i);
 tree vec_cmp_type = build_vector_type (cmp_type, vector_type_nelts);
 tree vec_truth_type = truth_type_for (vec_cmp_type);
 tree zeros = build_zero_cst (vec_cmp_type);
 tree ones = build_all_ones_cst (vec_cmp_type);
						if (expand_vec_cmp_expr_p (vec_cmp_type, vec_truth_type, LT_EXPR)
 && expand_vec_cond_expr_p (vec_cmp_type, vec_truth_type, LT_EXPR)
)
						  {
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1235;
						    {
						      tree res_op0;
						      {
							tree _o1[3], _r1;
							{
							  tree _o2[2], _r2;
							  {
							    tree _o3[1], _r3;
							    _o3[0] = captures[0];
							    _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
							    _o2[0] = _r3;
							  }
							  _o2[1] =  zeros;
							  _r2 = fold_build2_loc (loc, LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
							  _o1[0] = _r2;
							}
							_o1[1] =  ones;
							_o1[2] =  zeros;
							_r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
							res_op0 = _r1;
						      }
						      tree _r;
						      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						      if (TREE_SIDE_EFFECTS (captures[1]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						      if (TREE_SIDE_EFFECTS (captures[2]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						      if (TREE_SIDE_EFFECTS (captures[3]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 859, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1235:;
						  }
					    }
					  }
				    }
				  }
			    }
			  }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1236;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1236;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1236:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1237;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1237;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1237:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1238;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1238;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1238:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1239;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1239;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1239:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1240;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1240;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1240:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1241;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1241;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1241:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1242;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1242;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1242:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1243;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1243;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1243:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1244;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1244;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1244:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1245;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1245;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1245:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1246;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1246;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 860, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1246:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1247;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1247;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1247:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1248;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1248;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1248:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1249;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1249;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1249:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1250;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1250;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1250:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1251;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1251;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 861, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1251:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_162 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_163 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      tree res = generic_simplify_164 (loc, type, _p0, _p1, captures, MULT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      {
 wi::overflow_type overflow;
 wide_int mul = wi::mul (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type), &overflow);
			  if (!overflow || TYPE_OVERFLOW_WRAPS (type)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1252;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1252;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1252;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  wide_int_to_tree (type, mul);
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 862, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1252:;
			    }
		      }
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  {
 bool overflowed = true;
 wi::overflow_type ovf1, ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::mul (wi::to_wide (captures[4]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1253;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1253;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1253;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1253;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] =  wide_int_to_tree (type, mul);
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 863, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1253:;
					}
				  }
				}
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1254;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 864, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1254:;
		    }
		}
	      }
	  }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1255;
	      {
		if (! tree_invariant_p (captures[1])) goto next_after_fail1255;
		tree res_op0;
		res_op0 = unshare_expr (captures[1]);
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 865, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1255:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1256;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  captures[2] = _r1;
		}
		res_op0 = unshare_expr (captures[2]);
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 866, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1256:;
	    }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q30))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			tree res = generic_simplify_167 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
	      tree res = generic_simplify_166 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_onep (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
	      tree res = generic_simplify_166 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_168 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_zerop (_q31))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  tree res = generic_simplify_168 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		  tree res = generic_simplify_167 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1257;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1257;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 867, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1257:;
			  }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q22))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1258;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1258;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 867, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1258:;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1259;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1259;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 868, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1259:;
			  }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1260;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1260;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 868, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1260:;
			  }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      if (flag_associative_math
 && single_use (captures[0])
)
			{
			  {
 tree tem = const_binop (MULT_EXPR, type, captures[1], captures[3]);
			      if (tem
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1261;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1261;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1261;
				  {
				    tree res_op0;
				    res_op0 =  tem;
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 869, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1261:;
				}
			  }
			}
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
}
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
}
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  {
	    tree _q30_pops[1];
	    if (tree_nop_convert (_q30, _q30_pops))
	      {
		tree _q40 = _q30_pops[0];
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      switch (TREE_CODE (_q50))
		        {
			CASE_CONVERT:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    switch (TREE_CODE (_q60))
			      {
			      case LT_EXPR:
			        {
				  tree _q70 = TREE_OPERAND (_q60, 0);
				  tree _q71 = TREE_OPERAND (_q60, 1);
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree _p1_pops[1];
					    if (tree_nop_convert (_p1, _p1_pops))
					      {
						tree _q110 = _p1_pops[0];
						if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
						  {
						    {
						      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						      tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
						      if (res) return res;
						    }
						  }
}
					  }
					  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
			    break;
			  }
			case LT_EXPR:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    tree _q61 = TREE_OPERAND (_q50, 1);
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_nop_convert (_p1, _p1_pops))
				        {
					  tree _q100 = _p1_pops[0];
					  if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
}
				    }
				    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					  tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
}
	  }
	    break;
	  }
        default:;
        }
      switch (TREE_CODE (_p1))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_p1, 0);
	    tree _q41 = TREE_OPERAND (_p1, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				      tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q41))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
			    break;
			  }
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
}
	  }
	    break;
	  }
        default:;
        }
    {
      tree _p1_pops[1];
      if (tree_nop_convert (_p1, _p1_pops))
        {
	  tree _q40 = _p1_pops[0];
	  switch (TREE_CODE (_q40))
	    {
	    case BIT_IOR_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q40, 0);
		tree _q51 = TREE_OPERAND (_q40, 1);
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q51))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
			          break;
			        }
			      default:;
			      }
			    break;
			  }
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q51))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      {
		tree _q50_pops[1];
		if (tree_nop_convert (_q50, _q50_pops))
		  {
		    tree _q60 = _q50_pops[0];
		    switch (TREE_CODE (_q60))
		      {
		      case NEGATE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  switch (TREE_CODE (_q70))
			    {
			    CASE_CONVERT:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				switch (TREE_CODE (_q80))
				  {
				  case LT_EXPR:
				    {
				      tree _q90 = TREE_OPERAND (_q80, 0);
				      tree _q91 = TREE_OPERAND (_q80, 1);
				      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
					{
					  if (integer_zerop (_q91))
					    {
					      if (integer_onep (_q51))
						{
						  {
						    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						    tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
						    if (res) return res;
						  }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    case LT_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if (integer_zerop (_q81))
				      {
					if (integer_onep (_q51))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					      tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
}
	      }
	        break;
	      }
	    default:;
	    }
}
    }
}
}
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case LT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				  {
				    if (integer_zerop (_q71))
				      {
					if (integer_onep (_q41))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  CASE_CONVERT:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      switch (TREE_CODE (_q70))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
				      {
					if (integer_zerop (_q81))
					  {
					    if (integer_onep (_q41))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
						  tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
}
	    }
	      break;
	    }
          default:;
          }
}
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_zerop (_q51))
			    {
			      if (integer_onep (_q21))
				{
				  {
				    tree _p1_pops[1];
				    if (tree_nop_convert (_p1, _p1_pops))
				      {
					tree _q90 = _p1_pops[0];
					if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					      tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
}
				  }
				  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_zerop (_q41))
		      {
			if (integer_onep (_q21))
			  {
			    {
			      tree _p1_pops[1];
			      if (tree_nop_convert (_p1, _p1_pops))
			        {
				  tree _q80 = _p1_pops[0];
				  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
}
			    }
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
				  tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q21))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
}
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q21))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
}
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
}
      }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case LT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				  tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
      {
	tree _q30_pops[1];
	if (tree_nop_convert (_q30, _q30_pops))
	  {
	    tree _q40 = _q30_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
}
      }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					  tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
}
	  }
	    break;
	  }
        default:;
        }
}
}
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if (tree_negate_expr_p (_q50))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			  tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_negate_expr_p (_p1))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
		  tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_172 (loc, type, _p0, _p1, captures, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_q20))
	{
	  switch (TREE_CODE (_p1))
	    {
	    CASE_CONVERT:
	      {
		tree _q40 = TREE_OPERAND (_p1, 0);
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
			tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		      break;
		    }
	          default:;
	          }
	        break;
	      }
	    case NEGATE_EXPR:
	      {
		tree _q40 = TREE_OPERAND (_p1, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		  tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	        break;
	      }
	    default:;
	    }
        }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      if (tree_negate_expr_p (_q40))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
if (tree_negate_expr_p (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      CASE_CONVERT:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  switch (TREE_CODE (_q30))
	    {
	    case NEGATE_EXPR:
	      {
		tree _q40 = TREE_OPERAND (_q30, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	        break;
	      }
	    default:;
	    }
          break;
        }
      case NEGATE_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	    tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
          break;
        }
      default:;
      }
  }
if (tree_zero_one_valued_p (_p0))
  {
    if (tree_zero_one_valued_p (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1262;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 870, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1262:;
	    }
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
			  tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
		    tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  switch (TREE_CODE (_q51))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q31))
				  {
				  case INTEGER_CST:
				    {
				      if ((_p1 == _q51 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q51, 0))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _q51 };
					    tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, PLUS_EXPR);
					    if (res) return res;
					  }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q31))
			    {
			    case INTEGER_CST:
			      {
				if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q41, 0))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q41 };
				      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, PLUS_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  switch (TREE_CODE (_q51))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q31))
				  {
				  case INTEGER_CST:
				    {
				      if ((_p1 == _q51 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q51, 0))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _q51 };
					    tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, MINUS_EXPR);
					    if (res) return res;
					  }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q31))
			    {
			    case INTEGER_CST:
			      {
				if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q41, 0))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q41 };
				      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, MINUS_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
		    tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
	      tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q21))
			    {
			    case INTEGER_CST:
			      {
				if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q41, 0))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _q41 };
				      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, PLUS_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _q31 };
				tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, PLUS_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q21))
			    {
			    case INTEGER_CST:
			      {
				if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q41, 0))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _q41 };
				      tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, MINUS_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _q31 };
				tree res = generic_simplify_175 (loc, type, _p0, _p1, captures, MINUS_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1263;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1263;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 871, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1263:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		tree res = generic_simplify_176 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
		tree res = generic_simplify_176 (loc, type, _p0, _p1, captures);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
	      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
		    if (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1264;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1264;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1264;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1264:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1265;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1265;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1265;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1265;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1265:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1266;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1266;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1266;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1266;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1266:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1267;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1267;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1267:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1268;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1268;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1268:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1269;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1269;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1269:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1270;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1270;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1270;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1270:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1271;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1271;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1271;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1271:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1272;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1272;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1272;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1272:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1273;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1273;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1273;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1273:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1274;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1274;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1274;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1274:;
					}
				    }
				}
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1275;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1275;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1275:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1276;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1276;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1276:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1277;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1277;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1277:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1278;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1278;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1278;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1278:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CBRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1279;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1279;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1279:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_COSF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_COSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1280;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1280;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1280;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1280:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1281;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1281;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1281:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1282;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1282;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1282:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1283;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1283;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1283;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1283:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1284;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1284;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1284:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1285;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1285;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1285;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1285:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1286;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1286;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1286;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1286:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPF:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1287;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1287;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1287;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1287:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1288;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1288;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1288;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1288:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1289;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1289;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1289;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1289:;
					}
				    }
				}
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1290;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1290;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1290:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1291;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1291;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1291:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1292;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1292;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1292;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1292:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1293;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1293;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1293;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1293:;
					}
				    }
				}
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1294;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1294;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1294:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_TANF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_TANL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1295;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1295;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1295:;
			      }
			  }
		        }
		      break;
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1296;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1296;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1296:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1297;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1297;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1297:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1298;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1298;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1298:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1299;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1299;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1299:;
					}
				    }
				}
			      }
			    break;
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1300;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1300;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1300:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1301;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1301:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1302;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1302;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1302:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1303;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1303:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF128X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1304;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1304;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1304;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1304:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_EXP2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1305;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1305;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1305:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1306;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1306:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1307;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1307;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1307:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_EXP10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1308;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1308;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1308:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CBRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1309;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1309;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1309:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CBRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1310;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 872, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1310:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1311;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1311;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1311;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1311:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1312;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1312:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1313;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1313;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1313;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1313:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1314;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1314:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1315;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1315;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1315;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1315:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1316;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1316;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1316:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1317;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1317;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1317;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1317:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1318;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 873, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1318:;
			      }
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
		    {
		      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
			    if (VECTOR_INTEGER_TYPE_P (type)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1319;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    captures[3] = _r1;
				  }
				  res_op0 = unshare_expr (captures[3]);
				  tree res_op1;
				  res_op1 = captures[3];
				  tree res_op2;
				  res_op2 = captures[1];
				  tree _r;
				  _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 796, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1319:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q22))
	      {
	      case VECTOR_CST:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_PERM_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			tree _q62 = TREE_OPERAND (_p1, 2);
			if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
			  {
			    if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			      {
				switch (TREE_CODE (_q62))
				  {
				  case VECTOR_CST:
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
					tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, MULT_EXPR);
					if (res) return res;
				      }
				      break;
				    }
			          default:;
			          }
			      }
			  }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_180 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_180 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWI:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWI:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWI, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1320;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1320:;
				  }
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_180 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_180 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWIF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1321;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIF, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1321;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1321:;
				  }
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWIL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1322;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = captures[4];
					_r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[2];
				      tree _r;
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIL, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1322;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 875, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1322:;
				  }
			      }
			    }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop

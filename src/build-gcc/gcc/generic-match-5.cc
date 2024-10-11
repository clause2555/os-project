/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_zero_one_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[0]), 1)
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 18, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case BIT_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (integer_onep (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	      if (INTEGRAL_TYPE_P (type)
)
		{
		  {
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 19, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	    }
	  }
	if (integer_onep (_p0))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { t, _p1 };
	      if (INTEGRAL_TYPE_P (type)
)
		{
		  {
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 19, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || TYPE_PRECISION (TREE_TYPE (captures[1])) > 1)
 && INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[1]), 1)
)
	    {
	      {
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 20, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    default:;
    }
if (tree_truth_valued_p (t))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
)
	{
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
    }
  }
  return false;
}

tree
generic_simplify_4 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail85;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail85;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail85;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 44, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail85:;
    }
  return NULL_TREE;
}

tree
generic_simplify_9 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail90;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 49, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail90:;
  return NULL_TREE;
}

tree
generic_simplify_15 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
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
	      if (!CONSTANT_CLASS_P (captures[1])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail102;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[0];
			_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[2];
		      _r1 = fold_build2_loc (loc, outer_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      if (EXPR_P (_r1))
		        goto next_after_fail102;
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 61, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail102:;
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail103;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[2];
			  _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			  _o2[1] = _r3;
			}
			_r2 = fold_build2_loc (loc, outer_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			if (EXPR_P (_r2))
			  goto next_after_fail103;
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[1];
		      _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 62, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail103:;
		}
	      else
		{
		  if (types_match (type, captures[1]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (outer_op, type, captures[0], captures[2]);
			  if (cst && !TREE_OVERFLOW (cst)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail104;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail104;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail104;
			      {
				tree res_op0;
				res_op0 =  cst;
				tree res_op1;
				res_op1 = captures[1];
				tree _r;
				_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 63, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail104:;
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
generic_simplify_34 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail124;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 83, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail124:;
    }
  return NULL_TREE;
}

tree
generic_simplify_39 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[0]))
 && !TYPE_SATURATING (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail129;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail129;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[1];
	    _o2[1] = captures[2];
	    _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
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
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 88, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail129:;
    }
  return NULL_TREE;
}

tree
generic_simplify_48 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail140;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 98, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail140:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_54 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail150;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != boolean_type_node)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, boolean_type_node, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[0];
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 108, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail150:;
    }
  return NULL_TREE;
}

tree
generic_simplify_60 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail156;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail156;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 114, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail156:;
    }
  return NULL_TREE;
}

tree
generic_simplify_70 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail166;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail166;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 121, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail166:;
  return NULL_TREE;
}

tree
generic_simplify_77 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail173;
	  {
	    tree res_op0;
	    res_op0 =  wascmp
 ? constant_boolean_node (true, type)
 : build_all_ones_cst (TREE_TYPE (captures[0]));
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 126, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail173:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_89 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[6]))
)
    {
      if (single_use (captures[4]) && single_use (captures[5])
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail186;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail186;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 135, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail186:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail187;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail187;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[4];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 136, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail187:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_102 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitop == BIT_AND_EXPR
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail202;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 143, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail202:;
    }
  else
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail203;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 144, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail203:;
    }
  return NULL_TREE;
}

tree
generic_simplify_114 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail221;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail221;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 160, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail221:;
  return NULL_TREE;
}

tree
generic_simplify_120 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail245;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail245;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 176, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail245:;
  return NULL_TREE;
}

tree
generic_simplify_125 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail263;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail263;
  {
    tree _r;
    _r =  constant_boolean_node (true, type);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 176, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail263:;
  return NULL_TREE;
}

tree
generic_simplify_128 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail267;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail267;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 161, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail267:;
    }
  return NULL_TREE;
}

tree
generic_simplify_133 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && tree_int_cst_sgn (captures[2]) > 0
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[1])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int wone = wi::one (TYPE_PRECISION (t));
 wide_int c = wi::add (wi::lshift (wone, wi::to_wide (captures[2])), wone);
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail272;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail272;
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
	      _o1[1] =  wide_int_to_tree (t, c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail272:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_141 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail280;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 191, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail280:;
    }
  return NULL_TREE;
}

tree
generic_simplify_147 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail286;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 197, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail286:;
  return NULL_TREE;
}

tree
generic_simplify_152 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (opo),
 const enum tree_code ARG_UNUSED (opi))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail291;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail291:;
  return NULL_TREE;
}

tree
generic_simplify_158 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail298;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail298;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail298;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 208, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail298:;
    }
  return NULL_TREE;
}

tree
generic_simplify_169 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail310;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail310;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail310:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail311;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail311;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail311:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_181 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail325;
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
	_r = maybe_build_call_expr_loc (loc, POW, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail325;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 229, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail325:;
    }
  return NULL_TREE;
}

tree
generic_simplify_192 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail352;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 255, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail352:;
  return NULL_TREE;
}

tree
generic_simplify_197 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail357;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[3]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 256, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail357:;
    }
  return NULL_TREE;
}

tree
generic_simplify_205 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::lt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail365;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail365:;
    }
  else
    {
      if (wi::gt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail366;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 268, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail366:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_215 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail387;
  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail387;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail387;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  const_binop (invrot, TREE_TYPE (captures[0]), captures[2], captures[1]);
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 289, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail387:;
  return NULL_TREE;
}

tree
generic_simplify_221 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[1]));
	  if (ic == icmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail393;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail393;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 295, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail393:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail394;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail394;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 296, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail394:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_232 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 tree tem = const_binop (op == PLUS_EXPR ? MINUS_EXPR : PLUS_EXPR,
 TREE_TYPE (captures[1]), captures[2], captures[1]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail424;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail424;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail424;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  tem;
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 324, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail424:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_238 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      if (wi::to_wide (captures[2]) == 0
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail455;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 355, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail455:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
)
	    {
	      {
 wi::overflow_type ovf;
 wide_int prod = wi::mul (wi::to_wide (captures[2]), wi::to_wide (captures[1]),
 TYPE_SIGN (TREE_TYPE (captures[1])), &ovf);
		  if (ovf
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail456;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail456;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail456;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 356, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail456:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail457;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail457;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail457;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  wide_int_to_tree (TREE_TYPE (captures[0]), prod);
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 357, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail457:;
		    }
	      }
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_245 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail479;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail479;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 372, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail479:;
  return NULL_TREE;
}

tree
generic_simplify_247 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail481;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	_r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	if (EXPR_P (_r2))
	  goto next_after_fail481;
	_o1[1] = _r2;
      }
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 374, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail481:;
  return NULL_TREE;
}

tree
generic_simplify_251 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonzero_p (captures[0])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail485;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail485;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 378, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail485:;
    }
  return NULL_TREE;
}

tree
generic_simplify_257 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail491;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail491;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 383, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail491:;
    }
  return NULL_TREE;
}

tree
generic_simplify_261 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && ptrs_compare_unequal (captures[0], captures[1])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail509;
      {
	tree _r;
	_r =  constant_boolean_node (neeq != EQ_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 392, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail509:;
    }
  return NULL_TREE;
}

tree
generic_simplify_265 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TREE_OVERFLOW (captures[2]) && !TREE_OVERFLOW (captures[3])
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[1]))
 && !TYPE_SATURATING (TREE_TYPE (captures[1]))
)
    {
      {
 tree res = int_const_binop (rop, captures[3], captures[2]);
	  if (TREE_OVERFLOW (res)
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail517;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail517;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail517;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 400, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail517:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail518;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail518;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail518;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 =  TREE_OVERFLOW (res)
 ? drop_tree_overflow (res) : res;
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 401, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail518:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_268 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
      if (prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (tree_int_cst_sgn (captures[2]) < 0 || wi::to_widest (captures[2]) >= prec
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail523;
	      {
		tree _r;
		_r =  constant_boolean_node (op == EQ_EXPR ? false : true, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail523:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail524;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail524;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[1];
		  _o1[1] =  wide_int_to_tree (type0,
 wi::mask (tree_to_uhwi (captures[2]) + 1,
 false, prec));
		  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  wide_int_to_tree (type0,
 wi::shifted_mask (tree_to_uhwi (captures[2]), 1,
 false, prec));
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 407, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail524:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_279 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail539;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail539;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 422, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail539:;
  return NULL_TREE;
}

tree
generic_simplify_284 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail546;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 427, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail546:;
    }
  return NULL_TREE;
}

tree
generic_simplify_291 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail554;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 435, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail554:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_296 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail559;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 440, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail559:;
    }
  return NULL_TREE;
}

tree
generic_simplify_305 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail570;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TANH, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail570;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 451, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail570:;
    }
  return NULL_TREE;
}

tree
generic_simplify_311 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (neg_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!HONOR_SIGNED_ZEROS (captures[1]) && !HONOR_INFINITIES (captures[1])
)
	{
	  if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail576;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 457, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail576:;
	    }
	  else
	    {
	      if (real_less (TREE_REAL_CST_PTR (captures[0]), &dconst0)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail577;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, neg_op, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 458, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail577:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_326 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2]))
 || VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
    {
      {
 tree cst = uniform_integer_cst_p (captures[2]);
 tree arg1_type = TREE_TYPE (cst);
 unsigned int prec = TYPE_PRECISION (arg1_type);
 wide_int max = wi::max_value (arg1_type);
 wide_int signed_max = wi::max_value (prec, SIGNED);
 wide_int min = wi::min_value (arg1_type);
	  if (wi::to_wide (cst) == max
)
	    {
	      if (cmp == GT_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail596;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 477, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail596:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail597;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail597;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 478, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail597:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail598;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 479, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail598:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail599;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail599;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 = captures[2];
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 480, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail599:;
			    }
			}
		    }
		}
	    }
	  else
	    {
	      if (wi::to_wide (cst) == min
)
		{
		  if (cmp == LT_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail600;
		      {
			tree _r;
			_r =  constant_boolean_node (false, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 481, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail600:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail601;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail601;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 482, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail601:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail602;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 483, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail602:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail603;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail603;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 484, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail603:;
				}
			    }
			}
		    }
		}
	      else
		{
		  if (wi::to_wide (cst) == max - 1
)
		    {
		      if (cmp == GT_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail604;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 485, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail604:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail605;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail605;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 486, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail605:;
			    }
			}
		    }
		  else
		    {
		      if (wi::to_wide (cst) == min + 1
)
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail606;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail606;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 487, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail606:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail607;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 488, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail607:;
				}
			    }
			}
		      else
			{
			  if (wi::to_wide (cst) == signed_max
 && TYPE_UNSIGNED (arg1_type)
 && TYPE_MODE (arg1_type) != BLKmode
 && prec == GET_MODE_PRECISION (SCALAR_INT_TYPE_MODE (arg1_type))
 && INTEGRAL_TYPE_P (arg1_type)
)
			    {
			      if (cmp == LE_EXPR || cmp == GT_EXPR
)
				{
				  {
 tree st = signed_type_for (TREE_TYPE (captures[2]));
				      if (cst == captures[2] && cmp == LE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail608;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (TREE_TYPE (_o1[0]) != st)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  build_zero_cst (st);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail608:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail609;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (TREE_TYPE (_o1[0]) != st)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 =  build_zero_cst (st);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail609:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail610;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
						      res_op0 = _r1;
						    }
						    tree res_op1;
						    res_op1 =  build_zero_cst (st);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[2]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail610:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail611;
						      {
							tree res_op0;
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  build_zero_cst (st);
							tree _r;
							_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
							if (TREE_SIDE_EFFECTS (captures[2]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 492, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail611:;
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
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_387 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[3], op, captures[1], ERROR_MARK,
 NULL_TREE, NULL_TREE, captures[2], ERROR_MARK,
 NULL_TREE, NULL_TREE, pmop);
      if (utype
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail717;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail717;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail717;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail717;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 562, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail717:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_401 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < 256
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
 tree nst = build_int_cst (integer_type_node, prec - 8);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail736;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] = captures[1];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		_o2[1] = nst;
		_r2 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o2[0], _o2[1]);
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
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail736:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_410 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail767;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail767;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 597, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail767:;
  return NULL_TREE;
}

tree
generic_simplify_413 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail782;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail782;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail782:;
    }
  return NULL_TREE;
}

tree
generic_simplify_416 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail785;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail785:;
    }
  return NULL_TREE;
}

tree
generic_simplify_419 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail792;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail792;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 599, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail792:;
  return NULL_TREE;
}

tree
generic_simplify_422 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail796;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
    if (!_r)
      goto next_after_fail796;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 602, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail796:;
  return NULL_TREE;
}

tree
generic_simplify_425 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail799;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail799;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 605, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail799:;
    }
  return NULL_TREE;
}

tree
generic_simplify_429 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail803;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_each_one_cst (TREE_TYPE (captures[0]));
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 609, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail803:;
    }
  return NULL_TREE;
}

tree
generic_simplify_433 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      {
 tree rotate_type = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail807;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != rotate_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, rotate_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, rotate, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 612, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail807:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_443 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail819;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 623, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail819:;
  return NULL_TREE;
}

tree
generic_simplify_451 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail836;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail836;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail836;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 627, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail836:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail837;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail837;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail837;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 628, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail837:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail838;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail838;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail838;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 629, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail838:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail839;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail839;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail839;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 630, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail839:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_470 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail863;
      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail863;
      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail863;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail863;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail863:;
    }
  return NULL_TREE;
}

tree
generic_simplify_482 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail878;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 668, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail878:;
  return NULL_TREE;
}

tree
generic_simplify_486 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail884;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 674, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail884:;
  return NULL_TREE;
}

tree
generic_simplify_492 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail890;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail890;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail890;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail890;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 661, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail890:;
  return NULL_TREE;
}

tree
generic_simplify_499 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail897;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[7];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[5];
	      _o1[6] = captures[6];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail897;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 682, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail897:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_507 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[1])) || TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail905;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ovf, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail905;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 690, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail905:;
    }
  return NULL_TREE;
}

tree
generic_simplify_519 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail917;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, tos, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail917;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 702, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail917:;
    }
  return NULL_TREE;
}

tree
generic_simplify_527 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SIGNBIT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail925;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] =  build_real (TREE_TYPE (captures[0]), dconst0);
	  _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 710, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail925:;
    }
  return NULL_TREE;
}

tree
generic_simplify_536 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail934;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail934;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail934:;
    }
  return NULL_TREE;
}

tree
generic_simplify_546 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail945;
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
	      goto next_after_fail945;
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail945:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_FLOAT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
1
 && type == TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1009;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1009:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1010;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1010:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1011;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 743, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1011:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1012;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1012:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1013;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1013:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1014;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1014:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec == inside_prec
 && final_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1015;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1015:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1016;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 748, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1016:;
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
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1017;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1017:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1018;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 743, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1018:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1019;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1019:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1020;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1020:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1021;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 746, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1021:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec == inside_prec
 && final_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1022;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1022:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 748, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1023:;
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
  return NULL_TREE;
}

tree
generic_simplify_BIT_IOR_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1124;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1124;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1124:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_58 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_59 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_60 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_all_onesp (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_63 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_63 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_63 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_63 (loc, type, _p0, _p1, captures);
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
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21 };
	  tree res = generic_simplify_64 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q21, _q20 };
	  tree res = generic_simplify_64 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_62 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_65 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_65 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_65 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_65 (loc, type, _p0, _p1, captures);
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
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q41 };
		    tree res = generic_simplify_66 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    tree res = generic_simplify_66 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q31 };
		    tree res = generic_simplify_66 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _p0, _q30 };
		    tree res = generic_simplify_66 (loc, type, _p0, _p1, captures);
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
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
}
  }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
}
  }
  switch (TREE_CODE (_p1))
    {
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_67 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
	  tree res = generic_simplify_64 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q31, _q30 };
	  tree res = generic_simplify_64 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_68 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_68 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_68 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_68 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
	      tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
	      tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			      tree res = generic_simplify_71 (loc, type, _p0, _p1, captures);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
			if (res) return res;
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
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case EQ_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_72 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
}
      }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q61 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q60 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q61 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q60 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q71 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q70 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q71 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q70 };
			      tree res = generic_simplify_73 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_74 (loc, type, _p0, _p1, captures);
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
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_75 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_75 (loc, type, _p0, _p1, captures);
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
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_76 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_76 (loc, type, _p0, _p1, captures);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case EQ_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_76 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_76 (loc, type, _p0, _p1, captures);
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
}
}
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1125;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1125:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1126;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1126;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1126:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
			    tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
		      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
	  case BIT_IOR_EXPR:
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
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
			  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
			  tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q51, _q20 };
			  tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _q50, _q20 };
			  tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q20 };
		    tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _q20 };
		    tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
    if (res) return res;
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_81 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q41 };
		    tree res = generic_simplify_82 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
		    tree res = generic_simplify_82 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
		    tree res = generic_simplify_82 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q20, _q30 };
		    tree res = generic_simplify_82 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _q31 };
				    tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q31, _q30 };
				    tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q30, _q31 };
				    tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q31, _q30 };
				    tree res = generic_simplify_83 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_78 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			    {
			      if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			    {
			      if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
		    tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
		    tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
		    tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
		    tree res = generic_simplify_79 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0 };
		    tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _p0 };
		    tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
	      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _q30, _p0 };
	      tree res = generic_simplify_80 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q61 };
			  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q60 };
			  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q61 };
			  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q60 };
			  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q51 };
		    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50 };
		    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q51 };
		    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q50 };
		    tree res = generic_simplify_89 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
	  if (res) return res;
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q71 };
				tree res = generic_simplify_90 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q70 };
				tree res = generic_simplify_90 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q71 };
				tree res = generic_simplify_90 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q70 };
				tree res = generic_simplify_90 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q61 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q60 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q61 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q60 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_92 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_93 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
	  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q61 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q60 };
			  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
}
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
}
	}
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
	  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p0, _q21 };
		    tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q51, _p0, _q20 };
		    tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q50, _p0, _q21 };
		    tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20 };
		    tree res = generic_simplify_100 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q30, _p0, _q31 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q31, _p0, _q30 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q30, _p0, _q31 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q31, _p0, _q30 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
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
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q40))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
}
	      }
	      {
		tree _q31_pops[1];
		if (tree_nop_convert (_q31, _q31_pops))
		  {
		    tree _q50 = _q31_pops[0];
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
}
	      }
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q31))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
}
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
}
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_98 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
}
	}
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case BIT_AND_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
}
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_103 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
}
	    }
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q41))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_104 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
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
}
}
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_105 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case BIT_AND_EXPR:
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
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      tree _q42 = TREE_OPERAND (_q21, 2);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
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
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_108 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q60 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q61 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q60 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q61 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _p0, _q21 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q20, _p0, _q21 };
			  tree res = generic_simplify_109 (loc, type, _p0, _p1, captures);
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
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
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
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
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
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
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
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
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
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
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
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
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
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
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
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
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
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_111 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
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
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_112 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, BIT_IOR_EXPR);
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
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _p0, _q21 };
			tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GE_EXPR, GT_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _p0, _q20 };
			tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q51 };
			tree res = generic_simplify_120 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_120 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_127 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_127 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		    if (res) return res;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_127 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_127 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
			tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q51 };
			tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_122 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_123 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_116 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_124 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
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
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_129 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q21 };
				tree res = generic_simplify_130 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
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
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
}
}
if (tree_truth_valued_p (_p0))
  {
    {
      tree _p1_pops[1];
      if (tree_logical_inverted_value (_p1, _p1_pops))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
}
    }
  }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
		    tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_132 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
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
		    if (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1127;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1127;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1127;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1127:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1128;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1128;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1128;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1128;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1128:;
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
	  if (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1129;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1129;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1129;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1129;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1129:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case UNORDERED_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q50 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q50, 0) && types_match (_q51, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			if (types_match (captures[0], captures[1])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1130;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1130:;
			  }
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q51 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
			tree res = generic_simplify_134 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case UNORDERED_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			tree res = generic_simplify_135 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _p0, _q20 };
			tree res = generic_simplify_135 (loc, type, _p0, _p1, captures);
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1131;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1131;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1131;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1131;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1131;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1131;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1131:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1132;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1132;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1132;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1132;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1132:;
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
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1133;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1133;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1133;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1133;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1133;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1133;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1133:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1134;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1134;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1134;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1134;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1134:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1135;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1135;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1135;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1135;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1135;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1135;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1135:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1136;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1136;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1136;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1136;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1136:;
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
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1137;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1137;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1137;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1137;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1137;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1137;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1137:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1138;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1138;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1138;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1138;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1138:;
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1139;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1139;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1139;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1139;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1139;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1139;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1139:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1140;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1140;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1140;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1140;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1140:;
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
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1141;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1141;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1141;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1141;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1141;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1141;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1141:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1142;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1142;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1142;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1142;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1142:;
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1143;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1143;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1143;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1143;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1143;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1143;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1143:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1144;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1144;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1144;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1144;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1144:;
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
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1145;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1145;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1145;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1145;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1145;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1145;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1145:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1146;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1146;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1146;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1146;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1146:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1147;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1147:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop

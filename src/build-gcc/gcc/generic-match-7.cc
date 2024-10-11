/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_truth_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 10, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case ORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNEQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ANDIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_OR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ORIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 12, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_31 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (log1),
 const enum tree_code ARG_UNUSED (log2),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail121;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[5];
      _r1 = fold_build2_loc (loc, log2, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
    if (!_r)
      goto next_after_fail121;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail121:;
  return NULL_TREE;
}

tree
generic_simplify_37 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail127;
  {
    tree res_op0;
    res_op0 = unshare_expr (captures[2]);
    tree res_op1;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 86, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail127:;
  return NULL_TREE;
}

tree
generic_simplify_44 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail134;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 92, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail134:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_51 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail145;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 103, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail145:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_58 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail154;
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
	_r = fold_build2_loc (loc, LSHIFT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 112, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail154:;
    }
  return NULL_TREE;
}

tree
generic_simplify_62 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail158;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 116, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail158:;
  return NULL_TREE;
}

tree
generic_simplify_66 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail162;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 119, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail162:;
  return NULL_TREE;
}

tree
generic_simplify_74 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail170;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail170;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[3];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 125, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail170:;
  return NULL_TREE;
}

tree
generic_simplify_84 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail180;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 132, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail180:;
  return NULL_TREE;
}

tree
generic_simplify_91 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail190;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail190;
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
next_after_fail190:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail191;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail191;
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
next_after_fail191:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_104 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail205;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
		{
		  _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		}
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    _r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
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
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[7]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[7]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 142, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail205:;
    }
  return NULL_TREE;
}

tree
generic_simplify_116 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail223;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail223;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail223;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 162, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail223:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail224;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail224;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail224;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 163, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail224:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail225;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail225;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail225;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 164, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail225:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail226;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail226;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail226;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    res_op1 = captures[5];
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 165, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail226:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail227;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail227;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail227;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				res_op1 = captures[5];
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 166, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail227:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail228;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail228;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail228;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
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
				    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 167, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail228:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail229;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail229;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail229;
				      {
					tree res_op0;
					res_op0 = captures[4];
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
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 168, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail229:;
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
generic_simplify_154 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail293;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 201, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail293:;
    }
  return NULL_TREE;
}

tree
generic_simplify_161 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail302;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail302;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 211, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail302:;
    }
  return NULL_TREE;
}

tree
generic_simplify_170 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail312;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail312;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail312:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail313;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail313;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail313:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_183 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail327;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, mod, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 231, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail327:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_195 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail355;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[3];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 258, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail355:;
    }
  return NULL_TREE;
}

tree
generic_simplify_203 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp1),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (rcmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail363;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 265, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail363:;
    }
  return NULL_TREE;
}

tree
generic_simplify_211 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_fits_shwi_p (captures[3])
 && tree_to_shwi (captures[3]) > 0
 && tree_to_shwi (captures[3]) < TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      {
 tree t0 = TREE_TYPE (captures[2]);
 unsigned int prec = TYPE_PRECISION (t0);
 wide_int c1 = wi::to_wide (captures[3]);
 wide_int c2 = wi::to_wide (captures[4]);
 wide_int c3 = wi::to_wide (captures[5]);
 wide_int sb = wi::set_bit_in_zero (prec - 1, prec);
	  if ((c2 & c3) != c3
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail376;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail376;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail376;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail376;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 278, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail376:;
	    }
	  else
	    {
	      if (TYPE_UNSIGNED (t0)
)
		{
		  if ((c3 & wi::arshift (sb, c1 - 1)) != 0
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail377;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail377;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail377;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail377;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail377:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail378;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail378;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail378;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail378;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[2];
			  _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  wide_int_to_tree (t0, c3 << c1);
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail378:;
		    }
		}
	      else
		{
		  {
 wide_int smask = wi::arshift (sb, c1);
		      if ((c2 & smask) == 0
)
			{
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail379;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail379;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail379;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail379;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  wide_int_to_tree (t0, c2 << c1);
			      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 =  wide_int_to_tree (t0, c3 << c1);
			    tree _r;
			    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 281, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail379:;
			}
		      else
			{
			  if ((c3 & smask) == 0
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail380;
			      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail380;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail380;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail380;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[2];
				  _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree res_op1;
				res_op1 =  wide_int_to_tree (t0, c3 << c1);
				tree _r;
				_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail380:;
			    }
			  else
			    {
			      if ((c2 & smask) != (c3 & smask)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail381;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail381;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail381;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail381;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == NE_EXPR, type);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 283, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail381:;
				}
			      else
				{
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail382;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail382;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail382;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail382;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      _o1[0] = captures[2];
				      _o1[1] =  wide_int_to_tree (t0, (c2 << c1) | sb);
				      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree res_op1;
				    res_op1 =  wide_int_to_tree (t0, (c3 << c1) | sb);
				    tree _r;
				    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 284, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail382:;
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
generic_simplify_244 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off; tree base;
 tree addr = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
      if (SSA_NAME_IS_DEFAULT_DEF (captures[1])
 && TREE_CODE (SSA_NAME_VAR (captures[1])) == PARM_DECL
 && (base = get_base_address (TREE_OPERAND (addr, 0)))
 && TREE_CODE (base) == VAR_DECL
 && auto_var_in_fn_p (base, current_function_decl)
)
	{
	  if (cmp == NE_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail475;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail475;
	      {
		tree _r;
		_r =  constant_boolean_node (true, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 368, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail475:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail476;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail476;
	      {
		tree _r;
		_r =  constant_boolean_node (false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 369, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail476:;
	    }
	}
      else
	{
	  if ((base = get_addr_base_and_unit_offset (TREE_OPERAND (addr, 0), &off))
 && TREE_CODE (base) == MEM_REF
 && TREE_OPERAND (base, 0) == captures[1]
)
	    {
	      {
 off += mem_ref_offset (base).force_shwi ();
		  if (known_ne (off, 0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail477;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail477;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == NE_EXPR, type);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 370, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail477:;
		    }
		  else
		    {
		      if (known_eq (off, 0)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail478;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail478;
			  {
			    tree _r;
			    _r =  constant_boolean_node (cmp == EQ_EXPR, type);
			    if (TREE_SIDE_EFFECTS (captures[1]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 371, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail478:;
			}
		    }
	      }
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_256 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (sgncmp),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail490;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail490;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 382, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail490:;
    }
  return NULL_TREE;
}

tree
generic_simplify_260 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[2], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (cmp == EQ_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail501;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail501;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail501;
	      {
		tree _r;
		_r =  constant_boolean_node (known_eq (off0, off1), type);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 384, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail501:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail502;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail502;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail502;
		  {
		    tree _r;
		    _r =  constant_boolean_node (known_ne (off0, off1), type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 385, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail502:;
		}
	      else
		{
		  if (cmp == LT_EXPR && (known_lt (off0, off1) || known_ge (off0, off1))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail503;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail503;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail503;
		      {
			tree _r;
			_r =  constant_boolean_node (known_lt (off0, off1), type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 386, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail503:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR && (known_le (off0, off1) || known_gt (off0, off1))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail504;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail504;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail504;
			  {
			    tree _r;
			    _r =  constant_boolean_node (known_le (off0, off1), type);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 387, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail504:;
			}
		      else
			{
			  if (cmp == GE_EXPR && (known_ge (off0, off1) || known_lt (off0, off1))
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail505;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail505;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail505;
			      {
				tree _r;
				_r =  constant_boolean_node (known_ge (off0, off1), type);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 388, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail505:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR && (known_gt (off0, off1) || known_le (off0, off1))
)
				{
				  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail506;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail506;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail506;
				  {
				    tree _r;
				    _r =  constant_boolean_node (known_gt (off0, off1), type);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 389, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail506:;
				}
			    }
			}
		    }
		}
	    }
	}
      else
	{
	  if (equal == 0
)
	    {
	      if (cmp == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail507;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail507;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail507;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 390, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail507:;
		}
	      else
		{
		  if (cmp == NE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail508;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail508;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail508;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail508:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_277 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail537;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, copysigns, type, 2, res_op0, res_op1);
    if (!_r)
      goto next_after_fail537;
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 420, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail537:;
  return NULL_TREE;
}

tree
generic_simplify_286 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail548;
      {
	tree _r;
	_r =  build_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail548:;
    }
  return NULL_TREE;
}

tree
generic_simplify_293 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail556;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, trunc_divmod, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 437, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail556:;
    }
  return NULL_TREE;
}

tree
generic_simplify_297 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail560;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 441, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail560:;
    }
  return NULL_TREE;
}

tree
generic_simplify_306 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TANH),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail571;
      {
	tree res_op0;
	res_op0 = build_one_cst (type);
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = maybe_build_call_expr_loc (loc, COSH, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail571;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 452, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail571:;
    }
  return NULL_TREE;
}

tree
generic_simplify_313 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      if (tree_expr_nonnegative_p (captures[1]) && tree_expr_nonzero_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail579;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 460, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail579:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST
 && wi::neg_p (wi::to_wide (captures[1]), TYPE_SIGN (TREE_TYPE (captures[1])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail580;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[0];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 461, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail580:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_328 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[3]), TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[3]))
 && wi::to_wide (captures[4]) != 0
 && single_use (captures[1])
)
    {
      {
 unsigned int prec = TYPE_PRECISION (TREE_TYPE (captures[3]));
 signop sign = TYPE_SIGN (TREE_TYPE (captures[3]));
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail628;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail628;
	  {
	    tree res_op0;
	    res_op0 = captures[3];
	    tree res_op1;
	    res_op1 =  wide_int_to_tree (TREE_TYPE (captures[3]),
 wi::max_value (prec, sign)
 - wi::to_wide (captures[4]));
	    tree _r;
	    _r = fold_build2_loc (loc, out, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 472, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail628:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_336 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool ok = true;
 HOST_WIDE_INT val = 0;
 if (!tree_fits_shwi_p (captures[2]))
 ok = false;
 else
 {
 val = tree_to_shwi (captures[2]);
 if (op == GT_EXPR || op == LE_EXPR)
 {
 if (val == HOST_WIDE_INT_MAX)
 ok = false;
 else
 val++;
 }
 }
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
      if (ok && prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (val <= 0
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail638;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail638;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == EQ_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 502, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail638:;
	    }
	  else
	    {
	      if (val >= prec
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail639;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail639;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail639:;
		}
	      else
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail640;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail640;
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
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 504, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail640:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_350 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail660;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail660;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = non_lvalue_loc (loc, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 520, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail660:;
  return NULL_TREE;
}

tree
generic_simplify_354 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 unsigned int prec = element_precision (type);
      if (wi::ge_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
 && wi::lt_p (wi::to_wide (captures[1]), prec, TYPE_SIGN (TREE_TYPE (captures[1])))
 && wi::ge_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
 && wi::lt_p (wi::to_wide (captures[2]), prec, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  {
 unsigned int low = (tree_to_uhwi (captures[1])
 + tree_to_uhwi (captures[2]));
	      if (low >= prec
)
		{
		  if (op == LROTATE_EXPR || op == RROTATE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail664;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail664;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail664;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  build_int_cst (TREE_TYPE (captures[1]), low % prec);
			tree _r;
			_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 523, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail664:;
		    }
		  else
		    {
		      if (TYPE_UNSIGNED (type) || op == LSHIFT_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail665;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail665;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail665;
			  {
			    tree _r;
			    _r =  build_zero_cst (type);
			    if (TREE_SIDE_EFFECTS (captures[0]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 524, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail665:;
			}
		      else
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail666;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail666;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail666;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  build_int_cst (TREE_TYPE (captures[1]), prec - 1);
			    tree _r;
			    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 525, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail666:;
			}
		    }
		}
	      else
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail667;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail667;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail667;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  build_int_cst (TREE_TYPE (captures[1]), low);
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 526, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail667:;
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_368 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (coss),
 const combined_fn ARG_UNUSED (atans),
 const combined_fn ARG_UNUSED (sqrts),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 REAL_VALUE_TYPE r_cst;
 build_sinatan_real (&r_cst, type);
 tree t_cst = build_real (type, r_cst);
 tree t_one = build_one_cst (type);
 tree t_zero = build_zero_cst (type);
      if (SCALAR_FLOAT_TYPE_P (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail698;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail698;
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = unshare_expr (captures[1]);
		_r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		_o1[0] = _r2;
	      }
	      _o1[1] =  t_cst;
	      _r1 = fold_build2_loc (loc, LT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_one;
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[2], _r3;
		  {
		    tree _o4[2], _r4;
		    _o4[0] = unshare_expr (captures[1]);
		    _o4[1] = unshare_expr (captures[1]);
		    _r4 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o4[0]), _o4[0], _o4[1]);
		    _o3[0] = _r4;
		  }
		  _o3[1] =  t_one;
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		_r2 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o2[0]), 1, _o2[0]);
		if (!_r2)
		  goto next_after_fail698;
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, RDIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  t_zero;
	      _o1[1] = captures[1];
	      _r1 = maybe_build_call_expr_loc (loc, copysigns, TREE_TYPE (_o1[0]), 2, _o1[0], _o1[1]);
	      if (!_r1)
	        goto next_after_fail698;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 544, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail698:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_376 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail706;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_real_truncate (type, dconst_sqrt2 ());
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 552, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail706:;
    }
  return NULL_TREE;
}

tree
generic_simplify_380 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail710;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 556, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail710:;
  return NULL_TREE;
}

tree
generic_simplify_384 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail714;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail714;
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
next_after_fail714:;
  return NULL_TREE;
}

tree
generic_simplify_391 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail721;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail721:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_397 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      {
 unsigned int align;
 unsigned HOST_WIDE_INT bitpos;
 get_pointer_alignment_1 (captures[0], &align, &bitpos);
	  if (wi::ltu_p (wi::to_wide (captures[1]), align / BITS_PER_UNIT)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail727;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail727;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail727;
	      {
		tree _r;
		_r =  wide_int_to_tree (type, (wi::to_wide (captures[1])
 & (bitpos / BITS_PER_UNIT)));
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail727:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_407 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail762;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail762;
      {
	tree _r;
	_r =  constant_boolean_node (false, type);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 578, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail762:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail763;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail763;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail763;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 579, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail763:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_411 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail768;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail768;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail768;
	      {
		tree _r;
		_r = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 582, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail768:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail769;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail769;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail769;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail769:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail770;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail770;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail770;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail770:;
		    }
		  else
		    {
		      if (code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits
)
			{
			  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail771;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail771;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail771;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
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
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 585, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail771:;
			}
		      else
			{
			  if (code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits
)
			    {
			      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail772;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail772;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail772;
			      {
				tree res_op0;
				res_op0 = captures[4];
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
				_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 586, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail772:;
			    }
			  else
			    {
			      if (code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits
)
				{
				  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail773;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail773;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail773;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
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
				    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail773:;
				}
			      else
				{
				  if (code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits
)
				    {
				      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail774;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail774;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail774;
				      {
					tree res_op0;
					res_op0 = captures[4];
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
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 588, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail774:;
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
generic_simplify_442 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (single_use (captures[0])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail818;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree res_op2;
	    res_op2 = captures[3];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	    if (!_r)
	      goto next_after_fail818;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 622, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail818:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_452 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail840;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, maxmin, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 631, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail840:;
  return NULL_TREE;
}

tree
generic_simplify_458 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (FMIN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_finite_math_only
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail846;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 637, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail846:;
    }
  return NULL_TREE;
}

tree
generic_simplify_463 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree_code code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[4]);
      if ((cmp == LT_EXPR || cmp == LE_EXPR)
 && code == MIN_EXPR
 && integer_nonzerop (fold_build2 (LE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail855;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail855;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail855;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail855;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    res_op1 = captures[4];
	    tree _r;
	    _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 646, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail855:;
	}
      else
	{
	  if ((cmp == GT_EXPR || cmp == GE_EXPR)
 && code == MAX_EXPR
 && integer_nonzerop (fold_build2 (GE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail856;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail856;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail856;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail856;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[4];
		tree _r;
		_r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 647, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail856:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_480 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type)
)
    {
      {
 tree shifter = build_int_cst (integer_type_node, TYPE_PRECISION (type) - 1);
	  if (cmp == LT_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail874;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail874;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail874;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
		    _r2 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
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
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail874:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail875;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail875;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail875;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      _r3 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		      _o2[0] = _r3;
		    }
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail875:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_500 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail898;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[7];
	      _o1[6] = captures[8];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail898;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 683, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail898:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_515 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail913;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = maybe_build_call_expr_loc (loc, tos, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail913;
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail913:;
    }
  return NULL_TREE;
}

tree
generic_simplify_522 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail920;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail920:;
    }
  return NULL_TREE;
}

tree
generic_simplify_531 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail929;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail929;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail929:;
    }
  return NULL_TREE;
}

tree
generic_simplify_541 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (pfun))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 wide_int nz = tree_nonzero_bits (captures[0]);
	  if (nz == 1
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail939;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail939;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail939:;
	    }
	  else
	    {
	      if (wi::popcount (nz) == 1
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail940;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail940;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (TREE_TYPE (_o2[0]) != utype)
			      {
				_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  build_int_cst (integer_type_node,
 wi::ctz (nz));
			  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 723, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail940:;
		  }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_VIEW_CONVERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1002;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 741, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1002:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1003;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 772, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1003:;
	}
        break;
      }
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((INTEGRAL_TYPE_P (type) || POINTER_TYPE_P (type))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1004;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 773, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1004:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) || POINTER_TYPE_P (TREE_TYPE (captures[1])))
 && TYPE_SIZE (TREE_TYPE (captures[0])) == TYPE_SIZE (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 || (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1005;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree _r;
		_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1005:;
	    }
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
	      if (CONSTRUCTOR_NELTS (ctor) == 0
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1006;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1006;
		  {
		    tree _r;
		    _r =  build_zero_cst (type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 775, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1006:;
		}
	      else
		{
		  if (CONSTRUCTOR_NELTS (ctor) == 1
 && VECTOR_TYPE_P (TREE_TYPE (ctor))
 && operand_equal_p (TYPE_SIZE (type),
 TYPE_SIZE (TREE_TYPE
 (CONSTRUCTOR_ELT (ctor, 0)->value)))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1007;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1007;
		      {
			tree res_op0;
			res_op0 =  CONSTRUCTOR_ELT (ctor, 0)->value;
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 776, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1007:;
		    }
		}
	  }
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
	  if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[2])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1008;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1008;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1008;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 777, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1008:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0)
{
  switch (code)
    {
    case ABS_EXPR:
      return generic_simplify_ABS_EXPR (loc, code, type, _p0);
    CASE_CONVERT:
      return generic_simplify_CONVERT_EXPR (loc, code, type, _p0);
    case BIT_NOT_EXPR:
      return generic_simplify_BIT_NOT_EXPR (loc, code, type, _p0);
    case ABSU_EXPR:
      return generic_simplify_ABSU_EXPR (loc, code, type, _p0);
    case NEGATE_EXPR:
      return generic_simplify_NEGATE_EXPR (loc, code, type, _p0);
    case VIEW_CONVERT_EXPR:
      return generic_simplify_VIEW_CONVERT_EXPR (loc, code, type, _p0);
    case FLOAT_EXPR:
      return generic_simplify_FLOAT_EXPR (loc, code, type, _p0);
    case FIX_TRUNC_EXPR:
      return generic_simplify_FIX_TRUNC_EXPR (loc, code, type, _p0);
    case PAREN_EXPR:
      return generic_simplify_PAREN_EXPR (loc, code, type, _p0);
    case REALPART_EXPR:
      return generic_simplify_REALPART_EXPR (loc, code, type, _p0);
    case IMAGPART_EXPR:
      return generic_simplify_IMAGPART_EXPR (loc, code, type, _p0);
    case CONJ_EXPR:
      return generic_simplify_CONJ_EXPR (loc, code, type, _p0);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_PLUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1069;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1069;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1069:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_2 (loc, type, _p0, _p1, captures);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, PLUS_EXPR, PLUS_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR);
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
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q51))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				  tree res = generic_simplify_4 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_zerop (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case MAX_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			  {
			    if (integer_zerop (_q61))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				  tree res = generic_simplify_4 (loc, type, _p0, _p1, captures);
				  if (res) return res;
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
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
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
 wi::overflow_type ovf1;
 wi::overflow_type ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[4]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::add (mul, wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1070;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1070;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1070;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1070;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 789, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1070:;
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
		    tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
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
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_6 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	if (integer_onep (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
		  tree res = generic_simplify_7 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
      tree res = generic_simplify_2 (loc, type, _p0, _p1, captures);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_onep (_q31))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
		  tree res = generic_simplify_7 (loc, type, _p0, _p1, captures);
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
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
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, PLUS_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_9 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q60, _q61 };
				  tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q51))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			    tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_9 (loc, type, _p0, _p1, captures);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q21))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q21, 0);
		    tree _q61 = TREE_OPERAND (_q21, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    if (integer_all_onesp (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				  tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    if (integer_all_onesp (_p1))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				  tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  {
		    tree _q21_pops[1];
		    if (tree_nop_convert (_q21, _q21_pops))
		      {
			tree _q70 = _q21_pops[0];
			switch (TREE_CODE (_q70))
			  {
			  case BIT_IOR_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q70, 0);
			      tree _q81 = TREE_OPERAND (_q70, 1);
			      if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				{
				  if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				    {
				      if (integer_all_onesp (_p1))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					    tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
				{
				  if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				    {
				      if (integer_all_onesp (_p1))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
					    tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
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
	      default:;
	      }
}
      }
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
}
	}
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
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
				switch (TREE_CODE (_q71))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q60, _q70, _q71 };
					tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		      case BIT_AND_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1, _q60, _q61 };
				  tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	        default:;
	        }
	      break;
	    }
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q30 };
		tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
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
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  switch (TREE_CODE (_q31))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q31, 0);
			tree _q71 = TREE_OPERAND (_q31, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			      {
				if (integer_all_onesp (_p1))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				      tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
			  {
			    if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			      {
				if (integer_all_onesp (_p1))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
				      tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
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
		  case BIT_AND_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      tree _q51 = TREE_OPERAND (_q40, 1);
		      {
			tree _q31_pops[1];
			if (tree_nop_convert (_q31, _q31_pops))
			  {
			    tree _q80 = _q31_pops[0];
			    switch (TREE_CODE (_q80))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q90 = TREE_OPERAND (_q80, 0);
				  tree _q91 = TREE_OPERAND (_q80, 1);
				  if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				    {
				      if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
					{
					  if (integer_all_onesp (_p1))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
						tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
				  if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				    {
				      if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
					{
					  if (integer_all_onesp (_p1))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
						tree res = generic_simplify_11 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
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
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
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
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  tree res = generic_simplify_13 (loc, type, _p0, _p1, captures);
	  if (res) return res;
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
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q31_pops[1];
	      if (tree_nop_convert (_q31, _q31_pops))
	        {
		  tree _q50 = _q31_pops[0];
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
}
	    }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    if (CONSTANT_CLASS_P (_q30))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
		    tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
}
	}
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	case MINUS_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
			tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
}
	    }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_12 (loc, type, _p0, _p1, captures);
		  if (res) return res;
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
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_16 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_16 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, PLUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_16 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q50, _q20 };
		    tree res = generic_simplify_16 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_17 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_17 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, PLUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (CONSTANT_CLASS_P (_q20))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_15 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q51, _q20 };
		    tree res = generic_simplify_18 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
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
		tree res = generic_simplify_19 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		    if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			  tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
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
	      switch (TREE_CODE (_q40))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
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
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if (integer_each_onep (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_21 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_20 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_each_onep (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_21 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_23 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	      tree res = generic_simplify_23 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_24 (loc, type, _p0, _p1, captures, PLUS_EXPR);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (tree_zero_one_valued_p (_q21))
		{
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
			tree res = generic_simplify_25 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q20))
	{
	  switch (TREE_CODE (_q21))
	    {
	    case MINUS_EXPR:
	      {
		tree _q40 = TREE_OPERAND (_q21, 0);
		tree _q41 = TREE_OPERAND (_q21, 1);
		if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
		      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  if (tree_zero_one_valued_p (_q31))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
			tree res = generic_simplify_25 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q30))
	{
	  switch (TREE_CODE (_q31))
	    {
	    case MINUS_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q31, 0);
		tree _q51 = TREE_OPERAND (_q31, 1);
		if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
		      tree res = generic_simplify_25 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case TRUNC_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
				  if (res) return res;
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
	  case CEIL_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case CEIL_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
				  if (res) return res;
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
	  case FLOOR_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case FLOOR_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
				  if (res) return res;
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
	  case ROUND_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_q21 == _q31 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q31, 0) && types_match (_q21, _q31)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case ROUND_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
				  if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case TRUNC_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
				  if (res) return res;
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
	  case CEIL_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case CEIL_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
				  if (res) return res;
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
	  case FLOOR_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case FLOOR_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
				  if (res) return res;
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
	  case ROUND_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case ROUND_MOD_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
				  if (res) return res;
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
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case TRUNC_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, TRUNC_DIV_EXPR, TRUNC_MOD_EXPR);
				  if (res) return res;
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
    case CEIL_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case CEIL_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case CEIL_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, CEIL_DIV_EXPR, CEIL_MOD_EXPR);
				  if (res) return res;
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
    case FLOOR_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case FLOOR_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case FLOOR_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, FLOOR_DIV_EXPR, FLOOR_MOD_EXPR);
				  if (res) return res;
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
    case ROUND_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case ROUND_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case ROUND_DIV_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
				  tree res = generic_simplify_26 (loc, type, _p0, _p1, captures, ROUND_DIV_EXPR, ROUND_MOD_EXPR);
				  if (res) return res;
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
	    {
	      {
 tree tem = const_unop (NEGATE_EXPR, type, captures[1]);
		  if (!TREE_OVERFLOW (tem) || !flag_trapping_math
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1071;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1071;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  tem;
			tree _r;
			_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1071:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (SCALAR_FLOAT_TYPE_P (type)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1072;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree res_op1;
	      res_op1 =  build_real (type, dconst2);
	      tree _r;
	      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 791, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1072:;
	  }
	else
	  {
	    if (INTEGRAL_TYPE_P (type)
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1073;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 =  build_int_cst (type, 2);
		  tree _r;
		  _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 792, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1073:;
	      }
	  }
      }
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
		    if (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1074;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1074;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1074;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1074:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1075;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1075;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1075;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1075;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1075:;
	    }
	}
	if (integer_each_onep (_q21))
	  {
	    if (integer_zerop (_q22))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21, _q22 };
		  tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
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
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (TREE_CODE_CLASS (PLUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1076;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1076;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1076;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1076;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1076:;
	    }
	}
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      tree _q42 = TREE_OPERAND (_q30, 2);
	      if (integer_each_onep (_q41))
		{
		  if (integer_zerop (_q42))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
			tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      if (integer_each_onep (_q31))
		{
		  if (integer_zerop (_q32))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q30, _q31, _q32 };
			tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
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
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	if (integer_each_onep (_q31))
	  {
	    if (integer_zerop (_q32))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		  tree res = generic_simplify_27 (loc, type, _p0, _p1, captures);
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
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RDIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_28 (loc, type, _p0, _p1, captures, PLUS_EXPR);
		    if (res) return res;
		  }
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
	      case CFN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
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
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_POPCOUNT:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_q50))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q60 = TREE_OPERAND (_q50, 0);
				      tree _q61 = TREE_OPERAND (_q50, 1);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q61, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
				      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case CALL_EXPR:
					      switch (get_call_combined_fn (_p1))
					        {
						case CFN_BUILT_IN_POPCOUNTL:
						  if (call_expr_nargs (_p1) == 1)
    {
						      tree _q90 = CALL_EXPR_ARG (_p1, 0);
						      if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _q60, _p1 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (tree_vec_same_elem_p (_q31))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
			tree res = generic_simplify_32 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q30))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
			tree res = generic_simplify_32 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1077;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1077:;
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
					tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	case CFN_BUILT_IN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_IOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNT);
						if (res) return res;
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNT:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
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
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTLL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_IOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTLL);
						if (res) return res;
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTLL:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
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
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POPCOUNT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_IOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_POPCOUNT);
						if (res) return res;
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_POPCOUNT:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
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
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTIMAX:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_IOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTIMAX);
						if (res) return res;
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTIMAX:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
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
			  default:;
		          }
		        break;
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POPCOUNTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_IOR_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
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
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q30 = TREE_OPERAND (_q20, 0);
		    tree _q31 = TREE_OPERAND (_q20, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q60 = CALL_EXPR_ARG (_p1, 0);
				switch (TREE_CODE (_q60))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q70 = TREE_OPERAND (_q60, 0);
				      tree _q71 = TREE_OPERAND (_q60, 1);
				      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
					{
					  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q30, _q31, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
					      }
					    }
				        }
				      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
					{
					  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q60, _q31, _q30, _p0, _q20 };
						tree res = generic_simplify_30 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POPCOUNTL);
						if (res) return res;
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
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_p1))
	        {
		case MINUS_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    tree _q41 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q40))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q40))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q40) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q40, 0);
				switch (TREE_CODE (_q41))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_q41))
				      {
				      case CFN_BUILT_IN_POPCOUNTL:
				        if (call_expr_nargs (_q41) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_q41, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q41, _q70, _q20, _p0 };
							    tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
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
			  default:;
		          }
		        break;
		      default:;
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
  switch (TREE_CODE (_p1))
    {
    case VEC_PERM_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (tree_vec_same_elem_p (_q41))
		{
		  if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q41, _q32, _p0 };
			tree res = generic_simplify_32 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q40))
		{
		  if ((_q31 == _q30 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q30, 0) && types_match (_q31, _q30)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q40, _q32, _p0 };
			tree res = generic_simplify_32 (loc, type, _p0, _p1, captures);
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
  return NULL_TREE;
}

tree
generic_simplify_RSHIFT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case TRUNC_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, RSHIFT_EXPR, TRUNC_MOD_EXPR);
		if (res) return res;
	      }
}
	}
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_347 (loc, type, _p0, _p1, captures, RSHIFT_EXPR, FLOOR_MOD_EXPR);
		if (res) return res;
	      }
}
	}
        break;
      }
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_348 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		if (!TYPE_UNSIGNED (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
)
		  {
		    {
 tree stype = TREE_TYPE (captures[2]);
 tree bt = truth_type_for (type);
 tree zeros = build_zero_cst (type);
 tree INTEGER_CST = NULL_TREE;
			if (INTEGRAL_TYPE_P (type)
 && canonicalize_math_after_vectorization_p ()
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1509;
			    {
			      tree res_op0;
			      {
				tree _o1[1], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] =  zeros;
				  _r2 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
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
			      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1509:;
			  }
			else
			  {
			    if (VECTOR_INTEGER_TYPE_P (type)
 && TYPE_MODE (bt) == TYPE_MODE (type)
 && expand_vec_cmp_expr_p (type, bt, GT_EXPR)
 && (INTEGER_CST = uniform_integer_cst_p (captures[2])) != NULL
 && wi::eq_p (wi::to_wide (INTEGER_CST), element_precision (type) - 1)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1510;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] =  zeros;
				    _r1 = fold_build2_loc (loc, GT_EXPR, bt, _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[2]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1510:;
			      }
			  }
		    }
		  }
	      }
	      break;
	    }
	  case VECTOR_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		if (!TYPE_UNSIGNED (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
)
		  {
		    {
 tree stype = TREE_TYPE (captures[2]);
 tree bt = truth_type_for (type);
 tree zeros = build_zero_cst (type);
 tree VECTOR_CST = NULL_TREE;
			if (INTEGRAL_TYPE_P (type)
 && canonicalize_math_after_vectorization_p ()
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1511;
			    {
			      tree res_op0;
			      {
				tree _o1[1], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] =  zeros;
				  _r2 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o2[0], _o2[1]);
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
			      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1511:;
			  }
			else
			  {
			    if (VECTOR_INTEGER_TYPE_P (type)
 && TYPE_MODE (bt) == TYPE_MODE (type)
 && expand_vec_cmp_expr_p (type, bt, GT_EXPR)
 && (VECTOR_CST = uniform_integer_cst_p (captures[2])) != NULL
 && wi::eq_p (wi::to_wide (VECTOR_CST), element_precision (type) - 1)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1512;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] =  zeros;
				    _r1 = fold_build2_loc (loc, GT_EXPR, bt, _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[2]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1512:;
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q21 };
		    tree res = generic_simplify_357 (loc, type, _p0, _p1, captures);
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
	case LSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p1, _q31 };
			tree res = generic_simplify_357 (loc, type, _p0, _p1, captures);
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
}
}
if (integer_all_onesp (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!TYPE_UNSIGNED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1513;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1513:;
	}
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1514;
	{
	  tree _r;
	  _r =  build_zero_cst (type);
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1514:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_350 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_351 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_352 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_353 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case RSHIFT_EXPR:
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
		      tree res = generic_simplify_354 (loc, type, _p0, _p1, captures, RSHIFT_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, RSHIFT_EXPR);
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, RSHIFT_EXPR);
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_355 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, RSHIFT_EXPR);
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP128);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP16);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP32);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP64);
			    if (res) return res;
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
        break;
      }
    case BIT_AND_EXPR:
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_356 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, RSHIFT_EXPR);
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_356 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, RSHIFT_EXPR);
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
    case BIT_IOR_EXPR:
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_356 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, RSHIFT_EXPR);
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
		    if (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1515;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1515;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1515;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1515:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1516;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1516;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1516;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1516;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1516:;
	    }
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_BSWAP128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP128);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP16);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP32);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_358 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_BSWAP64);
		      if (res) return res;
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
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (TREE_CODE_CLASS (RSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1517;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1517;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1517;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1517;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1517:;
	    }
	}
        break;
      }
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1518;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1518:;
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

tree
generic_simplify_UNLT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
		    if (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1565;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1565;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1565;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1565:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1566;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1566;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1566;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1566;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1566:;
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
	  if (TREE_CODE_CLASS (UNLT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1567;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1567;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1567;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNLT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1567;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1567:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_504 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, UNLT_EXPR, LT_EXPR);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, UNLT_EXPR, UNGT_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_503 (loc, type, _p0, _p1, captures, UNLT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_LTGT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
		    if (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1580;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1580;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1580;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1580:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1581;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1581;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1581;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1581;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 794, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1581:;
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
	  if (TREE_CODE_CLASS (LTGT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1582;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1582;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1582;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LTGT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1582;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 795, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1582:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!flag_trapping_math || !tree_expr_maybe_nan_p (captures[0])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1583;
	    {
	      tree _r;
	      _r =  constant_boolean_node (false, type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1583:;
	  }
      }
    }
  switch (TREE_CODE (_p0))
    {
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, LTGT_EXPR, NE_EXPR);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, LTGT_EXPR, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, LTGT_EXPR, LTGT_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_503 (loc, type, _p0, _p1, captures, LTGT_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_VEC_COND_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_all_onesp (captures[0])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1670;
	      {
		tree _r;
		_r = captures[1];
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1670:;
	    }
	  else
	    {
	      if (integer_zerop (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1671;
		  {
		    tree _r;
		    _r = captures[2];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1671:;
		}
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	switch (TREE_CODE (_p2))
	  {
	  case VECTOR_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
		if (VECTOR_BOOLEAN_TYPE_P (type)
 && types_match (type, TREE_TYPE (captures[0]))
)
		  {
		    if (integer_zerop (captures[1]) && integer_all_onesp (captures[2])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1672;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree _r;
			  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1672:;
		      }
		    else
		      {
			if (integer_all_onesp (captures[1]) && integer_zerop (captures[2])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1673;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1673:;
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
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_488 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
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
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_489 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
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
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_490 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1674;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1674;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 933, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1674:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1675;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1675;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 933, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1675:;
					}
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
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1676;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1676;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 933, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1676:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1677;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1677;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1677:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1678;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1678;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1678:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1679;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1679;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 933, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1679:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1680;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1680;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1680:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1681;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1681;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1681:;
					}
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1682;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 942, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1682:;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VEC_COND_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	tree _q41 = TREE_OPERAND (_p2, 1);
	tree _q42 = TREE_OPERAND (_p2, 2);
	if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1683;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 943, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1683:;
	    }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
	  if (inverse_conditions_p (captures[0], captures[2])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1684;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (TREE_SIDE_EFFECTS (captures[4]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1684:;
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
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
	  if (inverse_conditions_p (captures[0], captures[1])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1685;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[4];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 945, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1685:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p2 == _p1 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _p1, 0) && types_match (_p2, _p1)))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1686;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 946, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1686:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1687;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1687;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1687;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1687:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1688;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1688;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1688;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1688;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 948, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1688:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = EQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1689;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1689;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1689;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1689:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
          default:;
          }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1690;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1690;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1690;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1690:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1691;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1691;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1691;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1691;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 948, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1691:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = UNEQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1692;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1692;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1692;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 949, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1692:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_491 (loc, type, _p0, _p1, _p2, captures, UNEQ_EXPR);
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
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = NE_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1693;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1693;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1693:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = NE_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1694;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1694;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1694;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1694:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = NE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1695;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1695;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1695;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 952, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1695:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = LTGT_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1696;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1696;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 950, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1696:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = LTGT_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1697;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1697;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1697;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1697:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LTGT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1698;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1698;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1698;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 952, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1698:;
					}
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_492 (loc, type, _p0, _p1, _p2, captures, LTGT_EXPR);
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = GE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE(captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE(captures[0]))
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TYPE_UNSIGNED (type)
)
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1699;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1699;
				{
				  tree res_op0;
				  res_op0 = captures[0];
				  tree _r;
				  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1699:;
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1700;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1700;
				{
				  tree res_op0;
				  res_op0 = captures[0];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1700:;
			      }
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1701;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1701;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1701;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 957, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1701:;
					}
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
          default:;
          }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = GT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE(captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE(captures[0]))
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TYPE_UNSIGNED (type)
)
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1702;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1702;
				{
				  tree res_op0;
				  res_op0 = captures[0];
				  tree _r;
				  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1702:;
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1703;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1703;
				{
				  tree res_op0;
				  res_op0 = captures[0];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1703:;
			      }
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1704;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1704;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1704;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 957, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1704:;
					}
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
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = LE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE(captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE(captures[0]))
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
 || TYPE_UNSIGNED (type)
)
			      {
				{
 tree utype = unsigned_type_for (TREE_TYPE(captures[0]));
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1705;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1705;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[0];
					  _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					  _o1[0] = _r2;
					}
					_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1705:;
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1706;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1706;
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
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 959, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1706:;
			      }
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1707;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1707;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1707;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 960, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1707:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1708;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1708;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1708;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1708:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = LT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE(captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE(captures[0]))
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
 || TYPE_UNSIGNED (type)
)
			      {
				{
 tree utype = unsigned_type_for (TREE_TYPE(captures[0]));
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1709;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1709;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					{
					  tree _o2[1], _r2;
					  _o2[0] = captures[0];
					  _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					  _o1[0] = _r2;
					}
					_r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1709:;
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1710;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1710;
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
				  if (TREE_SIDE_EFFECTS (captures[1]))
				    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 959, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1710:;
			      }
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1711;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1711;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1711;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 960, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1711:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1712;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1712;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1712;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1712:;
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
      if (tree_truth_valued_p (_q20))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (VEC_COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1713;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[2];
		  tree res_op2;
		  res_op2 = captures[1];
		  tree _r;
		  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1713:;
	      }
	  }
        }
}
}
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_493 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		      if (res) return res;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_494 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
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
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_495 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		      if (res) return res;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_496 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
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
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_497 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		      if (res) return res;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_498 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		if (res) return res;
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
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
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
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_499 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
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
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		      if (res) return res;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_500 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		if (res) return res;
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
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_502 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_502 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_502 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_502 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_501 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
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
  return NULL_TREE;
}
#pragma GCC diagnostic pop

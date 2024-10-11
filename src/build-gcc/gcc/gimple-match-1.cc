/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_with_possible_nonzero_bits2 (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (gimple_with_possible_nonzero_bits (_p0, valueize))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
			  return true;
			}
		      }
		    }
		  if (gimple_with_possible_nonzero_bits (_p1, valueize))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
			  return true;
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
if (gimple_with_possible_nonzero_bits (t, valueize))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      {
	res_ops[0] = captures[0];
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
	return true;
      }
    }
  }
  return false;
}

bool
gimple_max_value (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (uniform_integer_cst_p (t))
    {
      {
	{
 tree int_cst = uniform_integer_cst_p (t);
 tree itype = TREE_TYPE (int_cst);
	    if ((INTEGRAL_TYPE_P (itype)
 || POINTER_TYPE_P (itype))
 && wi::eq_p (wi::to_wide (int_cst), wi::max_value (itype))
)
	      {
		{
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 34, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	}
      }
    }
  return false;
}

bool
gimple_float16_value_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == float16_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 46, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

bool
gimple_simplify_1 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail160;
  {
    res_op->set_op (ABS_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 54, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail160:;
  return false;
}

bool
gimple_simplify_4 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail163;
      {
	res_op->set_op (RSHIFT_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail163;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 57, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail163:;
    }
  return false;
}

bool
gimple_simplify_10 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail169;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->ops[0] =  wascmp
 ? constant_boolean_node (true, type)
 : build_all_ones_cst (TREE_TYPE (captures[0]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 63, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail169:;
	}
  }
  return false;
}

bool
gimple_simplify_13 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail172;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 66, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail172:;
  return false;
}

bool
gimple_simplify_16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail175;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[0];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[1];
	      if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0])
	          && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail175;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail175;
	    _o1[0] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail175;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 69, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail175:;
    }
  return false;
}

bool
gimple_simplify_26 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail185;
      {
	res_op->set_op (BIT_XOR_EXPR, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail185;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (type != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail185;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 79, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail185:;
    }
  return false;
}

bool
gimple_simplify_33 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_WRAPS (type)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[3])) == 0
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail195;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] =  wide_int_to_tree (type, wi::to_wide (captures[2]) + wi::to_wide (captures[4]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 87, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail195:;
    }
  return false;
}

bool
gimple_simplify_37 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail199;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (t != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (t, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail199;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, t, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail199;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail199:;
      }
    }
  return false;
}

bool
gimple_simplify_49 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type)
 && !integer_all_onesp (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail215;
      {
	res_op->set_op (PLUS_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail215;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_minus_one_cst (type);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 107, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail215:;
    }
  else
    {
      if (INTEGRAL_TYPE_P (type)
 && TREE_CODE (captures[1]) == INTEGER_CST
 && wi::to_wide (captures[1]) != wi::min_value (TYPE_PRECISION (type),
 SIGNED)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail216;
	  {
	    res_op->set_op (MINUS_EXPR, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] =  build_minus_one_cst (type);
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail216;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 108, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail216:;
	}
    }
  return false;
}

bool
gimple_simplify_60 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (TREE_CODE (TREE_TYPE (captures[2])) == INTEGER_TYPE
 && TREE_CODE (type) == INTEGER_TYPE
 && TYPE_PRECISION (type) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail235;
	      {
		res_op->set_op (PLUS_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail235;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[4];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail235;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail235;
		  res_op->ops[1] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 127, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail235:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_69 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail245;
      {
	res_op->set_op (MINUS_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r3) goto next_after_fail245;
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    gimple_match_op tem_op (res_op->cond.any_else (), VEC_COND_EXPR, TREE_TYPE (_o2[1]), _o2[0], _o2[1], _o2[2]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail245;
	    _o1[0] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail245;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 137, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail245:;
    }
  return false;
}

bool
gimple_simplify_77 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail253;
      {
	res_op->set_op (MINUS_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[4];
	  _o1[1] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail253;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 145, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail253:;
    }
  return false;
}

bool
gimple_simplify_85 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  {
 tree t1 = type;
 if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type) != TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
 t1 = TYPE_OVERFLOW_WRAPS (type) ? type : TREE_TYPE (captures[1]);
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail261;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail261;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (t1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (t1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, t1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail261;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail261;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 152, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail261:;
	  }
	}
    }
  return false;
}

bool
gimple_simplify_95 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail276;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (utype != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail276;
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (utype != TREE_TYPE (_o2[0])
			    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
			  {
			    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			    tem_op.resimplify (lseq, valueize);
			    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
			    if (!_r2) goto next_after_fail276;
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail276;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 167, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail276:;
	      }
	    }
	  else
	    {
	      if (((element_precision (type) <= element_precision (TREE_TYPE (captures[1])))
 == (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail277;
		  {
		    res_op->set_op (MINUS_EXPR, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail277;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail277;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[1] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 168, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail277:;
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_119 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail301;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 187, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail301:;
  return false;
}

bool
gimple_simplify_126 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail308;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (type != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail308;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 192, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail308:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail309;
	      {
		res_op->set_op (op, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail309;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[4];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 193, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail309:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_138 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitop == BIT_AND_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail324;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 199, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail324:;
    }
  else
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail325;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 200, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail325:;
    }
  return false;
}

bool
gimple_simplify_145 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[5])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail335;
      {
	res_op->set_op (VEC_COND_EXPR, type, 3);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[4];
	res_op->ops[2] = captures[7];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 208, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail335:;
    }
  return false;
}

bool
gimple_simplify_152 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail360;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 209, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail360:;
  return false;
}

bool
gimple_simplify_156 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail365;
	      {
		tree tem;
		tem = captures[3];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail365:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail366;
		  {
		    tree tem;
		    tem =  constant_boolean_node (true, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 213, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail366:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail367;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail367:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail368;
			  {
			    res_op->set_op (GE_EXPR, type, 2);
			    res_op->ops[0] = captures[4];
			    res_op->ops[1] = captures[5];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 215, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail368:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail369;
			      {
				res_op->set_op (LE_EXPR, type, 2);
				res_op->ops[0] = captures[4];
				res_op->ops[1] = captures[5];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail369:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail370;
				  {
				    res_op->set_op (GE_EXPR, type, 2);
				    res_op->ops[0] = captures[4];
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
				          && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					{
					  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					  tem_op.resimplify (lseq, valueize);
					  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					  if (!_r1) goto next_after_fail370;
				        }
				      else
				        _r1 = _o1[0];
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 217, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail370:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail371;
				      {
					res_op->set_op (LE_EXPR, type, 2);
					res_op->ops[0] = captures[4];
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (res_op->ops[0]) != TREE_TYPE (_o1[0])
					      && !useless_type_conversion_p (TREE_TYPE (res_op->ops[0]), TREE_TYPE (_o1[0])))
					    {
					      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (res_op->ops[0]), _o1[0]);
					      tem_op.resimplify (lseq, valueize);
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail371;
					    }
					  else
					    _r1 = _o1[0];
					  res_op->ops[1] = _r1;
					}
					res_op->resimplify (lseq, valueize);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 218, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail371:;
				    }
				}
			    }
			}
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_187 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! FLOAT_TYPE_P (type)
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail409;
      {
	res_op->set_op (LSHIFT_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 238, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail409:;
    }
  return false;
}

bool
gimple_simplify_198 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!tree_expr_maybe_signaling_nan_p (captures[1])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail423;
	  {
	    tree tem;
	    tem = captures[1];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail423:;
	}
    }
  return false;
}

bool
gimple_simplify_204 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail429;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail429;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail429;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), mod, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail429;
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (utype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail429;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail429:;
      }
    }
  return false;
}

bool
gimple_simplify_219 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[2]);
      if (ptr_difference_const (captures[0], captures[1], &diff)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail460;
	  {
	    res_op->set_op (neeq, type, 2);
	    res_op->ops[0] =  build_int_cst_type (inner_type, diff);
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 283, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail460:;
	}
  }
  return false;
}

bool
gimple_simplify_226 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::lt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail467;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 290, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail467:;
    }
  else
    {
      if (wi::gt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail468;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 291, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail468:;
	}
    }
  return false;
}

bool
gimple_simplify_233 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail485;
      {
	res_op->set_op (icmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 308, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail485:;
    }
  return false;
}

bool
gimple_simplify_239 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[0]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail492;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail492;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (ctype != TREE_TYPE (_o1[0])
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail492;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 315, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail492:;
  }
  return false;
}

bool
gimple_simplify_249 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[1]) && single_use (captures[3])
)
    {
      {
 tree otype = TREE_TYPE (captures[0]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail508;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail508;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (otype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (otype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, otype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail508;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 330, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail508:;
      }
    }
  return false;
}

bool
gimple_simplify_256 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (sq),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && ! flag_errno_math
)
    {
      if (! HONOR_NANS (captures[0])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail547;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 368, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail547:;
	}
    }
  return false;
}

bool
gimple_simplify_261 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (cmp == EQ_EXPR
 || cmp == NE_EXPR
 || TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))))
)
    {
      {
 tree tem = const_unop (NEGATE_EXPR, TREE_TYPE (captures[0]), captures[1]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail561;
	      {
		res_op->set_op (scmp, type, 2);
		res_op->ops[0] = captures[0];
		res_op->ops[1] =  tem;
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 382, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail561:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_264 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3])) != 0
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail576;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 390, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail576:;
    }
  return false;
}

bool
gimple_simplify_267 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail582;
  {
    res_op->set_op (cmp, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 396, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail582:;
  return false;
}

bool
gimple_simplify_269 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail584;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r3) goto next_after_fail584;
	      _o2[0] = _r3;
	    }
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail584;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail584;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[2]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 398, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail584:;
    }
  return false;
}

bool
gimple_simplify_277 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && types_match (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail592;
      {
	res_op->set_op (ncmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail592;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail592:;
    }
  return false;
}

bool
gimple_simplify_282 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[2], base0, base1,
 off0, off1,
0
);
      if (equal == 1
)
	{
	  if (cmp == EQ_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
	      {
		tree tem;
		tem =  constant_boolean_node (known_eq (off0, off1), type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 408, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail604:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail605;
		  {
		    tree tem;
		    tem =  constant_boolean_node (known_ne (off0, off1), type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 409, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail605:;
		}
	      else
		{
		  if (cmp == LT_EXPR && (known_lt (off0, off1) || known_ge (off0, off1))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail606;
		      {
			tree tem;
			tem =  constant_boolean_node (known_lt (off0, off1), type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 410, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail606:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR && (known_le (off0, off1) || known_gt (off0, off1))
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
			  {
			    tree tem;
			    tem =  constant_boolean_node (known_le (off0, off1), type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 411, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail607:;
			}
		      else
			{
			  if (cmp == GE_EXPR && (known_ge (off0, off1) || known_lt (off0, off1))
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail608;
			      {
				tree tem;
				tem =  constant_boolean_node (known_ge (off0, off1), type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 412, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail608:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR && (known_gt (off0, off1) || known_le (off0, off1))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail609;
				  {
				    tree tem;
				    tem =  constant_boolean_node (known_gt (off0, off1), type);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 413, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail609:;
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail610;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 414, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail610:;
		}
	      else
		{
		  if (cmp == NE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail611;
		      {
			tree tem;
			tem =  constant_boolean_node (true, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 415, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail611:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_294 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail634;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 438, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail634:;
    }
  return false;
}

bool
gimple_simplify_298 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail639;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 443, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail639:;
    }
  else
    {
      if (!direct_internal_fn_supported_p (IFN_COPYSIGN, type,
 OPTIMIZE_FOR_BOTH)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail640;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail640;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 444, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail640:;
	}
    }
  return false;
}

bool
gimple_simplify_310 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail654;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 456, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail654:;
    }
  return false;
}

bool
gimple_simplify_316 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
value_range vr0, vr1, vr2, vr3, vr4;
      if (INTEGRAL_TYPE_P (type)
 && get_range_query (cfun)->range_of_expr (vr1, captures[3])
 && get_range_query (cfun)->range_of_expr (vr2, captures[4])
 && range_op_handler (MULT_EXPR).overflow_free_p (vr1, vr2)
 && get_range_query (cfun)->range_of_expr (vr0, captures[1])
 && get_range_query (cfun)->range_of_expr (vr3, captures[2])
 && range_op_handler (PLUS_EXPR).overflow_free_p (vr0, vr3)
 && get_range_query (cfun)->range_of_expr (vr4, captures[0])
 && !vr4.undefined_p ()
 && (TYPE_UNSIGNED (type)
 || (vr0.nonnegative_p () && vr4.nonnegative_p ())
 || (vr0.nonpositive_p () && vr4.nonpositive_p ()))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail664;
	  {
	    res_op->set_op (PLUS_EXPR, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[4];
	      gimple_match_op tem_op (res_op->cond.any_else (), div, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail664;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 466, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail664:;
	}
  }
  return false;
}

bool
gimple_simplify_330 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail680;
      {
	res_op->set_op (TANH, type, 1);
	res_op->ops[0] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 482, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail680:;
    }
  return false;
}

bool
gimple_simplify_337 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail688;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == LT_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail688:;
    }
  return false;
}

bool
gimple_simplify_341 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && (CONSTANT_CLASS_P (captures[1]) || single_use (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail693;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 495, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail693:;
    }
  return false;
}

bool
gimple_simplify_348 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
	  {
	    res_op->set_op (out, type, 2);
	    res_op->ops[0] = captures[3];
	    res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[3]),
 wi::max_value (prec, sign)
 - wi::to_wide (captures[4]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail701:;
      }
    }
  return false;
}

bool
gimple_simplify_357 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail742;
      {
	res_op->set_op (out, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail742;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 527, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail742:;
    }
  return false;
}

bool
gimple_simplify_363 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > 1
 && (wi::to_wide (captures[2])
 == wi::max_value (TYPE_PRECISION (TREE_TYPE (captures[0])), SIGNED) - 1)
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail754;
	  {
	    res_op->set_op (icmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (stype != TREE_TYPE (_o1[0])
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail754;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_int_cst (stype, 0);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 539, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail754:;
      }
    }
  return false;
}

bool
gimple_simplify_368 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail759;
      {
	res_op->set_op (out, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail759;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 527, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail759:;
    }
  return false;
}

bool
gimple_simplify_375 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail770;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 551, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail770:;
  return false;
}

bool
gimple_simplify_378 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail773;
	  {
	    res_op->set_op (shiftrotate, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  tem;
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 553, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail773:;
	}
  }
  return false;
}

bool
gimple_simplify_384 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail783;
		  {
		    res_op->set_op (RSHIFT_EXPR, type, 2);
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[2], _r2;
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[1];
			  if (st != TREE_TYPE (_o3[0])
			      && !useless_type_conversion_p (st, TREE_TYPE (_o3[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o3[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r3) goto next_after_fail783;
			    }
			  else
			    _r3 = _o3[0];
			  _o2[0] = _r3;
			}
			_o2[1] = nst;
			gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, st, _o2[0], _o2[1]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail783;
			_o1[0] = _r2;
		      }
		      if (type != TREE_TYPE (_o1[0])
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail783;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] = captures[2];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 562, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail783:;
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
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail784;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (unsigned_char_type_node != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (unsigned_char_type_node, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, unsigned_char_type_node, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail784;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 563, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail784:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (signed_char_type_node != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (signed_char_type_node, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, signed_char_type_node, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail785;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 564, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail785:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail786;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[1], _r2;
				_o2[0] = captures[1];
				if (bt != TREE_TYPE (_o2[0])
				    && !useless_type_conversion_p (bt, TREE_TYPE (_o2[0])))
				  {
				    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, bt, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail786;
				  }
				else
				  _r2 = _o2[0];
				_o1[0] = _r2;
			      }
			      _o1[1] = nst;
			      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, bt, _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail786;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 565, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail786:;
		      }
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_403 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail820;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail820:;
  return false;
}

bool
gimple_simplify_405 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail822;
  {
    res_op->set_op (hypots, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 589, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail822:;
  return false;
}

bool
gimple_simplify_407 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (HYPOT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail824;
  {
    res_op->set_op (ABS_EXPR, type, 1);
    res_op->ops[0] = captures[0];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 591, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail824:;
  return false;
}

bool
gimple_simplify_410 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! TYPE_UNSIGNED (type)
 && ! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && single_use (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail827;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail827;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 594, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail827:;
    }
  return false;
}

bool
gimple_simplify_415 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && bitwise_inverted_equal_p (captures[0], captures[1], wascmp)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail833;
	  {
	    tree tem;
	    tem =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail833:;
	}
  }
  return false;
}

bool
gimple_simplify_419 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail837;
  {
    res_op->set_op (BIT_AND_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 604, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail837:;
  return false;
}

bool
gimple_simplify_423 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[5], op, captures[1], bitop,
 captures[2], captures[3], captures[4], ERROR_MARK, NULL_TREE,
 NULL_TREE, pmop);
      if (utype
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail841;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail841;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (utype != TREE_TYPE (_o3[0])
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail841;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail841;
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail841;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail841;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 607, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail841:;
	}
  }
  return false;
}

bool
gimple_simplify_439 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[3])
 && tree_fits_uhwi_p (captures[4])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[3]);
 unsigned HOST_WIDE_INT mask = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT lo = bits & 7;
 unsigned HOST_WIDE_INT hi = bits - lo;
	  if (bits < prec
 && mask < (256u>>lo)
 && bits < TYPE_PRECISION (TREE_TYPE(captures[0]))
)
	    {
	      {
 unsigned HOST_WIDE_INT ns = (prec - (hi + 8)) + lo;
		  if (ns == 0
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail861;
		      {
			res_op->set_op (BIT_AND_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[2];
			  if (type != TREE_TYPE (_o1[0])
			      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail861;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] = captures[4];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 623, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail861:;
		    }
		  else
		    {
		      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
 tree nst = build_int_cst (integer_type_node, ns);
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail862;
			  {
			    res_op->set_op (BIT_AND_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[2];
				  if (utype != TREE_TYPE (_o3[0])
				      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r3) goto next_after_fail862;
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] = nst;
				gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, utype, _o2[0], _o2[1]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail862;
				_o1[0] = _r2;
			      }
			      if (type != TREE_TYPE (_o1[0])
			          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail862;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    res_op->ops[1] = captures[4];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 624, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail862:;
		      }
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_453 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail910;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 644, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail910:;
  return false;
}

bool
gimple_simplify_454 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 645, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail911:;
  return false;
}

bool
gimple_simplify_457 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail914;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 620, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail914:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail915;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0])
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail915;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						gimple_match_op tem_op (res_op->cond.any_else (), shift, shift_type, _o2[0], _o2[1]);
						tem_op.resimplify (lseq, valueize);
						_r2 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r2) goto next_after_fail915;
						_o1[0] = _r2;
					      }
					      if (type != TREE_TYPE (_o1[0])
					          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail915;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 621, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail915:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail916;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 622, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail916:;
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
  return false;
}

bool
gimple_simplify_480 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail945;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 668, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail945:;
  return false;
}

bool
gimple_simplify_483 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail948;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail948;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail948:;
    }
  return false;
}

bool
gimple_simplify_491 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail968;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 678, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail968:;
    }
  return false;
}

bool
gimple_simplify_496 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail973;
      {
	res_op->set_op (MAX_EXPR, type, 2);
	res_op->ops[0] = captures[2];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 683, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail973:;
    }
  return false;
}

bool
gimple_simplify_503 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) > 1
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail980;
      {
	res_op->set_op (op, type, 2);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    if (type != TREE_TYPE (_o2[0])
	        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail980;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[1];
	  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail980;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 690, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail980:;
    }
  return false;
}

bool
gimple_simplify_513 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && (wi::to_widest (captures[2]) + 1 == wi::to_widest (captures[3])
 || wi::to_widest (captures[2]) == wi::to_widest (captures[3]) + 1)
)
    {
      {
 value_range r;
 get_range_query (cfun)->range_of_expr (r, captures[0]);
 if (r.undefined_p ())
 r.set_varying (TREE_TYPE (captures[0]));
 wide_int min = r.lower_bound ();
 wide_int max = r.upper_bound ();
	  if (min + 1 == max
 && (wi::to_wide (captures[1]) == min
 || wi::to_wide (captures[1]) == max)
)
	    {
	      {
 tree arg0 = captures[2], arg1 = captures[3];
 tree type1;
 if ((eqne == EQ_EXPR) ^ (wi::to_wide (captures[1]) == min))
 std::swap (arg0, arg1);
 if (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type))
 type1 = TREE_TYPE (captures[0]);
 else
 type1 = type;
 auto prec = TYPE_PRECISION (type1);
 auto unsign = TYPE_UNSIGNED (type1);
 if (TREE_CODE (type1) == BOOLEAN_TYPE)
 type1 = build_nonstandard_integer_type (prec, unsign);
 min = wide_int::from (min, prec,
 TYPE_SIGN (TREE_TYPE (captures[0])));
 wide_int a = wide_int::from (wi::to_wide (arg0), prec,
 TYPE_SIGN (type));
 enum tree_code code;
 wi::overflow_type ovf;
 if (tree_int_cst_lt (arg0, arg1))
 {
 code = PLUS_EXPR;
 a -= min;
 if (!unsign)
 {
 wi::add (min + (wi::neg_p (a) ? 0 : 1), a, SIGNED, &ovf);
 if (ovf)
 type1 = unsigned_type_for (type1);
 }
 }
 else
 {
 code = MINUS_EXPR;
 a += min;
 if (!unsign)
 {
 wi::sub (a, min + (wi::neg_p (min) ? 0 : 1), SIGNED, &ovf);
 if (ovf)
 type1 = unsigned_type_for (type1);
 }
 }
 tree arg = wide_int_to_tree (type1, a);
		  if (code == PLUS_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1039;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (type1 != TREE_TYPE (_o2[0])
			        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1039;
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  arg;
			  gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1039;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1039:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1040;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  _o1[0] =  arg;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (type1 != TREE_TYPE (_o2[0])
			        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1040;
			      }
			    else
			      _r2 = _o2[0];
			    _o1[1] = _r2;
			  }
			  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1040;
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1040:;
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_528 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
    {
      if (ABSU_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1056;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1056;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1056:;
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1057;
	  {
	    tree tem;
	    tem = captures[2];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 723, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1057:;
	}
    }
  return false;
}

bool
gimple_simplify_536 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1065;
      {
	tree tem;
	tem = captures[3];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 727, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1065:;
    }
  return false;
}

bool
gimple_simplify_541 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!POINTER_TYPE_P (type) && integer_pow2p (captures[2])
)
    {
      {
 int shift = (wi::exact_log2 (wi::to_wide (captures[2]))
 - wi::exact_log2 (wi::to_wide (captures[1])));
	  if (shift > 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1070;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (type != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1070;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] =  build_int_cst (integer_type_node, shift);
		  gimple_match_op tem_op (res_op->cond.any_else (), LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1070;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 733, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1070:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1071;
	      {
		res_op->set_op (BIT_AND_EXPR, type, 2);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] =  build_int_cst (integer_type_node, -shift);
		    gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1071;
		    _o1[0] = _r2;
		  }
		  if (type != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1071;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[2];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1071:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_557 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1097;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 750, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1097:;
  return false;
}

bool
gimple_simplify_562 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 ifn = IFN_CLZ;
 else if (direct_internal_fn_supported_p (IFN_CLZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH))
 ifn = IFN_CLZ;
      if (ifn == IFN_CLZ
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1102;
	  {
	    res_op->set_op (CFN_CLZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 753, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1102:;
	}
  }
  return false;
}

bool
gimple_simplify_569 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_MAX_VALUE (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (TREE_TYPE (captures[0])))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1109;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      {
		tree _o2[2], _r2;
		_o2[0] =  TYPE_MAX_VALUE (TREE_TYPE (captures[1]));
		_o2[1] = captures[2];
		gimple_match_op tem_op (res_op->cond.any_else (), TRUNC_DIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		tem_op.resimplify (NULL, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, NULL);
		if (!_r2) goto next_after_fail1109;
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1109;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 757, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1109:;
	}
      else
	{
	  if (TYPE_MIN_VALUE (TREE_TYPE (captures[1]))
)
	    {
	      if (integer_minus_onep (captures[2])
)
		{
		  gimple_seq *lseq = seq;
		  if (lseq
		      && (!single_use (captures[0])))
		    lseq = NULL;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
		  {
		    res_op->set_op (NOP_EXPR, type, 1);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  TYPE_MIN_VALUE (TREE_TYPE (captures[1]));
		      gimple_match_op tem_op (res_op->cond.any_else (), EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1110;
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 758, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1110:;
		}
	      else
		{
		  {
 tree div = fold_convert (TREE_TYPE (captures[1]), captures[2]);
 tree lo = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MIN_VALUE (TREE_TYPE (captures[1])), div);
 tree hi = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MAX_VALUE (TREE_TYPE (captures[1])), div);
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 if (wi::neg_p (wi::to_wide (div)))
 std::swap (lo, hi);
 lo = fold_convert (etype, lo);
 hi = fold_convert (etype, hi);
 hi = int_const_binop (MINUS_EXPR, hi, lo);
 }
		      if (etype
)
			{
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1111;
			  {
			    res_op->set_op (NOP_EXPR, type, 1);
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[1];
				  if (etype != TREE_TYPE (_o3[0])
				      && !useless_type_conversion_p (etype, TREE_TYPE (_o3[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, etype, _o3[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r3) goto next_after_fail1111;
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] =  lo;
				gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1111;
				_o1[0] = _r2;
			      }
			      _o1[1] =  hi;
			      gimple_match_op tem_op (res_op->cond.any_else (), GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1111;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 759, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1111:;
			}
		  }
		}
	    }
	}
    }
  return false;
}

bool
gimple_simplify_605 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
 && targetm.libc_has_function (function_c99_misc, NULL_TREE)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1147;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), tos, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1147;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1147:;
    }
  return false;
}

bool
gimple_simplify_616 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (rints))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (!flag_errno_math
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1158;
	  {
	    res_op->set_op (FIX_TRUNC_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 801, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1158:;
	}
    }
  return false;
}

bool
gimple_simplify_624 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1166;
      {
	res_op->set_op (CFN_FMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 809, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1166:;
    }
  return false;
}

bool
gimple_simplify_632 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
 unsigned int prec0 = TYPE_PRECISION (type0);
 unsigned int prec1 = TYPE_PRECISION (type1);
	  if (prec0 == prec1 || (prec0 > prec1 && TYPE_UNSIGNED (type1))
)
	    {
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1178;
	      {
		res_op->set_op (popcount, type, 1);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (type1 != TREE_TYPE (_o2[0])
		        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1178;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  if (type0 != TREE_TYPE (_o1[0])
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1178;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1178:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_641 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (FFS),
 const combined_fn ARG_UNUSED (CTZ))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_CTZ, TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_SPEED)
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1190;
	  {
	    res_op->set_op (PLUS_EXPR, type, 2);
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (utype != TREE_TYPE (_o2[0])
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1190;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), CTZ, type, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1190;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_one_cst (type);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 829, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1190:;
      }
    }
  return false;
}

bool
gimple_simplify_ABS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && element_precision (type) > element_precision (TREE_TYPE (captures[0]))
)
		      {
			{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1200;
			    {
			      res_op->set_op (NOP_EXPR, type, 1);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail1200;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 839, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1200:;
			}
		      }
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1201;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 840, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1201:;
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1202;
		    {
		      res_op->set_op (ABS_EXPR, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 841, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1202:;
		  }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1203;
		    {
		      res_op->set_op (VEC_COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1203;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1203;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 842, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1203:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_1 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1204;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 843, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1204:;
    }
  }
  return false;
}

bool
gimple_simplify_FLOAT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
0
 && type == TREE_TYPE (captures[0]))
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 849, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1297:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
			    {
			      res_op->set_op (FLOAT_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 850, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1298:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
				{
				  res_op->set_op (FLOAT_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 851, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1299:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
				    {
				      res_op->set_op (FLOAT_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 852, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1300:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
					{
					  res_op->set_op (FLOAT_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 853, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1301:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1302:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec == inside_prec
 && final_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1303;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1303:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1304;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 856, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1304:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1305;
			    {
			      res_op->set_op (FLOAT_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 850, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1305:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
				{
				  res_op->set_op (FLOAT_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 851, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1306:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
				    {
				      res_op->set_op (FLOAT_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 852, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1307:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1308;
					{
					  res_op->set_op (FLOAT_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 853, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1308:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1309;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1309:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec == inside_prec
 && final_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail1310;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 855, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1310:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1311;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 856, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1311:;
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
	      case FIX_TRUNC_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (!flag_trapping_math
 && !HONOR_SIGNED_ZEROS (type)
 && types_match (type, TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_TRUNC, type,
 OPTIMIZE_FOR_BOTH)
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
			{
			  res_op->set_op (CFN_TRUNC, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1312:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_BSWAP128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				      if (gimple_simplify_572 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_573 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP128))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_571 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LOG2L (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_SQRTL)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1392;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1392;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1392:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP10L)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1393;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1393;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1393:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXPL)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1394;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1394;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1394:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_599 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_POWL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_POW10L)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1395;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1395;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1395:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_CBRTL)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1396;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2L, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1396;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1396:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1397;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1397:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_EXP2L (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1430;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1430:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POW10L (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1438;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1438:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TANF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_ATANF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TAN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_ATAN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TANL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_ATANL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_TAN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_600 (res_op, seq, valueize, type, captures, CFN_TAN, CFN_ATAN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINF, CFN_BUILT_IN_ATANF, CFN_BUILT_IN_SQRTF, CFN_BUILT_IN_COPYSIGNF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATAN:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_601 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SIN, CFN_BUILT_IN_ATAN, CFN_BUILT_IN_SQRT, CFN_BUILT_IN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SINHF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ATANHF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_602 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SINHF, CFN_BUILT_IN_ATANHF, CFN_BUILT_IN_SQRTF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_TRUNCF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_TRUNCF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_607 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF32X, CFN_BUILT_IN_TRUNCF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEILF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ROUNDF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ROUNDF128X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF128X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_NEARBYINTF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTF16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF16))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_RINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_603 (res_op, seq, valueize, type, captures, CFN_RINT))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_604 (res_op, seq, valueize, type, captures, CFN_RINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLCEILL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_610 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEILL, CFN_BUILT_IN_LLCEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_611 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEILL, CFN_BUILT_IN_LLCEILF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_613 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEILL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_615 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_LCEILL, CFN_BUILT_IN_LLCEILL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLRINTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_610 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL, CFN_BUILT_IN_LLRINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_611 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL, CFN_BUILT_IN_LLRINTF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_616 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_615 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_LRINTL, CFN_BUILT_IN_LLRINTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_611 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUND, CFN_BUILT_IN_LLROUNDF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_613 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUND))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_615 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUND, CFN_BUILT_IN_LROUND, CFN_BUILT_IN_LLROUND))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_LLFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_612 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_613 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_615 (res_op, seq, valueize, type, captures, CFN_IFLOOR, CFN_LFLOOR, CFN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLROUNDF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_613 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLROUNDF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_615 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDF, CFN_BUILT_IN_LROUNDF, CFN_BUILT_IN_LLROUNDF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CPROJ (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (!HONOR_INFINITIES (type)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1492;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1492:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (tree_expr_nonnegative_p (_q21))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (real_isinf (TREE_REAL_CST_PTR (captures[0]))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1493;
				  {
				    tree tem;
				    tem =  build_complex_inf (type, false);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 917, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1493:;
				}
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (real_isinf (TREE_REAL_CST_PTR (captures[1]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1494;
			      {
				tree tem;
				tem =  build_complex_inf (type, TREE_REAL_CST_PTR (captures[1])->sign);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1494:;
			    }
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
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_PARITYLL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_635 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_637 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
				      return true;
				  }
			          break;
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_637 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_636 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_638 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_640 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_640 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_PARITYLL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_639 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_PARITYLL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_634 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_MIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1502;
			  {
			    res_op->set_op (MIN_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_MIN, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1502;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_MIN, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1502;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 919, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1502:;
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
    default:;
    }
  return false;
}

bool
gimple_simplify_BIT_XOR_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case INTEGER_CST:
					  {
					    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q41 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
						    return true;
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
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
					  {
					    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
						    return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q31))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case RSHIFT_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
					{
					  switch (TREE_CODE (_q61))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q61 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
						    return true;
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
			    }
			  break;
		        default:;
		        }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      switch (TREE_CODE (_q51))
				        {
					case INTEGER_CST:
					  {
					    if ((_q31 == _q50 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q50, 0) && types_match (_q31, _q50)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _p0, _q51 };
						  if (gimple_simplify_2 (res_op, seq, valueize, type, captures))
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
if (integer_zerop (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1506;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 920, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1506:;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_3 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					  return true;
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
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case RSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_4 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					  return true;
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
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
				    if (gimple_simplify_5 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q30 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
							  return true;
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
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
					  return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      switch (TREE_CODE (_q41))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q41))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q60 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				    }
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
							if (gimple_simplify_6 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      default:;
			      }
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
					  return true;
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
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
					if (gimple_simplify_7 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _p1 };
				    if (gimple_simplify_8 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20, _p1 };
				    if (gimple_simplify_8 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q31, _p0 };
				    if (gimple_simplify_8 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q31, _q50, _q30, _p0 };
				    if (gimple_simplify_8 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _p1 };
				    if (gimple_simplify_9 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q20, _p1 };
				    if (gimple_simplify_9 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q31, _p0 };
				    if (gimple_simplify_9 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q31, _q50, _q30, _p0 };
				    if (gimple_simplify_9 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_10 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case BIT_AND_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if (tree_swap_operands_p (_q70, _q71))
									  std::swap (_q70, _q71);
									switch (TREE_CODE (_q71))
									  {
									  case INTEGER_CST:
									    {
									      {
										tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q60, _q70, _q71 };
										if (gimple_simplify_11 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
										  return true;
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
						          default:;
						          }
						        break;
						      }
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1, _q60, _q61 };
								if (gimple_simplify_11 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
								  return true;
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
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
							if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
							if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
							  return true;
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
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
							if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
							if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_10 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
      return true;
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1507;
	{
	  tree tem;
	  tem =  build_zero_cst (type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 921, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1507:;
      }
    }
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1508;
	{
	  res_op->set_op (BIT_NOT_EXPR, type, 1);
	  res_op->ops[0] = captures[0];
	  res_op->resimplify (lseq, valueize);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1508:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
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
				    }
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
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
				    }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q30 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q30 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						      switch (TREE_CODE (_q61))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q61))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_NOT_EXPR:
								    {
								      tree _q80 = gimple_assign_rhs1 (_a4);
								      _q80 = do_valueize (valueize, _q80);
								      if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
									    if (gimple_simplify_14 (res_op, seq, valueize, type, captures))
									      return true;
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
						    }
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
								    {
								      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
									    if (gimple_simplify_14 (res_op, seq, valueize, type, captures))
									      return true;
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
					        }
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q21, _p1 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
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
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p1 };
				    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
							{
							  {
							    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
							    if (gimple_simplify_13 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q40, _q20, _p1 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
					      return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      switch (TREE_CODE (_q61))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q61))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case BIT_NOT_EXPR:
								    {
								      tree _q80 = gimple_assign_rhs1 (_a4);
								      _q80 = do_valueize (valueize, _q80);
								      if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
									    if (gimple_simplify_14 (res_op, seq, valueize, type, captures))
									      return true;
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
						    }
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
								    {
								      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
									{
									  {
									    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
									    if (gimple_simplify_14 (res_op, seq, valueize, type, captures))
									      return true;
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
					        }
					      default:;
					      }
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q20 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q21 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q20 };
			if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q21 };
			if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q21, _p1 };
					  if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
}
		  }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q20, _p1 };
				    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		{
		  tree _q21_pops[1];
		  if (gimple_nop_convert (_q21, _q21_pops, valueize))
		    {
		      tree _q40 = _q21_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q20, _p1 };
					if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
}
		}
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q21, _p0 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q21, _p0 };
							    if (gimple_simplify_15 (res_op, seq, valueize, type, captures))
							      return true;
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
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_18 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_19 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q20 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
			if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q20 };
			if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_17 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_19 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
					      return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					switch (TREE_CODE (_q50))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q50))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case BIT_AND_EXPR:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							tree _q61 = gimple_assign_rhs2 (_a3);
							_q61 = do_valueize (valueize, _q61);
							if (tree_swap_operands_p (_q60, _q61))
							  std::swap (_q60, _q61);
							switch (TREE_CODE (_q61))
							  {
							  case INTEGER_CST:
							    {
							      {
								tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q60, _q61 };
								if (gimple_simplify_11 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
								  return true;
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
				          default:;
				          }
				        break;
				      }
				    case BIT_AND_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					switch (TREE_CODE (_q51))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
						if (gimple_simplify_11 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						  return true;
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
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_IOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
					if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
			if (gimple_simplify_12 (res_op, seq, valueize, type, captures))
			  return true;
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
  {
    tree _p0_pops[1];
    if (gimple_nop_convert (_p0, _p0_pops, valueize))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _q20))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			tree _q31 = gimple_assign_rhs2 (_a1);
			_q31 = do_valueize (valueize, _q31);
			if (tree_swap_operands_p (_q30, _q31))
			  std::swap (_q30, _q31);
			{
			  tree _q30_pops[1];
			  if (gimple_nop_convert (_q30, _q30_pops, valueize))
			    {
			      tree _q40 = _q30_pops[0];
			      switch (TREE_CODE (_q40))
			        {
				case SSA_NAME:
				  if (gimple *_d2 = get_def (valueize, _q40))
				    {
				      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				        switch (gimple_assign_rhs_code (_a2))
					  {
					  case BIT_NOT_EXPR:
					    {
					      tree _q50 = gimple_assign_rhs1 (_a2);
					      _q50 = do_valueize (valueize, _q50);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q31, _p1 };
						if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					      break;
					    }
					  default:;
					  }
				    }
				  break;
			        default:;
			        }
}
			}
			{
			  tree _q31_pops[1];
			  if (gimple_nop_convert (_q31, _q31_pops, valueize))
			    {
			      tree _q50 = _q31_pops[0];
			      switch (TREE_CODE (_q50))
			        {
				case SSA_NAME:
				  if (gimple *_d2 = get_def (valueize, _q50))
				    {
				      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				        switch (gimple_assign_rhs_code (_a2))
					  {
					  case BIT_NOT_EXPR:
					    {
					      tree _q60 = gimple_assign_rhs1 (_a2);
					      _q60 = do_valueize (valueize, _q60);
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _p1 };
						if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					      break;
					    }
					  default:;
					  }
				    }
				  break;
			        default:;
			        }
}
			}
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q31, _p1 };
					  if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
			switch (TREE_CODE (_q31))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q31))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q30, _p1 };
					  if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					    return true;
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
		      }
		    default:;
		    }
	      }
	    break;
          default:;
          }
}
  }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree _q30_pops[1];
		    if (gimple_nop_convert (_q30, _q30_pops, valueize))
		      {
			tree _q40 = _q30_pops[0];
			switch (TREE_CODE (_q40))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q40))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q31, _p0 };
					  if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
}
		  }
		  {
		    tree _q31_pops[1];
		    if (gimple_nop_convert (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			switch (TREE_CODE (_q50))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q50))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_NOT_EXPR:
				      {
					tree _q60 = gimple_assign_rhs1 (_a2);
					_q60 = do_valueize (valueize, _q60);
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _p0 };
					  if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
		          default:;
		          }
}
		  }
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q31, _p0 };
				    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q30, _p0 };
				    if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p1_pops[1];
  if (gimple_nop_convert (_p1, _p1_pops, valueize))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q30))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_IOR_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      {
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    switch (TREE_CODE (_q50))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q50))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case BIT_NOT_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q41, _p0 };
					      if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					        return true;
					    }
					    break;
					  }
					default:;
					}
			          }
			        break;
			      default:;
			      }
}
		      }
		      {
			tree _q41_pops[1];
			if (gimple_nop_convert (_q41, _q41_pops, valueize))
			  {
			    tree _q60 = _q41_pops[0];
			    switch (TREE_CODE (_q60))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _q60))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case BIT_NOT_EXPR:
					  {
					    tree _q70 = gimple_assign_rhs1 (_a2);
					    _q70 = do_valueize (valueize, _q70);
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q70, _q40, _p0 };
					      if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					        return true;
					    }
					    break;
					  }
					default:;
					}
			          }
			        break;
			      default:;
			      }
}
		      }
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q41, _p0 };
					if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		      switch (TREE_CODE (_q41))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q41))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q40, _p0 };
					if (gimple_simplify_16 (res_op, seq, valueize, type, captures))
					  return true;
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
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
}
}
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  {
								    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
								    if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
								      return true;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
						    if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case INTEGER_CST:
				      {
					{
					  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
					  if (gimple_simplify_22 (res_op, seq, valueize, type, captures))
					    return true;
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
		    default:;
		    }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
						    if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
						      return true;
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
			        }
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_21 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_22 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1 };
		    if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
					if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
					if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
					if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
					if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_24 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_AND_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
								  if (tree_swap_operands_p (_q70, _q71))
								    std::swap (_q70, _q71);
								  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
									if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
									if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
									if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
								      }
								    }
								  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
									if (gimple_simplify_25 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, BIT_AND_EXPR))
									  return true;
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
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
							if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q30 };
							if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
							  return true;
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
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q30 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
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
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_XOR_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
							if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
							if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
					if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
					  return true;
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
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
			if (gimple_simplify_20 (res_op, seq, valueize, type, captures))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  switch (TREE_CODE (_q60))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q60))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_XOR_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
								  if (tree_swap_operands_p (_q70, _q71))
								    std::swap (_q70, _q71);
								  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q71 };
									if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q70 };
									if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q71 };
									if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q70 };
									if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
									  return true;
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
					        }
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q61 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q61 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q60 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_27 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		    if (gimple_simplify_28 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
		      return true;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q61 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q60 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q61 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q60 };
							if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
							  return true;
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
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_26 (res_op, seq, valueize, type, captures))
					  return true;
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_29 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (gimple_truth_valued_p (_q20, valueize))
		    {
		      if (gimple_truth_valued_p (_q21, valueize))
			{
			  switch (TREE_CODE (_p1))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p1))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case EQ_EXPR:
				        {
					  tree _q50 = gimple_assign_rhs1 (_a2);
					  _q50 = do_valueize (valueize, _q50);
					  tree _q51 = gimple_assign_rhs2 (_a2);
					  _q51 = do_valueize (valueize, _q51);
					  if (tree_swap_operands_p (_q50, _q51))
					    std::swap (_q50, _q51);
					  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					    {
					      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1509;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1509;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1509:;
						  }
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1510;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1510;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1510:;
						  }
					        }
					    }
					  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
					    {
					      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1511;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1511;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1511:;
						  }
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1512;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1512;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1512:;
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
		        }
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if (gimple_truth_valued_p (_q50, valueize))
					{
					  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					    {
					      if (gimple_truth_valued_p (_q51, valueize))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1513;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1513;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1513:;
						  }
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1514;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1514;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1514:;
						  }
					        }
					    }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if (gimple_truth_valued_p (_q50, valueize))
					{
					  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					    {
					      if (gimple_truth_valued_p (_q51, valueize))
						{
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1515;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1515;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1515:;
						  }
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1516;
						    {
						      res_op->set_op (BIT_NOT_EXPR, type, 1);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1516;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1516:;
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
{
  tree _p0_pops[1];
  if (gimple_logical_inverted_value (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (gimple_truth_valued_p (_p1, valueize))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		if (gimple_simplify_30 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
		  return true;
	      }
	    }
        }
}
}
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_NOT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1 };
			if (gimple_simplify_31 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
}
}
if (gimple_truth_valued_p (_p0, valueize))
  {
    {
      tree _p1_pops[1];
      if (gimple_logical_inverted_value (_p1, _p1_pops, valueize))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		if (gimple_simplify_30 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
		  return true;
	      }
	    }
}
    }
  }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
		    if (gimple_simplify_23 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p1_pops[1];
  if (gimple_nop_convert (_p1, _p1_pops, valueize))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q30))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_NOT_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			if (gimple_simplify_31 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		      break;
		    }
		  default:;
		  }
	    }
	  break;
        default:;
        }
}
}
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_32 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_XOR_EXPR))
				  return true;
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
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1517;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1517:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1518;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1518:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1519;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1519:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1520;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1520:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1521;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1521:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1522;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1522:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1523;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1523:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1524;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1524:;
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
		    default:;
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1525;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1525:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1526;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1526:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1527;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1527:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1528;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1528:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1529;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1529:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1530;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1530:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1531;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1531:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1532;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1532:;
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
		    default:;
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1533;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1533:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1534;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1534:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1535;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1535:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1536;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1536:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1537;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1537:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1538;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1538:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1539;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1539:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = GT_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1540;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1540:;
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
		    default:;
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1541;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1541:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1542;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1542:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case EQ_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1543;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1543:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1544;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1544:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case NE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1545;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1545:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1546;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1546:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1547;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1547:;
					      }
					  }
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = GE_EXPR;
					    const enum tree_code rcmp = NE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1548;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1548:;
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
		    default:;
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1549;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1549:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1550;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1550:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1551;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1551:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1552;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1552:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1553;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1553:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1554;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1554:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1555;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1555:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = EQ_EXPR;
					    const enum tree_code rcmp = LT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1556;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1556:;
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
		    default:;
		    }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1557;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1557:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1558;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1558:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case LE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1559;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1559:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1560;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1560:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1561;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1561:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LT_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GT_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1562;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1562:;
					      }
					  }
				        }
				    }
			          break;
			        }
			      case GE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1563;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1563:;
					      }
					  }
				        }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
					    const enum tree_code cmp1 = LE_EXPR;
					    const enum tree_code cmp2 = NE_EXPR;
					    const enum tree_code rcmp = GE_EXPR;
					    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1564;
						{
						  res_op->set_op (rcmp, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1564:;
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
		    default:;
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case MULT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (gimple_simplify_33 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						      return true;
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
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (gimple_simplify_34 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						      return true;
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
			      }
			    break;
		          default:;
		          }
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			      if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case MULT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q21 };
						    if (gimple_simplify_34 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						      return true;
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
			      }
			    break;
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
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			      if (gimple_simplify_35 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			        return true;
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
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case LSHIFT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (gimple_simplify_36 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
						      return true;
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
			      }
			    break;
		          default:;
		          }
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			      if (gimple_simplify_37 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
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
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			      if (gimple_simplify_37 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
					    if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q31 };
					    if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					      return true;
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
		if (gimple_zero_one_valued_p (_q30, valueize))
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q31))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_XOR_EXPR:
				  {
				    tree _q50 = gimple_assign_rhs1 (_a2);
				    _q50 = do_valueize (valueize, _q50);
				    tree _q51 = gimple_assign_rhs2 (_a2);
				    _q51 = do_valueize (valueize, _q51);
				    if (tree_swap_operands_p (_q50, _q51))
				      std::swap (_q50, _q51);
				    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
					  if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					    return true;
					}
				      }
				    if ((_q51 == _p0 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _p0, 0) && types_match (_q51, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q50, _q30 };
					  if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					    return true;
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
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (gimple_zero_one_valued_p (_q21, valueize))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
					    if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q21 };
					    if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					      return true;
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
		if (gimple_zero_one_valued_p (_q20, valueize))
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q21))
		          {
			    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			      switch (gimple_assign_rhs_code (_a2))
				{
				case BIT_XOR_EXPR:
				  {
				    tree _q40 = gimple_assign_rhs1 (_a2);
				    _q40 = do_valueize (valueize, _q40);
				    tree _q41 = gimple_assign_rhs2 (_a2);
				    _q41 = do_valueize (valueize, _q41);
				    if (tree_swap_operands_p (_q40, _q41))
				      std::swap (_q40, _q41);
				    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q20 };
					  if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					    return true;
					}
				      }
				    if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q20 };
					  if (gimple_simplify_38 (res_op, seq, valueize, type, captures))
					    return true;
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
		  }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1565;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1565;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail1565;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1565:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1566;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1566;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1566;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1566:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (TREE_CODE_CLASS (BIT_XOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1567;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1567;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1567;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1567:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
			  return true;
		      }
		    }
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case LT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_40 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
					  }
				        }
				      break;
				    }
				  case GE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_41 (res_op, seq, valueize, type, captures))
					      return true;
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
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
			  return true;
		      }
		    }
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case GE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
					    if (gimple_simplify_40 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
					  }
				        }
				      break;
				    }
				  case LT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (integer_zerop (_q51))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _p0, _q20 };
					    if (gimple_simplify_41 (res_op, seq, valueize, type, captures))
					      return true;
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
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case ORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case UNEQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_truep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_39 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (uniform_integer_cst_p (_q21))
		    {
		      if (uniform_integer_cst_p (_q22))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
			    if (gimple_simplify_43 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_PARITY:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_PARITY:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_42 (res_op, seq, valueize, type, captures, CFN_PARITY))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_PARITYL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_PARITYL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_42 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYL))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_PARITYIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_PARITYIMAX:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_42 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYIMAX))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_PARITY:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_PARITY:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_42 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITY))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_PARITYLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_PARITYLL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_42 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_PARITYLL))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  if (uniform_integer_cst_p (_q31))
		    {
		      if (uniform_integer_cst_p (_q32))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
			    if (gimple_simplify_43 (res_op, seq, valueize, type, captures))
			      return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_PERM_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
					{
					  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
						if (VECTOR_INTEGER_TYPE_P (type)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1568;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail1568;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 928, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1568:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POW (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_BUILT_IN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2001;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1042, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2001:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_BUILT_IN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2002;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1042, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2002:;
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2003;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2003;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2003:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2004;
			      {
				res_op->set_op (CFN_BUILT_IN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2004;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2004:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CBRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2005;
			      {
				res_op->set_op (CFN_BUILT_IN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] =  build_real_truncate (type, dconst_third ());
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2005;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2005:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2006;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2006;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2006:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2007;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2007;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2007:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2008;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2008;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2008:;
			}
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_401 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2009;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2009;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2009:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_402 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW, CFN_BUILT_IN_EXP, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP2, CFN_BUILT_IN_LOG2))
	    return true;
	}
        break;
      }
    default:;
    }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_403 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POW))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
 const REAL_VALUE_TYPE *value = TREE_REAL_CST_PTR (captures[1]);
 REAL_VALUE_TYPE tmp;
	      if (real_equal (value, &dconst0)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2010;
		  {
		    tree tem;
		    tem =  build_real (type, dconst1);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2010:;
		}
	      else
		{
		  if (real_equal (value, &dconst1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2011;
		      {
			tree tem;
			tem = captures[0];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2011:;
		    }
		  else
		    {
		      if (real_equal (value, &dconstm1)
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2012;
			  {
			    res_op->set_op (RDIV_EXPR, type, 2);
			    res_op->ops[0] =  build_real (type, dconst1);
			    res_op->ops[1] = captures[0];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2012:;
			}
		      else
			{
			  if (flag_unsafe_math_optimizations
 && canonicalize_math_p ()
 && real_equal (value, &dconsthalf)
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2013;
			      {
				res_op->set_op (CFN_BUILT_IN_SQRT, type, 1);
				res_op->ops[0] = captures[0];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2013:;
			    }
			  else
			    {
			      if (flag_unsafe_math_optimizations
 && canonicalize_math_p ()
 && (tmp = real_value_truncate (TYPE_MODE (type), dconst_third ()),
 real_equal (value, &tmp))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2014;
				  {
				    res_op->set_op (CFN_BUILT_IN_CBRT, type, 1);
				    res_op->ops[0] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1051, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2014:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWIF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2036;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2036:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2037;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2037:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2038;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2038:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2039;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2039:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2040;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2040:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2041;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2041:;
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
        }
      break;
    default:;
    }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_404 (res_op, seq, valueize, type, captures))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (wi::to_wide (captures[1]) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2042;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2042:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2043;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2043:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2044;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2044:;
		    }
		}
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_HYPOTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2071;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2071:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2072;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2072:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2073;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2073:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2074;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2074:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_405 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_405 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_405 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_405 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_406 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_406 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_406 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_406 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
        return true;
    }
  }
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	if (gimple_simplify_407 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_408 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_494 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2115;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAX, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2115;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2115:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_494 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2118;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF32, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2118;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2118:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_494 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2121;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF32X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2121;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2121:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FMIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_FMIN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_494 (res_op, seq, valueize, type, captures, CFN_FMIN))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2124;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_FMAX, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2124;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2124:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_495 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2127;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINL, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2127;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2127:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_495 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2130;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF64, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2130;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2130:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_492 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_493 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_495 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF128X))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2134;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF128X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2134;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2134:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_UNORDERED_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2138;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2138;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2138;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2138:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]),
 TREE_TYPE (captures[1]), ERROR_MARK))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2139;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2139;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2139;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2139:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (TREE_CODE_CLASS (UNORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]), ERROR_MARK)
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]),
 TREE_TYPE (captures[2]), ERROR_MARK))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2140;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2140;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNORDERED_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2140;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2140:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_257 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
				      return true;
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
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_260 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_261 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, UNORDERED_EXPR))
		        return true;
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_594 (res_op, seq, valueize, type, captures, UNORDERED_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (tree_expr_nan_p (captures[0]) || tree_expr_nan_p (captures[1])
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2141;
	{
	  tree tem;
	  tem =  constant_boolean_node (true, type);
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2141:;
      }
    else
      {
	if (!tree_expr_maybe_nan_p (captures[0]) && !tree_expr_maybe_nan_p (captures[1])
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2142;
	    {
	      tree tem;
	      tem =  constant_boolean_node (false, type);
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1081, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2142:;
	  }
      }
  }
  return false;
}

bool
gimple_simplify_CFN_SUB_OVERFLOW (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		    if (gimple_simplify_597 (res_op, seq, valueize, type, captures, CFN_SUB_OVERFLOW))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
		    if (gimple_simplify_598 (res_op, seq, valueize, type, captures, CFN_SUB_OVERFLOW))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LDEXPL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_608 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_609 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2169;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1085, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2169:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBLN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_608 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_609 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2175;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1085, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2175:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_VEC_COND_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if (integer_zerop (_q22))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _p2 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[1], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[0])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2233;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[1];
				_o1[1] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2233;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] = captures[4];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1110, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2233:;
			  }
		      }
		    }
		  if (integer_all_onesp (_q21))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q22, _p1, _p2 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[1], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[0])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2234;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[1];
				_o1[1] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2234;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] = captures[4];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1111, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2234:;
			  }
		      }
		    }
		  if (integer_zerop (_q21))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q22, _p1, _p2 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[1], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[0])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2235;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[1];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2235;
				  _o1[1] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2235;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[4];
			      res_op->ops[2] = captures[3];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1112, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2235:;
			  }
		      }
		    }
		  if (integer_all_onesp (_q22))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _p2 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[1], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[0])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2236;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[1];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2236;
				  _o1[1] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2236;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[4];
			      res_op->ops[2] = captures[3];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1113, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2236:;
			  }
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VIEW_CONVERT_EXPR:
			        {
				  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
				  if ((TREE_CODE (_q30) == SSA_NAME
				       || is_gimple_min_invariant (_q30)))
				    {
				      _q30 = do_valueize (valueize, _q30);
				      switch (TREE_CODE (_q30))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q30))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case VEC_COND_EXPR:
						    {
						      tree _q40 = gimple_assign_rhs1 (_a3);
						      _q40 = do_valueize (valueize, _q40);
						      tree _q41 = gimple_assign_rhs2 (_a3);
						      _q41 = do_valueize (valueize, _q41);
						      tree _q42 = gimple_assign_rhs3 (_a3);
						      _q42 = do_valueize (valueize, _q42);
						      switch (TREE_CODE (_q40))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q40))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case LT_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, LT_EXPR))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  case LE_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, LE_EXPR))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  case EQ_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (tree_swap_operands_p (_q50, _q51))
								        std::swap (_q50, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, EQ_EXPR))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  case NE_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (tree_swap_operands_p (_q50, _q51))
								        std::swap (_q50, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, NE_EXPR))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  case GE_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, GE_EXPR))
										      return true;
										  }
									        }
									    }
								        }
								      break;
								    }
								  case GT_EXPR:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a4);
								      _q50 = do_valueize (valueize, _q50);
								      tree _q51 = gimple_assign_rhs2 (_a4);
								      _q51 = do_valueize (valueize, _q51);
								      if (integer_all_onesp (_q41))
									{
									  if (integer_zerop (_q42))
									    {
									      if (integer_zerop (_q21))
										{
										  {
										    tree captures[7] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q50, _q51, _p1, _p2 };
										    if (gimple_simplify_574 (res_op, seq, valueize, type, captures, GT_EXPR))
										      return true;
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
	        }
	      default:;
	      }
        }
      break;
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_all_onesp (captures[0])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2237;
	      {
		tree tem;
		tem = captures[1];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1114, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2237:;
	    }
	  else
	    {
	      if (integer_zerop (captures[0])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2238;
		  {
		    tree tem;
		    tem = captures[2];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1115, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2238:;
		}
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  if ((_p2 == _q32 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q32, 0) && types_match (_p2, _q32)))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[0], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[1])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2239;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2239;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] = captures[4];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1116, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2239:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if ((_q41 == _p1 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p1, 0) && types_match (_q41, _p1)))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q42 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[0], captures[3])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[2])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2240;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2240;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[1];
			      res_op->ops[2] = captures[4];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1117, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2240:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  if ((_p2 == _q31 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q31, 0) && types_match (_p2, _q31)))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[0], captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[1])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2241;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2241;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2241;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[3];
			      res_op->ops[2] = captures[4];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1118, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2241:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if ((_q42 == _p1 && ! TREE_SIDE_EFFECTS (_q42)) || (operand_equal_p (_q42, _p1, 0) && types_match (_q42, _p1)))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
			if (optimize_vectors_before_lowering_p () && types_match (captures[0], captures[3])
)
			  {
			    gimple_seq *lseq = seq;
			    if (lseq
			        && (!single_use (captures[2])))
			      lseq = NULL;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2242;
			    {
			      res_op->set_op (VEC_COND_EXPR, type, 3);
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2242;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2242;
				res_op->ops[0] = _r1;
			      }
			      res_op->ops[1] = captures[4];
			      res_op->ops[2] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1119, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2242:;
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
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2243;
			{
			  res_op->set_op (BIT_NOT_EXPR, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1120, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2243:;
		      }
		    else
		      {
			if (integer_all_onesp (captures[1]) && integer_zerop (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2244;
			    {
			      tree tem;
			      tem = captures[0];
			      res_op->set_value (tem);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1121, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2244:;
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
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, LT_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, LT_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, LE_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, LE_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, UNGT_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, UNGT_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, UNGE_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, UNGE_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, GT_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, GT_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, GE_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, GE_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, UNLT_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, UNLT_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_575 (res_op, seq, valueize, type, captures, UNLE_EXPR, MAX_EXPR, MAX_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_576 (res_op, seq, valueize, type, captures, UNLE_EXPR, MIN_EXPR, MIN_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if (integer_zerop (_p2))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_577 (res_op, seq, valueize, type, captures))
						  return true;
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
						if (gimple_simplify_577 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if (integer_zerop (_p2))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_578 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_578 (res_op, seq, valueize, type, captures))
						  return true;
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
						if (gimple_simplify_578 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_578 (res_op, seq, valueize, type, captures))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case BIT_AND_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
						  return true;
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
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_AND_EXPR))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case BIT_IOR_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
						  return true;
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
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MIN_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MIN_EXPR))
						  return true;
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
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MIN_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MIN_EXPR))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MAX_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MAX_EXPR))
						  return true;
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
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MAX_EXPR))
						  return true;
					      }
					    }
					  if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
						if (gimple_simplify_579 (res_op, seq, valueize, type, captures, MAX_EXPR))
						  return true;
					      }
					    }
				        }
				    }
			          break;
			        }
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MULT_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2245;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2245:;
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
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MULT_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2246;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2246:;
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
					    default:;
					    }
				        }
				    }
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case PLUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2247;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2247:;
								      }
								  }
							        }
							    }
						          break;
						        }
						      case MULT_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
							    {
							      if (uniform_integer_cst_p (_q81))
								{
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
								    if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
								      {
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2248;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2248:;
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2249;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2249:;
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
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case PLUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2250;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2250:;
								      }
								  }
							        }
							    }
						          break;
						        }
						      case MULT_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
							    {
							      if (uniform_integer_cst_p (_q81))
								{
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
								    if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
								      {
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2251;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2251:;
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2252;
									{
									  tree tem;
									  tem = captures[2];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2252:;
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
					    default:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2253;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[3];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2253:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2254;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[3];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1103, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2254:;
		      }
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
		    if (inverse_conditions_p (captures[0], captures[2])
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2255;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[3];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1104, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2255:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
		    if (inverse_conditions_p (captures[0], captures[1])
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2256;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[3];
			  res_op->ops[2] = captures[4];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1105, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2256:;
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
  if ((_p2 == _p1 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _p1, 0) && types_match (_p2, _p1)))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2257;
	{
	  tree tem;
	  tem = captures[1];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1106, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2257:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
					    const enum tree_code cmp = EQ_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2258;
						{
						  tree tem;
						  tem = captures[2];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2258:;
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
		      if (zerop (_p1))
			{
			  switch (TREE_CODE (_p2))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p2))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
					    const enum tree_code cmp = EQ_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2259;
						{
						  tree tem;
						  tem = captures[1];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2259:;
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
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2260;
									{
									  tree tem;
									  tem = captures[3];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 727, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2260:;
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
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
							    {
							      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
								{
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
								    if (gimple_simplify_580 (res_op, seq, valueize, type, captures, EQ_EXPR))
								      return true;
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
	        }
	      case UNEQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
					    const enum tree_code cmp = UNEQ_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2261;
						{
						  tree tem;
						  tem = captures[2];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2261:;
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
		      if (zerop (_p1))
			{
			  switch (TREE_CODE (_p2))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _p2))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case NEGATE_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
					    const enum tree_code cmp = UNEQ_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2262;
						{
						  tree tem;
						  tem = captures[1];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2262:;
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
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2263;
									{
									  tree tem;
									  tem = captures[3];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 727, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2263:;
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
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
							    {
							      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
								{
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
								    if (gimple_simplify_580 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
								      return true;
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
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
					    const enum tree_code cmp = NE_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2264;
						{
						  tree tem;
						  tem = captures[1];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2264:;
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
		    if (integer_zerop (_p2))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const enum tree_code cmp = NE_EXPR;
			  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2265;
			      {
				tree tem;
				tem = captures[1];
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2265:;
			    }
			}
		      }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2266;
									{
									  tree tem;
									  tem = captures[0];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2266:;
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
						if (gimple_simplify_581 (res_op, seq, valueize, type, captures, NE_EXPR))
						  return true;
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
		    default:;
		    }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
					    const enum tree_code cmp = LTGT_EXPR;
					    if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2267;
						{
						  tree tem;
						  tem = captures[1];
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2267:;
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
		    if (integer_zerop (_p2))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const enum tree_code cmp = LTGT_EXPR;
			  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2268;
			      {
				tree tem;
				tem = captures[1];
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2268:;
			    }
			}
		      }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2269;
									{
									  tree tem;
									  tem = captures[0];
									  res_op->set_value (tem);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2269:;
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
						if (gimple_simplify_581 (res_op, seq, valueize, type, captures, LTGT_EXPR))
						  return true;
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
		    default:;
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
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
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2270;
						    {
						      res_op->set_op (ABSU_EXPR, type, 1);
						      res_op->ops[0] = captures[0];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 735, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2270:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2271;
						    {
						      res_op->set_op (ABS_EXPR, type, 1);
						      res_op->ops[0] = captures[0];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 736, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2271:;
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
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2272;
									{
									  res_op->set_op (ABS_EXPR, type, 1);
									  res_op->ops[0] = captures[0];
									  res_op->resimplify (lseq, valueize);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 737, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2272:;
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
					    default:;
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
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
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
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2273;
						    {
						      res_op->set_op (ABSU_EXPR, type, 1);
						      res_op->ops[0] = captures[0];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 735, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2273:;
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2274;
						    {
						      res_op->set_op (ABS_EXPR, type, 1);
						      res_op->ops[0] = captures[0];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 736, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2274:;
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
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2275;
									{
									  res_op->set_op (ABS_EXPR, type, 1);
									  res_op->ops[0] = captures[0];
									  res_op->resimplify (lseq, valueize);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 737, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2275:;
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
					    default:;
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
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
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
							gimple_seq *lseq = seq;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2276;
							{
							  res_op->set_op (NOP_EXPR, type, 1);
							  {
							    tree _o1[1], _r1;
							    {
							      tree _o2[1], _r2;
							      _o2[0] = captures[0];
							      gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r2) goto next_after_fail2276;
							      _o1[0] = _r2;
							    }
							    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2276;
							    res_op->ops[0] = _r1;
							  }
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2276:;
						    }
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2277;
						    {
						      res_op->set_op (NEGATE_EXPR, type, 1);
						      {
							tree _o1[1], _r1;
							_o1[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2277;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 743, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2277:;
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
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
										gimple_seq *lseq = seq;
										if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2278;
										{
										  res_op->set_op (NOP_EXPR, type, 1);
										  {
										    tree _o1[1], _r1;
										    {
										      tree _o2[1], _r2;
										      _o2[0] = captures[0];
										      gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
										      tem_op.resimplify (lseq, valueize);
										      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
										      if (!_r2) goto next_after_fail2278;
										      _o1[0] = _r2;
										    }
										    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
										    tem_op.resimplify (lseq, valueize);
										    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
										    if (!_r1) goto next_after_fail2278;
										    res_op->ops[0] = _r1;
										  }
										  res_op->resimplify (lseq, valueize);
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
										  return true;
										}
next_after_fail2278:;
									    }
									  }
									else
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2279;
									    {
									      res_op->set_op (NEGATE_EXPR, type, 1);
									      {
										tree _o1[1], _r1;
										_o1[0] = captures[0];
										gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
										tem_op.resimplify (lseq, valueize);
										_r1 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r1) goto next_after_fail2279;
										res_op->ops[0] = _r1;
									      }
									      res_op->resimplify (lseq, valueize);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail2279:;
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
					    default:;
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
	        }
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (zerop (_q21))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p2))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
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
							gimple_seq *lseq = seq;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2280;
							{
							  res_op->set_op (NOP_EXPR, type, 1);
							  {
							    tree _o1[1], _r1;
							    {
							      tree _o2[1], _r2;
							      _o2[0] = captures[0];
							      gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r2) goto next_after_fail2280;
							      _o1[0] = _r2;
							    }
							    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2280;
							    res_op->ops[0] = _r1;
							  }
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 742, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2280:;
						    }
						  }
						else
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2281;
						    {
						      res_op->set_op (NEGATE_EXPR, type, 1);
						      {
							tree _o1[1], _r1;
							_o1[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2281;
							res_op->ops[0] = _r1;
						      }
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 743, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2281:;
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
		        default:;
		        }
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (zerop (_q21))
				    {
				      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
					{
					  switch (TREE_CODE (_p2))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p2))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case MINUS_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
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
										gimple_seq *lseq = seq;
										if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2282;
										{
										  res_op->set_op (NOP_EXPR, type, 1);
										  {
										    tree _o1[1], _r1;
										    {
										      tree _o2[1], _r2;
										      _o2[0] = captures[0];
										      gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
										      tem_op.resimplify (lseq, valueize);
										      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
										      if (!_r2) goto next_after_fail2282;
										      _o1[0] = _r2;
										    }
										    gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
										    tem_op.resimplify (lseq, valueize);
										    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
										    if (!_r1) goto next_after_fail2282;
										    res_op->ops[0] = _r1;
										  }
										  res_op->resimplify (lseq, valueize);
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
										  return true;
										}
next_after_fail2282:;
									    }
									  }
									else
									  {
									    gimple_seq *lseq = seq;
									    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2283;
									    {
									      res_op->set_op (NEGATE_EXPR, type, 1);
									      {
										tree _o1[1], _r1;
										_o1[0] = captures[0];
										gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
										tem_op.resimplify (lseq, valueize);
										_r1 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r1) goto next_after_fail2283;
										res_op->ops[0] = _r1;
									      }
									      res_op->resimplify (lseq, valueize);
									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
									      return true;
									    }
next_after_fail2283:;
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
					    default:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_logical_inverted_value (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      if (gimple_truth_valued_p (_q20, valueize))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (VEC_COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2284;
		{
		  res_op->set_op (VEC_COND_EXPR, type, 3);
		  res_op->ops[0] = captures[0];
		  res_op->ops[1] = captures[2];
		  res_op->ops[2] = captures[1];
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1107, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail2284:;
	      }
	  }
        }
}
}
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2285;
						{
						  res_op->set_op (CFN_COND_NEG, type, 3);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2285;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2285:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2286;
						{
						  res_op->set_op (CFN_COND_NOT, type, 3);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2286;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2286:;
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
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2287;
			    {
			      res_op->set_op (CFN_COND_NEG, type, 3);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2287;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2287:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2288;
			    {
			      res_op->set_op (CFN_COND_NOT, type, 3);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2288;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2288:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2289;
						{
						  res_op->set_op (CFN_COND_NEG, type, 3);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2289;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2289;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2289:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2290;
						{
						  res_op->set_op (CFN_COND_NOT, type, 3);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2290;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2290;
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2290:;
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
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2291;
			    {
			      res_op->set_op (CFN_COND_NEG, type, 3);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2291;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2291;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2291:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2292;
			    {
			      res_op->set_op (CFN_COND_NOT, type, 3);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2292;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2292;
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2292:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2293;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2293;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2293;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2293:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2294;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2294;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2294;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2294:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2295;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2295;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2295;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2295:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2296;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2296;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2296;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2296:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2297;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2297;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2297;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2297:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2298;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2298;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2298;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2298:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2299;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2299;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2299;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2299:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2300;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2300;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2300;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2300:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2301;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2301;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2301;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2301:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2302;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2302;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2302;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2302:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2303;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2303;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2303;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2303:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2304;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2304;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2304;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2304:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2305;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2305;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2305;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2305:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2306;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2306;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2306;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2306:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2307;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2307;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2307;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2307:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2308;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2308;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2308;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2308:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2309;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2309;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2309;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2309:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2310;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2310;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2310;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2310:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2311;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2311;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2311;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2311:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2312;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2312;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2312;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2312:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2313;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2313;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2313;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2313:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2314;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2314;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2314;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2314:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2315;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2315;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2315;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2315:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2316;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2316;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2316;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2316:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2317;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2317;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2317;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2317:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2318;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2318;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2318;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2318:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2319;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2319;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2319;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2319:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2320;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2320;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2320;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2320:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2321;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2321;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2321;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2321:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2322;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2322;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2322;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2322:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2323;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2323;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2323;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2323:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2324;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2324;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2324;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2324:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2325;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2325;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2325;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2325;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2325:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2326;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2326;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2326;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2326;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2326:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2327;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2327;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2327;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2327;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2327:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2328;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2328;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2328;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2328;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2328:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2329;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2329;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2329;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2329;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2329:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2330;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2330;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2330;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2330;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2330:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2331;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2331;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2331;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2331;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2331:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2332;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2332;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2332;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2332;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2332:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2333;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2333;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2333;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2333;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2333:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2334;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2334;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2334;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2334;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2334:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2335;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2335;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2335;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2335;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2335:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2336;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2336;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2336;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2336;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2336:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2337;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[4], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2337;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2337;
						      _o1[3] = _r2;
						    }
						    gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2337;
						    res_op->ops[0] = _r1;
						  }
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2337:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2338;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2338;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2338;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2338;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2338:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2339;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2339;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2339;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2339;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2339:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2340;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[4], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2340;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail2340;
							_o1[3] = _r2;
						      }
						      gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail2340;
						      res_op->ops[0] = _r1;
						    }
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail2340:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2341;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2341;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2341;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_ADD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2341;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2341:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2342;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2342;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2342;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SUB, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2342;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2342:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2343;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2343;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2343;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MUL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2343;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2343:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2344;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2344;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2344;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_DIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2344;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2344:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2345;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2345;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2345;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MOD, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2345;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2345:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2346;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2346;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2346;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_RDIV, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2346;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2346:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2347;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2347;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2347;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2347;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2347:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2348;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2348;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2348;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_MAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2348;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2348:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2349;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2349;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2349;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_AND, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2349;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2349:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2350;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2350;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2350;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_IOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2350;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2350:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2351;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2351;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2351;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_XOR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2351;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2351:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2352;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2352;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2352;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHL, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2352;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2352:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2353;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[4], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2353;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail2353;
				  _o1[3] = _r2;
				}
				gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_SHR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail2353;
				res_op->ops[0] = _r1;
			      }
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail2353:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2354;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2354;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2354;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMAX, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2354;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2354:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2355;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2355;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2355;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_FMIN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2355;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2355:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2356;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[4], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2356;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail2356;
				    _o1[3] = _r2;
				  }
				  gimple_match_op tem_op (res_op->cond.any_else (), CFN_COND_COPYSIGN, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2], _o1[3]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2356;
				  res_op->ops[0] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2356:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2 };
					  if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2 };
					  if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2 };
					  if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2 };
					  if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
		      if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
		      if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
		      if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2 };
		      if (gimple_simplify_582 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52 };
					  if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52 };
					  if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52 };
					  if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52 };
					  if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42 };
		      if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42 };
		      if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42 };
		      if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42 };
		      if (gimple_simplify_583 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_ADD:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_ADD))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_AND:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_AND))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_DIV:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_DIV))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_IOR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_IOR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_MAX:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MAX))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_MIN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MIN))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_MOD:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MOD))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_MUL:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MUL))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_SHL:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SHL))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_SHR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SHR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_SUB:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SUB))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_XOR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_XOR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_COPYSIGN))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_FMAX:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_FMAX))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_FMIN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_FMIN))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_RDIV:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
					      if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_RDIV))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_ADD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_ADD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_AND:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_AND))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_DIV))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_IOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MOD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_MUL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SHL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SHR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_SUB))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_XOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_COPYSIGN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_FMAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_FMIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
			  if (gimple_simplify_584 (res_op, seq, valueize, type, captures, CFN_COND_RDIV))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_ADD:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_ADD))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_AND:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_AND))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_DIV:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_DIV))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_IOR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_IOR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_MAX:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MAX))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_MIN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MIN))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_MOD:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MOD))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_MUL:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MUL))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_SHL:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SHL))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_SHR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SHR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_SUB:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SUB))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_XOR:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_XOR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_COPYSIGN))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_FMAX:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_FMAX))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_FMIN:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_FMIN))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_RDIV:
				    if (gimple_call_num_args (_c2) == 4)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
					  if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_RDIV))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_ADD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_ADD))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_AND:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_AND))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_DIV))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_IOR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MAX))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MIN))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MOD))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_MUL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SHL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SHR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_SUB))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_XOR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_FMAX))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_FMIN))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		      if (gimple_simplify_585 (res_op, seq, valueize, type, captures, CFN_COND_RDIV))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_FMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
					      if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_FMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
					      if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FMS))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_FNMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
					      if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FNMA))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_FNMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
					      if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FNMS))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_FMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
			  if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
			  if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FMS))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
			  if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FNMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
			  if (gimple_simplify_586 (res_op, seq, valueize, type, captures, CFN_COND_FNMS))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_FMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_FMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_FNMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_FNMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_FMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_587 (res_op, seq, valueize, type, captures, CFN_COND_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_LEN_ADD:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_ADD))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_AND:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_AND))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_DIV:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_DIV))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_IOR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_IOR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_MAX:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MAX))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_MIN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MIN))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_MOD:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MOD))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_MUL:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MUL))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_SHL:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHL))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_SHR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_SUB:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SUB))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_XOR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_XOR))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_FMAX:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMAX))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_FMIN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMIN))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_RDIV:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_RDIV))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
					      if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_COPYSIGN))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_LEN_ADD:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_ADD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_AND))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_DIV))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_IOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MOD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MUL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SUB))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_XOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_RDIV))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
			  if (gimple_simplify_588 (res_op, seq, valueize, type, captures, CFN_COND_LEN_COPYSIGN))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_LEN_ADD:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_ADD))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_AND:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_AND))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_DIV:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_DIV))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_IOR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_IOR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_MAX:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MAX))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_MIN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MIN))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_MOD:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MOD))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_MUL:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MUL))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_SHL:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHL))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_SHR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_SUB:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SUB))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_XOR:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_XOR))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_FMAX:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMAX))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_FMIN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMIN))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_RDIV:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_RDIV))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 6)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
					  if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_COPYSIGN))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_LEN_ADD:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_ADD))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_AND))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_DIV))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_IOR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MAX))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MIN))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MOD))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_MUL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SHR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_SUB))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_XOR))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMAX))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMIN))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_RDIV))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 6)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		      if (gimple_simplify_589 (res_op, seq, valueize, type, captures, CFN_COND_LEN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_LEN_FMA:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					tree _q46 = gimple_call_arg (_c2, 6);
					_q46 = do_valueize (valueize, _q46);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
					      if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMA))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_FMS:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					tree _q46 = gimple_call_arg (_c2, 6);
					_q46 = do_valueize (valueize, _q46);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
					      if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMS))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_FNMA:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					tree _q46 = gimple_call_arg (_c2, 6);
					_q46 = do_valueize (valueize, _q46);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
					      if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMA))
					        return true;
					    }
					  }
				      }
				    break;
				  case CFN_COND_LEN_FNMS:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					tree _q43 = gimple_call_arg (_c2, 3);
					_q43 = do_valueize (valueize, _q43);
					tree _q44 = gimple_call_arg (_c2, 4);
					_q44 = do_valueize (valueize, _q44);
					tree _q45 = gimple_call_arg (_c2, 5);
					_q45 = do_valueize (valueize, _q45);
					tree _q46 = gimple_call_arg (_c2, 6);
					_q46 = do_valueize (valueize, _q46);
					if (tree_swap_operands_p (_q41, _q42))
					  std::swap (_q41, _q42);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
					      if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMS))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_LEN_FMA:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    tree _q36 = gimple_call_arg (_c1, 6);
		    _q36 = do_valueize (valueize, _q36);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
			  if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    tree _q36 = gimple_call_arg (_c1, 6);
		    _q36 = do_valueize (valueize, _q36);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
			  if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMS))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    tree _q36 = gimple_call_arg (_c1, 6);
		    _q36 = do_valueize (valueize, _q36);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
			  if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    tree _q35 = gimple_call_arg (_c1, 5);
		    _q35 = do_valueize (valueize, _q35);
		    tree _q36 = gimple_call_arg (_c1, 6);
		    _q36 = do_valueize (valueize, _q36);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
			  if (gimple_simplify_590 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMS))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_COND_LEN_FMA:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					tree _q56 = gimple_call_arg (_c2, 6);
					_q56 = do_valueize (valueize, _q56);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
					  if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_FMS:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					tree _q56 = gimple_call_arg (_c2, 6);
					_q56 = do_valueize (valueize, _q56);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
					  if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_FNMA:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					tree _q56 = gimple_call_arg (_c2, 6);
					_q56 = do_valueize (valueize, _q56);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
					  if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_COND_LEN_FNMS:
				    if (gimple_call_num_args (_c2) == 7)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					tree _q55 = gimple_call_arg (_c2, 5);
					_q55 = do_valueize (valueize, _q55);
					tree _q56 = gimple_call_arg (_c2, 6);
					_q56 = do_valueize (valueize, _q56);
					if (tree_swap_operands_p (_q51, _q52))
					  std::swap (_q51, _q52);
					{
					  tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
					  if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_LEN_FMA:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    tree _q46 = gimple_call_arg (_c1, 6);
		    _q46 = do_valueize (valueize, _q46);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		      if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    tree _q46 = gimple_call_arg (_c1, 6);
		    _q46 = do_valueize (valueize, _q46);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		      if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    tree _q46 = gimple_call_arg (_c1, 6);
		    _q46 = do_valueize (valueize, _q46);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		      if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (gimple_call_num_args (_c1) == 7)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    tree _q45 = gimple_call_arg (_c1, 5);
		    _q45 = do_valueize (valueize, _q45);
		    tree _q46 = gimple_call_arg (_c1, 6);
		    _q46 = do_valueize (valueize, _q46);
		    if (tree_swap_operands_p (_q41, _q42))
		      std::swap (_q41, _q42);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		      if (gimple_simplify_591 (res_op, seq, valueize, type, captures, CFN_COND_LEN_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COND_ADD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_ADD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_AND:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_AND))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_DIV))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
			  if (gimple_simplify_593 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
			  if (gimple_simplify_593 (res_op, seq, valueize, type, captures, CFN_COND_FMS))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_IOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_MAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_MIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_MOD))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_MUL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_SHL))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_SHR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_SUB))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_XOR))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_COPYSIGN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_FMAX))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_FMIN))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
			  if (gimple_simplify_593 (res_op, seq, valueize, type, captures, CFN_COND_FNMA))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    tree _q34 = gimple_call_arg (_c1, 4);
		    _q34 = do_valueize (valueize, _q34);
		    if (tree_swap_operands_p (_q31, _q32))
		      std::swap (_q31, _q32);
		    if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
			  if (gimple_simplify_593 (res_op, seq, valueize, type, captures, CFN_COND_FNMS))
			    return true;
			}
		      }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (gimple_call_num_args (_c1) == 4)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    tree _q33 = gimple_call_arg (_c1, 3);
		    _q33 = do_valueize (valueize, _q33);
		    if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
			  if (gimple_simplify_592 (res_op, seq, valueize, type, captures, CFN_COND_RDIV))
			    return true;
			}
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}
#pragma GCC diagnostic pop

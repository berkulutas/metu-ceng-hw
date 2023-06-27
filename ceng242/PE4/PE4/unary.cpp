#include "nullary.h"
#include "unary.h"
#include "binary.h"
#include <math.h>

namespace sym 
{
	bool NegOp::is_neg() const { return true; }

	__expr_t* NegOp::eval(const var_map_t& vars) const
	{
		__expr_t* operand_eval = this->operand->eval(vars);
		__nullary_op_t* nullary_operand = dynamic_cast<__nullary_op_t*>(operand_eval);
		if (nullary_operand && nullary_operand->is_con())
		{
			Const* operand_value = dynamic_cast<Const*>(operand_eval);
			__expr_t* result = new Const(-operand_value->get_value());
			delete operand_eval; // to prevent mem leak
			return result;
		}

		__expr_t* result = new NegOp(operand_eval);
		return result;
	}

	__expr_t* NegOp::diff(const std::string& v) const
	{ 
		return new NegOp(this->operand->diff(v)); 
	}

	std::ostream& NegOp::operator<< (std::ostream &out) const
	{
        out << "-";
        if (!operand->is_nullary()) {
            out << "(" << *operand << ")";
        } else {
            out << *operand;
        }
        return out;
    }

	bool NegOp::operator==(const __expr_t& other_) const
	{
		try {
			const NegOp& other = dynamic_cast<const NegOp&>(other_);
			return *operand == *other.operand;
		}
		catch(std::bad_cast) {
			return false;	
		} 
		
    }
}

namespace sym 
{
	bool ExpOp::is_exp() const { return true; }

	__expr_t* ExpOp::eval(const var_map_t& vars) const
	{
		__expr_t* operand_eval = this->operand->eval(vars);
		__nullary_op_t* nullary_operand = dynamic_cast<__nullary_op_t*>(operand_eval);

		if (nullary_operand && nullary_operand->is_con()) 
		{
			Const* operand_value = dynamic_cast<Const*>(operand_eval);
			__expr_t* result = new Const(std::exp(operand_value->get_value()));
			delete operand_eval;
			return result;																								
		}

		__expr_t* result = new ExpOp(operand_eval);
		return result;
	}

	__expr_t* ExpOp::diff(const std::string& v) const
	{
// 		auto res = new MulOp(this->operand->diff(v), new ExpOp(this->operand));
// 		auto res2 = res->eval();
// 		return res2;
        auto diff_operand = operand->diff(v);
		auto k = MulOp(diff_operand, new ExpOp(operand->eval()));
		return k.eval() ; 
	}

	std::ostream& ExpOp::operator<< (std::ostream &out) const
	{
		out << "e^";
		if (!this->operand->is_nullary())
			out << "(";
		out << *(this->operand);
		if (!this->operand->is_nullary())
			out << ")";
		return out;
	}

	bool ExpOp::operator==(const __expr_t& other_) const 
	{
		// const ExpOp* other_exp = dynamic_cast<const ExpOp*>(&other_);
		// if (other_exp)
		// 	return *(this->operand) == *(other_exp->operand);
		// else
		// 	return false; 

// 		try {
// 			const ExpOp& other = dynamic_cast<const ExpOp&>(other_);
// 			return *operand == *other.operand;
// 		}
// 		catch(std::bad_cast) {
// 			return false;	
// 		} 
		const ExpOp* other = dynamic_cast<const ExpOp*>(&other_);
		if (other) {
			return *operand == *other->operand;
		}
		else 
			return false;
	}
}

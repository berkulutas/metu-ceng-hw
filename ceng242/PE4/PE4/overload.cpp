#include "nullary.h"
#include "unary.h"
#include "binary.h"
#include "expr.h"

namespace sym {
	__expr_t& operator-(const __expr_t &op) { 
		const __nullary_op_t* ptr = dynamic_cast<const __nullary_op_t*>(&op);
		if (ptr && ptr->is_nullary()) {
			return *new NegOp(ptr->eval());
		}
		return *new NegOp(&op);	
	}
	__expr_t& exp(const __expr_t &op) { 
		const __nullary_op_t* ptr = dynamic_cast<const __nullary_op_t*>(&op);
		if (ptr && ptr->is_nullary()) {
			return *new ExpOp(ptr->eval());
		}
		return *new ExpOp(&op);
	}

	__expr_t& operator+(const __expr_t &lhs, const __expr_t &rhs) {
		const __nullary_op_t* lhs_nullary = dynamic_cast<const __nullary_op_t*>(&lhs);
		const __nullary_op_t* rhs_nullary = dynamic_cast<const __nullary_op_t*>(&rhs);
		if (lhs_nullary && rhs_nullary) 
			return *new AddOp(lhs_nullary->eval(), rhs_nullary->eval());

		else if (lhs_nullary && rhs_nullary == nullptr)
			return *new AddOp(lhs_nullary->eval(), &rhs);
		else if (lhs_nullary==nullptr  && rhs_nullary)
			return *new AddOp(&lhs, rhs_nullary->eval());
		else 
			return *new AddOp(&lhs, &rhs);
	}
	__expr_t& operator+(double lhs, const __expr_t &rhs) {
		const __nullary_op_t* rhs_nullary = dynamic_cast<const __nullary_op_t*>(&rhs);
		if (rhs_nullary) return *new AddOp(new Const(lhs), rhs_nullary->eval());

		return *new AddOp(new Const(lhs), &rhs);
	}
	__expr_t& operator+(const __expr_t &lhs, double rhs) {
		const __nullary_op_t* lhs_nullary = dynamic_cast<const __nullary_op_t*>(&lhs);
		if (lhs_nullary) return *new AddOp(lhs_nullary->eval(), new Const(rhs));

		return *new AddOp(&lhs, new Const(rhs));
	}

	__expr_t& operator*(const __expr_t &lhs, const __expr_t &rhs) {
		const __nullary_op_t* lhs_nullary = dynamic_cast<const __nullary_op_t*>(&lhs);
		const __nullary_op_t* rhs_nullary = dynamic_cast<const __nullary_op_t*>(&rhs);
		if (lhs_nullary && rhs_nullary) 
			return *new MulOp(lhs_nullary->eval(), rhs_nullary->eval());

		else if (lhs_nullary && rhs_nullary == nullptr)
			return *new MulOp(lhs_nullary->eval(), &rhs);
		else if (lhs_nullary==nullptr  && rhs_nullary)
			return *new MulOp(&lhs, rhs_nullary->eval());
		else 
			return *new MulOp(&lhs, &rhs);
	}
	__expr_t& operator*(double lhs, const __expr_t &rhs) {
		const __nullary_op_t* rhs_nullary = dynamic_cast<const __nullary_op_t*>(&rhs);
		if (rhs_nullary) return *new MulOp(new Const(lhs), rhs_nullary->eval());

		return *new MulOp(new Const(lhs), &rhs);
	}
	__expr_t& operator*(const __expr_t &lhs, double rhs) {
		const __nullary_op_t* lhs_nullary = dynamic_cast<const __nullary_op_t*>(&lhs);
		if (lhs_nullary) return *new MulOp(lhs_nullary->eval(), new Const(rhs));

		return *new MulOp(&lhs, new Const(rhs));
	}
}

#include "binary.h"
#include "nullary.h"
#include <math.h>

namespace sym 
{
	bool AddOp::is_add() const { return true; }

	__expr_t* AddOp::eval(const var_map_t& vars) const
	{
		__expr_t* lhs_eval = lhs_->eval(vars);
        __expr_t* rhs_eval = rhs_->eval(vars);

		Const* lhs_const = dynamic_cast<Const*>(lhs_eval);
        Const* rhs_const = dynamic_cast<Const*>(rhs_eval);

		// const const
		if (lhs_const && rhs_const) {
			double sum = lhs_const->get_value() + rhs_const->get_value();
            delete lhs_eval;
            delete rhs_eval;
            return new Const(sum);
		}

		if (lhs_const && lhs_const->get_value() == 0) {
			delete lhs_eval;
			return rhs_eval;
		}

		if (rhs_const && rhs_const->get_value() == 0) {
			delete rhs_eval;
			return lhs_eval;
		}

		return new AddOp(lhs_eval, rhs_eval);
	}

	__expr_t* AddOp::diff(const std::string& v) const
	{
		auto res = new AddOp(lhs_->diff(v), rhs_->diff(v));
		auto res2 = res->eval();
		delete res; 
		return res2; 
	}

	std::ostream& AddOp::operator<< (std::ostream &out) const
	{
		if (!lhs_->is_nullary()) {
            out << "(" << *lhs_ << ")";
        } else {
            out << *lhs_;
        }

		out << " + ";

		if (!rhs_->is_nullary()) {
            out << "(" << *rhs_ << ")";
        } else {
            out << *rhs_;
        }

        return out;
	}

	bool AddOp::operator==(const __expr_t& other_) const
	{
		const AddOp* other_add = dynamic_cast<const AddOp*>(&other_);
        if (!other_add)
            return false;

        bool eq1 = *(this->lhs_) == *(other_add->lhs_) && *(this->rhs_) == *(other_add->rhs_);
        bool eq2 = *(this->lhs_) == *(other_add->rhs_) && *(this->rhs_) == *(other_add->lhs_);
        
        return eq1 || eq2;
	}
}

namespace sym 
{
	bool MulOp::is_mul() const { return true; }

	__expr_t* MulOp::eval(const var_map_t& vars) const
	{
		__expr_t* lhs_val = lhs_->eval(vars);
		__expr_t* rhs_val = rhs_->eval(vars);

		Const* lhs_const = dynamic_cast<Const*>(lhs_val);
        Const* rhs_const = dynamic_cast<Const*>(rhs_val);

		// const const
		if (lhs_const && rhs_const) {
			double sum = lhs_const->get_value() * rhs_const->get_value();
            delete lhs_val;
            delete rhs_val;
            return new Const(sum);
		}

		if (lhs_const && lhs_const->get_value() == 0) {
			delete rhs_val;
			return lhs_val;
		}

		if (lhs_const && lhs_const->get_value() == 1) {
			delete lhs_val;
			return rhs_val;
		}


		if (rhs_const && rhs_const->get_value() == 0) {
			delete lhs_val;
			return rhs_val;
		}

		if (rhs_const && rhs_const->get_value() == 1) {
			delete rhs_val;
			return lhs_val;
		}

		return new MulOp(lhs_val, rhs_val);
		
	}

	__expr_t* MulOp::diff(const std::string& v) const
	{
		auto f = new MulOp(lhs_->diff(v), rhs_->eval());
		auto s = new MulOp(lhs_->eval(), rhs_->diff(v));

		auto res = new AddOp(f, s);
		auto res1 = res->eval();
		delete res; 
		return res1;
	}

	std::ostream& MulOp::operator<< (std::ostream &out) const
	{
		if (!lhs_->is_nullary()) {
            out << "(" << *lhs_ << ")";
        } else {
            out << *lhs_;
        }

		out << " * ";

		if (!rhs_->is_nullary()) {
            out << "(" << *rhs_ << ")";
        } else {
            out << *rhs_;
        }

        return out;
	}

	bool MulOp::operator==(const __expr_t& other_) const 
	{
		const MulOp* other_add = dynamic_cast<const MulOp*>(&other_);
        if (!other_add)
            return false;

        bool eq1 = *(this->lhs_) == *(other_add->lhs_) && *(this->rhs_) == *(other_add->rhs_);
        bool eq2 = *(this->lhs_) == *(other_add->rhs_) && *(this->rhs_) == *(other_add->lhs_);
        
        return eq1 || eq2;
	}
}

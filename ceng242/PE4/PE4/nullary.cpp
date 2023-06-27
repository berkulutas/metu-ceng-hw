#include "type.h"
#include "nullary.h"

namespace sym 
{
	double Const::get_value() const { return value_; }
	Const::operator double() const { return value_; }

	bool Const::is_con() const { return true;}

	__expr_t* Const::eval(const var_map_t& var_map) const { return new Const(value_); }

	__expr_t* Const::diff(const std::string& v) const { return new Const(0); }

	std::ostream& Const::operator<< (std::ostream &out) const { out << value_; return out; }

	bool Const::operator==(const __expr_t& other) const 
	{ 
		const Const* other_con = dynamic_cast<const Const*>(&other);
		if (other_con)
			return value_ == other_con->value_;
		else
			return false;
	}
}

namespace sym 
{
	std::string Var::get_variable() const { return var_; }
	Var::operator std::string () const { return var_; }
	
	bool Var::is_var() const { return true; }

	__expr_t* Var::eval(const var_map_t& vars) const 
	{
		auto it = vars.find(var_);
		return it != vars.end() ? dynamic_cast<__expr_t*>(new Const(it->second)) : new Var(var_);
	}

	__expr_t* Var::diff(const std::string& v) const { return new Const(v == var_ ? 1 : 0);}
	
	std::ostream& Var::operator<< (std::ostream &out) const { out << var_; return out; }

	bool Var::operator==(const __expr_t& other) const 
	{
		const Var* other_var = dynamic_cast<const Var*>(&other);
		if (other_var)
			return var_ == other_var->var_;
		else
			return false; 

	}
}

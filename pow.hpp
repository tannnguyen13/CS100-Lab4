#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>
#include <math.h>

class Pow : public Base {
	Public :
		Pow(Base* base1, Base* base2) : Base() { op1 = base1; op2 = base2; }
		virtual double evaluate() { return pow((op1->evaluate()),(op2->evaluate()));}
		virtual std::string stringify() { return (op1->stringify() + “ ** “ + op2->stringify());}
	Private:
		Base* op1;
		Base* op2;
}

#endif //__MULT_HPP__


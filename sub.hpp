#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include <string>

class Sub : public Base {
	Public :
		Sub(Base* base1, Base* base2) : Base() { op1 = base1; op2 = base2; }
		virtual double evaluate() { return ((op1->evaluate()) - (op2->evaluate()));}
		virtual std::string stringify() { return (op1->stringify() + " - " + op2->stringify());}
	Private:
		Base* op1;
		Base* op2;
}

#endif //__MULT_HPP__


#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include <string>

class Sub : public Base {
	Private:
		Base* op1 = new Base();
		Base* op2 = new Base();
	Public :
		Sub(Base* base1, Base* base2) : Base() { op1 = base1; op2 = base2; }
		virtual double evaluate() { return ((op1->evaluate()) - (op2->evaluate()));}
		virtual std::string stringify() { return (op1->stringify() + " - " + op2->stringify());}
}

#endif //__MULT_HPP__


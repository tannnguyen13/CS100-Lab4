#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include <string>

class Mult : public Base {
	private:
		Base* op1 = new Base();
		Base* op2 = new Base();
	Public :
		Mult(Base* base1, Base* base2) : Base() { op1 = base1; op2 = base2; }
		virtual double evaluate() { return ((op1->evaluate()) * (op2->evaluate()));}
		virtual std::string stringify() { return (op1->stringify() + " * " + op2->stringify());}
};

#endif //__MULT_HPP__


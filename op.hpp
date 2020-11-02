#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>

class Op : public Base {
    public:
        Op(double value) : Base() { opVal = value;}
        virtual double evaluate() { return opVal; }
        virtual std::string stringify() { return std::to_string(opVal); }
   private:
	double opVal;
};

#endif //__OP_HPP__

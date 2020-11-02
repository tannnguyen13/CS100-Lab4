#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>
#include <string>

class Rand : public Base {
	Public:
		Rand(): Base() {randVal = rand % 100;
		virtual double evaluate() {return randVal;}
		virtual std::string stringify() {return std::to_string(randVal);}
	Private:
		double randVal;	
}

#endif //__RAND_HPP__


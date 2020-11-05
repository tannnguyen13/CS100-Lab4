#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

TEST(DivTest, DivStringifyNumbers) {
    Div* test = new Div(new Op(5), new Op(7));
    EXPECT_EQ(test->stringify(), "5.0 / 7.0");
}
TEST(DivTest, DivStringifyOperator) {
    Div* test = new Div(new Add(new Op(4), new Op(3)), new Sub(new Op(9), new Op(5)));
    EXPECT_EQ(test->stringify(), "4.0 + 3.0 / 9.0 - 5.0");
}
TEST(DivTest, DivStringifyNumbersOp) {
    Div* test = new Div(new Op(5), new Add(new Op(1), new Op(1)));
    EXPECT_EQ(test->stringify(), "5.0 / 1.0 + 1.0");
}

TEST(DivTest, DivEvalNumbers) {
    Div* test = new Div(new Op(6), new Op(2));
    EXPECT_EQ(test->evaluate(), 3);
}
TEST(DivTest, DivEvalNumbersDec) {
    Div* test = new Div(new Op(2), new Op(4));
    EXPECT_EQ(test->evaluate(),0.5 );
}
TEST(DivTest, DivEvalOperator) {
    Div* test = new Div(new Add(new Op(1), new Op(5)), new Sub(new Op(3), new Op(1)));
    EXPECT_EQ(test->evaluate(),3 );
}




#endif //__DIV_TEST_HPP__

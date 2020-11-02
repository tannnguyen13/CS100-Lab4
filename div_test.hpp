#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivStringifyNumbers) {
    Div* test = new Div(Op(5), Op(7));
    EXPECT_EQ(test->stringify(), "6 / 7");
}
TEST(DivTest, DivStringifyOperator) {
    Div* test = new Div(Add(Op(4), Op(3)), Sub(Op(9), Op(5)));
    EXPECT_EQ(test->stringify(), "4 + 3  / 9 - 5");
}
TEST(DivTest, DivStringifyNumbersOp) {
    Div* test = new Div(Op(5), Add(Op(1), Op(1)));
    EXPECT_EQ(test->stringify(), "6 / 1 + 1");
}

TEST(DivTest, DivEvalNumbers) {
    Div* test = new Div(Op(6), Op(2));
    EXPECT_EQ(test->evaluate(), 3);
}
TEST(DivTest, DivEvalNumbersDec) {
    Div* test = new Div(Op(2), Op(4));
    EXPECT_EQ(test->evaluate(),0.5 );
}
TEST(DivTest, DivEvalOperator) {
    Div* test = new Div(Add(1,5), Sub(3,1));
    EXPECT_EQ(test->evaluate(),3 );
}




#endif //__DIV_TEST_HPP__

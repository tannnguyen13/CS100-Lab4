#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultStringifyNumbers) {
    Mult* test = new Mult(Op(5), Op(7));
    EXPECT_EQ(test->stringify(), "5 * 7");
}
TEST(MultTest, MultStringifyOperator) {
    Mult* test = new Mult(Add(Op(4), Op(3)), Sub(Op(9), Op(5)));
    EXPECT_EQ(test->stringify(), "4 + 3  * 9 - 5");
}
TEST(MultTest, MultStringifyNumbersOp) {
    Div* test = new Mult(Op(5), Add(Op(1), Op(1)));
    EXPECT_EQ(test->stringify(), "6 * 1 + 1");
}

TEST(MultTest, MultEvalNumbers) {
    Mult* test = new Mult(Op(6), Op(2));
    EXPECT_EQ(test->evaluate(), 12);
}
TEST(MultTest, MultEvalOperator) {
    Mult* test = new Mult(Add(1,5), Sub(3,1));
    EXPECT_EQ(test->evaluate(),12 );
}


#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowStringifyNumbers) {
    Pow* test = new Pow(Op(5), Op(2));
    EXPECT_EQ(test->stringify(), "5 ** 2");
}
TEST(PowTest, PowStringifyOperator) {
    Pow* test = new Pow(Div(Op(4), Op(3)), Sub(Op(9), Op(5)));
    EXPECT_EQ(test->stringify(), "4 / 3 ** 9 - 5");
}
TEST(PowTest, PowStringifyNumbersOp) {
    Pow* test = new Pow(Op(5), Mult(Op(2), Op(2)));
    EXPECT_EQ(test->stringify(), "5 ** 2 * 2");
}

TEST(PowTest, PowEvalNumbers) {
    Pow* test = new Pow(Op(6), Op(2));
    EXPECT_EQ(test->evaluate(), 36);
}
TEST(PowTest, PowEvalOperator) {
    Pow* test = new Pow(Add(1,5), Sub(3,1));
    EXPECT_EQ(test->evaluate(), 36 );
}
TEST(PowTest, PowEvalDecNumbers) {
    Pow* test = new Pow(Op(9), Op(.5));
    EXPECT_EQ(test->evaluate(), 3);
}



#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "base.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

TEST(PowTest, PowStringifyNumbers) {
    Pow* test = new Pow(new Op(5), new Op(2));
    EXPECT_EQ(test->stringify(), "5.0 ** 2.0");
}
TEST(PowTest, PowStringifyOperator) {
    Pow* test = new Pow(new Div(new Op(4), new Op(3)), new Sub(new Op(9), new Op(5)));
    EXPECT_EQ(test->stringify(), "4.0 / 3.0 ** 9.0 - 5.0");
}
TEST(PowTest, PowStringifyNumbersOp) {
    Pow* test = new Pow(new Op(5), new Mult(new Op(2), new Op(2)));
    EXPECT_EQ(test->stringify(), "5.0 ** 2.0 * 2.0");
}

TEST(PowTest, PowEvalNumbers) {
    Pow* test = new Pow(new Op(6), new Op(2));
    EXPECT_EQ(test->evaluate(), 36);
}
TEST(PowTest, PowEvalOperator) {
    Pow* test = new Pow(new Add(new Op(1), new Op(5)), new Sub(new Op(3), new Op(1)));
    EXPECT_EQ(test->evaluate(), 36 );
}
TEST(PowTest, PowEvalDecNumbers) {
    Pow* test = new Pow(new Op(9), new Op(.5));
    EXPECT_EQ(test->evaluate(), 3);
}

#endif

#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "add.hpp"
#include "op.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "mult.hpp"

TEST(MultTest, MultStringifyNumbers) {
    Mult* test = new Mult(new Op(5), new Op(7));
    EXPECT_EQ(test->stringify(), "5.0 * 7.0");
}
TEST(MultTest, MultStringifyOperator) {
    Mult* test = new Mult(new Add(new Op(4), new Op(3)), new Sub(new Op(9), new Op(5)));
    EXPECT_EQ(test->stringify(), "4.0 + 3.0 * 9.0 - 5.0");
}
TEST(MultTest, MultStringifyNumbersOp) {
    Mult* test = new Mult(new Op(5),new Add(new Op(1),new Op(1)));
    EXPECT_EQ(test->stringify(), "5.0 * 1.0 + 1.0");
}

TEST(MultTest, MultEvalNumbers) {
    Mult* test = new Mult(new Op(6), new Op(2));
    EXPECT_EQ(test->evaluate(), 12);
}
TEST(MultTest, MultEvalOperator) {
    Mult* test = new Mult(new Add(new Op(1),new Op(5)), new Sub(new Op(3),new Op(1)));
    EXPECT_EQ(test->evaluate(),12 );
}

#endif

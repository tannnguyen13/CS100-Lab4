#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

TEST(SubTest, SubStringifyNumbers) {
    Sub* test = new Sub(new Op(5), new Op(7));
    EXPECT_EQ(test->stringify(), "5.0 - 7.0");
}
TEST(SubTest, SubStringifyOperator) {
    Sub* test = new Sub(new Div(new Op(4), new Op(3)), new Add(new Op(9), new Op(5)));
    EXPECT_EQ(test->stringify(), "4.0 / 3.0 - 9.0 + 5.0");
}
TEST(SubTest, SubStringifyNumbersOp) {
    Sub* test = new Sub(new Op(5), new Mult(new Op(2), new Op(2)));
    EXPECT_EQ(test->stringify(), "5.0 - 2.0 * 2.0");
}

TEST(SubTest, SubEvalNumbers) {
    Sub* test = new Sub(new Op(6), new Op(2));
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(SubTest, SubEvalOperator) {
    Sub* test = new Sub(new Add(new Op(1), new Op(5)), new Sub(new Op(3), new Op(1)));
    EXPECT_EQ(test->evaluate(), 4 );
}
#endif

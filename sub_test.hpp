#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubStringifyNumbers) {
    Sub* test = new Sub(Op(5), Op(7));
    EXPECT_EQ(test->stringify(), "5 - 7");
}
TEST(SubTest, SubStringifyOperator) {
    Sub* test = new Sub(Div(Op(4), Op(3)), Add(Op(9), Op(5)));
    EXPECT_EQ(test->stringify(), "4 / 3 - 9 + 5");
}
TEST(SubTest, SubStringifyNumbersOp) {
    Sub* test = new Sub(Op(5), Mult(Op(2), Op(2)));
    EXPECT_EQ(test->stringify(), "5 - 2 * 2");
}

TEST(SubTest, SubEvalNumbers) {
    Sub* test = new Sub(Op(6), Op(2));
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(SubTest, SubEvalOperator) {
    Sub* test = new Sub(Add(1,5), Sub(3,1));
    EXPECT_EQ(test->evaluate(), 4 );
}


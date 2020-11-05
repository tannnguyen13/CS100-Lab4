#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "add.hpp"
#include "op.hpp"
#include "div.hpp"
#include "mult.hpp"

TEST(AddTest, AddStringifyNumbers) {
    Add* test = new Add(new Op(5), new Op(7));
    EXPECT_EQ(test->stringify(), "5.0 + 7.0");
}
TEST(AddTest, AddStringifyOperator) {
    Add* test = new Add(new Div(new Op(4), new Op(3)), new Sub(new Op(9), new Op(5)));
    EXPECT_EQ(test->stringify(), "4.0 / 3.0 + 9.0 - 5.0");
}
TEST(AddTest, AddStringifyNumbersOp) {
    Add* test = new Add(new Op(5), new Mult(new Op(2), new Op(2)));
    EXPECT_EQ(test->stringify(), "5.0 + 2.0 * 2.0");
}

TEST(AddTest, AddEvalNumbers) {
    Add* test = new Add(new Op(6), new Op(2));
    EXPECT_EQ(test->evaluate(), 8);
}
TEST(AddTest, AddEvalOperator) {
    Add* test = new Add(new Add(new Op(1), new Op(5)), new Sub(new Op(3), new Op(1)));
    EXPECT_EQ(test->evaluate(), 8 );
}

#endif

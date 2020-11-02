#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddStringifyNumbers) {
    Add* test = new Add(Op(5), Op(7));
    EXPECT_EQ(test->stringify(), "5 + 7");
}
TEST(AddTest, AddStringifyOperator) {
    Add* test = new Add(Div(Op(4), Op(3)), Sub(Op(9), Op(5)));
    EXPECT_EQ(test->stringify(), "4 / 3 + 9 - 5");
}
TEST(AddTest, AddStringifyNumbersOp) {
    Add* test = new Add(Op(5), Mult(Op(2), Op(2)));
    EXPECT_EQ(test->stringify(), "6 + 2 * 2");
}

TEST(AddTest, AddEvalNumbers) {
    Add* test = new Add(Op(6), Op(2));
    EXPECT_EQ(test->evaluate(), 8);
}
TEST(AddTest, AddEvalOperator) {
    Add* test = new Add(Add(1,5), Sub(3,1));
    EXPECT_EQ(test->evaluate(), 8 );
}



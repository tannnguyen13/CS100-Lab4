#include "gtest/gtest.h"

#include "op_test.hpp"
#include "rand_test.hpp"
#include "mult_test.hpp"
#include "div_test.cpp"
#include "add_test.cpp"
#include "sub_test.cpp"
#include "pow_test.cpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

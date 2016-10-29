
#include <gtest/gtest.h>
#include "./lib.h"

TEST(testcase1, test1_1) {
  EXPECT_EQ(foo(1024), 1024);
}

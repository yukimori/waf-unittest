
#include <gtest/gtest.h>
#include "./lib.h"

TEST(testcase2, test2_1) {
  EXPECT_EQ(foo(123), 123*123);
}

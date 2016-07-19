
#include <gtest/gtest.h>
#include "myint.h"

class MyIntTest : public ::testing::Test {
 protected:
    MyInt mi;
};

TEST_F(MyIntTest, isOdd) {
    mi.set(5);
    EXPECT_EQ(true, mi.isOdd());
    // MyInt  mi1_ = MyInt(10);
    // EXPECT_EQ(false, mi1_.isOdd());

    // MyInt  mi2_ = MyInt(13);
    // EXPECT_EQ(true, mi2_.isOdd());
}

// TEST_F(MyIntTest, isEven) {
//     mi1_ = MyInt(10);
//     EXPECT_EQ(true, mi1_.isEven());

//     mi2_ = MyInt(13);
//     EXPECT_EQ(false, mi2_.isEven());
// }

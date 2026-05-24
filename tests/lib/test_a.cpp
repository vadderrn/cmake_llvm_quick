#include <gtest/gtest.h>
#include "a.h"

TEST(LibATest, ReturnsOxA) {
    EXPECT_EQ(getA(), 0xa);
}

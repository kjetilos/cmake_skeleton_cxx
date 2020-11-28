#include "gtest/gtest.h"
#include "skeleton/foo.hpp"

TEST(FooTest, HandleAdd) {
    Foo f(32);
    EXPECT_EQ(5, f.add(3, 2));
}

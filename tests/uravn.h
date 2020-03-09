#include <gtest/gtest.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(uravn1, suite1)
{
    struct roots root;
    root = uravn(1, 3, -4);
    // tests
    ASSERT_EQ(root.x1, -4);
    ASSERT_EQ(root.x2, 1);
}

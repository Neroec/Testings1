#include <gtest/gtest.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(uravn1, suite1)
{
    int x[2];
    x = uravn(1, 3, -4);
    // tests
    ASSERT_EQ(x[0], -4);
    ASSERT_EQ(x[1], 1);
}

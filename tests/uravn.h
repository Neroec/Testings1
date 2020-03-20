#include <gtest/gtest.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(uravn_positive, positive_discriminant)
{
    struct roots root;
    root = uravn(1, 3, -4);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 1);
    ASSERT_EQ(root.x1, 1);
    ASSERT_EQ(root.x2, -4);
}

TEST(uravn_positive, zero_discriminant)
{
    struct roots root;
    root = uravn(5, 0, 0);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 0);
    ASSERT_EQ(root.x1, 0);
}

TEST(uravn_negative, negative_discriminant)
{
    struct roots root;
    root = uravn(3, 0, 10);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, -1);
}

TEST(uravn_negative, non_quadratic_equation)
{
    struct roots root;
    root = uravn(0, 0, 0);
    // tests
    ASSERT_EQ(root.quadratic_equation, 0);
}

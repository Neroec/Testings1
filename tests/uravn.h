#include <gtest/gtest.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(uravn_positive, positive_discriminant1)
{
    struct roots root;
    root = uravn(1, 3, -4);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 1);
    ASSERT_EQ(root.x1, 1);
    ASSERT_EQ(root.x2, -4);
}

TEST(uravn_positive, positive_discriminant2)
{
    struct roots root;
    root = uravn(1, -70, 600);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 1);
    ASSERT_EQ(root.x1, 60);
    ASSERT_EQ(root.x2, 10);
}

TEST(uravn_positive, positive_discriminant3)
{
    struct roots root;
    double a = -1, b = 3;
    double x2 = a / b;
    root = uravn(3, -14, -5);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 1);
    ASSERT_EQ(root.x1, 5);
    ASSERT_EQ(root.x2, x2);
}

TEST(uravn_positive, zero_discriminant1)
{
    struct roots root;
    root = uravn(5, 0, 0);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 0);
    ASSERT_EQ(root.x1, 0);
}

TEST(uravn_positive, zero_discriminant2)
{
    struct roots root;
    root = uravn(1, 2, 1);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 0);
    ASSERT_EQ(root.x1, -1);
}

TEST(uravn_positive, zero_discriminant3)
{
    struct roots root;
    root = uravn(3, -18, 27);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, 0);
    ASSERT_EQ(root.x1, 3);
}

TEST(uravn_negative, negative_discriminant1)
{
    struct roots root;
    root = uravn(4, 0, 36);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, -1);
}

TEST(uravn_negative, negative_discriminant2)
{
    struct roots root;
    root = uravn(3, 0, 10);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, -1);
}

TEST(uravn_negative, negative_discriminant3)
{
    struct roots root;
    root = uravn(-4, 8, -20);
    // tests
    ASSERT_EQ(root.quadratic_equation, 1);
    ASSERT_EQ(root.discriminant, -1);
}

TEST(uravn_negative, non_quadratic_equation1)
{
    struct roots root;
    root = uravn(0, 0, 0);
    // tests
    ASSERT_EQ(root.quadratic_equation, 0);
}

TEST(uravn_negative, non_quadratic_equation2)
{
    struct roots root;
    root = uravn(0, 0, 7);
    // tests
    ASSERT_EQ(root.quadratic_equation, 0);
}

TEST(uravn_negative, non_quadratic_equation3)
{
    struct roots root;
    root = uravn(0, 7, 0);
    // tests
    ASSERT_EQ(root.quadratic_equation, 0);
}

TEST(uravn_negative, non_quadratic_equation4)
{
    struct roots root;
    root = uravn(0, 7, 7);
    // tests
    ASSERT_EQ(root.quadratic_equation, 0);
}

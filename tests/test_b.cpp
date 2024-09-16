#include "partb.h"
#include <gtest/gtest.h>

TEST(PartB, shipping_cost_basic) { 
    ASSERT_DOUBLE_EQ(3.5, shipping_cost(0.1));
    ASSERT_DOUBLE_EQ(3.5, shipping_cost(0.99));
    ASSERT_DOUBLE_EQ(3.5, shipping_cost(1.0));
    ASSERT_DOUBLE_EQ(5.5, shipping_cost(1.1));
    ASSERT_DOUBLE_EQ(5.5, shipping_cost(2.5));
    ASSERT_DOUBLE_EQ(5.5, shipping_cost(3.0));
    ASSERT_DOUBLE_EQ(8.5, shipping_cost(3.1));
    ASSERT_DOUBLE_EQ(8.5, shipping_cost(6.6));
    ASSERT_DOUBLE_EQ(8.5, shipping_cost(10.0));
    ASSERT_DOUBLE_EQ(10.5, shipping_cost(10.01));
    ASSERT_DOUBLE_EQ(10.5, shipping_cost(19.99));
    ASSERT_DOUBLE_EQ(10.5, shipping_cost(20.0));
}
TEST(PartB, shipping_cost_error) { 
    ASSERT_DOUBLE_EQ(-1.0, shipping_cost(0.0));
    ASSERT_DOUBLE_EQ(-1.0, shipping_cost(-0.01));
    ASSERT_DOUBLE_EQ(-1.0, shipping_cost(20.01));
    ASSERT_DOUBLE_EQ(-1.0, shipping_cost(100.0));
}


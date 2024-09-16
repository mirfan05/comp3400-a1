#include "parta.h"
#include <gtest/gtest.h>

TEST(PartA, coins_to_cents_basic) { 
    ASSERT_EQ(10, coins_to_cents(1, 0, 0));
    ASSERT_EQ(5, coins_to_cents(0, 1, 0));
    ASSERT_EQ(1, coins_to_cents(0, 0, 1));
    ASSERT_EQ(0, coins_to_cents(0, 0, 0));
}
TEST(PartA, coins_to_cents_mix) { 
    ASSERT_EQ(62, coins_to_cents(4, 3, 7));
}
TEST(PartA, coins_to_cents_error) { 
    ASSERT_EQ(-1, coins_to_cents(-1, 0, 0));
    ASSERT_EQ(-1, coins_to_cents(0, -1, 0));
    ASSERT_EQ(-1, coins_to_cents(0, 0, -1));
    ASSERT_EQ(-1, coins_to_cents(-4, 3, 7));
}


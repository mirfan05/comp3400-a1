#include "partc.h"
#include <gtest/gtest.h>

TEST(PartC, add_all_evens_basic) { 
    ASSERT_EQ(2, add_all_evens(1, 2));
    ASSERT_EQ(2, add_all_evens(1, 3));
    ASSERT_EQ(2 + 4, add_all_evens(1, 4));
    ASSERT_EQ(2 + 4, add_all_evens(1, 5));
    ASSERT_EQ(2 + 4 + 6 + 8, add_all_evens(1, 8));
    ASSERT_EQ(2 + 4 + 6 + 8, add_all_evens(1, 9));

    ASSERT_EQ(6, add_all_evens(6, 7));
    ASSERT_EQ(6 + 8, add_all_evens(6, 8));
    ASSERT_EQ(6 + 8, add_all_evens(6, 9));
    ASSERT_EQ(6 + 8 + 10 + 12, add_all_evens(6, 12));
    ASSERT_EQ(6 + 8 + 10 + 12, add_all_evens(6, 13));
}
TEST(PartC, add_all_evens_same) { 
    ASSERT_EQ(2, add_all_evens(2, 2));
    ASSERT_EQ(10, add_all_evens(10, 10));
}
TEST(PartC, add_all_evens_none) { 
    ASSERT_EQ(0, add_all_evens(1, 1));
    ASSERT_EQ(0, add_all_evens(2, 1));
    ASSERT_EQ(0, add_all_evens(9, 9));
}


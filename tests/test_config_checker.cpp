#include <gtest/gtest.h>
#include "../src/ConfigChecker.h" 

TEST(ConfigCheckerTest, DetectsFreezeDay) {
    EXPECT_TRUE(ConfigChecker::isFreezeDay("2025-11-28")); // assert true for black friday
    EXPECT_TRUE(ConfigChecker::isFreezeDay("2025-11-05")); // assert true for election day
}

TEST(ConfigCheckerTest, DetectsNormalDay) {
    EXPECT_FALSE(ConfigChecker::isFreezeDay("2025-06-01")); // assert false because random day
}
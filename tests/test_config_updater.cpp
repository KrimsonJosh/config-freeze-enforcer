#include <gtest/gtest.h>
#include "../src/ConfigUpdater.h"

TEST(ConfigUpdaterTest, DefaultPolicyIsEnforced) {
    ConfigUpdater updater;
    updater.enforceDefaultPolicy();
    EXPECT_EQ(updater.getPolicy(), "REQUIRED"); // assert required because initialized to empty
}

TEST(ConfigUpdaterTest, NoPolicyOverwritten) {
    ConfigUpdater updater;
    updater.enforceDefaultPolicy();
    updater.enforceDefaultPolicy();
    EXPECT_EQ(updater.getPolicy(), "REQUIRED");
}
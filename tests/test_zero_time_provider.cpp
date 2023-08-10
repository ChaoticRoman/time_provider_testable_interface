#include <gtest/gtest.h>

#include "zero_time_provider.h"

TEST(ZeroTimeProviderTestSuite, Hour) {
  ZeroTimeProvider t;
  EXPECT_EQ(t.hour(), 0);
}

TEST(ZeroTimeProviderTestSuite, Minute) {
  ZeroTimeProvider t;
  EXPECT_EQ(t.minute(), 0);
}

TEST(ZeroTimeProviderTestSuite, Second) {
  ZeroTimeProvider t;
  EXPECT_EQ(t.second(), 0);
}

#include <gtest/gtest.h>

#include "zero_time_provider.h"

#define SUITE ZeroTimeProviderTestSuite
#define PROVIDER ZeroTimeProvider

TEST(SUITE, Hour) {
  PROVIDER t;

  EXPECT_EQ(t.hour(), 0);
}

TEST(SUITE, Minute) {
  PROVIDER t;
  EXPECT_EQ(t.minute(), 0);
}

TEST(SUITE, Second) {
  PROVIDER t;
  EXPECT_EQ(t.second(), 0);
}

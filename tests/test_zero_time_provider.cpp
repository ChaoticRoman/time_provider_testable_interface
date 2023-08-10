#include <gtest/gtest.h>

#include "zero_time_provider.h"

TEST(ZeroTimeProviderTestSuite, Hours) {
  ZeroTimeProvider t;
  EXPECT_EQ(t.hour(), 0);
}

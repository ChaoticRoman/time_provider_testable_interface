#include <gtest/gtest.h>

#include <ctime>

#include "system_time_provider.h"

#define SUITE SystemTimeProviderTestSuite
#define PROVIDER SystemTimeProvider

std::tm now() {
  std::time_t now_epoch = std::time(nullptr);   // get time now
  return *std::localtime(&now_epoch);
}

TEST(SUITE, Hour) {
  PROVIDER t;
  EXPECT_EQ(t.hour(), static_cast<uint8_t>(now().tm_hour));
}

TEST(SUITE, Minute) {
  PROVIDER t;
  EXPECT_EQ(t.minute(), static_cast<uint8_t>(now().tm_min));
}

TEST(SUITE, Second) {
  PROVIDER t;
  EXPECT_EQ(t.second(), static_cast<uint8_t>(now().tm_sec));
}

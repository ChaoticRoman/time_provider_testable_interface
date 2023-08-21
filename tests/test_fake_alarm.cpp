#include <gtest/gtest.h>

#include "fake_alarm.h"

TEST(AlarmTestSuite, PlaceholderTest) {
  FakeAlarm a;

  EXPECT_EQ(a.tick(), false);
}

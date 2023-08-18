#include "system_time_provider.h"

#include <ctime>

std::tm now() {
  std::time_t now_epoch = std::time(nullptr);   // get time now
  return *std::localtime(&now_epoch);
}

uint8_t SystemTimeProvider::hour() { return static_cast<uint8_t>(now().tm_hour); }

uint8_t SystemTimeProvider::minute() { return static_cast<uint8_t>(now().tm_min); }

uint8_t SystemTimeProvider::second() { return static_cast<uint8_t>(now().tm_sec); }

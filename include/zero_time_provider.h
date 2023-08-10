#pragma once

#include "i_time_provider.h"

#include <cinttypes>

class ZeroTimeProvider : public ITimeProvider {
    public:
        uint8_t hour();
        uint8_t minute();
        uint8_t second();
        ~ZeroTimeProvider() = default;
};

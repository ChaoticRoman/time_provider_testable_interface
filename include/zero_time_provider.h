#pragma once

#include "i_time_provider.h"

#include <cinttypes>

class ZeroTimeProvider : public ITimeProvider {
    public:
        uint8_t hour() override ;
        uint8_t minute() override;
        uint8_t second() override;
        ~ZeroTimeProvider() = default;
};

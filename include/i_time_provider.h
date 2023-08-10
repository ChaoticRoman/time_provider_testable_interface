#pragma once

#include <cinttypes>

class ITimeProvider {
    public:
        virtual uint8_t hour() = 0;
        virtual uint8_t minute() = 0;
        virtual uint8_t second() = 0;
        virtual ~ITimeProvider() = default;
};

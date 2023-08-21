#pragma once

#include <ctime>

void print_time();

class IAlarm {
    /* tick call should be called periodically and returns true when alarm should be set off*/
    virtual bool tick() = 0;

    virtual ~IAlarm() = default;
};

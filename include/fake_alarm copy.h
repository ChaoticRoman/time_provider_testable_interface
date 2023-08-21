#pragma once

#include "i_alarm.h"

class FakeAlarm : public IAlarm {
    public:
        bool tick() override;
};

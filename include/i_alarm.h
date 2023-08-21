#pragma once

class IAlarm {
    public:
        /* tick call should be called periodically and returns true when alarm should be set off*/
        virtual bool tick() = 0;

        virtual ~IAlarm() = default;
};

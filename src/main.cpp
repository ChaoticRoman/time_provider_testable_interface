#include "version.h"
#include "i_time_provider.h"
#include "system_time_provider.h"
#include "time_utils.h"
#include "i_alarm.h"
#include "fake_alarm.h"

#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

int main(int argc, char* argv[]) {
    std::cout << "Alarm app, " << version << std::endl;

    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <hour> <minute>" << std::endl;
        return 1;
    }

    int hour = std::atoi(argv[1]);
    int minute = std::atoi(argv[2]);

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        std::cerr << "Invalid time input. Hour should be in [0,23] and minute should be in [0,59]." << std::endl;
        return 1;
    }

    std::tm alarm_time;
    alarm_time.tm_hour = hour;
    alarm_time.tm_min = minute;
    alarm_time.tm_sec = 0;

    std::cout << "Alarm set for ";
    print_time(alarm_time);
    std::cout << std::endl;

    std::unique_ptr<ITimeProvider> t = std::make_unique<SystemTimeProvider>();
    std::unique_ptr<IAlarm> alarm = std::make_unique<FakeAlarm>();

    bool done = false;
    while(not done)
    {
        std::tm now;
        now.tm_hour = t->hour();
        now.tm_min = t->minute();
        now.tm_sec = t->second();

        std::cout << "Time is ";
        print_time(now);
        std::cout << std::endl;

        done = alarm->tick();

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}

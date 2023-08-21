#include "version.h"
#include "i_time_provider.h"
#include "system_time_provider.h"
#include "time_utils.h"

#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

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

    std::tm alarm;
    alarm.tm_hour = hour;
    alarm.tm_min = minute;
    alarm.tm_sec = 0;

    std::cout << "Alarm set for ";
    print_time(alarm);
    std::cout << std::endl;

    std::unique_ptr<ITimeProvider> t = std::make_unique<SystemTimeProvider>();

    std::tm now;
    now.tm_hour = t->hour();
    now.tm_min = t->minute();
    now.tm_sec = t->second();

    std::cout << "Time is ";
    print_time(now);
    std::cout << std::endl;

    return 0;
}

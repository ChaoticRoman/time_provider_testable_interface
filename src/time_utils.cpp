#include <time.h>

#include <iostream>
#include <iomanip>

void print_time(const std::tm &t) {
    std::cout
        << std::setfill('0') << std::setw(2) << t.tm_hour
        << ':'
        << std::setfill('0') << std::setw(2) << t.tm_min
        << ':'
        << std::setfill('0') << std::setw(2) << t.tm_sec;
}

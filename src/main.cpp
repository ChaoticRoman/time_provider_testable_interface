#include "version.h"
#include "i_time_provider.h"
#include "system_time_provider.h"

#include <iostream>
#include <memory>
#include <iomanip>

int main() {
    std::cout << "Alarm app, " << version << std::endl;

    std::unique_ptr<ITimeProvider> t = std::make_unique<SystemTimeProvider>();
    std::cout << "Time is ";
    std::cout
        << std::setfill('0') << std::setw(2) << static_cast<int>(t->hour())
        << ':'
        << std::setfill('0') << std::setw(2) << static_cast<int>(t->minute())
        << ':'
        << std::setfill('0') << std::setw(2) << static_cast<int>(t->second());
    std::cout << std::endl;

    return 0;
}

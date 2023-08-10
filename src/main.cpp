#include "version.h"
#include "i_time_provider.h"
#include "zero_time_provider.h"

#include <iostream>
#include <memory>
#include <iomanip>

int main() {
    std::cout << "Alarm app, " << version << std::endl;

    std::unique_ptr<ITimeProvider> t = std::make_unique<ZeroTimeProvider>();
    std::cout << "Time is "
        << std::setfill('0') << std::setw(3) << t->hour()
        << ':'
        << std::setfill('0') << std::setw(3)<< t->minute()
        << std::endl;

    return 0;
}

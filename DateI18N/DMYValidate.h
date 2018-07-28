//
// Created by wolf on 7/28/18.
//

#ifndef CST276SRS02_DMYVALIDATE_H
#define CST276SRS02_DMYVALIDATE_H

#include "IDateValidator.h"

class DMYValidate : public IDateValidator
{
public:

    ~DMYValidate() = default;
    DMYValidate() = default;

    bool Validate(std::string date) noexcept(false);
    bool YearInRange(std::vector<std::string> v) noexcept(false);
    bool MonthInRange(std::vector<std::string> v) noexcept(false);
    bool DayInRange(std::vector<std::string> v) noexcept(false);
};


#endif //CST276SRS02_DMYVALIDATE_H

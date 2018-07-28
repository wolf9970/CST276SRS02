//
// Created by wolf on 7/28/18.
//

#ifndef CST276SRS02_MDYVALIDATE_H
#define CST276SRS02_MDYVALIDATE_H

#include "IDateValidator.h"

class MDYValidate : public IDateValidator
{
public:

    ~MDYValidate() = default;
    MDYValidate() = default;

    bool Validate(std::string date) noexcept(false);
    bool YearInRange(std::vector<std::string> v) noexcept(false);
    bool MonthInRange(std::vector<std::string> v) noexcept(false);
    bool DayInRange(std::vector<std::string> v) noexcept(false);
};


#endif //CST276SRS02_MDYVALIDATE_H

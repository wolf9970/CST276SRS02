//
// Created by wolf on 7/28/18.
//

#ifndef CST276SRS02_YMDVALIDATE_H
#define CST276SRS02_YMDVALIDATE_H

#include "IDateValidator.h"

class YMDValidate : public IDateValidator
{
public:

    ~YMDValidate() = default;
    YMDValidate() = default;

    bool Validate(std::string str) noexcept(false);
    bool YearInRange(std::vector<std::string> v) noexcept(false);
    bool MonthInRange(std::vector<std::string> v) noexcept(false);
    bool DayInRange(std::vector<std::string> v) noexcept(false);
};


#endif //CST276SRS02_YMDVALIDATE_H

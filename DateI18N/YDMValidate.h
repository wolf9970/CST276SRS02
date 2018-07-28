//
// Created by wolf on 7/28/18.
//

#ifndef CST276SRS02_YDMVALIDATE_H
#define CST276SRS02_YDMVALIDATE_H

#include "IDateValidator.h"

class YDMValidate : public IDateValidator
{
public:

    ~YDMValidate() = default;
    YDMValidate() = default;

    bool Validate(std::string date) noexcept(false);
    bool YearInRange(std::vector<std::string> v) noexcept(false);
    bool MonthInRange(std::vector<std::string> v) noexcept(false);
    bool DayInRange(std::vector<std::string> v) noexcept(false);
};


#endif //CST276SRS02_YDMVALIDATE_H

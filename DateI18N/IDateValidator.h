//
// Created by wolf on 7/28/18.
//

#ifndef CST276SRS02_IDATEVALIDATOR_H
#define CST276SRS02_IDATEVALIDATOR_H

#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>

class IDateValidator
{
public:
    virtual ~IDateValidator() = 0;
    IDateValidator() = default;

    virtual bool Validate(std::string str) noexcept(false) = 0;
    std::vector<std::string> ParseString(std::string date, const std::string& delim) noexcept(false);
    virtual bool YearInRange(std::vector<std::string> v) noexcept(false) = 0;
    virtual bool MonthInRange(std::vector<std::string> v) noexcept(false) = 0;
    virtual bool DayInRange(std::vector<std::string> v) noexcept(false) = 0;

};

inline IDateValidator::~IDateValidator() = default;

#endif //CST276SRS02_IDATEVALIDATOR_H

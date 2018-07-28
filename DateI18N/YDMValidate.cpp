//
// Created by wolf on 7/28/18.
//

#include "YDMValidate.h"

bool YDMValidate::Validate(std::string date)
{
    bool valid = false;
    std::vector<std::string> v = ParseString(date, "-");

    try
    {
        if (std::stoi(v[0]) >= 1990 && std::stoi(v[0]) <= 2020)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("YDM: Year out of Range [1990 - 2020]");
        }

        if (std::stoi(v[1]) > 0 && std::stoi(v[1]) <= 31)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("YDM: Day out of Range [1 - 31]");
        }

        if (std::stoi(v[2]) > 0 && std::stoi(v[2]) <= 12)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("YDM: Month out of Range [1 - 31]");
        }

    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;
}

bool YDMValidate::MonthInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool YDMValidate::DayInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool YDMValidate::YearInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

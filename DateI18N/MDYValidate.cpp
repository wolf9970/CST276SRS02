//
// Created by wolf on 7/28/18.
//

#include "MDYValidate.h"

bool MDYValidate::Validate(std::string date)
{
    bool valid = false;
    std::vector<std::string> v = ParseString(date, "-");

    try
    {
        if (std::stoi(v[0]) > 0 && std::stoi(v[0]) <= 12)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("MDY: Month out of Range [1 - 12]");
        }

        if (std::stoi(v[1]) > 0 && std::stoi(v[1]) <= 31)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("MDY: Day out of Range [1 - 31]");
        }

        if (std::stoi(v[2]) >= 1990 && std::stoi(v[2]) <= 2020)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("MDY: Year out of Range [1990 - 2020]");
        }

    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;
}

bool MDYValidate::YearInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool MDYValidate::MonthInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool MDYValidate::DayInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

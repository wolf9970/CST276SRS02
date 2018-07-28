//
// Created by wolf on 7/28/18.
//

#include "DMYValidate.h"

bool DMYValidate::Validate(std::string date)
{
    bool valid = false;
    std::vector<std::string> v = ParseString(date, "-");

    try
    {
        if (std::stoi(v[0]) > 0 && std::stoi(v[0]) <= 31)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("DMY: Day out of Range [1 - 31]");
        }

        if (std::stoi(v[1]) > 0 && std::stoi(v[1]) <= 12)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("DMY: Month out of Range [1 - 12]");
        }

        if (std::stoi(v[2]) >= 1990 && std::stoi(v[2]) <= 2020)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("DMY: Year out of Range [1990 - 2020]");
        }
    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;
}

bool DMYValidate::DayInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool DMYValidate::YearInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

bool DMYValidate::MonthInRange(std::vector<std::string> v) noexcept(false) {
    return false;
}

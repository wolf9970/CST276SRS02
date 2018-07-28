//
// Created by wolf on 7/28/18.
//

#include "YMDValidate.h"

bool YMDValidate::Validate(std::string date)
{
    bool valid = false;
    std::vector<std::string> v = ParseString(date, "-");

    if (YearInRange(v) && MonthInRange(v) && DayInRange(v))
    {
        valid = true;
    }
    return valid;
}

bool YMDValidate::YearInRange(std::vector<std::string> v) noexcept(false)
{
    bool valid = false;
    try {
        if (std::stoi(v[0]) >= 1990 && std::stoi(v[0]) <= 2020) {
            valid = true;
        } else {
            throw std::runtime_error("YMD: Year out of Range [1990 - 2020]");
        }
    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;
}

bool YMDValidate::DayInRange(std::vector<std::string> v) noexcept(false)
{
    bool valid = false;

    try
    {
        if (std::stoi(v[2]) > 0 && std::stoi(v[2]) <= 31)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("YMD: Day out of Range [1 - 31]");
        }

    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;
}

bool YMDValidate::MonthInRange(std::vector<std::string> v) noexcept(false)
{
    bool valid = false;

    try
    {
        if (std::stoi(v[1]) > 0 && std::stoi(v[1]) <= 12)
        {
            valid = true;
        }

        else
        {
            throw std::runtime_error("YMD: Month out of Range [1 - 12]");
        }
    }

    catch (const std::runtime_error& e)
    {
        std::cout << e.what();
    }

    return valid;


}

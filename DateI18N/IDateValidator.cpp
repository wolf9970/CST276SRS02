//
// Created by wolf on 7/28/18.
//

#include <stdexcept>
#include "IDateValidator.h"

std::vector<std::string> IDateValidator::ParseString(std::string date, const std::string& delim)
{
    std::vector<std::string> dateVector;

    while (!(date.empty()))
    {
        auto substringIndex = date.find(delim);

            if (substringIndex != std::string::npos)
            {
                dateVector.emplace_back(date.substr(0, substringIndex));
                date = date.substr(substringIndex + delim.size());
                if (date.empty())
                {
                    dateVector.emplace_back(date);
                }
            }

            else
            {
                dateVector.emplace_back(date);
                date = "";
            }
    }

    return dateVector;
}

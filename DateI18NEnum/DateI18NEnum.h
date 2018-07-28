//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_DATEI18NENUM_H
#define CST276SRS02_DATEI18NENUM_H

#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>

enum class DateFormat {YMD, DMY, MDY};

class DateValidator {

public:

    std::vector<std::string> ParseString(std::string date, const std::string &delim) {
        std::vector<std::string> dateVector;
        while (!(date.empty())) {
            auto index = date.find(delim);
            if (index != std::string::npos) {
                dateVector.emplace_back(date.substr(0, index));
                date = date.substr(index + delim.size());
                if (date.empty()) dateVector.emplace_back(date);
            } else {
                dateVector.emplace_back(date);
                date = "";
            }
        }
        return dateVector;
    }

    bool validYear(const std::vector<std::string>& v)
    {
        bool valid = false;
        try
        {
            if ((std::stoi(v[0]) > 1900) && (std::stoi(v[0]) <= 2099))
            {
                valid = true;
            }

            else
            {
                throw std::runtime_error("Year out of range (1901 - 2099)");
            }
        }

        catch (const std::runtime_error& e)
        {
            std::cout << e.what();
        }

        return valid;
    }

    bool validMonth(const std::vector<std::string>& v)
    {
        bool valid = false;
        try
        {
            if (std::stoi(v[1]) > 0 && std::stoi(v[1]) < 12) {
                valid = true;
            } else {
                throw std::runtime_error("Month out of range (1 - 12)");
            }
        }

        catch(const std::runtime_error& e)
        {
            std::cout << e.what();
        }
    }

    bool validDay(const std::vector<std::string>& v);

private:

    std::vector<std::string> d;
    //auto year_ = 0;
    //auto month_ = 0;
    //auto day_ = 0;

};

#endif //CST276SRS02_DATEI18NENUM_H

//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_DATEI18N_H
#define CST276SRS02_DATEI18N_H

#include "IDateValidator.h"

class DateI18N
{
private:
    IDateValidator* dateFormat_;
    std::string date_;

public:
    explicit DateI18N(IDateValidator* format, std::string date)
        : dateFormat_(format), date_(std::move(date))
    {

    }

    bool DateValidate()
    {
        return dateFormat_->Validate(date_);
    }
};


#endif //CST276SRS02_DATEI18N_H

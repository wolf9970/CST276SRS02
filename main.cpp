//
// Created by wolf on 7/21/18.
//

#include "DateI18N/DateI18N.h"
#include "DateI18N/YMDValidate.h"
#include "DateI18N/YDMValidate.h"
#include "DateI18N/DMYValidate.h"
#include "DateI18N/MDYValidate.h"

int main()
{
    DateI18N date(new YMDValidate, "1990-12-31");
    date.DateValidate();

    //DateI18N date1(new YDMValidate, "2018-12-5");
    //date1.DateValidate();

    //DateI18N date2(new DMYValidate, "31-06-2012");
    //date2.DateValidate();

    //DateI18N date3(new MDYValidate, "12-16-2016");
    //date3.DateValidate();

    return 0;
}

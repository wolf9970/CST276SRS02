//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_CONCRETESTRATEGYC_H
#define CST276SRS02_CONCRETESTRATEGYC_H

#include "Strategy.h"

class ConcreteStrategyC : public Strategy
{
public:

    ConcreteStrategyC() = default;
    ~ConcreteStrategyC() = default;

    void AlgorithmInterface()
    {
        //Strat C
    }
};


#endif //CST276SRS02_CONCRETESTRATEGYC_H

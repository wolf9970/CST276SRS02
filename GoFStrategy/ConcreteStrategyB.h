//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_CONCRETESTRATEGYB_H
#define CST276SRS02_CONCRETESTRATEGYB_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:

    ConcreteStrategyB() = default;
    ~ConcreteStrategyB() = default;

    void AlgorithmInterface()
    {
        //Strat B
    }
};


#endif //CST276SRS02_CONCRETESTRATEGYB_H

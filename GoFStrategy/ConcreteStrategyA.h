//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_CONCRETESTRATEGYA_H
#define CST276SRS02_CONCRETESTRATEGYA_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:

    ConcreteStrategyA() = default;
    ~ConcreteStrategyA() = default;

    void AlgorithmInterface()
    {
        //Strat A
    }
};


#endif //CST276SRS02_CONCRETESTRATEGYA_H

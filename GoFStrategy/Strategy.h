//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_STRATEGY_H
#define CST276SRS02_STRATEGY_H

#include <iostream>

class Strategy
{
public:
    virtual ~Strategy() = 0;
    Strategy() = default;
    virtual void AlgorithmInterface() = 0;
};

inline Strategy::~Strategy() = default;

#endif //CST276SRS02_STRATEGY_H

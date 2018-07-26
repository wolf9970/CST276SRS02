//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_CONTEXT_H
#define CST276SRS02_CONTEXT_H

#include "Strategy.h"

class Context
{
private:
    Strategy* strategy_;

public:

    Context() = default;
    ~Context() = default;

    explicit Context(Strategy* strategy)
        : strategy_(strategy)
    {

    }

    void ContextInterface()
    {
        return strategy_->AlgorithmInterface();
    }

};

#endif //CST276SRS02_CONTEXT_H

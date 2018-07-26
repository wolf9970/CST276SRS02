//
// Created by wolf on 7/21/18.
//

#include "GoFStrategy/Context.h"
#include "GoFStrategy/ConcreteStrategyA.h"
#include "GoFStrategy/ConcreteStrategyB.h"
#include "GoFStrategy/ConcreteStrategyC.h"

int main()
{
    auto* c1{new ConcreteStrategyA};
    auto* c2{new ConcreteStrategyB};
    auto* c3{new ConcreteStrategyC};

    c1->AlgorithmInterface();
    c2->AlgorithmInterface();
    c3->AlgorithmInterface();

    return 0;
}

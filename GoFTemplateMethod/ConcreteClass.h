//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_CONCRETECLASS_H
#define CST276SRS02_CONCRETECLASS_H


#include "AbstractClass.h"

class ConcreteClass : public AbstractClass
{
public:
    void PrimitiveOperation1()
    {
        std::cout << "PrimOp1 of Subclass" << std::endl;
    }

    void PrimitiveOperation2()
    {
        std::cout << "PrimOp2 of Subclass" << std::endl;
    }
};


#endif //CST276SRS02_CONCRETECLASS_H

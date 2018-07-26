//
// Created by wolf on 7/21/18.
//

#ifndef CST276SRS02_ABSTRACTCLASS_H
#define CST276SRS02_ABSTRACTCLASS_H

class AbstractClass
{
public:
    void TemplateMethod()
    {
        //...
        PrimitiveOperation1();
        //...
        PrimitiveOperation2();
        //...
    }

    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;
};


#endif //CST276SRS02_ABSTRACTCLASS_H

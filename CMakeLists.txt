cmake_minimum_required(VERSION 3.10)
project(CST276SRS02)

set(CMAKE_CXX_STANDARD 17)

add_executable(CST276SRS02 main.cpp DateI18NEnum/DateI18NEnum.h DateI18N/DateI18N.cpp DateI18N/DateI18N.h GoFTemplateMethod/AbstractClass.h GoFTemplateMethod/ConcreteClass.cpp GoFTemplateMethod/ConcreteClass.h GoFStrategy/Strategy.h GoFStrategy/Context.h GoFStrategy/ConcreteStrategyC.h GoFStrategy/ConcreteStrategyB.h GoFStrategy/ConcreteStrategyA.h)
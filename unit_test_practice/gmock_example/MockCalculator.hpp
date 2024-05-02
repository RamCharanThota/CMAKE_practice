#ifndef MOCKCALCULATOR_HPP
#define MOCKCALCULATOR_HPP

#include "gmock/gmock.h"
#include "Calculator.hpp"

class MockCalculator : public Calculator {
public:
    MOCK_CONST_METHOD2(add, int(int a, int b));
};

#endif // MOCKCALCULATOR_HPP

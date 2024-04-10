#pragma once

class SomeNum
{
    int number;
    const int defaultNumber;
    int& alias;

public:
    SomeNum(int value = 10) : number{ value }, defaultNumber(value), alias(value) {}

    int getNumber() const { return number; };
    const int getDefaultNumber() const { return defaultNumber; };

    int& getAlias() { return alias; };
    const int& getAlias() const { return alias; };

    void setNumber(int pNumber);
};






#include <iostream>

class SomeNum
{
    int number;

public:
    SomeNum(int value = 10) : number{ value } {}
    int getNumber() const;
    void setNumber(int pNumber);
};

int SomeNum::getNumber() const {
    return number;
}

void SomeNum::setNumber(int pNumber)
{
    //Some conditions
    if (true)
        number = pNumber;
}

int main()
{
    std::cout << "Hello World!\n";
}
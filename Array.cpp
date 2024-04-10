#include "Array.h"

Array::Array(int pSize) : size(pSize), array(nullptr)
{
    array = new int[size];
}

Array::Array(int pSize, int pDefaultValue) : Array(pSize)
{
    for (int i = 0; i < pSize; i++)
        array[i] = pDefaultValue;
}

Array::~Array()
{
    delete[] array;
}

int Array::getValue(int index) const
{
    return array[index];
}

void Array::setValue(int index, int value)
{
    array[index] = value;
}

void Array::display(int index) const
{
    std::cout << array[index] << " ";
}
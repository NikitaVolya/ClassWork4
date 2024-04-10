#pragma once

#include <iostream>

class Array {
    int* array;
    int size;
public:
    explicit Array(int pSize = 10);
    Array(int pSize, int pDefaultValue);
    ~Array();
    int getSize() const {
        return size;
    }
    int getValue(int index) const;
    void setValue(int index, int value);
    void display(int index) const;
};




#include <iostream>
#include "Array.h"

using namespace std;



void display(const Array& array)
{
    for (int i = 0; i < array.getSize(); i++)
    {
        array.display(i);
    }
    cout << endl;
}

int main()
{
    cout << "Dynamic integer array" << endl;
    int size = 4;
    Array array(size, 5);
    array.setValue(1, 2);
    display(array);
    return 0;
}
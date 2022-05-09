#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout << sizeof(*arr);
    cout << "enter the size of integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << "..";
    arr = new int[size];

    cout << "\n Dynamic allocation of memory for array arr is successful.";

    delete arr;

    return 0;
}
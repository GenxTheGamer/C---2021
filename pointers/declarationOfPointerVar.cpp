#include <iostream>
using namespace std;

int main()
{

    int x = 5;

    int *ptr;
    ptr = &x;

    cout << "*ptr = " << *ptr << endl;
    cout << "ptr = " << ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    cout << "&x = " << &x << endl;

    return 0;
}
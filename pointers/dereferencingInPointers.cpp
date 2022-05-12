#include <iostream>
using namespace std;

int main()
{

    int x = 2;

    int *ptr = &x; // We made pointer variable ptr and pointed it towards address of x.
    cout << "value of ptr = " << *ptr << endl;
    cout << "address of x = " << ptr << endl;

    // Now we will try to change the address using pointer variable.
    *ptr = 20;

    cout << "*ptr =  , value of ptr is " << *ptr << endl;

    return 0;
}
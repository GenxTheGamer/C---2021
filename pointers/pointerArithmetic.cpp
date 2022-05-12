#include <iostream>
using namespace std;

int main()
{

    int x[3] = {10, 100, 200};

    int *ptr;

    ptr = x;

    for (int i = 0; i < 3; i++)
    {
        cout << "value of *ptr = " << *ptr << endl;
        cout << "value of ptr = " << ptr << endl;
        cout << endl;
        ptr++;
    }

    return 0;
}
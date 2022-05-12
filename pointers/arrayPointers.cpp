#include <iostream>
using namespace std;

int main()
{

    int v[3] = {10, 200, 300};

    int *ptr;

    ptr = v;

    cout << "v[0] =" << ptr[0] << endl
         << "v[1] =" << ptr[1] << endl
         << "v[2] =" << ptr[2] << endl;

    return 0;
}
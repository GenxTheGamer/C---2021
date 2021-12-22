#include <iostream>
using namespace std;

//Displays Table of Given number;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
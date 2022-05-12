#include <iostream>
using namespace std;

//Creating a program to calculate which number is greater among 3 provided numbers by the user.

int main()
{

    int num1, num2, num3; //Initialized 3 variables

    cout << "Enter the numbers which you want to compare in order 'Num1 Num2 Num3': " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "num1 is greatest";
        }
        else
        {
            cout << "num3 is greatest";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "num2 is greatest";
        }
        else
        {
            cout << "num3 is greatest";
        };
    }

    return 0;
}
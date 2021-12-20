#include <iostream>
using namespace std;

int main()
{

    int savings; //declared Savings variable.
    cout << "Enter your savings: ";
    cin >> savings; //Taking Input from user.

    if (savings > 5000) //If Savings is Greater than 5000
    {
        cout << "I am buying :)" << endl; //Perform this task
    }
    else //Otherwise
    {
        cout << "I am saving" << endl; //Perform this task
    }

    return 0;
}
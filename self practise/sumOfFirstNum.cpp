#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number range: ";
    cin >> num;

    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "sum is: " << sum << endl;
}
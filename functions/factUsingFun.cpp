#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    int answer = fact(n);
    cout << answer;
}
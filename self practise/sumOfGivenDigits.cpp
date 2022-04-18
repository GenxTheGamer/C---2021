#include <iostream>
using namespace std;

int main()
{
    int n1, n2, r, sum = 0;
    cin >> n1;
    n2 = n1;
    while (n1 > 0)
    {
        r = n1 % 10;
        n1 = n1 / 10;
        sum = sum + r;
    }
    cout << sum << endl;
}
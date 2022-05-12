#include <iostream>
using namespace std;

void checkCondition(int x, int h)
{
    if (x > h)
    {
        cout << "Yes" << endl;
    }
    else if (x < h)
    {
        cout << "No" << endl;
    }
    else if (x == h)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    int x, h;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> h;
        checkCondition(x, h);
    }

    return 0;
}

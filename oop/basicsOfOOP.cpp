#include <iostream> //
using namespace std;

int m = 10; // Global m

int main()
{
    /*-----Reference Variable concept -----*/
    int x = 10;
    int &y = x; // Reference Variable.
    cout << y << endl;
    cout << "---------------------" << endl;

    /* ---------------------------------- */

    /*-----Global Variable & inner outer block concept -----*/
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "we are in inner block \n";
        cout << "k= " << k << endl;
        cout << "m= " << m << endl;
        cout << "::m= " << ::m << endl;
    }
    cout << " " << endl;
    cout << "we are in outer block \n";
    cout << "m= " << m << endl;
    cout << "::m= " << ::m << endl;

    /* ---------------------------------- */

    return 0; // Type of function is int so we have to return something. In main() we generally return 0.
}
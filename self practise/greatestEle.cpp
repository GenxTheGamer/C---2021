#include <iostream>
using namespace std;

int main()
{
    int i, n, largest, largest2, loopCount = 0, maxpos = 1, smallest;
    float arr[100];
    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;
    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }
    // finding smallest to provide lesser value to largest when finding next largest
    smallest = arr[0];
    for (i = 1; i < n; ++i)
    {
        if (smallest > arr[i])
            smallest = arr[i];
    }

    // this variable store max value in every iteration or nth max value
    largest = arr[0];
    for (int j = 0; j < maxpos; j++)
    {
        if (j = 1)
        {
            loopCount = 1;
        }
        else
        {
            if (arr[i] < largest2 && largest < arr[i])
            {
                largest = arr[i];
            }
        }
        for (i = 1; i < n; ++i)
        {
            if (loopCount == 0)
            {
                if (largest < arr[i])
                    largest = arr[i];
            }
        }

        largest2 = largest;
        largest = smallest;
    }
    cout << endl
         << "Largest element = " << largest;

    return 0;
}
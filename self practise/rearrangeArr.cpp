#include <iostream>
using namespace std;

void fixThisArray(int arr[], int n)
{
    int i, j, temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = -1;
        }
    }

    cout << "array after rearranging : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {-1, 10, -1, 6, 4, 2, -1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    fixThisArray(arr, n);
}
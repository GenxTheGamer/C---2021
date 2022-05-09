#include <iostream>
using namespace std;

// void rotateArrLeft(int arr[], int n)
// {
//     int temp = arr[0], i;

//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
// }

// void rotateArr(int arr[], int n, int u)
// {
//     for (int i = 0; i < u; i++)
//     {
//         rotateArrLeft(arr, n);
//     }
// }

// void printArr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter n: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int u;
//     cout << "enter u: ";
//     cin >> u;

//     rotateArr(arr, n, u);
//     printArr(arr, n);
// }

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int d, int n)
{
    if (d == 0)
        return;

    d = d % n; // if rotating factor is greater than array length.

    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotateArray(arr, d, n);
    printArr(arr, n);
}
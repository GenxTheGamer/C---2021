#include <iostream>
using namespace std;

void rotateByLeft(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void rotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        rotateByLeft(arr, n);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "Enter element from which you want to rotate: ";
    cin >> d;

    rotate(arr, d, n);
    printArray(arr, n);

    return 0;
}
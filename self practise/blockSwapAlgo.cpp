#include <iostream>
using namespace std;







void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int n = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}
#include <iostream>
using namespace std;
void shiftArray(int arr[], int n)
{

    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i-1];

    }
    // copy karo Value
        arr[0] = temp;
}
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr , 6);
    shiftArray(arr , 6);
    printArray(arr , 6);
    shiftArray(arr , 6);

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int start, int mid, int end)
{

    int *temp = new int[end - start + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }

    // finally coping values in orignal array.

    for (int i = start, k = 0; i <= end; i++, k++)
    {
        arr[i] = temp[k];
    }

    delete []temp;
}
void mergeSort(int arr[], int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;

    // left part

    mergeSort(arr, start, mid);

    // right part

    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}
int main()
{

    int arr[] = {99, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printArray(arr, 9);

    return 0;
}
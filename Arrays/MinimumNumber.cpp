#include <iostream>
#include <limits.h>
#include<algorithm>
int findminimumArray(int arr[], int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];

        }
    }
    return min;
}
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 6, -201, -1};
    int minimum = findminimumArray(arr, 7);

    cout<<"The Minimum Number is "<<minimum<<endl;
        return 0;
}
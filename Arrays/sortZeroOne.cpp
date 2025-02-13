#include<iostream>
using namespace std;
void printArray(int arr[]  , int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
cout<<endl;
}
void sortZeroOne(int arr[] , int n){

    int zeros = 0;
    int ones = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zeros++;
        }
        if(arr[i]== 1){
            ones++;
        }
    }
 

        int i;
        for(i=0;i<zeros;i++){
            arr[i] = 0;
        }
        for(int j=i;j<n;j++){
            arr[j] = 1;
        }
}
int main(){


int arr[] = {1,1 ,0, 1 ,0, 1,1 ,0, 0};
int n = 9;
printArray(arr, 9);

sortZeroOne(arr , 9);
printArray(arr, 9);



    return 0;
}
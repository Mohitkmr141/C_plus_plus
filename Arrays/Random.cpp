#include<iostream>

using namespace std;
void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

void sumof(int arr[] , int n){
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"The Sum of an Array "<<sum;
}
int main(){


    // int arr[2] = {1};
    // arr[0] = 1;
    // arr[1]  = 2;
    // arr[2] = 3;
    // arr[423] = 1233;
    // cout<<arr[423]<<endl;

    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // cout<<endl;
    // printArray(arr , 3);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

 printArray(arr , n);

sumof(arr , n);


    

  


    


    return 0;
}
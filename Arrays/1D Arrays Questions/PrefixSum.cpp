#include<iostream>
#include<array>

using namespace std;
int main(){


int arr[] = {1,4,5,3,2,7,6};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<n;i++){
    arr[0] = 1;
    arr[i] = arr[i]+ arr[i-1];

cout<<arr[i]<<" ";

}
cout<<endl;



    return 0;
}
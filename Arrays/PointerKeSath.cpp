#include<iostream>
using namespace std;
int main(){

int arr[] = {12,3,4,5,6}; 
  int size  = sizeof(arr)/ sizeof(arr[0]);
// int *ptr  = arr;
int *ptr  = &arr[0];
// cout<<(*ptr)++<<endl;



  for(int i=0;i<size;i++){
    cout<<i[ptr]<<" ";
  }


    return 0; 
}
#include<iostream>
using namespace std;
void printArray(int arr[] , int n){

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

}
void changeArray(int arr[] ,int n ,int index  ){

if(index== n){
  printArray(arr , n);
  return;
}
arr[index] = index+1;
changeArray(arr , n , index+1);
arr[index] -= 2;

}


int main(){


int arr[5] = {0};
int n = 5;
changeArray(arr , n , 0);
printArray(arr , n);


    return 0;
}
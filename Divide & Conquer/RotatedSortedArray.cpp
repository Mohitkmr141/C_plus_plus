#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int rotatedSortedArray(int arr[] , int start , int end , int target){

    if(start>end){
        return -1;
    }

    int mid = start + (end- start)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[start]<=arr[mid]){
        // line 1 case A
        if(arr[start]<=target && target >arr[mid]){
         return    rotatedSortedArray(arr , start , mid-1 , target);

        }
    }else{
        // case b ;

       return  rotatedSortedArray(arr , mid+1 , end , target);
    }

    if(arr[mid]<=target && target<=arr[end]){

        //  case 1

       return  rotatedSortedArray(arr , mid+1 , end , target);
    }else{
      return   rotatedSortedArray(arr , start , mid-1 , target);


}
}


int main(){



int arr[] = {4,5,6,7,0,1,2};
int n = sizeof(arr)/sizeof(arr[0]);
rotatedSortedArray(arr , 0 , n-1 , 5);
    return 0;
}
#include<iostream>
using namespace std;
void printArray(int arr[], int n) { for (int i = 0; i < n; i++) { cout << arr[i] << " "; } cout << endl; }

int partition(int arr[] , int start , int end){

  int pivot = arr[start];
  int count =0;

  for(int i=start+1;i<=end;i++){
    if(arr[i]<=pivot){
      count++;
    }
  }
  int pivotIdx = start + count;
  swap(arr[start] , arr[pivotIdx]);
  int i=start;
  int j = end;

  while(i<pivotIdx && j > pivotIdx){

    if(arr[i] < pivot) i++;
    if(arr[j] > pivot) j--;
    else if(arr[i] > pivot && pivot > arr[j]){
      swap(arr[i] , arr[j]);
      i++ ;j--;
      
    }
    
  }
  return pivotIdx;
  
}
void quickSort(int arr[] , int start , int end){

  int pi = partition(arr ,start ,end);
  quickSort(arr , 0 ,pi-1);
quickSort(arr , pi+1 , end);}
int main(){

  



  int arr[] = {9,8,7,6,5,4,3,2,1};
  int n  =9;
  printArray(arr,  n);
  quickSort(arr , 0 , n-1);
  printArray(arr,  n);
  


  
  return 0 ;
}
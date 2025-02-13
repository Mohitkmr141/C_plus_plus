#include <iostream>
using namespace std;
bool linearSearch(int arr[] , int n , int target){

   
    for(int i=0;i<n;i++){
        if(arr[i] == target){

            return true;
            
        }
    }
    return false;
}

    int main(){

    
    int arr[] = {9, 7, 6, 5, 4};
  
  bool found =  linearSearch(arr , 5 , 41);
  if(found == true){
    cout<<"Element found"<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }
    return 0;
}
#include<iostream>
using namespace std;

void triplets(int arr[] , int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){

                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" ";
            }cout<<endl;
        }
    }

}
int main(){

int arr[] = {1,2,3,4};
int n = 4;
triplets(arr , 4);



    return 0;
}
#include<iostream>
using namespace std;

void zeroandOnes(int arr[] , int n){
    int countZero =  0;
    int countOne = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i] == 1){
            countOne++;
        }
    }
    cout<<"The Zero's are "<<countZero<<endl;
     cout<<"The One's are "<<countOne<<endl;
    

}
int main(){


    int arr[] = {1,1,1,1,0,1,0 ,1};
    zeroandOnes(arr ,8);




    return 0;
}
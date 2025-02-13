#include<iostream>
#include<stack>
using namespace std;
void nextSmallest(int *arr , int n){

stack <int> st;
int *ans  = new int[n];
ans[n-1] = -1;
st.push(n-1);

for(int i=n-2;i>=0;i--){
    while(!st.empty() && arr[st.top()]>= arr[i]){
        st.pop();
    }
    if(st.empty()){
     ans[i] = -1;
    }
        
    else{
        ans[i] = arr[st.top()];
    }
    st.push(i);
}
for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    delete []ans;


}
int main(){

int arr[] = {100 , 80 , 70 , 60 , 50 , 40};
int n = sizeof(arr)/sizeof(arr[0]);
nextSmallest(arr  ,n);


return  0 ;
}
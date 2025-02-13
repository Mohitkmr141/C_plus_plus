#include<iostream>
#include<stack>
using namespace std;
void previousGreaterElement(int *arr , int n){

    stack <int> st;
    int *ans = new int[n];
    ans[0] = -1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<= arr[i]){
            st.pop();
        }if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }
        st.push(i);
    }
        for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
delete []ans;
}
void nextGreaterElement(int *arr , int n){

    int *ans = new int[n];
    stack <int> st;

    ans[n-1] = -1;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        } 
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i]  = st.top();
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


int arr[] = {6, 8, 0, 1, 3}; 
int n = sizeof(arr) / sizeof(arr[0]);
previousGreaterElement(arr ,n);



    return 0;
}
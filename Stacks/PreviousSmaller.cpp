#include<iostream>
#include<stack>

using namespace std;
void previousElement(int *arr , int n){
    stack <int> st;
    int *ans = new int[n];
    ans[0] = -1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()] >=arr[i]){
            st.pop();
        }if(st.empty()){
            ans[i] = -1;
        }else{
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

int arr[] = {1,2,3,4,5,6,7};
  for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

previousElement(arr ,7 );


    return 0;
}
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseStack(queue <int> &q){

    stack <int> st;
    int n = q.size();
    for(int i=0;i<n;i++){

        int x = q.front();
        st.push(x);
        q.pop();
    }

    while(!st.empty()){

        int x = st.top();
        cout<<x<<" ";
        st.pop();
    }
}
void display(queue <int> &q){

   int n = q.size();

   for(int i=0;i<n;i++){

    int x = q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
   }
   cout<<endl;


}
void reverse(queue<int> &q){

int n  = q.size();
int *arr = new int[n];
for(int i=0;i<n;i++){

    int x = q.front();
    q.pop();
    arr[i] = x;


}

for(int i=n-1;i>=0;i--){

    q.push(arr[i]);


}

for(int i=0;i<n;i++){

    int x = q.front();
    cout<<x<<" ";
    q.pop();


}



}
int main(){

   queue <int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);

  reverseStack(q);










    return 0;
}
#include<iostream>
using namespace std;
int main(){

  int n = 19;
  int &k = n;
  int&c = n;

  cout<<" k "<<k<<endl;
  cout<<" c "<<c<<endl;

    k++;
    cout<<n<<endl;
n+= 3;
cout<<" n "<<n<<endl;

    return 0;
}
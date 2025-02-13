#include<iostream>
#include<string>
using namespace std;
int main(){

int n = 9874;
int rev = 0;
int last = 0;

while(n > 0){

    rev = rev*10;
    last = n % 10;
    rev+=last;
    n = n/10;
}


cout<<rev<<endl;

    return 0;
}
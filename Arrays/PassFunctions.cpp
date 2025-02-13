#include<iostream>
using namespace std;
void swapNumbers(int &a , int &b);
int main(){

    int m = 12;
     int n= 54;
     swapNumbers(m ,n);




    return 0;
}

void swapNumbers(int &a , int &b){

     cout<<"The value of a before is "<<a<<endl;
    cout<<"The value of b before is "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

}
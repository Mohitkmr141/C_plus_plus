#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
int row = i;
        for(int j=1;j<=i;j++){

            cout<<row;
            row++;
        }
        cout<<endl;
    }
}
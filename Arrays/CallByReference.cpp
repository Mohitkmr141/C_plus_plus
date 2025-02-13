#include <iostream>
using namespace std;
void incrementByOne(int &n)
{   
    cout<<&n<<endl;

    n += 1;
    
 
}
int main()
{

    int n;
    cin >> n;
 
    incrementByOne(n);

    cout<<"Value Increased"<<n<<endl;

    return 0;
}
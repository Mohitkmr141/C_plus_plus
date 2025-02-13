#include<iostream>
#include<unordered_set>
using namespace std;
int main(){

    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

   int target = 4;

   if(s.find(target)!= s.end()){
    cout<<"exists"<<endl;

   }else{
    cout<<"Does not exists "<<endl;
   }
    // for each loop

    // for(int i :s){
    //     cout<<i<<" ";
    // }
    // cout<<"The size is "<<s.size()<<endl;

    
    


    // Sets or Hash Sets.



    









    return 0;
}
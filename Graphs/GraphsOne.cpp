#include<iostream>
#include<list>
using namespace std;
    class Node{

        public:
        int data;
        Node *left;
        Node *right;


        Node(int data){
            this->data = data;
            this->left = left;
            this->right = right;
        }

    };


int main(){

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout<<l.back();

    
    


    return 0;
}
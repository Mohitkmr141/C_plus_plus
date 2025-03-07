#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Node{

    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){

    Node *a = new Node(1);
    Node *b = new Node(3);
    Node *c = new Node(5);
    Node *d = new Node(33);
    cout<<a->next->data<<endl;




    return 0;


}
#include<iostream>
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
Node *b = new Node(2);
Node *c = new Node(3);

cout<<a->next->data<<endl;


    return 0;
}
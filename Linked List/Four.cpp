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

class Linkedlist{

    Node *head = NULL;
    Node *tail = NULL;
    int size ;

    Linkedlist(){
         head = tail = NULL;
        size = 0;
    }
    
};

void deleteNode(Node *a ,int target){

Node *temp = a;
while(temp->next->data!=target){
    temp = temp->next;

}
temp->next->data = temp->next->next->data;
}
void display(Node *a){

    Node *temp = a;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;


    }
}
int main(){

Node *a = new Node(1);
Node *b = new Node(2);
Node *c = new Node(3);
Node *d = new Node(4);

Node *e = new Node(5);
Node *f = new Node(6);
Node *g = new Node(7);
a->next = b;
b->next = c;
c->next = d;
d->next = e;
e->next = f;
f->next = g;
g->next = NULL;
display(a);
deleteNode(a , d);
cout<<endl;

display(a);





    return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void display(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayR(Node *head){
    if(head == NULL){
        return ;
    }
  Node *temp = head;
  cout<<temp->val<<" ";
  displayR(temp->next);


    
    
}
void reverse(Node *head){
    if(head == NULL){
        return ;

    }
    reverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(11);
    Node *c = new Node(22);
    Node *d = new Node(33);
    Node *e = new Node(65);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    display(a);
    cout << size(a) << endl;
    displayR(a);
    cout<<endl;
    reverse(a);

    return 0;
}
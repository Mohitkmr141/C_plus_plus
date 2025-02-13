#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linkedlist
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size;

    Linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    int getAtIdx(int index){

        Node * temp = head;
        int getVal   = -1;
        for(int i=1;i<=index;i++){
            temp = temp->next;

        }
        getVal = temp->data;
        return getVal;
    }

    void deleteAtIndex(int index){
        if(index  < 0 || index > size){
            cout<<"Deletion not possible"<<endl;
            return;
        }
        else if(index == 0){
            head = head->next;
            size--;
            
        }
        else if(index ==size-1){
            tail = tail->next;
            tail->next =NULL;
            size--;
        }else{
            Node *temp;
            for(int i=1;i<=index-1;i++){
                temp =temp->next;

            }
            temp->next  = temp->next->next;
            size--;

        }

    }
    void insertAtEnd(int data)
    {

        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = tail = temp;
            size++;
        }
        else
        {

            tail->next = temp;
            tail = temp;
            size++;
        }
    }

    void insertAtBegin(int data)
    {
        Node *temp = new Node(data);

        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insert(int data, int index)
    {

        if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
        }
       else if (index == size)
        {
            insertAtEnd(data);
        }
        else if (index == 0)
        {
            insertAtBegin(data);
        }
        
        else

        {
            Node *t = new Node(data);

            Node *temp = head;

            for (int i = 1; i <= index-1; i++)
            {

                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    Linkedlist ll;
    ll.insertAtBegin(1);
    ll.insertAtEnd(2);
    ll.display();
    ll.insertAtEnd(3);
    ll.display();
    ll.insert(1001 ,2);
ll.display();
    cout<<ll.size<<endl;
   cout<< ll.getAtIdx(2);
   
    

  

    return 0;
}
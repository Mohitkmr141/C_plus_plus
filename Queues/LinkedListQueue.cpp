#include <iostream>
#include <queue>
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

class LinkedList
{

    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {

        head = tail = NULL;
        size = 0;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop()
    {

        if (size == 0)
        {
            cout << "Queue is Empty" << endl;
        }

        head = head->next;x
        size--;
    }
};
int main()
{

    return 0;
}

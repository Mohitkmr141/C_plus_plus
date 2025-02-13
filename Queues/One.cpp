#include <iostream>
#include <queue>
#include<deque>
using namespace std;
class Queue
{

public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {

        if (rear == size -1)
        {
            cout << "Queue is Overflow" << endl;
        }
        else if (rear == -1 && front == -1)
        {

            rear++;
            front++;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {

        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    int getTop()
    {
        if (front == -1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getSize(){
        if(front == -1 && rear ==-1){
            return 0;
        }else{
            return rear -front + 1;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{

    Queue *q = new Queue(5);
    cout<<q->getSize()<<endl;
   
   
  
    

    return 0;
}
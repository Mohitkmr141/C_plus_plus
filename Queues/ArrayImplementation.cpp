#include<iostream>
#include<queue>
using namespace std;
class Queue{

public:

int *arr;
int front;
int back;
int size;

Queue(int size){
    this->size = size;
    arr = new int[size];
    front = -1;
    back = -1;

}

void push(int data){

    if(back == size-1){

        cout<<"Queue is Full"<<endl;
        return ;

    }
    // if Queue is empty
    if(front  == -1 && back == -1){
        back++;
        front++;
        arr[back] = data;
    }else{
        back++;
        arr[back] = data;

    }
}

void pop(){

    if(front == -1){

        cout<<"Queue is Empty"<<endl;
        return;
    }else{
        
        arr[front] = 0;
        front++;
    }
}





};
int main(){





    Queue *q = new Queue(5);
    q->push(1);
    q->push(2);
}




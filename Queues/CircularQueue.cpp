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
    front = -1;
    back = -1;
    arr = new int[size];

}


void push(int data){

    if(back == size ){
        cout<<"Queue is Full"<<endl;
        return ;
    }else if(front == -1 && back == -1){
        front++;
        back++;
        arr[back] = data;
    }else{
        back++;
        arr[back] = data;
    }
}
void pop(){
    if(front == -1 && back == -1){
        cout<<"Queue is Empty"<<endl;
        return ;
    }else if(front == back){
        arr[front] = -1;
        front  = -1;
        back = -1;
    }else{
        arr[front] = -1;
        front++;
    }
}

bool isEmpty(){
    if(front == -1 && back == -1){
        return true;
    }else{
        return false;
    }
}

int getSize(){

    if(back == -1 && front == -1){
        return 0;
    }else{

        return back-front+1;
    }
}


int getTop(){

    if(front == -1 && back == -1){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }else{
        return arr[front];
    }
}

void printQueue(){

    if(front == -1){
        return ;
    }
    for(int i=front;i<=back;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 

};
int main(){


Queue q(3);

q.printQueue();
q.push(1);
q.printQueue();
q.push(2);
q.printQueue();
q.push(3);
q.printQueue();
cout<<q.getSize()<<endl;

cout<<q.getTop()<<endl;






    return 0;
}
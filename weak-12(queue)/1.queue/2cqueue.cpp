//------------------------------------------------------->implemente Circular queue from scratch
#include <iostream>
using namespace std;

class Cqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void push(int val){
        // check full
        if((front == 0 && rear == size-1) ||(rear == front - 1)){
            cout<< "Overflow"<<endl;
        }
        // empty case->first element
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        // circular nature
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = val;
        }
        else{
            // norm case
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        // underflow
        if(front == -1 && rear == -1){
            cout<<"underflow"<<endl;
        }
        // empty case->first element
        else if(front ==  rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular nature
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        // norm case
        else{
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else{
            return rear-front+1;
        }
    }

    int getFront(){
        if(front == -1){
            cout<<"No element in queue, cannot give front element"<<endl;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(front == -1){
            cout<<"No element in queue, cannot give front element"<<endl;
        }
        else{
            return arr[rear];
        }
    }

    void print(){
        cout<<"front: "<<front<<" rear: "<<rear<<endl;
        cout<<"Printing queue: ";
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Cqueue q(5);    //dynamic array from create queue
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    q.pop();               //check circular nature maintain ho rha hai ki nhi
    q.pop();
    q.pop();
    q.print();
    q.push(100);
    q.print();
    q.push(110);
    q.print();
    q.push(120);
    q.print();
    q.push(120);
    q.print();

    return 0;
}
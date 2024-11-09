//------------------------------------------------------->queue stl(creation, insertion, size, empty, remove, front element, back or last or rear element)
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     // creation
//     queue<int> q;

//     // insertion
//     q.push(5);

//     // size
//     cout << "size of queue: "<<q.size() <<endl;

//     // empty
//     if(q.empty() == true){
//         cout<<"queue is empty"<<endl;
//     }
//     else{
//         cout<<"queue is not empty"<<endl;
//     }

//     // remove
//     q.pop();
//     cout << "size of queue: "<<q.size() <<endl;

//     q.push(10);   // front element of queue
//     q.push(20);
//     q.push(30);

//     cout<<"Front element of queue is: "<<q.front()<<endl;
//     cout<<"Last or Rear element of queue is: "<<q.back()<<endl;
//     return 0;
// }


//------------------------------------------------------->implemente queue from scratch
#include <iostream>
using namespace std;

class queue {
    public:
        int *arr;
        int size;
        int front;
        int rear;

    queue(int size){
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        if(rear == size-1){    // check full
            cout<< "queue overflow"<<endl;
            return;
        }
        else if(front == -1 && rear == -1){    //EMPTY CASE
            front++;
            rear++;
            arr[rear] = val;
        }
        else{        // norm case
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        if(front == -1 && rear == -1){    // underflow
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else if(front == rear){  //empty case => single elemnt
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{                 // norm case
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
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(front == -1){
            cout<<"No element in queue, cannot give rear element"<<endl;
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    void print(){
        cout<<"Printing queue: ";
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    queue q(5);    //dynamic array from create queue
    q.print();

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();

    cout<<"size of queue: "<<q.getSize()<<endl;

    q.pop();
    q.print();

    cout<<"size of queue: "<<q.getSize()<<endl;
    cout<<"queue is empty or not: "<<q.isEmpty()<<endl;
    
    q.push(100);                 //this is behaviour of queue
    cout<< q.getFront()<<endl;
    cout<< q.getRear()<<endl;
    return 0;
}
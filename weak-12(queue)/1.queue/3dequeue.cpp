//------------------------------------------------------->deque(double ended queue) STL c++
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_front(20);
//     //dq.pop_back();
//     dq.pop_front();

//     cout << dq.front() << endl;
//     cout << dq.back() << endl;

//     cout << dq.size() << endl;
//     return 0;
// }

//------------------------------------------------------->implement double ended queue
// #include <iostream>
// #include <deque>
// using namespace std;

// class Deque {
//     public:
//         int *arr;
//         int front;
//         int rear;
//         int size;
    
//     Deque(int size){
//         arr = new int[size];
//         this->size = size;
//         front = -1;
//         rear = -1;
//     }

//     void pushBack(int val){
//         // overflow
//         if(rear == size-1){
//             cout<<"overflow"<<endl;
//         }
//         // empty case
//         else if(front == -1 && rear == -1){
//             front++;
//             rear++;
//             arr[rear] = val;
//         }
//         // norm case
//         else{
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void pushFront(int val){
//         // overflow
//         if(front == 0){
//             cout<<"overflow "<<endl;
//         }
//         // empty case
//         else if(front == -1 && rear == -1){
//             front++;
//             rear++;
//             arr[front] = val;
//         }
//         // norm case
//         else{
//             front--;
//             arr[front] = val;
//         }
//     }

//     void popFront(){
//         // underflow
//         if(front == -1 && rear == -1){
//             cout<<"underflow"<<endl;
//             return;
//         }
//         // empty case->first element
//         else if(front ==  rear){
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         // norm case
//         else{
//             arr[front] = -1;
//             front++;
//         }
//     }

//     void popBack(){
//         // underflow
//         if(front == -1 && rear == -1){
//             cout<<"underflow "<<endl;
//         }
//         // single element
//         else if(front == rear){
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         }
//         // normal case
//         else{
//             arr[rear] = -1;
//             rear--;
//         }
//     }
// };
// // yai code kudha hai without circular nature
// int main()
// {

//     return 0;
// }


//------------------------------------------------------->Implement circular-double ended queue
// #include <iostream>
// #include <deque>
// using namespace std;

// class Deque{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;
    
//     Deque(int size){
//         arr = new int[size];
//         this->size = size;
//         front = -1;
//         rear = -1;
//     }

//     void pushBack(int val){
//         // check full
//         if((front == 0 && rear == size-1) ||(rear == front - 1)){
//             cout<< "Overflow"<<endl;
//         }
//         // empty case->first element
//         else if(front == -1 && rear == -1){
//             front++;
//             rear++;
//             arr[rear] = val;
//         }
//         // circular nature
//         else if(rear == size-1 && front != 0){
//             rear = 0;
//             arr[rear] = val;
//         }
//         else{
//             // norm case
//             rear++;
//             arr[rear] = val;
//         }
//     }

//     void pushFront(int val){
//         // overflow
//         if((front == 0 && rear == size-1) ||(rear == front - 1)){
//             cout<< "Overflow"<<endl;
//         }
//         // empty case
//         else if(front == -1 && rear == -1){
//             front++;
//             rear++;
//             arr[front] = val;
//         }
//         // vircular nature
//         else if(front == 0 && rear != size-1){
//             front = size-1;
//             arr[front] = val;
//         }
//         // norm case
//         else{
//             front--;
//             arr[front] = val;
//         }
//     }

//     void popFront(){
//         // underflow
//         if(front == -1 && rear == -1){
//             cout<<"underflow"<<endl;
//         }
//         // empty case->first element
//         else if(front ==  rear){
//             arr[front] = -1;
//             front = -1;
//             rear = -1;
//         }
//         // circular nature
//         else if(front == size-1){
//             arr[front] = -1;
//             front = 0;
//         }
//         // norm case
//         else{
//             arr[front] = -1;
//             front++;
//         }
//     }

//     void popBack(){
//         // underflow
//         if(front == -1 && rear == -1){
//             cout<<"underflow "<<endl;
//         }
//         // single element
//         else if(front == rear){
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         }
//         // circular nature
//         else if(rear == 0){
//             arr[rear] = -1;
//             rear = size-1;
//         }
//         // normal case
//         else{
//             arr[rear] = -1;
//             rear--;
//         }
//     }
// };

// int main()
// {

//     return 0;
// }
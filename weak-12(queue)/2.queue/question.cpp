//------------------------------------------------------->Reverse a queue
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverseQueue(queue<int>& q){
//     stack<int> s;

//     // one by one queue se element lo and stack me daalo
//     while(!q.empty() ){
//         int frontELement = q.front();
//         q.pop();
//         s.push(frontELement);
//     }

//     // one by one stack se lo and queue me push karo
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element); 
//     }
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     reverseQueue(q);
//     cout<< "printing quue: "<<endl;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         cout<< element <<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->reverse a queue by recursion
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverse(queue<int> &q) {
//     // base case
//     if(q.empty()){
//         return;
//     }

//     int element = q.front();
//     q.pop();

//     reverse(q);

//     q.push(element);
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     reverse(q);

//     cout<< "printing quue: "<<endl;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         cout<< element <<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->queue->Reverse first K element
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverseFirstK(queue<int> &q, int k){
//     stack<int> s;
//     int n = q.size();

//     if(k > n || k == 0){         //agar k ki value he jyada hai then
//         return;
//     }

//     // push first k element into stack
//     for(int i = 0; i < k; i++){
//         int temp = q.front();
//         q.pop();
//         s.push(temp);
//     }

//     // push all k element into queue
//     while(!s.empty()){
//         int temp = s.top();
//         s.pop();
//         q.push(temp);
//     }

//     // pop & push (n-k) elements into queue again
//     for(int i = 0; i<(n-k); i++){
//         int temp = q.front();
//         q.pop();
//         q.push(temp);
//     }
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     reverseFirstK(q,4);
//     cout<< "printing quue: "<<endl;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         cout<< element <<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->Interleave first & second half of queue
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void interLeaveQueue(queue<int> &first){
//     queue<int> second;

//     // push first half of first queue in second queue
//     int size = first.size();
//     for(int i = 0; i<size/2; i++){
//         int temp = first.front();
//         first.pop();
//         second.push(temp);
//     }

//     // merge both the halves
//     // into the origenal queue named as first
//     for(int i = 0; i<size/2; i++){
//         int temp = second.front();
//         second.pop();
//         first.push(temp);

//         temp = first.front();
//         first.pop();
//         first.push(temp);
//     }
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     interLeaveQueue(q);
//     cout<< "printing quue: "<<endl;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         cout<< element <<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->first -ve integer in every window of "K"
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void printFirstNegtive(int arr[], int n, int k){
//     deque<int> dq;                                 //koe frk nhi padhta queue use kru ya simple queue, actualy they provide extra func

//     // process first k elements first window
//     for(int index = 0; index < k; index++){
//         int elements = arr[index];
//         if(elements < 0){
//             dq.push_back(index);
//         }
//     }

//     // process remaining windoe -> Removal an addition
//     for(int index = k; index < n; index++){
//         // aage badhne se pehlai purani window ka asner nikaldo
//         if(dq.empty()){
//           cout<<"0"<<endl;
//         }
//         else{
//             cout<< arr[dq.front()] <<" ";
//         }
//         // removal - jo bhi index out of range h, usko queue me se remove krdo
//         if(index - dq.front() >= k){   //cond of out of range window
//             dq.pop_front();
//         }
//         // addition
//         if(arr[index] < 0){
//             dq.push_back(index);
//         }
//     }

//     // last window ka answer print krdo
//     if(dq.empty()){
//         cout<<"0"<<endl;
//     }
//     else{
//         cout<< arr[dq.front()] <<" ";
//     }
// }

// int main() {
//     int arr[] = {2,-5,4,-1,-2,0,5};
//     int size = 7;
//     int k = 3;
//     printFirstNegtive(arr, size, k);
//     return 0;
// }
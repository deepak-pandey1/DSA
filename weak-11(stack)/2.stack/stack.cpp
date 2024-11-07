//------------------------------------------------------->implemented 2 stack in an array
// #include <iostream>
// using namespace std;

// class Stack {
//     public:
//         int *arr;
//         int size;
//         int top1;
//         int top2;

//     Stack(int size) {
//         arr = new int[size];
//         this->size = size;
//         top1 = -1;
//         top2 = size;
//     }

//     void push1(int data) {
//         if(top2-top1 == 1) {        //no space available
//             cout<<"OVERFLOW"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1] = data;
//         }
//     }
//     void push2(int data) {
//         if(top2-top1 == 1) {
//             cout<<"OVERFLOW"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2] = data;
//         }
//     }

//     void pop1() {
//         if(top1 == -1) {             //stack1 is empty
//             cout<<"UNDERFLOW"<<endl;
//         }
//         else{
//             arr[top1] = 0;
//             top1--;
//         }
//     }

//     void pop2() {
//         if(top1 == size) {
//             cout<<"UNDERFLOW"<<endl;
//         }
//         else{
//             arr[top2] = 0;
//             top2++;
//         }
//     }

//     // usually not present in stack but for chek
//     void print(){
//         cout<<endl;
//         cout<<"Top1: "<<top1<<endl;
//         cout<<"Top2: "<<top2<<endl;
//         for(int i = 0; i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     Stack st(6);         //6 is size

//     st.push1(10);
//     st.push1(20);
//     st.push1(30);

//     st.push2(100);
//     st.push2(900);
//     st.push2(800);

//     st.print();

//     st.pop1();
//     st.print();
//     return 0;
// }




//------------------------------------------------------->Remove Redundant Brackets
// #include <iostream>
// #include <stack>
// using namespace std;

// bool checkRedundant(string &str) {
//     stack<char> st;

//     for (int i = 0; i < str.length(); i++) {
//         char ch = str[i];

//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
//             st.push(ch);
//         else if(ch == ')') {     //for closing bracket
//             int operatorCount = 0;     //first count operator
//             while (st.size() != 0  &&  st.top() != '(') {
//                 char temp = st.top();
//                 if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
//                     operatorCount++;
//                 st.pop();
//             }
//             st.pop();  //yha tk pahuchai to, stack kai top pr 1 opening bracket hoga
//             if (operatorCount == 0)   //2 bracket kai bich mai operator tha he nhi means redundant bracket present
//                 return true;
//         }
//     }
//     return false;  //yha tk pahucha hu to , iska mtlb hr 1 bracket kai pair beaach mai ek operator pkka mila hoga
// }

// int main() {
//     string str = "((a+b)*(a+b))";

//     bool ans = checkRedundant(str);
//     if(ans == true){
//         cout<<"Redundant Brackets Present"<<endl;
//     }
//     else{
//         cout<<"Redundant Brackets not Present"<<endl;
//     }
//     return 0;
// }

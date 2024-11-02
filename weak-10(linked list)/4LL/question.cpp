//------------------------------------------------------->LL loop present or not check
// bool checkLoop(Node* &head){
//     Node* slow head;
//     Node* fast head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }

//         if(fast == slow){           //check for loop
//             return true;
//         }
//     }
//     return false;
// }



//------------------------------------------------------->starting point of loop(leetcode 142)
// ListNode *detectCycle(ListNode *head) {
//     //step1:check for loop
//     ListNode* slow = head;
//     ListNode* fast = head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }

//     if(fast == NULL){          //---->2step question requirement
//         return NULL;
//     }

//     slow = head;              // yaha tk pochai, iska mtlab slow & fast meet kr chukai hai
//     while(fast != slow){      //slow and fast->1step chlaiga
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return slow;             //return starting point
// }




//------------------------------------------------------->remove loop(code run nhi kr rha jaisai babbar dikha rha hai)
// #include <iostream>
// using namespace std;


// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()                //default constructor
//     {
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data)        //parameterized constructor
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, Node* &tail, int data) {     //always pass by refrence
//     //check for Empty LL case
//     if(head == NULL) {
//         Node* newNode = new Node(data); //step1: create new node
//         head = newNode;                 //step2: update head
//         tail = newNode;                 //step2: update tail
//     }
//     else {  //check for non Empty LL case
//         //step1: create new node
//         Node* newNode = new Node(data);
//         //step2: attach new node to head node
//         newNode -> next = head;
//         //step3: update head
//         head = newNode;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int data) {
//     if(head == NULL) {  //empty LL case
//         Node* newNode = new Node(data);  //step1: creatae a node
//         head = newNode;   //step2: sinle node hai entrie list me, tahts why head and tail ko isper point krwado
//         tail = newNode;
//     }
//     else {  //non-empty LL case
//         //step1: creatae a node
//         Node* newNode = new Node(data);
//         //step2: tail node ko attach karo newnode se
//         tail->next = newNode;
//         //step3: update tail;
//         tail = newNode;
//     }
// }

// void print(Node* head) {

//     Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
//     while(temp != NULL) {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }

// void* removeLoop(Node* &head) {
//     //step1:check for loop
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }

//     if(fast == NULL){          //---->2step question requirement
//         return NULL;
//     }

//     slow = head;              // yaha tk pochai, iska mtlab slow & fast meet kr chukai hai
//     while(fast != slow){      //slow and fast->1step chlaiga
//         slow = slow->next;
//         fast = fast->next;
//     }

//     // starting point
//     Node* startPoint = slow;

//     Node* temp = slow;
//     while(temp->next != startPoint){
//         temp = temp->next;
//     }

//     temp->next = NULL;
// }

// Node* getStartingPointOfLoop(Node* &head) {
//     //step1:check for loop
//     Node* slow = head;
//     Node* fast = head;
//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }
//     if(fast == NULL){          //---->2step question requirement
//         return NULL;
//     }
//     slow = head;              // yaha tk pochai, iska mtlab slow & fast meet kr chukai hai
//     while(fast != slow){      //slow and fast->1step chlaiga
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return slow;             //return starting point
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;
//     insertAtHead (head, tail,20);
//     insertAtHead (head, tail, 50);
//     insertAtHead (head, tail,60);
//     insertAtHead (head, tail, 90);
//     insertAtTail (head, tail, 77);
//     tail -> next = head->next;
    
//     cout << getStartingPointOfLoop(head) -> data << endl;
//     removeLoop(head);
//     print(head); 
//     return 0;
// }

//------------------------------------------------------->add 1 to a ll(GFG)
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node* next;
//     Node()
//     {
//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };


// void insertAtHead(Node* &head, Node* &tail, int data)
// {
//     // check for Empty LL
//     if (head == NULL)
//     {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         // step1:
//         Node* newNode = new Node(data);
//         // step2:
//         newNode->next = head;
//         // step3:
//         head = newNode;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int data)
// {
//     if (head == NULL)
//     {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         // step1: creatae a node
//         Node* newNode = new Node(data);
//         // step2: connect woth tail ndoe
//         tail->next = newNode;
//         // step3: update tail;
//         tail = newNode;
//     }
// }

// void print(Node* head)
// {
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int findLength(Node* &head)
// {
//     int len = 0;
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// Node* reverse(Node *head){
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr != NULL){
//         Node* next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// void add1(Node* &head){
//     // reverse
//     head = reverse(head);
//     // adding
//     int carry = 1;
//     Node* temp = head;
//     while(temp->next != NULL){
//         int totalSum = temp->data + carry;
//         int digit = totalSum % 10;
//         carry = totalSum / 10;

//         temp->data = digit;
//         temp = temp->next;
//         if(carry == 0){
//             break;  //additional use or not dont care
//         }
//     }

//     // process of last node
//     if(carry != 0){
//         int totalSum = temp->data + carry;
//         int digit = totalSum % 10;
//         carry = totalSum / 10;

//         temp->data = digit;
//         if(carry != 0){
//             Node* newNode = new Node(carry);
//             temp->next = newNode;
//         }
//     }

//     // reverse
//     head = reverse(head);
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;
//     insertAtHead(head, tail, 9);
//     insertAtHead(head, tail, 9);
//     insertAtHead(head, tail, 9);

//     print(head);
//     cout << endl;

//     add1(head);
//     print(head);
//     cout << endl;

//     return 0;
// }

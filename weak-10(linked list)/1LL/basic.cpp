//------------------------------------------------------->create linked list
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

// void print(Node* head) {

//     Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
//     while(temp != NULL) {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     // creation of node
//     // Node a;                 //static way 

//     Node* first = new Node(10);      //dynamic way to craete node
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     // now linke to each node to eachother
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     Node* head = first;
//     print(head); 
//     return 0;
// }


//------------------------------------------------------->Print lenth of linked list
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

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

// int findLength(Node* &head) {
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL) {
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// void print(Node* head) {

//     Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     // creation of node
//     // Node a;                 //static way 

//     Node* first = new Node(10);      //dynamic way to craete node
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     // now linke
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     Node* head = first;
//     print(head); 

//     cout<< "Length of LL :"<< findLength(head);
//     return 0;
// }


//------------------------------------------------------->insert at head
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

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

// //I want to insert a node right at the head of Linked List
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

// void print(Node* head) {

//     Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     // creation of node
//     // Node a;                 //static way 

//     Node* first = new Node(10);      //dynamic way to craete node
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);
//     Node* tail = fifth;

//     // now linke
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     Node* head = first;
//     cout<<"Printing the entire LL "<<endl;
//     print(head); 

//     insertAtHead(head, tail, 500);
//     print(head);
//     return 0;
// }


//------------------------------------------------------->insert at tail
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {  //empty LL case
        Node* newNode = new Node(data);  //step1: creatae a node
        head = newNode;   //step2: sinle node hai entrie list me, tahts why head and tail ko isper point krwado
        tail = newNode;
        
    }
    else {  //non-empty LL case
        //step1: creatae a node
        Node* newNode = new Node(data);
        //step2: tail node ko attach karo newnode se
        tail->next = newNode;
        //step3: update tail;
        tail = newNode;
    }
}

void print(Node* head) {

    Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // creation of node
    Node* tail = NULL;
    Node* head = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    print(head);
    return 0;
}


//------------------------------------------------------->insert at any position
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

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

// int getLength(Node* &head) {
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL) {
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

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

// void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
//     int length = getLength(head);  //assumption: pos ki value [1 to length+1] tk revolve kraige

//     if(position == 1) {   //position <= 1
//         insertAtHead(head, tail , data);
//         return;
//     }
//     else if(position == length + 1) {  //babbar nai mistake ki thi position > length
//         insertAtTail(head, tail, data);
//         return;
//     }
//     else {  //insert at middle of LL
//     // step1: create a new node
//     Node* newNode = new Node(data);
//     // step2: traverse prev/curr to postion
//     Node* prev = NULL;
//     Node* curr = head;
//     while(position != 1) {
//         position--;
//         prev = curr;
//         curr = curr->next;
//     }
//     //step3: attach prev to new node
//     prev -> next = newNode;
//     //step4: attach newNode to new node
//     newNode -> next = curr;
//     }    
// }

// void print(Node* head) {

//     Node* temp = head;     //for traversal orgenal pointer not used for best practise❤️
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout<<endl<<endl;
// }

// int main()
// {
//     // creation of node
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtTail(head, tail, 10);
//     insertAtTail(head, tail, 20);
//     insertAtTail(head, tail, 30);
//     insertAtTail(head, tail, 50);
//     print(head);

//     insertAtPosition(head, tail, 100, 55);
//     print(head);
//     return 0;
// }
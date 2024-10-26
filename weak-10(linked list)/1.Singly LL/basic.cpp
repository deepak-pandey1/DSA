//------------------------------------------------------->create linked list
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
//     return 0;
// }


//------------------------------------------------------->lenth of linked list
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
//     //check for Empty LL
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//     }
//     else {
//         //step1:
//         Node* newNode = new Node(data);
//         //step2:
//         newNode -> next = head;
//         //step3:
//         head = newNode;
//     }
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
//     Node* tail = first;

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

// //I want to insert a node right at the end of LINKED LIST
// void insertAtTail(Node* &head,Node* &tail, int data) {
//     if(head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
        
//     }
//     else {
//         //step1: creatae a node
//         Node* newNode = new Node(data);
//         //step2: connect woth tail ndoe
//         tail->next = newNode;
//         //step3: update tail;
//         tail = newNode;
//     }
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
//     Node* tail = fifth;

//     // now linke
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     Node* head = first;
//     cout<<"Printing the entire LL "<<endl;
//     print(head); 

//     insertAtTail(head, tail, 500);
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
void insertAtTail(Node* &head,Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        
    }
    else {
        //step1: creatae a node
        Node* newNode = new Node(data);
        //step2: connect woth tail ndoe
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
    // Node a;                 //static way 

    Node* first = new Node(10);      //dynamic way to craete node
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* tail = fifth;

    // now linke
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    cout<<"Printing the entire LL "<<endl;
    print(head); 

    insertAtTail(head, tail, 500);
    print(head);
    return 0;
}
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

//------------------------------------------------------->LL in loop where start
// ListNode *detectCycle(ListNode *head) {
//     ListNode* slow = head;
//     ListNode* fast = head;

//     while(fast != NULL){             //---->1step to check cyle present or not
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }

//     if(fast == NULL){               //---->2step question requirement
//         return NULL;
//     }

//     // yaha tk pochai, iska mtlab slow & fast meet kr chukai hai
//     slow = head;                    //---->1step to check cyle present or not
//     while(fast != slow){
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return slow;
// }

//------------------------------------------------------->LL in loop remove
// ListNode *detectCycle(ListNode *head) {
//     ListNode* slow = head;
//     ListNode* fast = head;

//     while(fast != NULL){             //---->1step to check cyle present or not
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if(fast == slow) break;
//     }

//     if(fast == NULL){               //---->2step question requirement
//         return NULL;
//     }

//     // yaha tk pochai, iska mtlab slow & fast meet kr chukai hai
//     slow = head;                    //---->1step to check cyle present or not
//     while(fast != slow){
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

//------------------------------------------------------->add 1 to ll
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

// I want to insert a node right at the head of Linked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1:
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head = newNode;
    }
}
// I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1: creatae a node
        Node *newNode = new Node(data);
        // step2: connect woth tail ndoe
        tail->next = newNode;
        // step3: update tail;
        tail = newNode;
    }
}
void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    int len = findLength(head);

    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    else if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    else
    {
        Node *newNode = new Node(data);

        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        // step3:
        newNode->next = curr;

        // step4:
        prev->next = newNode;
    }
}

Node* reverse(Node *head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void add1(Node *head){
    // reverse
    head = reverse(head);
    // adding
    int carry = 1;
    Node* temp = head;
    while(temp->next != NULL){
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->data = digit;
        temp = temp->next;
        if(carry == 0){
            break;  //additional use or not dont care
        }
    }

    // process of last node
    if(carry != 0){
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->data = digit;
        if(carry != 0){
            Node* newNode = new Node(carry);
            temp->next = newNode;
        }
    }

    // reverse
    head = reverse(head);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 9);

    print(head);
    cout << endl;

    add1(head);
    print(head);
    cout << endl;

    return 0;
}

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

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // If the list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 1: Create a new node
    Node *newNode = new Node(data);

    // Step 2: Connect with the head of the node
    newNode->next = head;

    // Step 3: Update head
    head = newNode;
}

// Function to insert a node at the tail of the linked list
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // If the list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 1: Create a new node
    Node *newNode = new Node(data);

    // Step 2: Connect with the tail node
    tail->next = newNode;

    // Step 3: Update tail
    tail = newNode;
}

// Function to print the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the length of the linked list
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

// Function to insert a node at a specific position in the linked list
void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    // If the list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Insert at the head
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);

    // Insert at the tail
    if (position == len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    // Step 2: Create a new node
    Node *newNode = new Node(data);

    // Step 3: Connect the new node with the current node
    newNode->next = curr;

    // Step 4: Connect the previous node with the new node
    prev->next = newNode;
}

// Function to reverse the linked list
Node* reverse(Node *&prev, Node *&curr)
{
    // Base Case
    if (curr == NULL)
    {
        // LL reverse ho chuki he
        return prev;
    }

    Node *forward = curr->next;
    curr->next = prev;

    return reverse(curr, forward);
}

Node* reverseLoop(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

Node* reverseRecurrsion(Node* prev,Node* curr){
    //Base case 
    if(curr==NULL){
        return prev;
    }

    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;

    return reverseRecurrsion(prev,curr);

} 

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);

    print(head);

    // Reverse function
    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);
    print(head);

    head=reverseLoop(head);
    print(head);

    head=reverseRecurrsion(prev,curr);
    print(head);

    return 0;
}
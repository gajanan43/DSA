#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
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
        cout << " memory is free for node with data " << value << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Base Condition
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 1:
    Node *newNode = new Node(data);

    // Step 2:
    newNode->next = head;

    // Step 3:
    head->prev = newNode;

    // Step 4:
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Base condition
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 1:
    Node *newNode = new Node(data);

    // Step 2:
    tail->next = newNode;

    // Step 3:
    newNode->prev = tail;

    // Step 4:
    tail = newNode;
}

void insertAtPosition(int position, int data, Node *&head, Node *&tail)
{
    // First position
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Head position
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // Last
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // Middle
    // Step 1:find prev and current
    int i = 1;

    Node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }

    Node *curr = prevNode->next;

    // Step 2: Create a new node
    Node *newNode = new Node(data);

    // Step 3:
    prevNode->next = newNode;

    // Step 4:
    newNode->prev = prevNode;

    // Step 5:
    curr->prev = newNode;

    // Step 6;
    newNode->next = curr;
}

void deleteNode( Node *&head, Node *&tail,int position)
{
   
    if (head == NULL)
    {
        cout << "Can't delete empty LL" << endl;
    }
     
    if (head->next == NULL)
    {
        // Single node
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if (position > len || position<0)
    {
        cout << "Please enter a valid position" << endl;
        return;
    }

    if (position == 1)
    {
        // want to delete a first node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return; 
    }

    if (position == len)
    {
        //Delete a last node of LL
        Node *temp = tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }

    //Delete a middle position of element
    //Step 1 : Find a left,current and right pointer 
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }

    Node *curr = left->next;
    Node *right=curr->next;

    //Step 2:
    left->next=right;

    //Step 3:
    right->prev=left;

    //Step 4:
    curr->next=NULL;

    //Step 5:
    curr->prev=NULL;

    //Step 6:
    delete curr;

}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    // print(first);
    // cout << endl;
    insertAtHead(head, tail, 50);
    // print(head);
    // cout << endl;
    insertAtTail(head, tail, 101);
    // print(head);
    // cout << endl;
    insertAtPosition(6, 501, head, tail);
    print(head);
    cout << endl;

    deleteNode(head,tail,6);
    print(head);
    cout << endl;
    return 0;
}
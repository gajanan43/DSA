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
        cout << " memory is free for node with data " << value << endl;
    }
};

// I want insert a node right at the head of LL
void insertAtHead(Node *&head, Node *&tail, int data)
{

    // LL->empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step1:Create a new node
    Node *newNode = new Node(data);

    // Step2:connect with head of node
    newNode->next = head;

    // Step3: Update head
    head = newNode;
}

// I want insert a node right at the head of LL
void insertAtTail(Node *&head, Node *&tail, int data)
{

    // LL->empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step1: Create a node
    Node *newNode = new Node(data);

    // Step2: Connect with tail node
    tail->next = newNode;

    // Step3: Update tail
    tail = newNode;
}

void print(Node *head)
{
    Node *temp = head;

    while (head != NULL)
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
    // LL->empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 1: Finde that position
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);

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

    // Step 2: create new Node
    Node *newNode = new Node(data);

    // Step 3:
    newNode->next = curr;

    // Step;
    prev->next = newNode;
};

void deleteNode(int position, Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "Can't delete, LL empty" << endl;
        return;
    }

    // Case 1:Delet first node in LL
    if (position == 1)
    {
        Node *temp = head;
        // Step 1:shift head to next node
        head = head->next;

        // Step 2:Update temp to NULL
        temp->next = NULL;

        // Step 3:Delete temp
        delete temp;

        return;
    }

    // Case 2:Delet last node in LL
    int len = findLength(head);

    if (position == len)
    {
        Node *temp = tail;
        // Step 1:Find prev node of tail
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        // Step 2:Set prev->next to NULL
        prev->next = NULL;

        // Step 3:Mark tail=temp
        tail = prev;

        // Step 4:Delete temp
        delete temp;
        return;
    }

    //Case 3:Delete at Position Node
    //Step 1:Find current & previous node
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node* curr=prev->next;

    //Step 2: 
    prev->next=curr->next;

    //Step 3:
    curr->next=NULL;

    //Step 4:
    delete curr;

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtPosition(100, 5, head, tail);
    deleteNode(2, head, tail);

    print(head);
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    // insertAtPosition(100, 2, head, tail);
    // cout << endl;
    // print(head);
    // cout<<endl;
    // cout<<"Head: "<<head->data<<endl;
    // cout<<"Tail: "<<tail->data<<endl;

    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // print(first);

    return 0;
}
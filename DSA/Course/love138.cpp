#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
    cout << endl;
}

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }
    if (head->next == NULL)
    {
        // for single node
        return head;
    }
    // For more than one nodes
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

int getLength(Node *&head)
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

Node *reverseKNodes(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }

    int len = getLength(head);
    if (k > len)
    {
        cout << "Enter a valid value for k" << endl;
    }

    Node *left = NULL;
    Node *curr = head;
    Node *right = curr->next;
    int count = 0;

    while (count < k)
    {
        right = curr->next;
        curr->next = left;
        left = curr;
        curr = right;
        count++;
    }

    if (right != NULL)
    {
        head->next = reverseKNodes(right, k);
    }

    return left;
}

bool checkLoop(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return false;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            return true;
        }
    }
    return false;
}

Node* startPoint(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return 0;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }
    }

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    
}

Node* removeLoop(Node* &head){
     if(head==NULL){
        cout<<"LL is empty"<<endl;
        return 0;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            slow=head;
            break;
        }
    }

    Node*prev=fast;
    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
    return slow;
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *six = new Node(60);
    Node *seven = new Node(60);
    Node *eight = new Node(60);
    Node *nine = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;
    six->next = seven;
    seven->next = eight;
    eight->next = nine;
    nine->next = fifth;

    // print(head);
    // // head= getMiddle(head);
    // // print(head);
    // head = reverseKNodes(head, 3);
    // print(head);

    cout<<"Loop is preset or not "<<checkLoop(head)<<endl;
    cout<<"Stating node of a loop "<<startPoint(head)->data<<endl;
    cout<<"Remove loop in a LL "<<removeLoop(head)<<endl;
    cout<<"Loop is preset or not "<<checkLoop(head)<<endl;

    return 0;
}
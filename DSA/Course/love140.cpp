#include<iostream>
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



int main(){

    Node *head = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(3);
    Node *fourth = new Node(1);
    Node *fifth = new Node(1);
    Node *sixth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    
    return 0;
}
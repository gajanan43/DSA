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


Node *reverse(Node *head)
{
    Node *left = NULL;
    Node *curr = head;
    Node *right = curr->next;

    while (curr != NULL)
    {
        right = curr->next;
        curr->next = left;
        left = curr;
        curr = right;
    }
    return left;
}


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

Node* solve(Node* &head1,Node* &head2){
    //Step 1: reverse both LL
    head1=reverse(head1);
    head2=reverse(head2);

    //Step 2: add both the LL
    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;

    while(head1!=NULL && head2!=NULL){
        //Calculate sum
        int sum=carry+head1->data+head2->data;
        //find digit to create a node 
        int digit=sum%10;
        //Calculate the carry
        carry=sum/10;

        //Create a new node to store a ans nodes
        Node* newNode=new Node(digit);
        //Attach the newNode to the anwer wali node 
        if(ansHead==NULL){
            //first node insert in LL
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        head1=head1->next;
        head2=head2->next;
    }

    while(head1!=NULL){
        int sum=carry+head1->data; 
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head1=head1->next;
    }

    while(head2!=NULL){
        int sum=carry+head2->data; 
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head2=head2->next;
    }

    //handle carry ko alag se
    while (carry!=0){
        int sum=carry; 
        int digit=sum%10;
        carry=sum/10;

        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
    }
    
    //Step 3: reverse the ans of LL
    ansHead=reverse(ansHead);
    return ansHead;
}

int main(){
    Node* head1=new Node(2);
    Node* second1=new Node(4);
    head1->next=second1;

    Node* head2=new Node(2);
    Node* second2=new Node(4);
    Node* third2=new Node(4);
    head2->next=second2;
    second2->next=third2;

    Node* ans=solve(head1,head2);
    print(ans);
    

    return 0;
}
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

bool checkPalindrome(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return true;
    }

    if (head->next == NULL)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // slow pointer pointing to middle

    // Step B: reverse LL after the middle
    Node *reverseKaHead = reverse(slow->next);

    // join reverse LL into the left part
    slow->next = reverseKaHead;

    // Step C: start comparision
    Node *temp1 = head;
    Node *temp2 = reverseKaHead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            // Not a palindrome
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
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

Node *removeDuplicate(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is emtpy" << endl;
        return 0;
    }
    if (head->next == NULL)
    {
        // single element
        return head;
    }

    // 1 < node
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            // equal
            Node *temp = curr->next;
            curr->next = curr->next->next;
            // Delete Duplicate element
            temp->next = NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void sortZeroOneTwo(Node *&head)
{

    // Step 1: find count of zero,one,two
    int zero = 0;
    int one = 0;
    int two = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        // fill zeros
        while (zero--)
        {
            temp->data = 0;
            temp = temp->next;
        }

        // fill ones
        while (one--)
        {
            temp->data = 1;
            temp = temp->next;
        }
        // fill twos
        while (two--)
        {
            temp->data = 2;
            temp = temp->next;
        }
    }
}

Node* sort2(Node* &head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    // Create dummy nodes
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    // Traverse the original LL
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 1)
        {
            // take out the zero wali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zreo node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 2)
        {
            // take out the one wali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the one node in zeroHead LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 3)
        {
            // take out the two wali node
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the two node in zeroHead LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // ab yha pr zero,one,two three LL ready he

    // join them
    // remove dummy nodes

    // modify one wali LL
    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify two wali LL
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;
    
    // join LL
    if (oneHead != NULL)
    {
        // one wali list is non-empty
        zeroTail->next = oneHead;
        if (twoHead != NULL)
            oneTail->next = twoHead;
    }
    else
    {
        // one wali node empty
        if (twoHead != NULL)
            zeroTail->next = twoHead;
    }

    // remove zerohead dummy node
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    // return head of the modify LL
    return zeroHead;
}

int main()
{

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

    // bool isPalindrome=checkPalindrome(head);
    // if(isPalindrome){
    //     cout<<"LL is palindrome"<<endl;
    // }
    // else{
    //     cout<<"LL is not a palindrome"<<endl;
    // }
    // print(head);
    // removeDuplicate(head);
    // print(head);
    // sortZeroOneTwo(head);
    print(head);

    sort2(head);
    print(head);

    return 0;
}
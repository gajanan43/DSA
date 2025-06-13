#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class NodeData
{
public:
    int minValue;
    int maxValue;
    int size;
    bool validBST;

    NodeData(int size, int max, int min, bool valid)
    {
        this->size = size;
        maxValue = max;
        minValue = min;
        validBST = valid;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    // first Node or root node create
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // no root node
    if (root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // Puran level complete traverse ho chuka he
            cout << endl;
            if (!q.empty())
            {
                // Queue has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node *findNodeInBST(Node *root, int target)
{
    // Base condition
    if (root == NULL)
    {
        return NULL;
    }

    if (target == root->data)
    {
        return root;
    }

    if (target > root->data)
    {
        return findNodeInBST(root->right, target);
    }
    else
    {
        return findNodeInBST(root->left, target);
    }
}

int minValue(Node *root)
{
    Node *temp = root;

    if (root == NULL)
    {
        return -1;
    }

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

int maxValue(Node *root)
{
    Node *temp = root;

    if (root == NULL)
    {
        return -1;
    }

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node *deleteNode(Node *root, int key)
{
    // Base condition
    if (root == NULL)
    {
        return NULL;
    }

    // find the delete node
    Node *temp = findNodeInBST(root, key);

    if (temp->left == NULL && temp->right == NULL)
    {
        delete temp;
        return NULL;
    }

    else if (temp->left == NULL && temp->right != NULL)
    {
        Node *child = temp->right;
        delete temp;
        return child;
    }

    else if (temp->left != NULL && temp->right == NULL)
    {
        Node *child = temp->left;
        delete temp;
        return child;
    }

    else
    {
        int inorderPre = maxValue(temp->left);
        temp->data = inorderPre;
        temp->left = deleteNode(temp->left, inorderPre);
        return root;
    }
}

Node *bstUsingInOrder(int inOrder[], int s, int e)
{
    // Base condition
    if (s > e)
    {
        return NULL;
    }

    // find the middle element
    int mid = (s + e) / 2;
    int element = inOrder[mid];

    // Create a root node
    Node *root = new Node(element);

    // Process or create left part of tree
    root->left = bstUsingInOrder(inOrder, s, mid - 1);

    // Process or create right part of tree
    root->right = bstUsingInOrder(inOrder, mid + 1, e);

    return root;
}

void bstIntoSortedDLL(Node *root, Node *&head)
{
    // right---->next Pointer
    // left----->prev Pointer

    // Base case
    if (root == NULL)
    {
        return;
    }

    // right subtree into DLL
    bstIntoSortedDLL(root->right, head);

    // attach root node to right part of DLL
    root->right = head;

    // aatch right part to root node
    // check root!=NULL
    if (head != NULL)
    {
        head->left = root;
    }

    // update head
    head = root;

    // convert left subtree into DLL
    bstIntoSortedDLL(root->left, head);
}

void printDLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
}

Node *sortedLLTOBST(Node *&head, int n)
{
    if (n <= 0 || head == NULL)
    {
        return NULL;
    }

    Node *leftSubTree = sortedLLTOBST(head, n - 1 - (n / 2));

    Node *root = head;
    root->left = leftSubTree;

    head = head->right;
    root->right = sortedLLTOBST(head, n / 2);

    return root;
}

NodeData *findLargestBST(Node *root, int &ans)
{
    // Base case: If the node is NULL, it is a valid BST by definition
    if (root == NULL)
    {
        return new NodeData(0, INT_MIN, INT_MAX, true); // A null node is a valid BST
    }

    // Recursively get the results from the left and right subtrees
    NodeData *leftAns = findLargestBST(root->left, ans);
    NodeData *rightAns = findLargestBST(root->right, ans);

    // Create current node's result
    NodeData *currNodeKaAns = new NodeData(0, 0, 0, false);

    // Size of current subtree
    currNodeKaAns->size = leftAns->size + rightAns->size + 1;

    // Update current node's minValue and maxValue
    currNodeKaAns->minValue = min(root->data, leftAns->minValue);
    currNodeKaAns->maxValue = max(root->data, rightAns->maxValue);

    // Check if the current node forms a valid BST
    if (leftAns->validBST && rightAns->validBST &&
        (root->data > leftAns->maxValue) && (root->data < rightAns->minValue))
    {
        currNodeKaAns->validBST = true;
    }
    else
    {
        currNodeKaAns->validBST = false;
    }

    // If the current subtree is a valid BST, update the answer with the largest size
    if (currNodeKaAns->validBST)
        ans = max(ans, currNodeKaAns->size);
    

    // Debugging output to see the current node's status
    cout << "Node " << root->data << ": isBST=" << currNodeKaAns->validBST
         << ", Size=" << currNodeKaAns->size << ", Max=" << currNodeKaAns->maxValue
         << ", Min=" << currNodeKaAns->minValue << endl;

    return currNodeKaAns;
}

int main()
{
    // 10 20 5 11 17 2 4 8 6 25 15 -1
    //  Node* root=NULL;
    //  cout<<"Enter the data for Node"<<endl;
    //  takeInput(root);

    // cout<<"Printing the tree"<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;

    // cout<<"Printing the nodes InOrder traversal"<<endl;
    // inOrder(root);
    // cout<<endl;

    // cout<<"Printing the nodes InOrder traversal"<<endl;
    // preOrder(root);
    // cout<<endl;

    // cout<<"Printing the nodes InOrder traversal"<<endl;
    // postOrder(root);
    // cout<<endl;

    // bool ans=findNodeInBST(root,15);
    // cout<<"Element is present or not: "<<ans<<endl;

    // cout<<"Printing the minimum value from BST"<<endl;
    // cout<<minValue(root);
    // cout<<endl;

    // cout<<"Printing the maximum value from BST"<<endl;
    // cout<<maxValue(root);
    // cout<<endl;

    // deleteNode(root,15);
    // levelOrderTraversal(root);
    // cout<<endl;

    // int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int s = 0;
    // int e = 8;

    // Node *root = bstUsingInOrder(inOrder, s, e);
    // levelOrderTraversal(root);
    // cout << endl;

    // cout << "Printing the Sorted  DLL " << endl;
    // Node *head = NULL;
    // bstIntoSortedDLL(root, head);
    // printDLL(head);
    // cout << endl;
    // cout << endl;

    // cout << "Printing the BST " << endl;
    // Node *root1 = NULL;
    // root1 = sortedLLTOBST(head, 9);
    // levelOrderTraversal(root1);

    Node *root = new Node(50);
    Node *first = new Node(30);
    Node *second = new Node(60);
    Node *third = new Node(5);
    Node *fourth = new Node(20);
    Node *fifth = new Node(45);
    Node *sixth = new Node(70);
    Node *seventh = new Node(65);
    Node *eight = new Node(80);

    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    second->right = sixth;
    sixth->left = seventh;
    sixth->right = eight;

    cout << "Printing  the tree " << endl;
    levelOrderTraversal(root);

    int ans = 0;
    findLargestBST(root, ans);
    cout << "Largest BST in BT " << ans << endl;

    return 0;
}
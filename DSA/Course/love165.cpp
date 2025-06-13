#include <iostream>
#include <queue>
#include <deque>
using namespace std;

/*class Queue{
    public:

    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data){
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void pop(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }

    int getFront(){
        if(front==rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }

    int getSize(){
        return rear-front;
    }
};*/

// circular queue
class CirQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // check full or not
        // single element
        // circular nature
        // normal condition

        if (rear=(front-1)%(size-1))
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // empty
        // single elemnt
        // circular nature
        // normal codition

        if (front == -1)
        {
            cout << "Queue is empty, You can't delelte" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
};

class Deque
{
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        if (rear=(front-1)%(size-1))
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pushFront(int data)
    {
        if ((rear == size - 1 && front == 0) && (front == rear + 1))
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }

    void popFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty, You can't delelte" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    void popRear()
    {
        if (front == -1)
        {
            cout << "Queue is empty, You can't delelte" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else if (rear == 0)
        {
            front = size - 1;
        }
        else
        {
            rear--;
            ;
        }
    }
};

int main()
{

    /*//insertion
    q.push(5);
    q.push(10);
    q.push(5);
    q.push(9);
    q.push(1);

    cout<<"Size of queue "<<q.size()<<endl;

    //removal
    q.pop();
    cout<<"Size of queue "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Q is empty"<<endl;
    }
    else{
        cout<<"Q is not empty"<<endl;
    }

    cout<<"Front element in queue "<<q.front()<<endl;*/

    /*Queue q(10);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Size of queue "<<q.getSize()<<endl;

    q.pop();

    cout<<"Size of queue "<<q.getSize()<<endl;
    cout<<"Front element in queueu "<<q.getFront()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }*/

    // Circular queue

    // Deque
    deque<int> q;

    q.push_front(10);
    q.push_front(20);
    q.push_back(30);
    q.push_back(40);

    cout << "Size of deque is " << q.size() << endl;

    q.pop_front();
    cout << "Front: " << q.front() << endl;

    q.pop_back();
    cout << "Back: " << q.back() << endl;

    cout << "Size of deque is " << q.size() << endl;

    return 0;
}
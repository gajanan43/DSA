#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    // Step 1:Put all the element into the stack
    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    // Step 2:Remove all element into the stack
    while (!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void recurrsionOfQueue(queue<int> &q)
{
    // Base condition
    if (q.empty())
    {
        return;
    }

    // first case
    int element = q.front();
    q.pop();

    // recurrsion call
    recurrsionOfQueue(q);
    q.push(element);
}

void reverseK(queue<int> &q, int k)
{

    int n = q.size();
    if (k == 0 && k > n)
        return;

    // Step 1:insert k element into stack
    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    // Step 2:remove inserted elment from stack & put into queue
    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }

    // Step 3: (n-K) element put into back side of queue
    for (int i = k; i < q.size(); i++)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

void interLeaveQueue(queue<int> &q)
{
    int n = q.size();
    int k = n / 2;
    queue<int> q2;

    // first half put into new queue
    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        q2.push(element);
    }

    // Put q2 queue into q using push & pop operation
    while (!q2.empty())
    {
        int element = q2.front();
        q2.pop();
        q.push(element);

        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    // odd condition
    int element = q.front();
    q.pop();
    q.push(element);
}

vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
{
    deque<int> q;
    vector<int> result;

    // Process the first window of size k
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    // Store the result for the first window
    if (!q.empty())
    {
        result.push_back(arr[q.front()]);
    }
    else
    {
        result.push_back(0);
    }

    // Process the remaining windows
    for (int i = k; i < n; i++)
    {
        // Remove out of window elements
        while (!q.empty() && q.front() <= i - k)
        {
            q.pop_front();
        }

        // Add the current element if it is negative
        if (arr[i] < 0)
        {
            q.push_back(i);
        }

        // Store the result for the current window
        if (!q.empty())
        {
            result.push_back(arr[q.front()]);
        }
        else
        {
            result.push_back(0);
        }
    }

    return result;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(40);

    // reverseQueue(q);
    // recurrsionOfQueue(q);
    // reverseK(q,0);
    // interLeaveQueue(q);

    /*while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;*/

    vector<int> arr = {-10,20,-30,-40,50,60,-70,80,90};
    int k = 3;
    int n = arr.size();

    vector<int> result = firstNegativeInteger(arr, k, n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout << endl;

    return 0;
}
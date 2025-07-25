#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // O(1)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    };

    void pop() // O(1)
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    };

    int front()
    { // O(1)
        return head->val;
    };

    int back()
    { // O(1)
        return tail->val;
    };

    int size() // O(1)
    {
        return sz;
    };

    bool is_empty()
    { // O(1)
        return head == NULL;
    }
};

int main()
{
    myQueue qu;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        qu.push(v);
    }

   while (!qu.is_empty()) {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
   // c->prev = b;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    while (fast !=NULL && fast->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            flag = true;
            break;
        }
    }

    if(flag == false)
        cout << "No cycle" << endl;
    else 
       cout << "cycle detected" << endl;    

    return 0;
}
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
    tail = newnode;
}

int find_index(Node *head,int idx)
{
   int index = 0;
    while (head) {
        if (head->val == idx) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
     Node *head = NULL;
     Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int idx;
    cin >> idx;
    cout << find_index(head,idx) << endl;
   }
    

    return 0;
}
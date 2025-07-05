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
void find_same(Node *head1, Node *head2)
{
    int same = 1;
    for (Node *i = head1, *j = head2; i != NULL && j != NULL; i = i->next, j = j->next)
    {
      if(i->val != j->val)
      {
        same = 0;
        break;
      }  
    }
    if(same==0)
    {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    int val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }
    find_same(head1, head2);
    return 0;
}
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

void check_duplicate(Node *&head)
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    int mid = size/2;
    temp = head;
    if(mid % 2 != 0)
    {
       for(int i=0 ; i< mid-1 ; i++)
       {
        temp = temp->next;
       }
       cout << temp->val << " " << temp->next->val << endl;
    }
    else{
        for(int i=0 ; i< mid ; i++)
       {
        temp = temp->next;
       }
       cout << temp->val << endl; 
    }
    
};

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(4);
    Node *b = new Node(8);
    Node *c = new Node(6);
    Node *d = new Node(10);
   

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
  

    check_duplicate(head);
    return 0;
}
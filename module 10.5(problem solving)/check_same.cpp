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

void insert_at_head(Node* &head,Node* &tail,int val)
{
     Node* newnode = new Node(val);
     if(head == NULL)
     {
        head = newnode;
        tail = newnode;
        return;
     }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void find_same(Node* head1, Node* head2)
{
    Node* i=head1;
    Node* j = head2;

    while(i !=NULL && j !=NULL)
    {
        if(i->val != j->val)
        {
            cout << "No" << endl;
            return;
        }
        i=i->next;
        j=j->next;
    }
    if(i==NULL && j==NULL)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while(true)
    {
       cin >> val1;
       if(val1 == -1)
       {
          break;
       }
       insert_at_head(head1,tail1,val1);
    };

    Node* head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while(true)
    {
       cin >> val2;
       if(val2 == -1)
       {
          break;
       }
       insert_at_head(head2,tail2,val2);
    };

   find_same(head1,head2);   

    return 0;
}
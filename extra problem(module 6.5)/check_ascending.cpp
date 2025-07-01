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

void print_size(Node* &head)
{
   Node* temp = head;
   int count = 0;
   while(temp != NULL)
   {
      count++;
      temp = temp->next;
   }
   temp = head;
   bool sorted = true;
   while(temp->next != NULL)
   {
      if(temp->val > temp->next->val)
      {
        sorted = false;
        break;
      }
      temp = temp->next;
   }

   if(sorted == true)
   {
    cout << "Yes" << endl;
   }
   else{
    cout << "No" << endl;
   }
};

int main()
{
   Node* head = new Node(10);
   Node* a = new Node(1) ;
   Node* b = new Node(3) ;
   Node* c = new Node(5) ;
   Node* d = new Node(7) ;
   Node* e = new Node(8) ;
   Node* f = new Node(9) ;

   head->next = a;
   a->next = b;
   b->next = c;
   c->next = d;
   d->next = e;
   e->next = f;
   
   print_size(head);
    return 0;
}
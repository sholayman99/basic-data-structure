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

/*
 * Inserts a new node at the tail of the linked list.
 * Uses pass-by-reference to modify the head and tail.
 * Complexity: O(1) because we keep tail pointer.
 */
void insert_at_tail(Node *&head, Node* &tail, int val)
{
    Node *newnode = new Node(val); // Allocate new node with value

    if (head == NULL)
    {
        // List was empty: head and tail both point to new node
        head = newnode;
        tail = newnode;
        return;
    }

    // Attach new node at end
    tail->next = newnode;
    tail = newnode;
}


void print_linked_list(Node *head)
{
    Node *temp = head; // Temporary pointer to traverse
    while (temp != NULL)
    {
        cout << temp->val << endl; // Print current node's value
        temp = temp->next;         // Move to the next node
    }
}

int main()
{
   // Create initial linked list manually: 10 -> 20 -> 30 -> NULL
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // Link them together
    head->next = a;
    a->next = tail;

  
       // Insert new nodes at tail
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

    
       // Print the final linked list
    print_linked_list(head);

    // Print tail value to verify
    cout << "Tail =" << tail->val << endl;

    return 0;
}
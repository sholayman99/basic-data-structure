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
 * Inserts a new node at the head of the linked list.
 * Uses pass-by-reference to modify the original head.
 */
void insert_at_head(Node* &head, int val)  // Complexity: O(1)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;               // Temporary pointer to traverse
    while (temp != NULL)
    {
        cout << temp->val << endl;   // Print current node's value
        temp = temp->next;           // Move to the next node
    }
}


int main()
{
    // Create initial linked list: 10 -> 20 -> 30 -> NULL
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    // Insert new node with value 100 at head
    // List becomes: 100 -> 10 -> 20 -> 30 -> NULL
    insert_at_head(head, 100);

    // Print the linked list
    print_linked_list(head);

    return 0;
}
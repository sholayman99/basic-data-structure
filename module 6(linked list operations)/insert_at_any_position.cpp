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
 * Inserts a new node with the given value at the given position (1-based index).
 * Assumes the index is valid (between 1 and length of list + 1).
 * Passes head by reference (&) so head can change if needed.
 */
void insert_at_any_position(Node *&head, int idx, int val)  // Complexity: O(1); N=Idx
{
    Node *newnode = new Node(val); // Create new node

    if (idx == 1)
    {
        // Special case: insert at the head
        newnode->next = head;
        head = newnode;
        return;
    }

    Node* temp = head;
    // Traverse to (idx - 1)-th node (one before desired position)
    for(int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            return;
        }
    }

    // Insert newnode after temp
    newnode->next = temp->next;
    temp->next = newnode;
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
    // Manually create initial linked list: 10 -> 20 -> 30 -> NULL

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    // List becomes: 100 -> 10 -> 20 -> 30 -> NULL

       // Insert new nodes at specific positions
    insert_at_any_position(head, 2, 100); // After 1st node
    insert_at_any_position(head, 2, 200); // After 1st node again

    // Print the linked list
    print_linked_list(head);

    return 0;
}
#include <bits/stdc++.h>  
using namespace std;  



// --------------------------
// WHAT IS A LINKED LIST?
// --------------------------
// A Linked List is a data structure where elements (nodes) are connected using pointers.
// Unlike arrays, elements are NOT stored contiguously in memory.
// Each element (node) stores its own data and a pointer to the next element.
//
// Why do we need it?
// - Dynamic size (no fixed size like arrays)
// - Easy to insert/delete nodes in the middle
// - Useful for queues, stacks, hash tables, etc.


// --------------------------
// WHAT IS A SINGLY LINKED LIST?
// --------------------------
// A Singly Linked List is a type of linked list where each node points ONLY to the next node.
// The last node's next is NULL.
// Example:
//   [10] -> [20] -> [30] -> NULL
//
// We can't go backward in a singly linked list.


// --------------------------
// WHAT IS A NODE?
// --------------------------
// A node is a basic unit in a linked list.
// It typically has:
//   - Data (here: an integer value)
//   - A pointer to the next node
//
// Let's define such a Node below:

class Node
{
public:
    int val;     // stores the data (here, an integer)
    Node *next;  // stores the address of the next node in the list
};


// --------------------------
// MAIN FUNCTION
// --------------------------
int main()
{
    // --------------------------
    // CREATING THREE NODE OBJECTS
    // --------------------------
    Node a, b, c;

    // Set values for each node
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // --------------------------
    // LINKING NODES TO FORM A LIST
    // --------------------------
    // We make 'a' point to 'b'
    a.next = &b;
    // We make 'b' point to 'c'
    b.next = &c;
    // 'c' is the last node so it points to NULL
    c.next = NULL;

    // --------------------------
    // VISUAL REPRESENTATION
    // --------------------------
    // a --> b --> c --> NULL
    // 10   20   30

    // --------------------------
    // PRINTING VALUES
    // --------------------------

    // Print the value of the first node
    cout << a.val << endl;               // Output: 10

    // Print the value of the second node
    // Option 1 (commented): dereference manually
    // cout << (*a.next).val << endl;

    // Option 2 (preferred): arrow operator
    cout << a.next->val << endl;         // Output: 20

    // Print the value of the third node
    cout << a.next->next->val << endl;   // Output: 30

    // --------------------------
    // EXPLANATION OF -> OPERATOR
    // --------------------------
    // 'a.next' is a pointer to Node b.
    // 'a.next->val' means: go to b, get its val.
    //
    // Similarly:
    // 'a.next->next' is a pointer to Node c.
    // 'a.next->next->val' means: go to c, get its val.

    return 0;
}


/*
✅ TL;DR Explanation
Linked List:

A dynamic, non-contiguous collection of nodes.

Nodes are connected via pointers.

Singly Linked List:

Each node has a next pointer.

Moves in one direction only.

Node:

Data + next pointer.

Building block of the list.

Why use it?

Flexible size.

Efficient insertions/deletions.


*/

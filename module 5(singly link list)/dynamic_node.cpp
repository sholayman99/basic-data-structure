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

int main()
{
    /*
     * Creating nodes using dynamic memory allocation:
     * -----------------------------------------------
     * 'new Node(10)' creates a new node in heap with value 10.
     * We store its address in a pointer (Node*).
     *
     * So we create 3 nodes here:
     */
    Node* head = new Node(10); // Head (first node) with value 10
    Node* a = new Node(20);    // Second node with value 20
    Node* b = new Node(30);    // Third node with value 30

    /*
     * Linking the nodes:
     * --------------------
     * We connect them to form a chain:
     * head -> a -> b
     * 10 -> 20 -> 30 -> NULL
     */
    head->next = a;   // head points to a
    a->next = b;      // a points to b
    // b->next is already NULL (from constructor)

    /*
     * Traversing the linked list:
     * ----------------------------
     * We can access values by following the 'next' pointers.
     */
    cout << head->val << endl;             // prints 10
    cout << head->next->val << endl;       // prints 20
    cout << head->next->next->val << endl; // prints 30

    /*
     * Visualization of list in memory:
     * --------------------------------
     * [10 | next ] -> [20 | next ] -> [30 | NULL]
     *
     * head -> a -> b -> NULL
     */

 
    return 0;
}
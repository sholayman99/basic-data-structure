#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Examples of initializing std::list (commented out for illustration):

    // list<int> l;                     // Empty list
    // list<int> l(10);                 // List with 10 default-initialized elements (0)
    // cout << l.size() << endl;        // Prints the size of the list
    // list<int> l(10, 5);              // List with 10 elements, all initialized to 5
    // list<int> l = {1, 2, 3, 4, 5};   // List initialized from an initializer list

    // Another example: from an array (also commented out)
    // int a[4] = {0, 1, 2, 3};


    // Create a vector with some values
    vector<int> v = {2, 3, 4, 5};

    // Initialize a list using values from the vector
    // This copies the elements from v into the list l2
    list<int> l2(v.begin(), v.end());

    // Demonstrating list methods:

    // l2.clear();           // Removes all elements
    // cout << l2.size() << endl;  // Prints size after clear

    // if (l2.empty())       // Checks if the list is empty
    // {
    //     cout << "empty" << endl;
    // }

    // Resize examples:
    // l2.resize(2);               // Keeps only first 2 elements: output -> 2 3
    // l2.resize(5);               // Grows to size 5, new elements default-initialized to 0: output -> 2 3 4 5 0
    l2.resize(6, 100);             // Grows to size 6, new elements initialized to 100: output -> 2 3 4 5 100 100

    // Print all elements in the list
    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}


 // --------------------------------------------
    // What is STL list?
    //
    // std::list is a container from the C++ Standard Library (STL).
    // It is implemented as a *doubly linked list*.
    // Each element is stored in a node with pointers to the next and previous elements.
    //
    // Advantages:
    //   - Fast insertion and deletion anywhere in the sequence (O(1) if you have the iterator)
    //   - No reallocation or iterator invalidation like vector
    //
    // Disadvantages:
    //   - No random access (you can't use l[2])
    //   - Slightly more memory overhead per element (for pointers)
    //
    // Typical use:
    //   - When you need frequent insertions/deletions in the middle of a sequence
    // --------------------------------------------
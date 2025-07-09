#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize a list with some elements
    list<int> l = {10, 20, 30, 20, 50, 60, 70};

    // Declare an empty list
    list<int> l2;

    // Ways to copy one list into another:
    // l2 = l;                                   // Assignment
    // l2.assign(l.begin(), l.end());            // Assign using iterators

    // Add elements at the back and front
    l.push_back(40);      // Adds 40 to the end
    l.push_front(100);    // Adds 100 to the front

    // Remove elements from front and back
    l.pop_front();        // Removes 100 from front
    l.pop_back();         // Removes 40 from back

    // ------------------------------------------
    // Inserting into a list at a specific position
    // cout << *next(l.begin(), 2) << endl;              // Access element at index 2
    // l.insert(next(l.begin(), 2), 500);                // Insert 500 at index 2

    // list<int> l3 = {1, 2, 3};                         // Another list
    // l.insert(next(l.begin(), 2), l3.begin(), l3.end()); // Insert list at index 2

    // vector<int> v = {1000, 2000};                     // Vector data
    // l.insert(next(l.begin(), 2), v.begin(), v.end()); // Insert vector at index 2

    // ------------------------------------------
    // Erasing elements

    // l.erase(next(l.begin(), 2));                      // Erase single element at index 2
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));  // Erase range [2, 5)

    // ------------------------------------------
    // Replacing values (replaces all 20s with 1000)
    // replace(l.begin(), l.end(), 20, 1000);

    // ------------------------------------------
    // Finding an element in the list
    auto it = find(l.begin(), l.end(), 1000); // Will not find unless replace() is uncommented

    if (it == l.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    // Print all elements in the list
    for (int v : l)
    {
        cout << v << endl;
    }

    return 0;
}

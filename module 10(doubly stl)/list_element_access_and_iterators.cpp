#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize the list with values
    list<int> l = {10, 20, 30, 40, 50};

    // Accessing the first and last elements
    cout << "Front: " << l.front() << endl;   // 10
    cout << "Back: " << l.back() << endl;     // 50

    // Accessing the 3rd element (index 2)
    cout << "Element at index 2: " << *next(l.begin(), 2) << endl;  // 30

    // Accessing the first element via begin()
    cout << "Begin(): " << *l.begin() << endl;   // 10

    // Accessing end() is invalid! This will crash:
    // cout << *l.end() << endl;  // ❌ Undefined behavior

    // Instead you can safely compare with end():
    if (l.end() == next(l.begin(), l.size()))
    {
        cout << "end() points past-the-end correctly." << endl;
    }

    return 0;
}

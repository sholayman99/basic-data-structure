#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Declare an empty vector
    vector<int> v;

    // Initial size (number of elements): 0
    cout << "Initial size: " << v.size() << endl;          // Output: 0
    // capacity: O(1) — no elements, minimal allocation
    cout << "Initial capacity: " << v.capacity() << endl;

    // 🔼 Add elements using push_back()
    v.push_back(10);  // capacity: O(1) → may double when exceeded
    v.push_back(20);  // capacity: O(n) (amortized growth)
    
    cout << "Size after 2 insertions: " << v.size() << endl;   // Output: 2
    cout << "Capacity after insertions: " << v.capacity() << endl;

    // ❌ Clear all elements (removes data but keeps memory)
    v.clear();  // size = 0; capacity unchanged
    // capacity: O(n)
    cout << "Size after clear(): " << v.size() << endl;
    cout << "Capacity after clear(): " << v.capacity() << endl;

    // ⚠️ Accessing an index after clear is undefined (may crash)
    cout << "Accessing v[1] after clear: " << v[1] << endl;

    // ✅ Check if vector is empty
    if (v.empty())  // capacity: O(1)
    {
        cout << "Hi (vector is empty)" << endl;
    }
    else
    {
        cout << "Bye (vector is not empty)" << endl;
    }

    // 📏 Resize vector to 5 and fill new elements with 100
    v.resize(5, 100);  // capacity: O(n)
    // Now: v = [100, 100, 100, 100, 100]

    cout << "Size after resize: " << v.size() << endl;
    cout << "Capacity after resize: " << v.capacity() << endl;

    // 🔁 Print vector elements
    cout << "Vector contents: ";
    for (int i = 0; i < v.size(); i++)  // capacity: O(n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    

    return 0;
}

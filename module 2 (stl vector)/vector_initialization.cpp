#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Type 1: Empty vector
    vector<int> v1; // Complexity: O(1)

    // ✅ Type 2: Vector with fixed size (default initialized to 0)
    vector<int> v2(10); // Complexity: O(n)

    // ✅ Type 3: Vector with fixed size and initialized with a value
    vector<int> v3(5, 2); // Complexity: O(n)

    // ✅ Type 4: Copy constructor from another vector
    vector<int> v4(v3); // Complexity: O(n)

    // ✅ Type 5: Create vector from array
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a + 5); // Complexity: O(n)

    // ✅ Type 6: Initializer list
    vector<int> v6 = {2, 3, 4, 5, 6}; // Complexity: O(n)

    // 📤 Print the vector
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << " ";
    }

    return 0;
}

/**
 * 🧠 What is Vector in STL?
 *
 * STL = Standard Template Library in C++
 *
 * 📌 Vector is a dynamic array that:
 * - Allows random access
 * - Automatically resizes
 * - Supports insertion/deletion
 *
 * Header: #include <vector>
 *
 * ✅ Common use-case: storing a list of elements that can grow/shrink at runtime.
 */

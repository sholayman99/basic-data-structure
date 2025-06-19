#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Initialize vector with 6 elements
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // ✅ Access element at index 3
    // Time complexity: O(1)
    cout << "v[3] = " << v[3] << endl;         // Output: 4

    // ✅ Get last element using .back()
    // Time complexity: O(1)
    cout << "v.back() = " << v.back() << endl; // Output: 6

    // ✅ Get index of last element using .size() - 1
    // Time complexity: O(1)
    cout << "v.size() - 1 = " << v.size() - 1 << endl; // Output: 5

    // ✅ Get first element using .front()
    // Time complexity: O(1)
    cout << "v.front() = " << v.front() << endl; // Output: 1

    // ✅ Get first element using index
    // Time complexity: O(1)
    cout << "v[0] = " << v[0] << endl;           // Output: 1

    return 0;
}

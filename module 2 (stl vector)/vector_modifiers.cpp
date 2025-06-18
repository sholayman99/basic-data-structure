#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ✅ Initialize vectors
    vector<int> v2 = {1, 2};
    vector<int> v3 = {4, 5};

    // ✅ Copy constructor (v = [1, 2])
    vector<int> v = v2; // Time complexity: O(n)

    // ✅ Overwrite v with v3 (v = [4, 5])
    // Time complexity: O(n)
    v.assign(v3.begin(), v3.end());

    // ✅ Push an element to the back (v = [4, 5, 6])
    // Time complexity: O(1) amortized
    v.push_back(6);

    // ✅ Remove last element (v = [4, 5])
    // Time complexity: O(1)
    v.pop_back();

    // ✅ Insert 1 at beginning (v = [1, 4, 5])
    // Time complexity: O(n)
    v.insert(v.begin() + 0, 1);

    // ✅ Insert multiple elements from v4 into v at position 1
    // v = [1, 30, 2, 4, 5]
    vector<int> v4 = {30, 2};
    // Time complexity: O(n + m) → n = size of v, m = size of v4
    v.insert(v.begin() + 1, v4.begin(), v4.end());

    // ✅ Insert single element at position 3 (v = [1, 30, 2, 3, 4, 5])
    // Time complexity: O(n)
    v.insert(v.begin() + 3, 3);

    // ✅ Erase element at index 1 (removes 30)
    // v = [1, 2, 3, 4, 5]
    // Time complexity: O(n)
    v.erase(v.begin() + 1);

    // ✅ Erase elements in range [3, 5) → removes 4 and 5
    // v = [1, 2, 3]
    // Time complexity: O(n)
    v.erase(v.begin() + 3, v.begin() + 5);

    // ✅ Print final contents
    // Time complexity: O(n)
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}

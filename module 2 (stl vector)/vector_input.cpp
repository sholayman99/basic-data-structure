#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Declare a vector to store n integers
    vector<int> v;

    // Read n integers and push into vector
    // Time complexity: O(n) (amortized for push_back)
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // Print all elements in the vector
    // Time complexity: O(n)
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

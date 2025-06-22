#include <bits/stdc++.h> // Includes all standard C++ libraries (used in competitive programming)
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // Input array (1-based indexing used for easier prefix calculation)
    vector<long long> v(n + 1);

    // Read input values into the array
    for (int i = 1; i <= n; i++)  // Time complexity: O(n)
    {
        cin >> v[i];
    }

    vector<long long> pre(n + 1);  // Prefix sum array

    pre[1] = v[1];  // First prefix is the first element itself

    // Build the prefix sum array
    for (int i = 2; i <= n; i++)   // Time complexity: O(n)
    {
        pre[i] = pre[i - 1] + v[i];
        // Formula: pre[i] = pre[i-1] + v[i]
    }

    // Answering each query using prefix sum
    while (q--)    // Time complexity: O(q)
    {
        int l, r;
        cin >> l >> r;

        long long sum = 0;

        // If starting from index 1, just return pre[r]
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            // Sum from index l to r = pre[r] - pre[l-1]
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;  // Output the sum for current query
    }

    return 0;
}


/**
 * Total complexity now: Q(N)/Q(N)
 */

     // -----------------------------------------------
    // PREFIX SUM ARRAY: Used to calculate sum of any subarray in O(1) time
    // Definition: pre[i] = v[1] + v[2] + ... + v[i]
    // So to get sum from l to r: sum = pre[r] - pre[l-1]
    // Example:
    //   If v = [0, 5, 2, 1, 3] (1-based)
    //   Then pre[1] = 5
    //        pre[2] = 5 + 2 = 7
    //        pre[3] = 5 + 2 + 1 = 8
    //        pre[4] = 5 + 2 + 1 + 3 = 11
    //   To get sum of v[2] to v[4] → pre[4] - pre[1] = 11 - 5 = 6
    // -----------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Nested loop: i runs from 0 to n-1, and for each i, j runs from 0 to n-1
    // Total operations = n * n = n^2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "hello" << endl;
        }
    }

    return 0;
}

/**
 * ✅ Time Complexity: O(n * n) = O(n²)
 *
 * 🔁 If you add another nested loop inside (3 total), it becomes:
 *     O(n * n * n) = O(n³)
 *
 * 📌 In general:
 * - Two nested loops (same range): O(n²)
 * - Three nested loops: O(n³)
 * - If the loops run on different ranges:
 *     Outer loop: size n
 *     Middle loop: size m
 *     Inner loop: size o
 *     Then complexity = O(n * m * o)
 */

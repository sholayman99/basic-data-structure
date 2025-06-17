#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Outer loop runs n times => O(n)
    for (int i = 0; i < n; i++)
    {
        // Inner loop runs as: j = 1, 2, 4, 8, ..., up to < n
        // This is a geometric progression => O(log n)
        for (int j = 1; j < n; j *= 2)
        {
            cout << "hello" << endl;
        }
    }

    return 0;
}

/**
 * ✅ Time Complexity: O(n * log n)
 *
 * ✨ Explanation:
 * - Outer loop runs n times => O(n)
 * - Inner loop runs log₂(n) times for each i => O(log n)
 * - Combined: O(n * log n)
 *
 * 💡 This type of complexity is called "linearthmic" or "linearithmic"
 * - It combines both linear and logarithmic growth
 */

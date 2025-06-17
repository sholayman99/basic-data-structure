#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // First variation: using sqrt(n) in loop condition
    // This loop finds all divisors of n
    // Time Complexity: O(√n)
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i << " " << n / i << " "; 
        }
    }

    // Second variation: using i*i <= n, avoids calling sqrt(n) in each iteration
    // More efficient since sqrt(n) is computed implicitly
    // Also finds all divisors of n
    // Time Complexity: O(√n)
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " " << n / i << " "; 
        }
    }

    return 0;
}

/**
 * ✅ Time Complexity: O(√N)
 * - We're only checking up to the square root of n
 * - For each divisor i, we can print both i and n/i
 * - Note: May print duplicate if i == n/i (e.g. when n is a perfect square)
 *
 * ✅ Second loop is preferred because:
 * - It avoids repeated sqrt(n) function calls
 * - Safer and more performant
 */

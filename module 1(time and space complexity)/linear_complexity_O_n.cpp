#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Variation 1: Standard loop
    for (int i = 0; i < n; i++) {
        cout << "Hi";
    }
    // Runs n times → O(n)

    // Variation 2: i <= n
    for (int i = 0; i <= n; i++) {
        cout << "Hi";
    }
    // Runs n + 1 times → O(n)

    // Variation 3: i < n + 100
    for (int i = 0; i < n + 100; i++) {
        cout << "Hi";
    }
    // Runs n + 100 times → O(n), constants are ignored

    // Variation 4: i < 2 * n
    for (int i = 0; i < 2 * n; i++) {
        cout << "Hi";
    }
    // Runs 2n times → O(n), multiplier constant is ignored

    // Variation 5: i < n / 2
    for (int i = 0; i < n / 2; i++) {
        cout << "Hi";
    }
    // Runs n / 2 times → O(n), divisor constant is ignored

    // Variation 6: Skipping steps (i += 2)
    for (int i = 0; i < n; i += 2) {
        cout << "Hi";
    }
    // Runs about n/2 times → O(n)

    // Variation 7: Backward loop
    for (int i = n; i > 0; i--) {
        cout << "Hi";
    }
    // Also runs n times → O(n)

    // Variation 8: While loop
    int i = 0;
    while (i < n) {
        cout << "Hi";
        i++;
    }
    // Equivalent to for loop → O(n)

    // Variation 9: Using a constant-time function inside loop
    auto sayHi = []() { cout << "Hi"; };
    for (int i = 0; i < n; i++) {
        sayHi();
    }
    // Function is O(1), called n times → O(n)

    return 0;
}

/**
 * All above loops have time complexity O(n).
 * Even though number of iterations may slightly vary (n, n+100, n/2, etc.),
 * in Big-O we ignore constant additions/multipliers/divisors.
 * Therefore, they are all considered linear time → O(n).
 */

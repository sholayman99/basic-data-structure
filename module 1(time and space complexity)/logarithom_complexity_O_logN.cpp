#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n]; // Declares an array of size n

    // Loop 1: i doubles each time (1, 2, 4, 8, ...)
    // Time Complexity: O(log₂N)
    for(int i = 1; i <= n; i *= 2)
    {
        cout << a[i] << endl;
    }

    // Loop 2: i is divided by 3 each time
    // BUT since i starts from 1 and 1/3 is 0, it becomes an infinite loop
    // So this loop will run infinitely unless 'n < 1'
    // Warning: This loop is logically incorrect!
    for(int i = 1; i <= n; i /= 3)
    {
        cout << a[i] << endl;
    }

    // Loop 3: i is first divided by 3, then multiplied by k (2)
    // But again, since i starts at 1 and i /= 3 becomes 0, this will be an infinite loop or no iteration
    // Also logically incorrect
    int k = 2;
    for(int i = 1; i <= n; i /= 3)
    {
        cout << a[i] << endl;
        i *= k;
    }

    return 0;
}

/*
* Logarithmic complexity = O(log N)
* Any loop where the counter is multiplied (i *= 2, i *= k, etc.) or divided (i /= 2, etc.)
* has a logarithmic time complexity.
* But you must ensure the counter doesn't become 0 and cause infinite loops.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {

        int sum = 0;
        int b, c;
        cin >> b >> c;

        for (int i = b - 1; i < c; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}
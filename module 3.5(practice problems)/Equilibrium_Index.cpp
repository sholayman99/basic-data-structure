#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> pre(n + 1);

    pre[0] = a[0];
    int l = 0;
    int r = 0;

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int total = pre[n];
        int left = pre[i];
        int right = total - pre[i];

        if (left == right)
        {
            cout << "Equilibrium index: " << a[i] << endl;
            return 0;
        }
    }
    return 0;
}
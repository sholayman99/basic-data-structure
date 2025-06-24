#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int found = 0;
        int l, r;
        l = 0;
        r = n - 1;
    
        while (l <= r)
        {
             int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                found = 1;
                break;
            }
            else if (a[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (found == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
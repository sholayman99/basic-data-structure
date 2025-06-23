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
    for (int i = 0; i < q; i++)
    {

        int val;
        cin >> val;
        int l, r;
        l = 0;
        r = n - 1;
        int found = 0;
        sort(a, a + n);
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                found = 1;
                break;
            }
            else if (a[mid] > val)
            {

                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (found == 0)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
    return 0;
}
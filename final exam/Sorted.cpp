#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        set<int> se;

        while (n--)
        {
            int val;
            cin >> val;
            se.insert(val);
        }

        for (auto it = se.begin(); it != se.end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}

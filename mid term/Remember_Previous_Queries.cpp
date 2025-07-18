#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            int sz = l.size();
            if (v >= 0 && v < sz)
            {
                l.erase(next(l.begin(), v));
            }
        }
        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        list<int> rev = l;
        rev.reverse();
        cout << "R -> ";
        for (int val : rev)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

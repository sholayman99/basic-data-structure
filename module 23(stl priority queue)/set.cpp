#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> se;

    while (n--) // complexity O(logN)
    {
        int val;
        cin >> val;
        se.insert(val);
    }

    for (auto it = se.begin(); it != se.end(); it++)
        cout << *it << " " << endl;

    if (se.count(40))
        cout << "ache";
    else
        cout << "nai";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    for (int z : v)
    {
        cout << z << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        // cin >> s[i];
        getline(cin, s[i]);
    }

    for (string x : s)
    {
        cout << x << endl;
    }

    return 0;
}
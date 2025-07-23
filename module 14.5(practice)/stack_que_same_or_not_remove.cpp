#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "No" << endl;
        return 0;
    }

    bool flag = true;
    while (!st.empty())
    {
        int v1 = st.top();
        int v2 = q.front();
        if (v1 != v2)
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (flag == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int> st2;
   
    while(!st.empty())
    {
        int val = st.top();
        st2.push(val);
        st.pop();

    }

    while(!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}
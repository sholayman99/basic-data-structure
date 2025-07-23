#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    int pop()
    {
        if (!v.empty())
        {
            int val = v.back();
            v.pop_back();
            return val;
        }

        throw runtime_error("Stack is empty. Cannot pop.");
    }
    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    myStack st2;

    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (n != m)
    {
        cout << "No" << endl;
        return 0;
    }

    bool flag = true;

    while (!st.empty())
    {
        if (st.pop() != st2.pop())
        {
            flag = false;
            break;
        }
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
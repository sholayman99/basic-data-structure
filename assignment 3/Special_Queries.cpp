#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> qu;
    while (q--)
    {
        string c;
        cin >> c;
        if (c == "0")
        {
            string val;
            cin >> val;
            qu.push(val);
        }
        else{
            if( qu.empty() && c== "1")
            {
                cout << "Invalid" << endl;
            }
            else{
                cout << qu.front() << endl;
                qu.pop();
            }
        }
    }

    return 0;
}
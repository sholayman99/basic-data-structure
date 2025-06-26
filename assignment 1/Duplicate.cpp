#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }

    int found = 0;
    sort(a,a+n);
    for(int i=1 ; i<=n ; ++i)
    {
            if(a[i] == a[i-1])
            {
                found = 1;
                break;
            }
    }

    if(found == 1)
    {
        cout << "YES" << endl;
    }
    else{
         cout << "NO" << endl;
    }

    return 0;
}
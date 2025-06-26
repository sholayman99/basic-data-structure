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

        vector<int> a(n); 
        for (int i = 0; i < n; i++) // O(N)
        {
            cin >> a[i];
        }

        int sorted = 1;

       for(int i=1 ; i<n ; i++) // O(N)
       {
          if(a[i] < a[i-1])
          {
            sorted = 0;
            break;
          }
       }

       if(sorted == 0)
       {
        cout << "NO" << endl;
       }
       else{
         cout << "YES" << endl;
       }
    }

    return 0;
}

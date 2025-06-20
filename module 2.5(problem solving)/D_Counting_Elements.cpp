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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      int target = v[i]+1;

      for(int j=0 ; j<n ; j++)
      {
        if(v[j] == target)
        {
            count++;
            break;
        }
      }
    }

    cout << count << endl;
    return 0;
}
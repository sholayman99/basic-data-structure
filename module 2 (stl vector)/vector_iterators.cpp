#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // ✅ Use iterator to loop through vector
    // Time complexity: O(n)
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl; 
    }

    return 0;
}

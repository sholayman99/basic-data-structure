#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["tamim"] = 5; //insert one O(logN); insert N number O(NLogN)
    mp["shakib"] = 10;
    mp["mushi"] = 9;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;  //print one O(logN); print N number O(NLogN)
    }

    return 0;
}
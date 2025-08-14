#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        string maxWord;
        map<string, int> mp;
        int max = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                max = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << max << endl;
    }

    return 0;
}
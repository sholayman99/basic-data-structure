#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s;
    string w;


    while (cin >> w) {
        s.push_back(w);
    }

    int freq[26] = {0};

    
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s[i].size(); j++) {
            freq[s[i][j] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << "\n";
        }
    }

    return 0;
}

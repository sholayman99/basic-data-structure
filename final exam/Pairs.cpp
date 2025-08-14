#include <bits/stdc++.h>
using namespace std;

struct Item {
    string name;
    int value;
};

bool cmp(const Item &a, const Item &b) {
    if (a.name != b.name)
        return a.name < b.name;
    return a.value > b.value;
}

int main() {
    int n;
    cin >> n;
    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> items[i].name >> items[i].value;
    }

    sort(items.begin(), items.end(), cmp);

   for (int i = 0; i < n; i++) {
        cout << items[i].name << " " << items[i].value << endl;
    }

    return 0;
}

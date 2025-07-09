#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l={10,20,10,30,30,60,50,30};
    //l.remove(10);
    //l.sort();
    //l.sort(greater<int>());
    //l.unique();
    l.reverse();

     // Print all elements in the list
    for (int v : l)
    {
        cout << v << endl;
    }

    return 0;
}
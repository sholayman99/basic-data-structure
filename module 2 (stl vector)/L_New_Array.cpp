#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>a;
    vector<int>b;

    for(int i=0 ; i<n ; i++)
    {
       int x;
       cin >> x ;
       a.push_back(x); 
     
    }

     for(int i=0 ; i<n ; i++)
    {
       int y;
       cin >> y ;
       b.push_back(y); 
     
    }
    
    vector<int>c=a;
    c.insert(c.begin()+0,b.begin(),b.end());


    for(int z:c)
    {
       cout << z << " "; 
    }    

    return 0;
}
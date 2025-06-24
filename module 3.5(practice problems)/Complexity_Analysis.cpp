#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // O(1)
    cin >> n;
    int k = 1;
    while (k <= n) // O(logN)
    {
        cout << k << endl;
        k = k * 2; // O(1)
    }

    //  O(logN)

    for (int i = 0; i < n; i++) // O(N)
        for (int j = i; j > 0; j--) // O(N)
            cout << i << j;
   // o(N*N)


   
for (int i = 0; i < n; i++) // O(N)
        for (int j = i; j > 0; j--) // O(i)
            for(int k=j; k > 0; k--) // O(j)
                cout << i << j << k;

// O(N*N*N)


for(int i=n/2;i<=n;i++){ // O(N)
	for(int j=1;j<=n;j=j*2){ // O(logN)
   		cout<<i<<j<<endl;
	}
}
// O(NlogN)



for(int i=n/2;i<=n;i++){  // O(N)
	for(int j=1;j<=n;j=j++){ // O(N)
   		cout<<i<<j<<endl;
	}
}

// O(N*N)

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Function that takes a reference to a pointer
void fun(int *&p)
{
    p = NULL;
};

/*
✅ int* &p means: reference to a pointer to int.

-Normal int* p copies the pointer.
-But int* &p allows us to modify the original pointer itself.

✅ Inside the function: p = NULL;

-Sets the caller’s pointer to NULL.
-Because it's a reference to the pointer.


*/

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << p << endl; // Prints 0 or (nil) or (nullptr)

    return 0;
}
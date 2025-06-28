#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "X" << endl;
        }
        else if (i < n / 2)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "\\";
            int space_between = n - 2 - 2 * i;
            for (int k = 0; k < space_between; k++)
            {
                cout << " ";
            }
            cout << "/" << endl;
        }
        else
        {
            int space_bottom_part = n - i - 1;
            for (int j = 0; j < space_bottom_part; j++)
            {
                cout << " ";
            }
            cout << "/";
            int space_between = n - 2 - 2 * space_bottom_part;
            for (int k = 0; k < space_between; k++)
            {
                cout << " ";
            }
            cout << "\\" << endl;
        }
    }

    return 0;
}

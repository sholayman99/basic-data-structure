#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] < v[cur_idx])
            swap(v[par_idx], v[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }
}

void print_heap(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    cout << v[0] << " Deleted -> ";
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int lft_idx = cur_idx * 2 + 1;
        int rgt_idx = cur_idx * 2 + 2;

        int lft_val = INT_MIN;
        int rgt_val = INT_MIN;
        if (lft_idx < v.size())
            lft_val = v[lft_idx];
        if (rgt_idx < v.size())
            rgt_val = v[rgt_idx];

        if (lft_val >= rgt_val && lft_val > v[cur_idx])
        {
            swap(v[lft_idx], v[cur_idx]);
            cur_idx = lft_idx;
        }
        else if (rgt_val > lft_val && rgt_val > v[cur_idx])
        {
            swap(v[rgt_idx], v[cur_idx]);
            cur_idx = rgt_idx;
        }
        else
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}
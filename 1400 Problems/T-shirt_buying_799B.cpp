#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, val;
    cin >> n;
    int p[n];
    unordered_map<int, set<pair<int, int>>> d, e;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        d[val].insert({p[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        e[val].insert({p[i], i});
    }
    cin >> m;
    set<int> sold;
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        int min_price = INT_MAX;
        int t_index = -1;
        if (d.find(val) != d.end())
        {
            while (!d[val].empty() && sold.count(d[val].begin()->second))
                d[val].erase(d[val].begin());
            if (!d[val].empty())
            {
                min_price = d[val].begin()->first;
                t_index = d[val].begin()->second;
            }
        }
        if (e.find(val) != e.end())
        {
            while (!e[val].empty() && sold.count(e[val].begin()->second))
                e[val].erase(e[val].begin()); // Remove already sold t-shirts
            if (!e[val].empty() && e[val].begin()->first < min_price)
            {
                min_price = e[val].begin()->first;
                t_index = e[val].begin()->second;
            }
        }
        if (t_index == -1)
            cout << -1 << " ";
        else
        {
            cout << min_price << " ";
            sold.insert(t_index);
        }
    }
    return 0;
}
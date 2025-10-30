#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f = 0;
    int s, n, x, y;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for (const auto &i : v)
    {
        if (i.first >= s)
        {
            f = 1;
            break;
        }
        else
            s += i.second;
    }
    if(f)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
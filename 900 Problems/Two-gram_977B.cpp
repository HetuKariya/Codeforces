#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, maximum = 0;
    map<string, int> mp;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (mp.find(s.substr(i, 2)) == mp.end())
            mp[s.substr(i, 2)] = 1;
        else
            mp[s.substr(i, 2)]++;
    }
    for (auto i : mp)
    {
        if (i.second > maximum)
            maximum = i.second;
    }
    for (auto i : mp)
    {
        if (i.second == maximum)
        {
            cout << i.first;
            break;
        }
    }
    return 0;
}
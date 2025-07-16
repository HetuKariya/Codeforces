#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, val;
    cin >> n;
    unordered_map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        a[val] = i + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        auto it = a.find(i);
        cout << it->second << " ";
    }
    return 0;
}
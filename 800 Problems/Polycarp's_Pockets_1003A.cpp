#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    vector<int> b;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    t = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
        b.push_back(count(a, a + t, a[i]));
    int max = b.at(0);
    for (int i = 1; i < int(b.size()); i++)
    {
        if (b.at(i) > max)
            max = b.at(i);
    }
    cout << max;
    return 0;
}
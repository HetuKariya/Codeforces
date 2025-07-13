#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p, q, f;
    cin >> n >> p;
    set<int> a, b, c;
    while(p--)
    {
        int j;
        cin >> j;
        a.insert(j);
    }
    cin >> q;
    while (q--)
    {
        int l;
        cin >> l;
        b.insert(l);
    }
    c.insert(a.begin(), a.end());
    c.insert(b.begin(), b.end());
    f = c.size();
    if (f >= n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
    return 0;
}
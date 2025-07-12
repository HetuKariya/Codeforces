#include <bits/stdc++.h>
using namespace std;
set<int> isUnion(set<int>, set<int>, set<int>);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> a, b, c, e;
    for (int i = k; i <= d; i = i + k)
        a.insert(i);
    for (int i = l; i <= d; i = i + l)
        b.insert(i);
    for (int i = m; i <= d; i = i + m)
        c.insert(i);
    for (int i = n; i <= d; i = i + n)
        e.insert(i);
    set<int> u0, u2;
    u0 = isUnion(u0, a, b);
    u2 = isUnion(u2, c, e);
    set<int> f;
    f = isUnion(f, u0, u2);
    cout << f.size();
    return 0;
}
set<int> isUnion(set<int> u0, set<int> a, set<int> b)
{
    u0.insert(a.begin(), a.end());
    u0.insert(b.begin(), b.end());
    return u0;
}
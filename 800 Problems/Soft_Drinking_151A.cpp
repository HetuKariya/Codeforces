#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, l, c, d, p, nl, np, a, b, e, f;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    a = (k * l) / nl;
    b = c * d;
    e = p / np;
    f = min(e, min(a, b)) / n;
    cout << f;
    return 0;
}
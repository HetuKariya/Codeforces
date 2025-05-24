#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, n, w, p = 0, t;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        p += i * k;
    if (p > n)
        t = p - n;
    else
        t = 0;
    cout << t;
    return 0;
}
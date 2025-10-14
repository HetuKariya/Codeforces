#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, val, ans = 0, cnt = 0;
    cin >> n >> x;
    val = sqrt(x);
    for (int i = 1; i <= val; i++)
    {
        if (x % i == 0 && i <= n && x / i <= n && i != x / i)
            ans++;
        else if (x % i == 0 && i <= n && x / i <= n && i == x / i)
            cnt++;
    }
    cout << ans * 2 + cnt;
    return 0;
}
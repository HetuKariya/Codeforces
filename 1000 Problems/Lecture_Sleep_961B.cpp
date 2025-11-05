#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, l, r, i = 0;
    long long ans = 0, mx = 0;
    cin >> n >> k;
    int a[n], t[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
        {
            ans += a[i];
            t[i] = 0;
            a[i] = 0;
        }
    }
    for (int j = 0; j < k; j++)
        ans += a[j];
    l = 0;
    r = k - 1;
    mx = ans;
    for (int j = k; j < n; j++)
    {
        ans -= a[i];
        ans += a[j];
        i++;
        if (ans > mx)
        {
            l = i;
            r = j;
            mx = ans;
        }
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[m];
    long long ans = 0;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    ans += a[0] - 1;
    for (int i = 0; i < m - 1; i++)
    {
        if (a[i] > a[i + 1])
            ans += n - a[i] + a[i + 1]; // This is equal to n - a[i] + 1 + a[i + 1] - 1 as we go from a[i] to n so n - a[i] then n to 1 so + 1 and then 1 to a[i + 1] so a[i + 1] - 1
        else
            ans += abs(a[i] - a[i + 1]);
    }
    cout << ans;
    return 0;
}
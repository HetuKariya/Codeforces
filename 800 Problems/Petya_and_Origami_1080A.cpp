#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n, k, ans = 0;
    cin >> n >> k;
    if ((n * 2) / k >= 1 && (n * 2) % k == 0)
        ans += (n * 2) / k;
    else if ((n * 2) / k >= 1 && (n * 2) % k != 0)
        ans += (n * 2) / k + 1;
    else
        ans += 1;
    if ((n * 5) / k >= 1 && (n * 5) % k == 0)
        ans += (n * 5) / k;
    else if ((n * 5) / k >= 1 && (n * 5) % k != 0)
        ans += (n * 5) / k + 1;
    else
        ans += 1;
    if ((n * 8) / k >= 1 && (n * 8) % k == 0)
        ans += (n * 8) / k;
    else if ((n * 8) / k >= 1 && (n * 8) % k != 0)
        ans += (n * 8) / k + 1;
    else
        ans += 1;
    cout << ans;
    return 0;
}
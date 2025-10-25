#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, ans = 0;
    cin >> n;
    for(int i = 0; i < n;i++)
        ans += 2LL << i;
    cout << ans;
    return 0;
}
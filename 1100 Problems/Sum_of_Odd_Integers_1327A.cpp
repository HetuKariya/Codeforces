#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n >= k * k && n % 2 == k % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
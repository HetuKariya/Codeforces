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
        if (n - 1 >= k)
            cout << k << "\n";
        else
            cout << k + (k - 1) / (n - 1) << "\n";
    }
    return 0;
}
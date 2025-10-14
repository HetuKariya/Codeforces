#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long int l, r, k;
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> k;
        if (r / k - l + 1 > 0)
            cout << r / k - l + 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}
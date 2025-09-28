#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) << "\n";
    }
    return 0;
}
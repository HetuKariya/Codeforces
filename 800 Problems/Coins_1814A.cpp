#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (n % 2 != 0 && k % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
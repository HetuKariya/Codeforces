#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long int n;
    while (t--)
    {
        cin >> n;
        while (n % 2 == 0)
            n /= 2;
        if (n > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
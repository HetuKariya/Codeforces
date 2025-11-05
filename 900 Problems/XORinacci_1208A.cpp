#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long a, b, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        if (n % 3 == 0)
            cout << a << "\n";
        else if (n % 3 == 1)
            cout << b << "\n";
        else
            cout << (a ^ b) << "\n";
    }
    return 0;
}
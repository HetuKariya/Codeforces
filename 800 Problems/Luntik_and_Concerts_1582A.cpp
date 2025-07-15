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
        long long int a, b, c, s;
        cin >> a >> b >> c;
        s = (a * long(1)) + (b * long(2)) + (c * long(3));
        if (s % 2 == 0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}
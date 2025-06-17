#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long double a, b, c = 0;
    while (t--)
    {
        cin >> a >> b;
        c = ceil(a / b) * b;
        c = c - a;
        cout << long(c) << "\n";
    }
    return 0;
}
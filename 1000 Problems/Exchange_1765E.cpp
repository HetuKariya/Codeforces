#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (a > b)
            cout << 1 << "\n";
        else
            cout << (int)ceil((double)n / a) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 3)
            cout << 3 << "\n";
        else
            cout << 2 << "\n";
    }
    return 0;
}
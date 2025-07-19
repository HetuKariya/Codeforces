#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long int l, r, j;
    while (t--)
    {
        j = 1;
        cin >> l >> r;
        if (l == r)
            cout << 1 << "\n";
        else
        {
            while (l <= r)
            {
                l += j;
                j++;
            }
            cout << j - 1 << "\n";
        }
    }
    return 0;
}
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
        int n, k, j = 0, a = 0;
        cin >> n >> k;
        do
        {
            if (j % k == 0)
                a += 1;
            j++;
        } while (a != n);
        cout << j << "\n";
    }
    return 0;
}
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
        long int n;
        cin >> n;
        long long int a[n], maxproduct = 1;
        for (long int i = 0; i < n; i++)
            cin >> a[i];
        for (long int i = 0; i < n - 1; i++)
        {
            if (max(maxproduct, (a[i] * a[i + 1])) == maxproduct)
                continue;
            else
                maxproduct = a[i] * a[i + 1];
        }
        cout << maxproduct << "\n";
    }
    return 0;
}
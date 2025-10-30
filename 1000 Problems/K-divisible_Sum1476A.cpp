#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, k; 
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n <= k && k % n == 0)
            cout << k / n << "\n"; 
        else if (n <= k && k % n != 0)
            cout << k / n + 1 << "\n"; 
        else if (n % k == 0)
            cout << 1 << "\n"; 
        else
            cout << 2 << "\n";
    }
    return 0;
}
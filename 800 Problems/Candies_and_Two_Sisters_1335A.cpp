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
        if (n == 1)
            cout << 0 << "\n";
        else if (n % 2 == 0)
            cout << (n / 2) - 1 << "\n";
        else
            cout << n / 2 << "\n";
    }
    return 0;
}
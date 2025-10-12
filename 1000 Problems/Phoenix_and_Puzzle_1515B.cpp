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
        if (((((n & (n - 1)) == 0)) || (ceil((double)sqrt(((double)n / 2))) == floor((double)sqrt(((double)n / 2)))) || ((ceil((double)sqrt(((double)n / 4))) == floor((double)sqrt(((double)n / 4)))))) && (n != 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
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
        char a;
        cin >> a;
        if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 's')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
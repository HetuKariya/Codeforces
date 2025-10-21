#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p = 0, ans;
    char ch;
    cin >> n;
    while (n--)
    {
        cin >> ch >> ans;
        if (ch == 'P')
            p += ans;
        else if (ch == 'B' && ans > p)
        {
            p = 0;
            cout << "YES\n";
        }
        else if (ch == 'B' && ans <= p)
        {
            p -= ans;
            cout << "NO\n";
        }
    }
    return 0;
}
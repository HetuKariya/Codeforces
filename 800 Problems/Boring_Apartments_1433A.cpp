#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b;
    string s;
    cin >> t;
    while (t--)
    {
        a = 0;
        cin >> s;
        b = int(s.length());
        while (b > 0)
        {
            a += (b + (b - 1));
            b -= 2;
        }
        a += ((s[0] - '1') * 10);
        cout << a << "\n";
    }
    return 0;
}
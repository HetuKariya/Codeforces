#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int a, b, c, d, e = 0;
    cin >> a >> b >> c >> d >> s;
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s[i] == '1')
            e += a;
        else if (s[i] == '2')
            e += b;
        else if (s[i] == '3')
            e += c;
        else if (s[i] == '4')
            e += d;
    }
    cout << e;
    return 0;
}
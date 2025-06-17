#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << int(s[0] - '0') + int(s[2] - '0') << "\n";
    }
    return 0;
}
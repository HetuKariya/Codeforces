#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i = 1, j = 1, n;
    string s;
    cin >> n >> s;
    while (i <= n)
    {
        cout << s[i - 1];
        i += j;
        j++;
    }
    return 0;
}
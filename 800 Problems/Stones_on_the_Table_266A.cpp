#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            a++;
    }
    cout << a;
    return 0;
}
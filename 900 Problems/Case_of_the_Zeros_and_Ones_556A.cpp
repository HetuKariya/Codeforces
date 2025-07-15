#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    long n, count = 0, count1 = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count++;
        else
            count1++;
    }
    cout << max(count, count1) - min(count, count1);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long n, cnt;
    float N;
    string s;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        N = sqrt(n);
        n = sqrt(n);
        cin >> s;
        if (N != n)
        {
            cout << "No\n";
            continue;
        }
        for (int i = 0; i < int(s.length()); i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        if (cnt == (4 * sqrt(int(s.length()))) - 4)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long int n, cnt, b;
    string s;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        b = n;
        cin >> s;
        for (int j = 0; j < int(s.length()) - 2; j++)
        {
            if (((s[j] == 'm' && s[j + 1] == 'a' && s[j + 2] == 'p') || (s[j] == 'p' && s[j + 1] == 'i' && s[j + 2] == 'e')) && (b != j))
            {
                b = j + 2;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
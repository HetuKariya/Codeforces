#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a = 0;
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3;
    s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());
    for (int i = 0; i < int(s4.length()); i++)
    {
        if (s4[i] != s3[i])
        {
            a++;
            break;
        }
    }
    if (s4.length() != s3.length() || a == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
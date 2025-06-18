#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, s1, s2, s3, s4;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2 >> s3 >> s4;
        if (s1 < s2 && s1 > s3 && s1 > s4)
            cout << "NO" << "\n";
        else if (s2 < s1 && s2 > s3 && s2 > s4)
            cout << "NO" << "\n";
        else if (s3 < s4 && s3 > s1 && s3 > s2)
            cout << "NO" << "\n";
        else if (s4 < s3 && s4 > s1 && s4 > s2)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}
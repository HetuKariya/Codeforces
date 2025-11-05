#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a1, a2, a4, a5, ans1, ans2, ans3;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2 >> a4 >> a5;
        ans1 = a1 + a2;
        ans2 = a4 - a2;
        ans3 = a5 - a4;
        if (ans1 == ans2 && ans2 == ans3)
            cout << 3 << "\n";
        else if ((ans1 == ans2 && ans2 != ans3) || (ans2 == ans3 && ans1 != ans2) || (ans1 == ans3 && ans3 != ans2))
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }
    return 0;
}
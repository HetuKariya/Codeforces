#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, ans1 = 0, ans2 = 0, ans3 = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) < abs(b - i))
            ans1++;
        else if (abs(a - i) > abs(b - i))
            ans3++;
        else
            ans2++;
    }
    cout << ans1 << " " << ans2 << " " << ans3;
    return 0;
}
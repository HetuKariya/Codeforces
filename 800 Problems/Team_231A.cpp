#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, f, g = 0;
    cin >> n;
    int a[3];
    while (n--)
    {
        f = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                f++;
        }
        if (f >= 2)
            g++;
    }
    cout << g;
    return 0;
}
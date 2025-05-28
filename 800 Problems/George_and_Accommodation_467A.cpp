#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p, q, a = 0;
    cin >> n;
    while (n--)
    {
        cin >> p;
        cin >> q;
        if ((q - p) >= 2)
            a++;
    }
    cout << a;
    return 0;
}
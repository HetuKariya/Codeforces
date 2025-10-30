#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((c % 2 != 0 && a + 1 > b) || (c % 2 == 0 && a > b))
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}
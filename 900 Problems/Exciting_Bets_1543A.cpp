#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (abs(a - b) == 0)
            cout << 0 << " " << 0;
        else if (a % abs(a - b) == 0 && b % abs(a - b) == 0)
            cout << abs(a - b) << " " << 0;
        else if (min(a % abs(a - b), b % (abs(a - b))) > abs(a - b) / 2)
            cout << abs(a - b) << " " << abs(a - b) - min(a % abs(a - b), b % abs(a - b));
        else
            cout << abs(a - b) << " " << min(a % abs(a - b), b % abs(a - b));
        cout << "\n";
    }
    return 0;
}
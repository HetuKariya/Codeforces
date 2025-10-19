#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 3 == 1 || n % 3 == 2)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}
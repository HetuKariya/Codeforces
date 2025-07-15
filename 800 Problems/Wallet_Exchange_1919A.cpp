#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (abs(a - b) % 2 == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#include <string.h>
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
        string a, b;
        cin >> a >> b;
        char c = a[0];
        a[0] = b[0];
        b[0] = c;
        cout << a << " " << b << "\n";
    }
    return 0;
}
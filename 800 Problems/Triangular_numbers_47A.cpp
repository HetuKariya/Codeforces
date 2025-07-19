#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, D;
    float d;
    cin >> n;
    D = 4 * 2 * n + 1;
    d = sqrt(D);
    D = sqrt(D);
    if (D == d)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
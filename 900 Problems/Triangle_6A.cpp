#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[4], size;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    if ((a[1] + a[2] > a[3]) || (a[0] + a[1] > a[2]))
        cout << "TRIANGLE";
    else if ((a[1] + a[2] == a[3]) || (a[0] + a[1] == a[2]))
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
    return 0;
}
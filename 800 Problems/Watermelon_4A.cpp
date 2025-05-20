#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w;
    cin >> w;
    if (w % 2 != 0 || w == 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
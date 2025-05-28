#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, b, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        if (b == 1)
            a++;
    }
    if (a > 0)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}
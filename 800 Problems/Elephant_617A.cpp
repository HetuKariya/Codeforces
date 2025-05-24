#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int b = 0, x;
    cin >> x;
    if (x <= 4)
        cout << 1;
    else
    {
        b += x / 5;
        if (x % 5 == 0)
            cout << b;
        else
        {
            b++;
            cout << b;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (n % 2 == 0 && i == 1)
            cout << "I love it";
        else if (n % 2 != 0 && i == 1)
            cout << "I hate it";
        else if (n % 2 == 0 && i != 1)
        {
            if (i % 2 == 0)
                cout << "I hate that ";
            else
                cout << "I love that ";
        }
        else if (n % 2 != 0 && i != 1)
        {
            if (i % 2 == 0)
                cout << "I love that ";
            else
                cout << "I hate that ";
        }
    }
    return 0;
}
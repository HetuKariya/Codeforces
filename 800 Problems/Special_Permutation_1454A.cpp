#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, mid;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            mid = n / 2 + n % 2;
            for (int i = n; i >= 1; i--)
            {
                if (mid == i)
                {
                    cout << i - 1 << " " << i << " ";
                    i--;
                }
                else
                    cout << i << " ";
            }
        }
    }
    return 0;
}
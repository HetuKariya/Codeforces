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
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cout << 1 << " ";
            else
            {
                for (int j = 2; j <= i + 1; j++)
                {
                    if (j % i == 0)
                    {
                        cout << (i + 1) * j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
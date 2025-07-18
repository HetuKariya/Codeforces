#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int j = 0; j < 2 * n; j++)
        {
            for (int k = 0; k < 2 * n; k++)
            {
                if ((j / 2) % 2 == 0)
                {
                    if ((k / 2) % 2 == 0)
                        cout << "#";
                    else
                        cout << ".";
                }
                else
                {
                    if ((k / 2) % 2 == 0)
                        cout << ".";
                    else
                        cout << "#";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
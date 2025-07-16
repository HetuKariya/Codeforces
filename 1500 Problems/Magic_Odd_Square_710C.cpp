#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, odd = 1, even = 2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= n / 2)
            {
                if (j >= n / 2 - i && j <= n / 2 + i)
                {
                    cout << odd << " ";
                    odd += 2;
                }
                else
                {
                    cout << even << " ";
                    even += 2;
                }
            }
            else
            {
                if (j >= n / 2 - (n - i - 1) && j <= n / 2 + (n - i - 1))
                {
                    cout << odd << " ";
                    odd += 2;
                }
                else
                {
                    cout << even << " ";
                    even += 2;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
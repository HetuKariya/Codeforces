#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    string num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1 || n == 3)
            cout << -1 << "\n";
        else
        {
            string num(n, '3');
            if (n % 2 == 0)
            {
                num[n - 2] = '6';
                num[n - 1] = '6';
                cout << num << "\n";
            }
            else
            {
                num[n - 4] = '6';
                num[n - 2] = '6';
                num[n - 1] = '6';
                cout << num << "\n";
            }
        }
        num.clear();
    }
    return 0;
}
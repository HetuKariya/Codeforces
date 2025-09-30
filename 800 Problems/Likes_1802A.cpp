#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cntp, cntn;
    cin >> t;
    while (t--)
    {
        cntp = 0;
        cntn = 0;
        cin >> n;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > 0)
                cntp++;
            else
                cntn++;
        }
        for (int i = 0; i < cntp; i++)
            cout << i + 1 << " ";
        for (int i = 1; i <= cntn; i++)
            cout << cntp - i << " ";
        cout << "\n";
        while (cntn != 0)
        {
            cout << 1 << " " << 0 << " ";
            cntp--;
            cntn--;
        }
        for (int i = 0; i < cntp; i++)
            cout << i + 1 << " ";
        cout << "\n";
    }
    return 0;
}
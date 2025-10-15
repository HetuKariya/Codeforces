#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p;
    cin >> n;
    p = n - 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 && j == i)
                cout << j;
            else
                cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (j != 0)
                cout << j << " ";
            else
                cout << j;
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "  ";
        for (int j = 0; j <= p; j++)
        {
            if (j == 0 && j == p)
                cout << j;
            else
                cout << j << " ";
        }
        p--;
        for (int j = p; j >= 0; j--)
        {
            if (j != 0)
                cout << j << " ";
            else
                cout << j;
        }
        cout << "\n";
    }
    return 0;
}
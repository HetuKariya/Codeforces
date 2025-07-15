#include <bits/stdc++.h>  
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                if (a[i][j] == '0' && i < n && j < n)
                    cout << 0;
                else
                    cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}
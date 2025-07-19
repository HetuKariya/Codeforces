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
        char s[n][4];
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cin >> s[j][k];
                if (s[j][k] == '#')
                    a.push_back(k + 1);
            }
        }
        for (int i = int(a.size()) - 1; i >= 0; i--)
            cout << a[i] << " ";
        a.clear();
        cout << endl;
    }
    return 0;
}
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
        long long int n, s, m, l, r, diff0 = 0, diff1 = 0, diff2 = 0, diff3 = 0, cnt = 0;
        vector<long long int> a;
        cin >> n >> s >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            if (i == 0)
            {
                a.push_back(l);
                diff0 = r;
            }
            else
            {
                if (i == 1)
                {
                    diff1 = l - diff0;
                    a.push_back(diff1);
                    diff2 = r;
                }
                else if (i != n - 1)
                {
                    diff1 = l - diff2;
                    a.push_back(diff1);
                    diff2 = r;
                }
                else
                {
                    diff1 = l - diff2;
                    a.push_back(diff1);
                }
            }
        }
        diff3 = m - r;
        a.push_back(diff3);
        for (int i = 0; i < int(a.size()); i++)
        {
            if (s <= a.at(i))
            {
                cnt++;
                break;
            }
        }
        if (cnt == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
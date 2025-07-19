#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> c;
    int t, a, b, sum, cnt1, cnt2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cnt1 = 0;
        cnt2 = 0;
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            c.push_back(1);
            sum += 1;
        }
        for (int i = 0; i < b; i++)
        {
            c.push_back(2);
            sum += 2;
        }
        if (sum % 2 != 0)
            cout << "NO\n";
        else
        {
            for (int i = c.size() - 1; i >= 0; i--)
            {
                if (cnt1 == cnt2)
                    cnt1 += c[i];
                else if (cnt1 > cnt2)
                    cnt2 += c[i];
                else
                    cnt1 += c[i];
            }
            if (cnt1 == cnt2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        c.clear();
    }
    return 0;
}
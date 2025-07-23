#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt25 = 0, cnt50 = 0, cnt100 = 0;
    bool f = false;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (a[0] != 25)
        cout << "NO\n";
    else
    {
        cnt25++;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 25)
                cnt25++;
            else if (a[i] == 50 && cnt25 > 0)
            {
                cnt50++;
                cnt25--;
            }
            else if (a[i] == 100 && (cnt25 >= 3 || (cnt50 > 0 && cnt25 > 0)))
            {
                if (cnt25 > 0 && cnt50 > 0)
                {
                    cnt100++;
                    cnt25 -= 1;
                    cnt50 -= 1;
                }
                else if (cnt25 >= 3 && cnt50 == 0)
                {
                    cnt100++;
                    cnt25 -= 3;
                }
            }
            else
            {
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if (f == false)
            cout << "YES\n";
    }
    return 0;
}
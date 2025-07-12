#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, c = 0;
    cin >> t;
    int a[t], b[t];
    for (int i = 0; i < t; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (a[i] == b[j])
                c++;
            if (b[i] == a[j])
                c++;
        }
    }
    cout << c;
    return 0;
}
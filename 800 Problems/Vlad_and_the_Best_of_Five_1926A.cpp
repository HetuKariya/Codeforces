#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, b, c;
    cin >> t;
    string a;
    while (t--)
    {
        b = 0;
        c = 0;
        cin >> a;
        for (int i = 0; i < 5; i++)
        {
            if (a[i] == 'A')
                b++;
            else
                c++;
        }
        if (b > c)
            cout << "A" << "\n";
        else
            cout << "B" << "\n";
    }
    return 0;
}
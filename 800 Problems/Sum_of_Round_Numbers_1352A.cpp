#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        b = 0;
        int n, c;
        cin >> n;
        string s = to_string(n);
        for (char i : s)
        {
            if (i == '0')
                continue;
            else
                b++;
        }
        cout << b << "\n";
        int j = 0;
        c = stoi(s);
        while (c != 0)
        {
            a = c % 10;
            if ((a * pow(10, j)) != 0)
                cout << a * pow(10, j) << " ";
            c /= 10;
            j++;
        }
        cout << "\n";
    }
    return 0;
}
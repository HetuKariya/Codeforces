#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int f = 0;
    string p;
    cin >> p;
    for (int i = 0; i < int(p.length()); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
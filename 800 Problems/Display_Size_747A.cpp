#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<long int> b, c;
    long int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i != 0)
            continue;
        else
        {
            b.push_back(n / i);
            c.push_back(i);
        }
    }
    for (int i = 0; i < int(b.size()); i++)
    {
        if (b[i] == c[i + 1] && c[i] == b[i + 1])
        {
            cout << c[i] << " " << c[i + 1] << "\n";
            break;
        }
        else if ((b[i] == c[i]))
        {
            cout << c[i] << " " << c[i] << "\n";
            break;
        }
    }
    return 0;
}
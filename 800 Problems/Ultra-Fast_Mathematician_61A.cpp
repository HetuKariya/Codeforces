#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < int(n1.length()); i++)
    {
        if (n1[i] == n2[i])
            cout << 0;
        else
            cout << 1;
    }
    return 0;
}
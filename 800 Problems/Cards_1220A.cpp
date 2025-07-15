#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    string s;
    cin >> n >> s;
    sort(s.begin(), s.end());
    for (char x : s)
    {
        if (x == 'n')
            cout << 1 << " ";
        else if (x == 'z')
            cout << 0 << " ";
    }
    return 0;
}
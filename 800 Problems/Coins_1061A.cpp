#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n, s;
    cin >> n >> s;
    if (s % n == 0)
        cout << (s / n);
    else
        cout << (s / n) + long(1);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, ansa = 1, ansb;
    cin >> n >> a >> b;
    ansa += a;
    ansb = n - b;
    if (n - ansa <= b && ansb - 1 >= a)
        cout << n - ansa + 1;
    else if (n - ansa <= b)
        cout << n - ansa + 1;
    else if (ansb - 1 >= a)
        cout << n - ansb + 1;
    else
        cout << 0;
    return 0;
}
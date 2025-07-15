#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int k2, k3, k5, k6, num = 0, t;
    cin >> k2 >> k3 >> k5 >> k6;
    num += ((min(k6, min(k2, k5))) * 256);
    t = k2 - (min(k6, min(k2, k5)));
    if (t > 0)
        num += (min(t, k3) * 32);
    else
        num += 0;
    cout << num;
    return 0;
}
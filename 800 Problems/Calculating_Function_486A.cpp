#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, s = 0;
    cin >> n;
    if (n % 2 == 0)
        s += n / long(2);
    else
        s += ((n / long(2)) + (n % long(2)))*(-1);
    cout << s;
    return 0;
}
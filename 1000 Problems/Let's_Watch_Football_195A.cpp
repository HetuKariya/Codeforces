#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    float a, b, c;
    cin >> a >> b >> c;
    cout << ceil((a * c - b * c) / b);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c = 0, d = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a == b)
        {
            c++;
            d++;
        }
        else if (a > b)
            c++;
        else if (b > a)
            d++;
    }
    if (c > d)
        cout << "Mishka";
    else if (c < d)
        cout << "Chris";
    else if (c == d)
        cout << "Friendship is magic!^^";
    return 0;
}
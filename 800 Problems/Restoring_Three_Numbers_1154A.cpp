#include <bits/stdc++.h>   
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int x1, x2, x3, x4, max;
    cin >> x1 >> x2 >> x3 >> x4;
    if (x1 > x2 && x1 > x3 && x1 > x4)
    {
        max = x1;
        cout << max - x2 << " " << max - x3 << " " << max - x4 << " ";
    }
    else if (x2 > x1 && x2 > x3 && x2 > x4)
    {
        max = x2;
        cout << max - x1 << " " << max - x3 << " " << max - x4 << " ";
    }
    else if (x3 > x1 && x3 > x2 && x3 > x4)
    {
        max = x3;
        cout << max - x1 << " " << max - x2 << " " << max - x4 << " ";
    }
    else
    {
        max = x4;
        cout << max - x1 << " " << max - x2 << " " << max - x3 << " ";
    }
    return 0;
}
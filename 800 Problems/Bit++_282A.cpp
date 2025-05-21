#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, f = 0;
    char a[4];
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (strcmp(a, "X++") == 0 || strcmp(a, "++X") == 0)
            f++;
        else if (strcmp(a, "X--") == 0 || strcmp(a, "--X") == 0)
            f--;
    }
    cout << f;
    return 0;
}
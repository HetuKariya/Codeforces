#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, j;
    cin >> n;
    i = 1;
    j = n * n;
    while (j - i != 1)
    {
        cout << i << " " << j << "\n";
        i++;
        j--;
    }
    cout << i << " " << j;
    return 0;
}
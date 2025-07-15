#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i = 0, s1 = 0, s2 = 0, s3 = 0, t;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
    while (i < n)
    {
        if (i % 3 == 0)
            s1 += a[i];
        else if (i % 3 == 1)
            s2 += a[i];
        else if (i % 3 == 2)
            s3 += a[i];
        i++;
    }
    t = max(s3, max(s1, s2));
    if (t == s1)
        cout << "chest";
    else if (t == s2)
        cout << "biceps";
    else if (t == s3)
        cout << "back";
    return 0;
}
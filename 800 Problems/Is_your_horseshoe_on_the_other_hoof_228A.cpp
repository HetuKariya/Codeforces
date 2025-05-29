#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2 && s1 == s3 && s1 == s4)
        cout << 3;
    else if ((s1 == s2 && s1 == s4) || (s1 == s3 && s1 == s4) || (s1 == s2 && s1 == s3) || (s2 == s3 && s2 == s4))
        cout << 2;
    else if ((s1 == s2 && s3 == s4) || (s1 == s3 && s2 == s4) || (s1 == s4 && s2 == s3))
        cout << 2;
    else if (s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4)
        cout << 1;
    else
        cout << 0;
    return 0;
}
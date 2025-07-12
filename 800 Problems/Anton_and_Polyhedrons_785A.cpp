#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    int a = 0;
    string s, s1 = "Tetrahedron", s2 = "Cube", s3 = "Octahedron", s4 = "Dodecahedron", s5 = "Icosahedron";
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == s1)
            a += 4;
        else if (s == s2)
            a += 6;
        else if (s == s3)
            a += 8;
        else if (s == s4)
            a += 12;
        else
            a += 20;
    }
    cout << a << "\n";
    return 0;
}
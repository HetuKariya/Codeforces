#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
    int t, n, a, b; 
    cin >> t; 
    while (t--) 
    {
        cin >> n >> a >> b; 
        if (abs(a - b) % 2 == 0) 
            cout << "YES\n"; 
        else 
            cout << "NO\n";
    }
    return 0; 
}
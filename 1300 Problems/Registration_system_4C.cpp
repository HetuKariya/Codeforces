#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unordered_map<string, int> umap;
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (umap.find(s) != umap.end())
        {
            umap[s]++;
            cout << s.append(to_string(umap[s])) << "\n";
        }
        else
        {
            umap[s] = 0;
            cout << "OK\n";
        }
    }
    return 0;
}
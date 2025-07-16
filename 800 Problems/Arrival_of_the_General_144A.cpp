#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        a.push_back(j);
    }
    int maximum = *max_element(a.begin(), a.end());
    int minimum = *min_element(a.begin(), a.end());
    auto it = find(a.begin(), a.end(), maximum);
    auto it1 = find(a.rbegin(), a.rend(), minimum);
    int max_index = distance(a.begin(), it);
    int min_index = distance(a.begin(), it1.base()) - 1;
    if (max_index > min_index)
        cout << (n - 1) - min_index - 1 + max_index << "\n";
    else
        cout << (n - 1) - min_index + max_index << "\n";
    return 0;
}
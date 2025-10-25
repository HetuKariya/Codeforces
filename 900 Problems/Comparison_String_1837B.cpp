#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cntless, cntmore;
    vector<int> ans1, ans2;
    string s;
    cin >> t;
    while (t--)
    {
        cntless = 1;
        cntmore = 1;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '>' && s[i + 1] == '>')
                cntmore++;
            else if (s[i] == '<' && s[i + 1] == '<')
                cntless++;
            else
            {
                ans1.push_back(cntless);
                ans2.push_back(cntmore);
                cntless = 1;
                cntmore = 1;
            }
        }
        ans1.push_back(cntless);
        ans2.push_back(cntmore);
        cout << max(*max_element(ans1.begin(), ans1.end()), *max_element(ans2.begin(), ans2.end())) + 1 << "\n";
        ans1.clear();
        ans2.clear();
    }
    return 0;
}
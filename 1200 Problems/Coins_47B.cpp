#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string w1, w2, w3;
    cin >> w1 >> w2 >> w3;
    if (w1[1] == '>' && w2[1] == '>' && w3[1] == '>')
    {
        if (w1[0] == w2[0])
            cout << w3[2] << w3[0] << w2[0];
        else if (w2[0] == w3[0])
            cout << w1[2] << w1[0] << w2[0];
        else if (w1[0] == w3[0])
            cout << w2[2] << w2[0] << w3[0];
        else
            cout << "Impossible";
    }
    else if (w1[1] == '<' && w2[1] == '<' && w3[1] == '<')
    {
        if (w1[2] == w2[2])
            cout << w3[0] << w3[2] << w2[2];
        else if (w2[2] == w3[2])
            cout << w1[0] << w1[2] << w2[2];
        else if (w1[2] == w3[2])
            cout << w2[0] << w2[2] << w3[2];
        else
            cout << "Impossible";
    }
    else if (w1[1] == '>' && w2[1] == '>')
    {
        if (w1[0] == w2[0])
            cout << w3[0] << w3[2] << w2[0];
        else if (w2[0] == w3[2])
            cout << w1[2] << w1[0] << w2[0];
        else if (w1[0] == w3[2])
            cout << w2[2] << w2[0] << w3[2];
        else
            cout << "Impossible";
    }
    else if (w1[1] == '>' && w3[1] == '>')
    {
        if (w1[0] == w2[2])
            cout << w3[2] << w3[0] << w2[2];
        else if (w2[2] == w3[0])
            cout << w1[2] << w1[0] << w2[2];
        else if (w1[0] == w3[0])
            cout << w2[0] << w2[2] << w3[0];
        else
            cout << "Impossible";
    }
    else if (w2[1] == '>' && w3[1] == '>')
    {
        if (w1[2] == w2[0])
            cout << w3[2] << w3[0] << w2[0];
        else if (w3[0] == w1[2])
            cout << w2[2] << w2[0] << w3[0];
        else if (w2[0] == w3[0])
            cout << w1[0] << w1[2] << w2[0];
        else
            cout << "Impossible";
    }
    else if (w1[1] == '<' && w2[1] == '<')
    {
        if (w1[2] == w2[2])
            cout << w3[2] << w3[0] << w2[2];
        else if (w2[2] == w3[0])
            cout << w1[0] << w1[2] << w2[2];
        else if (w1[2] == w3[0])
            cout << w2[0] << w2[2] << w3[0];
        else
            cout << "Impossible";
    }
    else if (w1[1] == '<' && w3[1] == '<')
    {
        if (w1[2] == w2[0])
            cout << w3[0] << w3[2] << w2[0];
        else if (w2[0] == w3[2])
            cout << w1[0] << w1[2] << w2[0];
        else if (w1[2] == w3[2])
            cout << w2[2] << w2[0] << w3[2];
        else
            cout << "Impossible";
    }
    else
    {
        if (w1[0] == w2[2])
            cout << w3[0] << w3[2] << w2[2];
        else if (w3[2] == w1[0])
            cout << w2[0] << w2[2] << w3[2];
        else if (w2[2] == w3[2])
            cout << w1[2] << w1[0] << w2[2];
        else
            cout << "Impossible";
    }
    return 0;
}
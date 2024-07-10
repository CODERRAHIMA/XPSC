#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    vi vS, vT, cntS, cntT;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            vS.push_back(i);
        else
            cntS.push_back(i);
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a' or t[i] == 'e' or t[i] == 'i' or t[i] == 'o' or t[i] == 'u')
            vT.push_back(i);
        else
            cntT.push_back(i);
    }

    if (vS == vT and cntS == cntT)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
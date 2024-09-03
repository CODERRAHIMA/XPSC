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

    int TC;
    cin >> TC;
    while (TC--)
    {
        string s, t;
        cin >> s >> t;
        bool ok = false;
        string r;
        for (int i = 0; i < s.size(); i++)
        {
            string l = r;
            reverse(l.begin(), l.end());
            r += s[i];
            string temp = r + l;
            if (temp.find(t) != -1)
                ok = true;
        }
        if (ok)
            yes;
        else
            no;
    }
    return 0;
}
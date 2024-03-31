#include <bits/stdc++.h>
#define ll long long
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
        int n;
        cin >> n;
        string s[n], a, b;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            int ok = 0;
            for (int j = 0; j < s[i].size(); j++)
            {
                a = s[i].substr(0, j);
                b = s[i].substr(j, s[i].size() - j);
                if (mp[a] > 0 && mp[b] > 0)
                {
                    ok = 1;
                    break;
                }
            }
            cout << ok;
        }
        cout << '\n';
    }
    return 0;
}
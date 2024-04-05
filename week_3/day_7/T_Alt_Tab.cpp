#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<string, int> mp;
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] == 0)
        {
            string lastTwo = s[i].substr((s[i].size() - 2), 2);
            ans += lastTwo;
            mp[s[i]]++;
        }
    }

    cout << ans << "\n";
    return 0;
}
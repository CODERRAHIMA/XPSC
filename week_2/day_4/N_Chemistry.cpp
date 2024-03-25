#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;
        
        int odd = 0;
        for (auto x : mp)
        {
            if (x.second % 2 != 0)
                odd++;
        }
        if (odd <= k + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
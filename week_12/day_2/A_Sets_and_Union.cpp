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
        ll n;
        cin >> n;
        vector<set<ll>> v(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            for (ll j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                mp[x]++;
                v[i].insert(x);
            }
        }
        ll ans = 0;
        for (ll i = 1; i <= 50; i++)
        {
            if (mp[i] == 0)
                continue;
            set<ll> s;
            for (ll j = 0; j < n; j++)
            {
                if (v[j].find(i) == v[j].end())
                {
                    for (auto u : v[j])
                        s.insert(u);
                }
            }
            ans = max(ans, (ll)s.size());
        }
        cout << ans << endl;
    }
    return 0;
}
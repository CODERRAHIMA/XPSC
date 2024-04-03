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

    int TC;
    cin >> TC;
    while (TC--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);
        vector<pair<ll, ll>> a1, b1, c1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a1.push_back({a[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            b1.push_back({b[i], i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            c1.push_back({c[i], i});
        }

        sort(a1.begin(), a1.end(), greater<pair<ll, ll>>());
        sort(b1.begin(), b1.end(), greater<pair<ll, ll>>());
        sort(c1.begin(), c1.end(), greater<pair<ll, ll>>());

        ll sum = LLONG_MIN, cursum = 0;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (a1[i].second != b1[j].second && b1[j].second != c1[k].second && a1[i].second != c1[k].second)
                    {
                        cursum = a1[i].first + b1[j].first + c1[k].first;
                        sum = max(sum, cursum);
                    }
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
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
        ll n, c, d;
        cin >> n >> c >> d;
        vll v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        sort(v.rbegin(), v.rend());

        if (v[0] * d < c)
        {
            cout << "Impossible\n";
            continue;
        }

        vll pref(max(n, d));
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + v[i];
        
        for (int i = n; i < d; i++)
            pref[i] = pref[i - 1];

        if (pref[d - 1] >= c)
        {
            cout << "Infinity\n";
            continue;
        }

        ll l = 0, r = d + 1;
        while (l + 1 < r)
        {
            ll mid = (l + r) / 2;
            ll temp = d;
            ll res = 0;
            while (temp > mid)
            {
                res += pref[mid];
                temp -= mid + 1;
            }
            if (temp > 0)
                res += pref[temp - 1];
            
            if (res < c)
                r = mid;
            else
                l = mid;
        }
        cout << l << endl;
    }
    return 0;
}
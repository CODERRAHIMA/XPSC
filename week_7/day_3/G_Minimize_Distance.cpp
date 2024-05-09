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

        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), v1, v2;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                v1.push_back(abs(v[i]));
                ok = true;
            }
            else
            {
                v2.push_back(v[i]);
            }
        }
        if (ok == true)
        {
            sort(v1.rbegin(), v1.rend());
            sort(v2.rbegin(), v2.rend());
            ll sum = 0;
            for (int i = 0; i < v1.size(); i += k)
                sum += abs(2 * v1[i]);

            for (int i = 0; i < v2.size(); i += k)
                sum += abs(2 * v2[i]);

            ll mx = 0;
            if (!v1.empty())
                mx = v1[0];

            if (!v2.empty())
                mx = max(mx, v2[0]);

            cout << sum - mx << endl;
        }
        else
        {
            sort(v.rbegin(), v.rend());
            ll sum = 0;
            for (int i = 0; i < n; i += k)
                sum += abs(2 * v[i]);

            cout << sum - v[0] << endl;
        }
    }
    return 0;
}
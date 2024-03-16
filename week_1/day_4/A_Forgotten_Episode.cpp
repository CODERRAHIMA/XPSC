#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll f;
    for (ll i = 0; i < n; i++)
    {
        if ((v[i] + 1) != v[i + 1])
        {
            f = v[i] + 1;
            break;
        }
    }
    cout << f << "\n";
    return 0;
}
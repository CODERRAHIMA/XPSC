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
        ll lenb = n * (n - 1) / 2;
        vector<ll> v(lenb);
        for (ll i = 0; i < lenb; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        for (ll i = 0; i < lenb;)
        {
            cout << v[i] << " ";
            i += --n;
        }
        cout << 1000000000 << endl;
    }
    return 0;
}
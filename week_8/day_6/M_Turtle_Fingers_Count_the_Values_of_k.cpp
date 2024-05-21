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
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> s;
        ll p = 1;
        while (l % p == 0)
        {
            ll q = 1;
            while ((l / p) % q == 0)
            {
                s.insert((l / p) / q);
                q *= b;
            }
            p *= a;
        }
        cout << s.size() << endl;
    }
    return 0;
}
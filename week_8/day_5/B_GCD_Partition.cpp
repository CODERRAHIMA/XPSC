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
        vll v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll sum = accumulate(v.begin(), v.end(), 0);
        ll sum1 = 0;
        ll gcd = 1;
        for (int i = 0; i < n - 1; ++i)
        {
            sum1 += v[i];
            ll x = __gcd(sum1, sum - sum1);
            gcd = max(gcd, x);
        }
        cout << gcd << endl;
    }
    return 0;
}
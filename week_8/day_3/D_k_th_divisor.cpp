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

    ll n, k;
    cin >> n >> k;

    vll divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.pb(i);
            if (n / i != i)
                divisors.pb(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    if (k > divisors.size())
        cout << -1 << endl;
    else
        cout << divisors[k - 1] << endl;
    return 0;
}
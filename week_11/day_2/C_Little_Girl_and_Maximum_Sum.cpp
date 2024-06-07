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

    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    vi d(n + 1);
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
        d[i] = d[i - 1] + d[i];
    
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (1LL * d[i] * a[i]);
    
    cout << ans << endl;
    return 0;
}
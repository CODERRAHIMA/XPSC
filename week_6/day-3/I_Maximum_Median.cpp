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

    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    auto thikase = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
            cnt += (v[i] < mid ? (mid - v[i]) : 0);

        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (thikase(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
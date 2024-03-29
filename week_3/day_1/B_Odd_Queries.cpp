#include <bits/stdc++.h>
#define ll long long
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
        ll n, q, sum = 0;
        cin >> n >> q;
        ll arr[n + 1];

        for (ll i = 1; i <= n; i++)
            cin >> arr[i];

        ll pre[n + 1] = {0};
        pre[1] = arr[1];
        for (ll i = 2; i <= n; i++)
            pre[i] = pre[i - 1] + arr[i];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = ((pre[n] - (pre[r] - pre[l - 1])) + ((r - l + 1) * k));
            if (sum % 2 == 1)
                yes;
            else
                no;
        }
    }
    return 0;
}

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

    int n, m, k;
    cin >> n >> m >> k;
    vi a(m + 1);
    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    vector<vi> all_mask;
    for (int mask = 0; mask <= m; mask++)
    {
        vi v;
        for (int k = 0; k < n; k++)
        {
            if ((a[mask] >> k) & 1)
                v.push_back(1);
            else
                v.push_back(0);
        }
        all_mask.push_back(v);
    }
    int res = 0;
    vi fedor_mask = all_mask[m];
    for (int i = 0; i < all_mask.size() - 1; i++)
    {
        vi v = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor_mask[k] != v[k])
                cnt++;
        }
        if (cnt <= k)
            res++;
    }
    cout << res << endl;

    return 0;
}
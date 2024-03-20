#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int l = 0, r = 0;
    ll res = 0;
    while (l < n && r < m)
    {
        int c1 = 0, c2 = 0, cur = a[l];
        while (a[l] == cur && l < n)
        {
            c1++;
            l++;
        }
        while (cur > b[r] && r < m)
            r++;
        while (b[r] == cur && r < m)
        {
            c2++;
            r++;
        }
        res += (1ll * c1 * c2);
    }
    cout << res << "\n";
    return 0;
}
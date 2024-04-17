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
        int n, c = 0;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            c ^= v[i];
        int ans = c;
        for (int i = 0; i < n; i++)
        {
            int x = c ^ v[i];
            ans = min(ans, x);
        }
        cout << ans << "\n";
    }
    return 0;
}
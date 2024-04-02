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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        // sort(v.begin(), v.end());
        ll ans = v[n - 1] - v[0]; //6

        for (int i = 1; i < n; i++)
            ans = max(ans, v[i] - v[0]);  //10
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, v[n - 1] - v[i]); //6
        for (int i = 1; i < n; i++)
            ans = max(ans, (v[i - 1] - v[i]));  //

        cout << ans << "\n";
    }
    return 0;
}
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
        int n;
        cin >> n;
        map<int, int> mp;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            ans += mp[x];
            mp[x]++;
        }
        cout << ans << endl;
    }
    return 0;
}
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
        ll maxvalue, initial, n;
        ll ans = 0;
        cin >> maxvalue >> initial >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] < maxvalue)
                ans += arr[i];
            else
                ans += maxvalue - 1;
        }
        cout << ans + initial << endl;
    }
    return 0;
}
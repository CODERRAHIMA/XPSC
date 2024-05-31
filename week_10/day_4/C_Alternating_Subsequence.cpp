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
        ll n;
        cin >> n;

        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> arr[i];

        set<ll> s;
        ll i = 1, res = 0;
        while (i <= n)
        {
            if (arr[i] < 0)
            {
                while (arr[i] < 0 && i <= n)
                {
                    s.insert(arr[i]);
                    i++;
                }
            }
            else
            {
                while (arr[i] > 0 && i <= n)
                {
                    s.insert(arr[i]);
                    i++;
                }
            }

            auto it = s.rbegin();
            res = res + *it;
            s.clear();
        }

        cout << res << endl;
    }
    return 0;
}
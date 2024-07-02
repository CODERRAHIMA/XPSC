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
        ll n, k;
        cin >> n >> k;
        vi bit(31, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            for (int i = 30; i >= 0; --i)
            {
                if (x & (1 << i))
                    bit[i]++;
            }
        }

        ll ans = 0;
        for (int i = 30; i >= 0; --i)
        {

            if (n - bit[i] <= k)
            {
                ans |= (1 << i);
                k -= (n - bit[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
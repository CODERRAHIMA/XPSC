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
        ll n, k, x;
        cin >> n >> k;
        ll ans = 1;
        while (n > 0)
        {
            x = n - n / 2;
            if (k <= x)
            {
                cout << ans * (2 * k - 1) << endl;
                
            }
            k -= x;
            ans *= 2;
            n /= 2;
        }
    }
    return 0;
}
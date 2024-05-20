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
        vll a(n + 3);
        bool ans = false;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        
        ll i = 1;
        while (i <= n)
        {
            bool ok = false;
            for (ll j = 2; j <= i + 1; j++)
            {
                if (a[i] % j != 0)
                {
                    ok = true;
                    break;
                }
            }
            if (!ok)
            {
                ans = true;
                break;
            }
            i++;
        }
        if (!ans)
            yes;
        else
            no;
    }
    return 0;
}
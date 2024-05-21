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
        vi v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        ll res = 1, cur = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cur += v[i];
            sum -= v[i];
            res = max(__gcd(sum, cur), res);
        }
        cout << res << endl;
    }
    return 0;
}
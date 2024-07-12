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
        string s;
        cin >> n >> s;
        ll ans = n;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans += i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
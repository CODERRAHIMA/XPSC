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
        int n, k;
        cin >> n >> k;

        vi v(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += (v[i] / k);
            v[i] %= k;
        }
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (v[i] + v[j] >= k)
            {
                ans++;
                i++;
                j--;
            }
            else
                i++;
        }
        cout << ans << endl;
    }
    return 0;
}
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
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }

        ll res = 0;
        for (auto [x, y] : cnt)
        {
            res += (1LL * y * (y - 1)) / 2;
        }

        cout << res << '\n';
    }
    return 0;
}
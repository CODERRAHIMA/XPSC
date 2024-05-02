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
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        auto thikase = [&](int mid)
        {
            int l = 0, cnt = 1;
            for (int r = 0; r < n; r++)
            {
                if ((v[r] - v[l]) > (2 * mid))
                {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };

        int l = 0, r = 1e9, mid, res = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (thikase(mid))
            {
                res = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
                }

        cout << res << endl;
    }
    return 0;
}
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

    int n, q;
    cin >> n >> q;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    while (q--)
    {
        int x;
        cin >> x;
        // int ans = 0;
        int l = 0, r = n - 1, mid, index = n;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (x <= v[mid])
            {
                index = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << index + 1 << endl;
    }
    return 0;
}
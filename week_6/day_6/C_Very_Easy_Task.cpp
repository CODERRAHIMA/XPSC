#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

bool ok(int mid, int n, int x, int y)
{
    if (mid < min(x, y))
        return false;
    int count = 1;
    mid -= min(x, y);
    count += (mid / x) + (mid / y);

    return count >= n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n, mid;

    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}
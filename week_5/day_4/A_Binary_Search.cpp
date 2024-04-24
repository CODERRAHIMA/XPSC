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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (q--)
    {
        ll x;
        cin >> x;
        ll left = 0, right = n - 1, index = -1, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;

            if (v[mid] == x)
            {
                index = mid;
                break;
            }

            else if (v[mid] > x)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        if (index == -1)
            no;
        else
            yes;
    }
    return 0;
}
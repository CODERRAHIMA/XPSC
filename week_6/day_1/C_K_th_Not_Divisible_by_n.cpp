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

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n, k;
        cin >> n >> k;
        // ll found = 0, cnt = 0;
        // for (ll i = 1; i <= 2 * k; i++)
        // {
        //     if (i % n == 0) // 1 2 4 5 7 8 10
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         cnt++; //1 2 3 4 5 6 7
        //         if (cnt == k) //7==7
        //         {
        //             found = i; //10
        //             break;
        //         }
        //         // cout << (1LL) * i << " ";
        //     }
        // }
        // cout << endl;
        // cout << found << endl;

        ll left = 1, right = 2 * k, mid;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            ll nondiv = mid - (mid / n);

            if (nondiv < k)
                left = mid + 1;
            else
                right = mid;
        }
        cout << left << endl;
    }
    return 0;
}
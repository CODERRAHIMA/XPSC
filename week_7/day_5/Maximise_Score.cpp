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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            if (i > 0)
                l = abs(arr[i] - arr[i - 1]);
            if (i < n - 1)
                r = abs(arr[i] - arr[i + 1]);
            ans = min(ans, max(l, r));
        }
        cout << ans << endl;
    }
    return 0;
}
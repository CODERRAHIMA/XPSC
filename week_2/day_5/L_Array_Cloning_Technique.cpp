#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        int mx = 1, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
                cnt++;
            else
            {
                mx = max(mx, cnt);
                cnt = 1;
            }
        }
        mx = max(mx, cnt);
        if (mx == n)
            cout << 0 << "\n";
        else
        {
            int res = n - mx;
            int ans = 0;
            while (1)
            {
                if (mx * 2 >= n)
                    break;
                mx *= 2;
                ans++;
            }
            cout << res + ans + 1 << "\n";
        }
    }
    return 0;
}
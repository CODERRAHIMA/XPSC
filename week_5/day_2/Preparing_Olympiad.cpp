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

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int way = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int total = 0, mindif = INT_MAX, maxdif = INT_MIN, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                total += v[i];
                mindif = min(mindif, v[i]);
                maxdif = max(maxdif, v[i]);
                cnt++;
            }
        }
        if (total >= l && total <= r && (maxdif - mindif >= x) && cnt >= 2)
            way++;
        
    }
    cout << way << endl;
    return 0;
}
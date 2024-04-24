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

    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] || a[i] == b[j] - 1 || a[i] == b[j] + 1)
            {
                a[i] = -1;
                b[j] = -2;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
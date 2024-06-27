#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x, ans = 15;
        cin >> x;

        for (int j = 0; j <= 15; j++)
            for (int k = 0; k <= 15; k++)
                if (((x + j) << k) % 32768 == 0)
                    ans = min(ans, j + k);

        cout << ans << " ";
    }
    return 0;
}
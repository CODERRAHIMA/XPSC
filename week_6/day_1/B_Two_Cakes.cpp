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

    int n, a, b;
    cin >> n >> a >> b;
    if (a + b == n)
        cout << 1 << endl;
    else
    {
        int res = 0;
        for (int i = 1; i < n; i++)
            res = max(res, min((a / i), (b / (n - i))));
        cout << res << endl;
    }
    return 0;
}
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

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int res = 0;
        if (a[0] == 1)
            res = 2;
        else
            res = 1;

        for (int i = 1; i < n; i++)
        {
            if (res + 1 != a[i])
                res++;
            else
                res += 2;
        }
        cout << res << endl;
    }
    return 0;
}
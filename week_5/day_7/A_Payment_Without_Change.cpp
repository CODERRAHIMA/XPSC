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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll need = s % n;
        if (b >= need && (a * n) + b >= s)
            yes;
        else
            no;
    }
    return 0;
}
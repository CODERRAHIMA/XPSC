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
    map<int, int> d;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    int sum = 0;
    bool ok = true;
    for (auto [idx, value] : d)
    {
        sum += value;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }

    if (ok)
        yes;
    else
        no;
    return 0;
}
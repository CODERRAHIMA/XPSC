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
        ll n;
        cin >> n;
        ll sum = 0;
        while (n > 0)
        {
            sum += n;
            n = n / 2;
        }
        cout << (1LL * sum) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0, odd = 1e9;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 != 0)
            odd = min(odd, arr[i]);
    }

    if (sum % 2 == 0)
    {
        cout << sum << "\n";
    }
    else
    {
        sum -= odd;
        cout << sum << "\n";
    }
    return 0;
}
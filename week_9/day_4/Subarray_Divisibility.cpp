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
    vi value(n);
    for (int i = 0; i < n; i++)
        cin >> value[i];

    ll sum = 0;
    map<ll, int> s;
    s[0]++;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum += value[i] % n;
        sum = (sum + n) % n;
        cnt += s[sum];
        s[sum]++;
    }
    cout << cnt;
    return 0;
}
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

    int n, x;
    cin >> n >> x;
    vi val(n);
    for (int i = 0; i < n; i++)
        cin >> val[i];

    ll sum=0;
    map<ll,int> mp;
    mp[0]++;
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        sum+=val[i];
        cnt+=mp[sum-x];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}
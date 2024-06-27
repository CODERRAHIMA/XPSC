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
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (n == 1)
        {
            yes;
            continue;
        }
        map<ll, int> mp;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            sum += v[i];
        }
        priority_queue<ll> pq;
        pq.push(sum);
        bool pos = true;
        while (!pq.empty())
        {
            ll res = pq.top();
            pq.pop();
            ll x = res / 2;
            ll y = res - (res / 2);
            if (mp[x] > 0)
                mp[x]--;

            else if (mp[x] == 0 and x > 1)
                pq.push(x);

            if (mp[y] > 0)
                mp[y]--;

            else if (mp[y] == 0 and y > 1)
                pq.push(y);

            if (pq.size() > n + 2)
            {
                pos = false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] > 0)
            {
                pos = false;
                break;
            }
        }
        if (pos)
            yes;

        else
            no;
        
    }
    return 0;
}
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
        int n, q;
        cin >> n >> q;
        vi v(n);
        map<int, vi> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);  //3-0,7-1,1-(2,4),5-3,4-5
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;  //3 5 //1 7 //3 10
            if (mp[a].empty() || mp[b].empty())
                no;
            else if (mp[a].front() <= mp[b].back()) //0-3 //2-1 
                yes;
            else
                no;
        }
    }
    return 0;
}
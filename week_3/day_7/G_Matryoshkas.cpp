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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int value = v[i];
            if (mp[value] > 0)
            {
                cnt++;
                while (mp[value] > 0)
                {
                    mp[value]--;
                    value++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
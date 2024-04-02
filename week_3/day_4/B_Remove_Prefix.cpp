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
        vi v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(v[i]) != s.end())
                break;
            else
                s.insert(v[i]);
        }
        cout << n - s.size() << "\n";
    }
    return 0;
}
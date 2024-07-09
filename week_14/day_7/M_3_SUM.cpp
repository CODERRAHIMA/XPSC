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
        vi a;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            b = b % 10;
            if (mp[b] >= 3)
                continue;
            mp[b]++;
            a.pb(b);
        }
        bool ok = false;
        for (int i = 0; i < a.size(); i++)
            for (int j = i + 1; j < a.size(); j++)
                for (int k = j + 1; k < a.size(); k++)
                    if ((a[i] + a[j] + a[k]) % 10 == 3)
                        ok = true;

        if(ok) yes;
        else no;
    }
    return 0;
}
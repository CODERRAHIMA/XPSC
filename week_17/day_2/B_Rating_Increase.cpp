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
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 1; i < s.length(); ++i)
        {
            if (s[i] != '0' && stoll(s.substr(0, i)) < stoll(s.substr(i)))
            {
                cout << s.substr(0, i) << " " << s.substr(i) << endl;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
    }
    return 0;
}
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

    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int cnt = 0;
    char ch;
    for (auto it : mp)
    {
        if (it.second % 2)
        {
            ch = it.first;
            cnt++;
        }
    }
    if ((s.size() % 2 == 0 && cnt > 0) || cnt > 1)
        cout << "NO SOLUTION\n";
    else
    {
        string res = "";
        for (auto it : mp)
        {
            for (int i = 1; i <= it.second / 2; i++)
            {
                res += it.first;
            }
        }
        cout << res;

        if (s.size() % 2)
            cout << ch;
        reverse(res.begin(), res.end());
        cout << res;
    }
    return 0;
}
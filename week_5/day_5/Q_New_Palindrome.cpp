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
        string s;
        cin >> s;
        map<char, int> m;
        set<char> st;
        for (auto ch : s)
        {
            m[ch]++;
            st.insert(ch);
        }

        int cnt = 0;
        for (auto ch : st)
        {
            if (m[ch] >= 2)
                cnt++;
        }
        if (cnt > 1)
            yes;
        else
            no;
    }
    return 0;
}
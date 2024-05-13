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
        string s;
        cin >> s;
        int ans = n + 1;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == c)
                {
                    cnt++;
                    l++;
                }
                else if (s[r] == c)
                {
                    cnt++;
                    r--;
                }
                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
            ans = -1;
        cout << ans << endl;
    }
    return 0;
}
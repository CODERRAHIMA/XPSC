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
        string s;
        cin >> n >> s;
        int cnt = 0, res = 0, ind = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                cnt++;
            else if (s[i] == 'A' && res == 0)
            {
                res += cnt;
                ind = i;
            }
            else if (s[i] == 'A' && ind != -1)
            {
                res += (ind - i);
                ind = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}
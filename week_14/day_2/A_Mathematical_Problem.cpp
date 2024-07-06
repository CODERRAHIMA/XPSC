#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int INF = 0x3f3f3f3f;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n, ans = INF;
        string s;
        cin >> n >> s;
        for (int i = 1; i < n; i++)
        {
            int num = stoi(s.substr(i - 1, 2)); 
            for (int j = 0; j < n; j++)
            {
                if (j == i - 1 || j == i)
                    continue;
                int temp = s[j] - '0';
                num = min(num * temp, num + temp); 
            }
            ans = min(ans, num);
        }
        cout << ans << endl;
    }
    return 0;
}

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
        string a, b;
        cin >> a >> b;
        int ans = 201;
        int sum = a.size() + b.size();
        for (int i = 0; i < b.size(); i++)
        {
            int cnt = 0;
            int index = i;

            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] == b[index])
                {
                    cnt++;
                    index++;
                }
            }
            ans = min(ans, (sum - cnt));
        }
        cout << ans << endl;
    }
    return 0;
}
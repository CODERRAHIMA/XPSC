#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int size=n;
        string s[3][n];
        unordered_map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }

        int arr[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 1)
                    arr[i] += 3;
                else if (mp[s[i][j]] == 2)
                    arr[i] += 1;
            }
        }
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    }
    return 0;
}
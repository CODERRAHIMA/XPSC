#include <bits/stdc++.h>
#define ll long long
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
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                count++;
                while (v[i] <= 0 && i < n)
                {
                    i++;
                }
            }
        }
        cout << sum << " " << count << "\n";
    }
    return 0;
}
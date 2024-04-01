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

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n;
        cin >> n;
        ll i, arr[n], sum = 0;

        for (i = 0; i < n; ++i)
            cin >> arr[i];
        
        for (i = 0; i < n; ++i)
            sum = sum + abs(arr[i]);
        
        ll count = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                i++;
                while (arr[i] <= 0)
                {
                    i++;
                }
                count++;
            }
        }
        cout << sum << " " << count << "\n";
    }
    return 0;
}

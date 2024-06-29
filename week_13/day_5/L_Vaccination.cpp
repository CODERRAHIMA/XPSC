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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int ans = 0;
        for (int i = 0; i < n;  )
        {
            int h = 0;
            int f = k;
            int v = arr[i] + d + w;
            int s = arr[i];
            ans++;
            while (f > 0 and i < n)
            {
                if (arr[i] >= s and arr[i] <= v)
                {
                    f--;
                    i++;
                }
                else
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
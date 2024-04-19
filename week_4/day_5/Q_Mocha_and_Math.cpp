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
        int arr[n], ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans &= arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
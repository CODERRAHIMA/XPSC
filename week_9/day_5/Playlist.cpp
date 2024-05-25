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

    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    set<int> song;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !song.count(arr[j]))
        {
            song.insert(arr[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        while (j < n && song.count(arr[j]))
        {
            song.erase(arr[i]);
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}
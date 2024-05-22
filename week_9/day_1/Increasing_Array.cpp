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

    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort(arr,arr+n);
    ll c = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) // 2<3 1<5
        {
            c += (arr[i - 1] - arr[i]); // 3-2=1  5-1=4
            arr[i] = arr[i - 1];        // 3 3 5 5 7
        }
    }
    cout << c << endl;
    return 0;
}
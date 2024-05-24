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

    int n, x;
    cin >> n >> x;
    vi value(n);
    for (int i = 0; i < n; i++)
        cin >> value[i];

    ll sum = 0;
    int i = 0, j = 0, cnt = 0;
    while (i < n)
    {
        sum += value[i];
        while (sum >= x)
        {
            if (sum == x)
                cnt++;
            sum -= value[j];
            j++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}
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
        double a, b;
        cin >> a >> b;
        int f = ceil(a / b);
        b = b * f;
        int ans = ceil(b / a);
        cout << ans << endl;
    }
    return 0;
}
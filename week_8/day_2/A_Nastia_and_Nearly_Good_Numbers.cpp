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
        ll a, b;
        cin >> a >> b;
        if (b == 1)
            no;
        else
        {
            yes;
            cout << a * b << ' ' << a << ' ' << a * (b + 1) << endl;
        }
    }
    return 0;
}
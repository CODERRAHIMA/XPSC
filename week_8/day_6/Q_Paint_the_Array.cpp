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
        ll n;
        cin >> n;
        ll ar[n + 4];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        ll gc1 = 0, gc2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                gc1 = __gcd(gc1, ar[i]);
            }
            else
            {
                gc2 = __gcd(gc2, ar[i]);
            }
        }
        int a = 0, b = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (ar[i] % gc1 == 0)
            {
                a = 1;
                break;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            if (ar[i] % gc2 == 0)
            {
                b = 1;
                break;
            }
        }
        if (a == 1 && b == 1)
            cout << 0 << endl;
        else if (a == 0)
            cout << gc1 << endl;
        else
            cout << gc2 << endl;
    }
    return 0;
}
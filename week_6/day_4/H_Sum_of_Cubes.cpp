#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

const int maxN = 1e12;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i * i * i <= maxN; i++)
        pw.push_back(i * i * i);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < maxN; i++)
        {
            if (pw[i] >= x)
                break;

            int l = 0, r = maxN - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                    r = mid - 1;

                else
                    l = mid + 1;
            }
            if (ok)
            {
                found = true;
                break;
            }
        }

        if (found)
            yes;
        else
            no;
    }
    return 0;
}
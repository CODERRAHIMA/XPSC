#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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
        ll c;
        cin >> n >> c;

        vector<ll> costs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> costs[i];
            costs[i] += (i + 1);
        }

        sort(costs.begin(), costs.end());

        ll sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            sum += costs[i];
            if (sum > c)
            {
                break;
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}

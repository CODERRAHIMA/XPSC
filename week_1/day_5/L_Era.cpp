#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int maximum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > i + 1)
                maximum = max(maximum, v[i] - (i + 1));
        }
        cout << maximum << "\n";
    }
    return 0;
}
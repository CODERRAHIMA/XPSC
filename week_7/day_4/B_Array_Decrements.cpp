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
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool beshi = false;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
                beshi = true;
        }
        if (beshi)
        {
            no;
            continue;
        }
        int dif = 0;
        for (int i = 0; i < n; i++)
        {
            dif = max(dif, a[i] - b[i]); // 6
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (max(0, a[i] - dif) != b[i])
            {
                flag = false;
                break;
            }
        }
        (flag) ? yes : no;
    }
    return 0;
}
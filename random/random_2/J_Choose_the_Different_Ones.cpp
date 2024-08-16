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
        int n, m, k, c1 = 0, c2 = 0, flag = 0;
        cin >> n >> m >> k;
        map<int, int> m1, m2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m1[a]++;
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            m2[a]++;
        }
        for (int i = 1; i <= k; i++)
        {
            flag = 0;
            if (m1[i])
            {
                flag = 1;
                c1++;
            }
            if (m2[i])
            {
                flag = 1;
                c2++;
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (flag != 0)
        {
            if (c1 >= k / 2 && c2 >= k / 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
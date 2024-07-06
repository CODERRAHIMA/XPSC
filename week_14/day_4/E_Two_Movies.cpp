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
        int n;
        cin >> n;
        vi a(n), b(n);
        for (int &i : a)
            cin >> i;
        for (int &i : b)
            cin >> i;
        int sm1 = 0, sm2 = 0, v1 = 0, v2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                sm1 += a[i];
            else if (a[i] < b[i])
                sm2 += b[i];
            else if (a[i] == 1)
                v1++;
            else if (a[i] == -1)
                v2++;
        }
        while (v1--)
        {
            if (sm1 < sm2)
                sm1++;
            else
                sm2++;
        }
        while (v2--)
        {
            if (sm1 > sm2)
                sm1--;
            else
                sm2--;
        }
        cout << min(sm1, sm2) << endl;
    }
    return 0;
}
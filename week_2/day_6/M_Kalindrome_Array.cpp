#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int t1, t2;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                t1 = arr[i];
                t2 = arr[n - i - 1];
                break;
            }
        }
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != t1)
                a.push_back(arr[i]);
            if (arr[i] != t2)
                b.push_back(arr[i]);
        }

        bool flag1 = true, flag2 = true;
        for (int i = 0; i < a.size() / 2; i++)
        {
            if (a[i] != a[a.size() - i - 1])
            {
                flag1 = false;
                break;
            }
        }
        for (int i = 0; i < b.size() / 2; i++)
        {
            if (b[i] != b[b.size() - i - 1])
            {
                flag2 = false;
                break;
            }
        }
        if (!flag1 || !flag2) no;
        else yes;
    }
    return 0;
}
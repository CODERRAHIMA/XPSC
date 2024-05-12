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
        ll n, num, flag = 0, first = -1, last = -1;
        cin >> n;
        while (n--)
        {
            cin >> num;
            if (flag)
            {
                if (num >= last and num <= first)
                {
                    last = num;
                    cout << 1;
                }
                else
                    cout << 0;
            }
            else
            {
                if (first == -1)
                {
                    first = num;
                    last = num;
                    cout << 1;
                }
                else if (num >= last)
                {
                    last = num;
                    cout << 1;
                }
                else if (first >= num)
                {
                    last = num;
                    flag = 1;
                    cout << 1;
                }
                else
                    cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
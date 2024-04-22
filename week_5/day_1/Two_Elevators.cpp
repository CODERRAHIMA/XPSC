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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
            cout << 1;
        else
        {
            int x = abs(a - 1); // 2 //2
            int y = abs(b - c) + abs(1 - c); // 1+1=2 //1+0=1
            if (x < y)
                cout << 1;
            else if (x > y)
                cout << 2;
            else
                cout << 3;
        }
        cout << endl;
    }
    return 0;
}
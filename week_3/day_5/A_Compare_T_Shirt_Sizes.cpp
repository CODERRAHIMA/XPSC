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
        string a, b;
        cin >> a >> b;
        int an = a.size();
        int bn = b.size();
        if (a == b)
            cout << "=";
        else if (a[an - 1] == 'S' && b[bn - 1] == 'S')
        {
            if (an > bn)
                cout << "<";
            else if (an == bn)
                cout << "=";
            else
                cout << ">";
        }
        else if (a[an - 1] == 'L' && b[bn - 1] == 'L')
        {
            if (an > bn)
                cout << ">";
            else if (an == bn)
                cout << "=";
            else
                cout << "<";
        }
        else
        {
            if ((a[an - 1] == 'L' && (b[bn - 1] == 'M' || b[bn - 1] == 'S')) || (a[an - 1] == 'M' && b[bn - 1] == 'S'))
            {
                cout << ">";
            }
            else if ((b[bn - 1] == 'L' && (a[an - 1] == 'M' || a[an - 1] == 'S')) || (a[an - 1] == 'S' && b[bn - 1] == 'M'))
            {
                cout << "<";
            }
        }
        cout << "\n";
    }
    return 0;
}
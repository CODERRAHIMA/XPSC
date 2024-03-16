#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false;
    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            ok = true;
            break;
        }
    }
    if (ok)
        cout << ans << "\n";
    else
        cout << "-1\n";
    return 0;
}
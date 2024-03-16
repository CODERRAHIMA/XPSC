#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = x; i <= y; i++)
        cnt++;
    cout << cnt << "\n";
    return 0;
}
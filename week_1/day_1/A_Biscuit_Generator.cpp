#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;
    if (t < a)
        cout << 0 << endl;
    else
    {
        int bis = 0;
        int time = a;
        while (time <= t + 0.5)
        {
            bis += b;
            time += a;
        }

        cout << bis << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
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
        char c;
        cin >> c;

        string s;
        cin >> s;

        if (c == 'g')
            cout << 0 << endl;

        else
        {
            int p1 = 0;
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'g')
                {
                    p1 = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == c)
                {
                    if (p1 < i)
                        res = max(res, p1 + n - i);

                    else
                        res = max(res, abs(i - p1));
                }
                else if (s[i] == 'g')
                    p1 = i;
            }
            cout << res << "\n";
        }
    }
    return 0;
}
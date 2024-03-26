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
        int n, size;
        cin >> n >> size;

        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];

        int minimum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int res = 0;
                    string s1 = s[i], s2 = s[j];
                    for (int k = 0; k < size; k++)
                    {
                        res += abs((s1[k] - 'a') - (s2[k] - 'a'));
                    }
                    minimum = min(res, minimum);
                }
            }
        }
        cout << minimum << "\n";
    }
    return 0;
}
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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (zero > 0)
                    zero--;
                else
                    break;
            }
            else
            {
                if (one > 0)
                    one--;
                else
                    break;
            }
        }
        cout << abs(one - zero) << '\n';
    }
    return 0;
}
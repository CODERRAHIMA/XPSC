#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int maxN = (1 << 15);
vi palindromes;

void mark_palindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool thikase = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                thikase = false;
                break;
            }
        }
        if (thikase)
        {
            palindromes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        vi cnt(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        ll res = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                int cur = (a[i] ^ palindromes[j]);
                res += cnt[cur];
            }
        }

        cout << (res / 2) << endl;
    }
    return 0;
}
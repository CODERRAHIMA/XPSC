#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
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
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length() - 1, l2 = s2.length() - 1;
        if (s1[0] == s2[0])
        {
            yes;
            cout << s1[0] << '*' << endl;
        }

        else if (s1[l1] == s2[l2])
        {
            yes;
            cout << '*' << s1[l1] << endl;
        }

        else
        {
            string res;
            int ok = 0;
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < l2; j++)
                {
                    if ((s1[i] == s2[j]) && (s1[i + 1] == s2[j + 1]))
                    {
                        ok = 1;
                        res += s1[i];
                        res += s1[i + 1];
                        break;
                    }
                }
                if (ok)
                    break;
            }
            if (ok)
            {
                yes;
                cout << '*' << res << '*' << endl;
            }
            else
                no;
        }
    }
    return 0;
}
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        string newString = "";
        for (int i = 0; i < n;)
        {
            // if (i + 3 < n && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            // {
            //     newString += "aj";
            //     i += 4;
            // }
            if (i + 2 < n && s[i + 2] == '0' && s[i + 3] != '0')
            {
                newString += (char)((s[i] - '0') * 10 + (s[i + 1] - '0') + 'a' - 1);
                i += 3;
            }
            else
            {
                newString += (char)(s[i] - '0' + 'a' - 1);
                i++;
            }
        }
        cout << newString << endl;
    }
    return 0;
}
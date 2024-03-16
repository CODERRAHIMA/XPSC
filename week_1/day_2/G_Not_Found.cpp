#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool found[26] = {false};
    string s;
    cin >> s;
    for (char c : s)
        found[c - 'a'] = true;
    
    for (int i = 0; i < 26; i++)
    {
        if (!found[i])
        {
            cout << (char)('a' + i) << "\n";
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}
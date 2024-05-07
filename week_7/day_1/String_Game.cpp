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

        int one = 0, zero = 0;
        for (auto c : s)
        {
            if (c == '1')
                one++;
            else
                zero++;
        }

        int mnPair = min(one, zero);
        if (mnPair % 2 != 0)
            cout << "Zlatan";
        else
            cout << "Ramos";

        cout << endl;
    }
    return 0;
}
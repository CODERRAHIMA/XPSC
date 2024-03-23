#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = "Timur";
        sort(s.begin(), s.end());
        string s2;
        cin >> s2;
        sort(s2.begin(), s2.end());
        if (s == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
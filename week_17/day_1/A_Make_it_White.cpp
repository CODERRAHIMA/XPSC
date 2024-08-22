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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start = -1, end = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (s[j] == 'B')
            {
                end = j;
                break;
            }
        }
        if (start != -1 || end != -1)
            cout << abs(end - start) + 1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
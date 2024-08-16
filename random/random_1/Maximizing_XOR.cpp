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

    int a, b;
    cin >> a >> b;
    int val = INT_MIN;
    for (int i = a; i <= b; i++)
    {
        for (int j = i; j <= b; j++)
        {
            int ans = i ^ j;
            val = max(val, ans);
        }
    }
    cout << val << endl;
    return 0;
} 
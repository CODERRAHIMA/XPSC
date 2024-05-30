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

    string s;
    cin >> s;
    int n = s.size();
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1)
        cout << 0 << endl;
    
    else
    {
        cout << 3 << endl;
        cout << "R" << " " << n - 1 << endl;
        cout << "L" << " " << n << endl;
        cout << "L" << " " << 2 << endl;
    }
    return 0;
}
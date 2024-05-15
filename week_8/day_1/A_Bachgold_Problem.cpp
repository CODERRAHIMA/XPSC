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

    int n;
    cin >> n;

    cout << n / 2 << endl;
    while (n > 3)
    {
        cout << 2 << " ";
        n -= 2;
    }
    cout << n << endl;
    return 0;
}
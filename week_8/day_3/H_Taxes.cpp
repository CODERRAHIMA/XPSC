#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (is_prime(n))
        cout << 1 << '\n';

    else if (n % 2 == 0)
        cout << 2 << '\n';

    else
    {
        if (is_prime(n - 2))
            cout << 2 << '\n';

        else
            cout << 3 << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
bool isPrime(int n)
{
    int div = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div++;
        }
    }
    if (div == 2)
        return true;
    else
        return false;
}
bool isAlmostPrime(int n)
{
    int primediv = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
                primediv++;
        }
    }
    if (primediv == 2)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i<= n; i++)
    {
        if (isAlmostPrime(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
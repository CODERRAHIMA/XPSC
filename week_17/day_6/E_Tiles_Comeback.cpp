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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int i = 0, sum = 0;

        while (i < n && sum < k)
        {
            if (arr[i] == arr[0])
                sum++;

            i++;
        }

        if (arr[n - 1] == arr[0])
        {
            if (sum == k)
                yes;
            else
                no;
            continue;
        }

        sum = 0;
        while (i < n && sum < k)
        {
            if (arr[i] == arr[n - 1])
                sum++;

            i++;
        }

        if (sum == k)
            yes;
        else
            no;
    }
    return 0;
}
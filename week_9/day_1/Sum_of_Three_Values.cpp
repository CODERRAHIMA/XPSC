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

    ll n, target;
    cin >> n >> target;
    int in, idx = 0;
    vi arr(n);
    while (cin >> in)
    {
        arr[idx++] = in;
    }

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        vp.pb({arr[i], i + 1});
    }

    sort(vp.begin(), vp.end());
    for (int lock = 0; lock < n; lock++)
    {
        int lock_num = vp[lock].first;
        int front = lock + 1, rear = n - 1, sum = 0;

        while (front < rear)
        {
            sum = vp[front].first + vp[rear].first + lock_num;

            if (sum == target)
            {
                cout << vp[lock].second << " " << vp[front].second << " " << vp[rear].second << endl;
                return 0;
            }
            else if (sum < target)
            {
                front++;
            }
            else
            {
                rear--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
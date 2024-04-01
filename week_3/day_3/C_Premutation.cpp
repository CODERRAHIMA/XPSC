#include <bits/stdc++.h>
#define ll long long
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
        unordered_map<int, int> fre;
        int arr[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
                if (j == 0)
                    fre[arr[i][j]]++;
            }
        }
        int mxfre = 0;
        int mxfrenum = 0;
        for (auto &it : fre)
        {
            if (it.second > mxfre)
            {
                mxfre = it.second;
                mxfrenum = it.first;
            }
        }
        cout << mxfrenum << " ";
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[i][j] == mxfrenum)
                {
                    c++;
                    break;
                }
            }
            if (c == 0)
            {
                for (int j = 0; j < n - 1; j++)
                    cout << arr[i][j] << " ";
                
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
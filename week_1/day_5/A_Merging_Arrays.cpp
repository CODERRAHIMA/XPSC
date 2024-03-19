#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> sorting(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> newarr;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
            newarr.push_back(arr1[i++]);

        else
            newarr.push_back(arr2[j++]);
    }

    while (i < arr1.size())
        newarr.push_back(arr1[i++]);

    while (j < arr2.size())
        newarr.push_back(arr2[j++]);

    return newarr;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];

    for (int i = 0; i < m; ++i)
        cin >> arr2[i];

    vector<int> mergearr = sorting(arr1, arr2);

    for (int i = 0; i < mergearr.size(); ++i)
        cout << mergearr[i] << " ";

    cout << endl;
    return 0;
}

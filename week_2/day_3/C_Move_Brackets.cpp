#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (c == '(')
                st.push(c);
            else
            {
                if (!st.empty())
                    st.pop();
            }
        }
        cout << st.size() << "\n";
    }
    return 0;
}
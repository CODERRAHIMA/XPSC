vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k)
{
    vector<long long> v;
    queue<long long> q;
    int l = 0, r = 0;
    while (r < n)
    {
        if (arr[r] < 0)
            q.push(arr[r]);

        if ((r - l + 1) < k)
            r++;
        
        else
        {
            if (!q.empty())
            {
                v.push_back(q.front());
                if (arr[l] < 0)
                    q.pop();
            }
            else
                v.push_back(0);
            l++;
            r++;
        }
    }
    return v;
}

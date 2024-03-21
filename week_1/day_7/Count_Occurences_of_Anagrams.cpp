class Solution
{
public:
    int search(string pat, string txt)
    {
        int n = txt.size();
        int m = pat.size();
        int l = 0, r = 0;
        int res = 0;
        vector<int> patF(26, 0);
        vector<int> txtF(26, 0);
        for (auto c : pat)
            patF[c - 'a']++;

        while (r < n)
        {
            txtF[txt[r] - 'a']++;
            if ((r - l + 1) == m)
            {
                if (txtF == patF)
                    res++;

                txtF[txt[l] - 'a'] -= 1;
                l++;
            }
            r++;
        }
        return res;
    }
};

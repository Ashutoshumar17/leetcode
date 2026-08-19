int find(vector<int> &a)
{
    int maxc = 0;
    for(int i = 0; i < 256; i++)
        maxc = max(maxc, a[i]);
    return maxc;
}

class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        vector<int> f(256,0);

        int low = 0;
        int res = 0;

        for(int high = 0; high < n; high++)
        {
            f[s[high]]++;

            while((high - low + 1) - find(f) > k)
            {
                f[s[low]]--;
                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};
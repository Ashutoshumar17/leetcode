class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int h=0; int l=0;int res=INT_MIN; int n=s.size();
        unordered_map<char,int> f;

        for(h=0;h<n;h++){
            f[s[h]]++;
            int k=h-l+1;
            while(f.size() < k){
                f[s[l]]--;
                if(f[s[l]]==0){
                    f.erase(s[l]);
                }
                l++;
                k =h-l+1;
            }
            k=h-l+1;
            res=max(res,k);

        }
        if(res==INT_MIN)
            return 0; 
        return res;
    }
};
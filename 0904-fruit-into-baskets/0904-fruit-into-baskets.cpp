class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int h=0;int l=0;int res=INT_MIN;
        int n=fruits.size();
        unordered_map<int, int>f;

        for(h=0;h<n;h++){
            f[fruits[h]]++;
            while(f.size()>2){
                f[fruits[l]]--;
                if(f[fruits[l]]==0){
                    f.erase(fruits[l]);
                }
                l++;
                
            }
            int len=h-l+1;
            res=max(res,len);

        }
        return res;

        
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;int high=0;int sum=0;
        int res=INT_MAX;
        int n=nums.size();
        while(high<n){
            sum+=nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
        if (res == INT_MAX)
            return 0;
            return res;
        
    } 
};
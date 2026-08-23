class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int maxm=nums[0];
        for(int i=1;i<nums.size();i++){
            if(sum+nums[i]>nums[i]){
                sum+=nums[i];
                maxm=max(sum,maxm);
            }else{
                sum=nums[i];
                maxm=max(sum,maxm);
            }
        }
        return maxm;
    }
};
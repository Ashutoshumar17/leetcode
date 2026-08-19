class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currentSum=0;

        for(int val:nums){
            currentSum+=val;
            maxsum=max(currentSum,maxsum);
            if(currentSum<0){
                currentSum=0;
            }


        }
        return maxsum;
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum_i=numbers[i]+numbers[j];
            if(sum_i==target){
                return {i+1,j+1};

            }else if(sum_i<target){
                 i++;
            }else{
                 j--;
            }
        }
        return{};
    
    }
};

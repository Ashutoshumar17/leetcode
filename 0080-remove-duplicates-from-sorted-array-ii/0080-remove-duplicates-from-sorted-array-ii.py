class Solution(object):
    def removeDuplicates(self, nums):
        if(len(nums)<=2):
            return len(nums);
        
        cm=2;
        off=2;
        

        while(cm<len(nums)):
            if(nums[cm]!=nums[off-2]):
                nums[off]=nums[cm]
                off+=1
            
            
            
            cm+=1

        return off     
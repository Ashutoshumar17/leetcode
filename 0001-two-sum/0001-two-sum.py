class Solution(object):
    def twoSum(self, nums, target):
        arr = []

        for i in range(len(nums)):
            arr.append([nums[i], i])

        arr.sort()

        i = 0
        j = len(arr) - 1

        while i < j:
            sum = arr[i][0] + arr[j][0]

            if sum == target:
                return [arr[i][1], arr[j][1]]
            elif sum < target:
                i += 1
            else:
                j -= 1
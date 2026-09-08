class Solution(object):
    def countCommas(self, n):
        count = 0

        for i in range(1, n + 1):
            count += len(str(i)) // 4

        return count 
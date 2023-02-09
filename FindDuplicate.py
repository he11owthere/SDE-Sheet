class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i = nums[0]
        while(1):
            if(nums[i] == 0):
                return i
            k = nums[i]
            nums[i] = 0
            i = k
        return -1
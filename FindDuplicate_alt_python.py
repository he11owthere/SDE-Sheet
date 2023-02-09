class Solution(object):
    def findDuplicate(self, nums):
        um = {}
        for x in nums:
            if x in um:
                um[x] += 1
            else:
                um[x] = 1
        for x in um:
            if(um[x] > 1):
                return x
        return -1
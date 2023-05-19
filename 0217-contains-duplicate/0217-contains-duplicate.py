class Solution(object):
    
    def containsDuplicate(self, nums):
        duplicate = {}
        for num in nums: 
            if duplicate.get(num, None) is not None:
                return True
            else:
                duplicate[num] = 1
        return False
        
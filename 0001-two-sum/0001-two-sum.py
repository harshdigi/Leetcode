class Solution(object):
    def twoSum(self, nums, target):
        rem = {}
        i =0
        for num in nums:
            if rem.get(target-num, None) is not None:
                return [i, rem.get(target-num, None)]
            else:
                rem[num] = i
            i+=1
        return [-1,-1]
                
        
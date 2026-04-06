class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        currS =  nums[0]
        maxS =  nums[0]

        for item in nums[1:]:
            currS =  max(item, currS + item)
            maxS = max(currS,  maxS)


        return maxS
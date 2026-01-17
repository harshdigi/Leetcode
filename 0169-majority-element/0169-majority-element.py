class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        winner = nums[0]
        majority =0
        for item in nums:
            if item  ==  winner:
                majority +=1
            else:
                majority -=1
            
            if (majority < 0):
                majority = 1
                winner = item
        return winner
        
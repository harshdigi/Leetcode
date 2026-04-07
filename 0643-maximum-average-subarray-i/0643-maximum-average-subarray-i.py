class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:


        start  =  0
        end  =  0 
        currSum  =  0 
        maxAvg = 0    
        for i in range(0 , k):
            currSum =  currSum + nums[i]
            end += 1

        maxAvg =  currSum/k


        while end < len(nums):
           currSum = currSum  + nums[end]  - nums[start]
           newAvg =  currSum/k
           maxAvg = max(newAvg, maxAvg ) 
           start +=1
           end +=1
        return maxAvg
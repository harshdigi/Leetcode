class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        occurrenceFq = {0:1}
        ans = 0
        prefixSum = 0
        for item in nums:
            prefixSum += item
            rem = prefixSum - k
            if occurrenceFq.get(rem, 0) !=0:
                ans += occurrenceFq[rem]
            if not occurrenceFq.get(prefixSum, False):
                occurrenceFq[prefixSum] = 1
            else:
                 occurrenceFq[prefixSum] += 1
        return ans
                
        
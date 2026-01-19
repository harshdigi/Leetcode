class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # Solution 1  Simply sort and find  but that voilates the constraint of O(n)

        s =  set(nums)
        ans = 0
        for item in s:
            if (item-1) not in s:
                l = 0
                while (item+l) in s:
                    l += 1
                ans = max(l,ans)
        return ans
 
                

        
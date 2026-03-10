class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i,j =0,1
        l =  len(nums)
        while i < l and j<l:
            if nums[i] == 0:
                if(nums[j]!=0):
                    nums[i], nums[j] = nums[j] , nums[i]
                    i+=1
                    j = i+1
                else:
                    j +=1
            else:
                i +=1
                j +=1
        return nums
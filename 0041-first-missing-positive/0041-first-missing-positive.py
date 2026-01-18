class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)

        i = 0
        while i < n:
            correct_pos = nums[i] - 1

            # place nums[i] in its correct position if possible
            if 1 <= nums[i] <= n and nums[i] != nums[correct_pos]:
                nums[i], nums[correct_pos] = nums[correct_pos], nums[i]
            else:
                i += 1

        # find first index where value is incorrect
        for i in range(n):
            if nums[i] != i + 1:
                return i + 1

        return n + 1

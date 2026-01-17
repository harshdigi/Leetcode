class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefixP=1
        zeroCount =0
        op =[]
        for item in nums:
            if item == 0:
                zeroCount +=1
                continue
            prefixP *= item
        for item in nums:
            if (zeroCount>1) or (zeroCount==1 and item != 0):
                op.append(0)
            elif zeroCount==1 and item == 0:
                op.append(prefixP)
            elif zeroCount <1:
                op.append(int(prefixP/item))
        return op
        
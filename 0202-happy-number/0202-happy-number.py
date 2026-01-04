class Solution:
    def isHappy(self, n: int) -> bool:
        
        slow = fast = str(abs(n))
        fast = str(abs(sum([int(d)**2 for d in slow])))
        
        while fast != "1" and slow != fast:
            slow = str(sum([int(d)**2 for d in slow]))
            fast = str(sum([int(i)**2 for i in str(abs(sum([int(d)**2 for d in fast])))]))
            # print("Slow ", slow, " Fast: ", fast)
        return fast == "1"
           
        
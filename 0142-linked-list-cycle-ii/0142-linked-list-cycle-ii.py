# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        slow = fast = head
        while(fast != None and fast.next != None):
            fast = fast.next.next
            slow =  slow.next
            if fast == slow:
                break
        else:
            return None
        slow = head
        while slow != fast:
            slow = slow.next
            fast = fast.next

        return slow

        
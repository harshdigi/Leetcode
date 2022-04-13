/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
     ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur = dummy, *pre = dummy, *nex = dummy;
        int length = 0;
        // count the length of the listNode 
        while(cur->next){
            length++;
            cur = cur->next;
        }
        
        
        while(length >= k){
            cur = pre->next;
            nex = cur->next;
            // do a reverse for a k nodes for each time 
            for(int i=1; i<k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            // pre node will start from the head of non reverse node for each time 
            pre = cur;
            length -= k;
        }
        return dummy->next;   
    }
};
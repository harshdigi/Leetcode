/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if given head node is NULL and head->next is NULL, this means that there will be no cycle
        if(head == NULL or head->next == NULL){
            return false;
        }
        
        ListNode* fast = head; // fast pointer will take two step at a time
        ListNode* slow = head; // slow pointer will take one step at a time\
        
        // run the loop untill fast reaches to NULL, If null is encountered anywhere in the loop that means list does not contains cycle
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next; // incrementing the fast pointer by two nodes
            
            slow = slow->next; // incrementing the slow pointer by one step
            
            // slow and fast pointer become at any point this means list contains cycle
            if(slow == fast){
                return true;
            }
        }
        // no loop in list
        return false;
    }
    
};
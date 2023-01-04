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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* prev = head;
        ListNode* temp = head;
        temp = temp->next;
        while(temp->next !=NULL){
            if(temp->val != prev->val){
                prev->next =temp;
                prev= temp;
            }
            temp = temp->next;
        }
        if(temp->val != prev->val){
            prev->next = temp;
        }
        else{
            prev->next = NULL;
        }
        
      return head;  
        
    }
};
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
    bool ans =true;
    void check (ListNode*& low, ListNode* high){
        if(!high) return;
        
        check(low, high->next);
        if(high->val != low->val){
            ans=false;
        }
        low=low->next;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* low= head;
        check(low,head);
        return ans;
    }
};
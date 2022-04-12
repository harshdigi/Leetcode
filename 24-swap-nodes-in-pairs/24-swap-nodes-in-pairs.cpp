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
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL || head->next==NULL) 
         {return head;}
    
    //keep track of first three node links for easier understanding
    ListNode* prev=head;
    ListNode* curr=head->next;
    ListNode* next =head->next->next;
    
    curr->next=prev;
    prev->next=swapPairs(next);
    
    return curr;
    }
};
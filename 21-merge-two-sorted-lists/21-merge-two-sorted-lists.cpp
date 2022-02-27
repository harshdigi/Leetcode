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
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head =NULL;
        ListNode* temp = NULL;
        
        
        if(!l2)return l1;
        
        if(!l1)return l2; 
          
    
        if(head == NULL){
            if(l1->val <=l2->val){
                head = l1;
                l1=l1->next;
            }
            else{
                head = l2;
                l2=l2->next;
            }
        }
        
        temp = head;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val<=l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1){
                temp->next = l1;
                l1=l1->next;
                temp=temp->next;
        }
        if(l2){
            temp->next = l2;
                l2=l2->next;
                temp=temp->next;
        }
        
        return head;
        
    }
};
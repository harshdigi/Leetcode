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
private:
    ListNode* reverse(ListNode*head){
        ListNode*prev=NULL,*nex;
        while(head){
            nex=head->next;
            head->next=prev;
            prev=head;
            head=nex;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        ListNode*slow=head,*fast=head;
        ListNode*h1=NULL,*h2=NULL,*q;
        while(fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        h1=head;
        h2=slow->next;
        slow->next=NULL;
        h2=reverse(h2);
        while(h1 && h2){
            q=h2->next;
            h2->next=h1->next;
            h1->next=h2;
            h1=h1->next->next;
            h2=q;
        }
    }
};
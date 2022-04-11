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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        
        int n = 0, m = 0;
        // count the length of headA and headB
        while(ptr1) {
            n++;
            ptr1 = ptr1->next;
        }
        while(ptr2){
            m++;
            ptr2 = ptr2->next;
        }
        // count the abs difference
        int length = abs(n-m);
        // run one of the largest node until its length equal to another one 
        if(n>m){
            while(length){
                headA = headA->next;
                length--;
            }
        }else {
            while(length){
                headB = headB->next;
                length--;
            }
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headB;
    }
};
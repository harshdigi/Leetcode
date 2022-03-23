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
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        while(head != NULL){
            temp.push_back(head->val);
            head=head->next;
        }
        int low=0,high = temp.size()-1;
        while(low<=high){
            if(temp[low]!=temp[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
};
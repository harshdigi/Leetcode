/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* splitTree(vector<int>& nums, int left,int right){
        if(left>right)return NULL;
        
        int mid= (right+left)/2;
        
        TreeNode* node = new TreeNode(nums[mid]);
        node->right= splitTree(nums, mid+1, right);
        node->left= splitTree(nums,left,mid-1);
        return node;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        if(nums.size()==0){
            return NULL;
        }
        
        return splitTree(nums, 0,nums.size()-1);
        
    }
};
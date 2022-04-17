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
private:
    void _inorder(TreeNode* root, int& k, int& ans) {
        if(!root || !k){ return;}
        _inorder(root->left, k, ans);
        if(--k == 0){ ans = root->val;}
        _inorder(root->right, k, ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        _inorder(root, k, ans);
        return ans;
    }
};
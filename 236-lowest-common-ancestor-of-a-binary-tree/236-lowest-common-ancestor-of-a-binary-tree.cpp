/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   TreeNode* helper (TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL) return NULL;       // when the root is not any child then just return NULL
        if(root == p || root == q) return root;     
        TreeNode* left = helper(root->left, p, q);  // go to the left child
        TreeNode* right = helper(root->right, p, q);    // go to the right child 
        if(left != NULL & right != NULL) return root;   // if both are not NULL, it means the root is the common ancestor
        if(left != NULL) return left;    
        return right;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // create a helper function to do the recursive call
        return helper(root, p ,q);
    }
};
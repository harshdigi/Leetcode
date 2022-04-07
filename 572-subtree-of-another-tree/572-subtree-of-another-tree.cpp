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
     bool ans=false;
    bool check(TreeNode *root,TreeNode *subRoot){
        if(root==NULL && subRoot==NULL){return true;}
       if(subRoot==NULL || root==NULL){return false;}
        return (root->val==subRoot->val) && check(root->left,subRoot->left) && check(root->right,subRoot->right);
    }
    void inorder(TreeNode *root,TreeNode *subRoot){
        if(root==NULL){ return;}
        inorder(root->left,subRoot);
        if(root->val==subRoot->val){
            TreeNode *temp=root;
            if(check(temp,subRoot))
               ans=true;
        }
        inorder(root->right,subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         inorder(root,subRoot);
        return ans;
    }
};
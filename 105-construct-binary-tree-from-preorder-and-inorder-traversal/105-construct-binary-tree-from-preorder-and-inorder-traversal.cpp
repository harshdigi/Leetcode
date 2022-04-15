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
   map <int, int> inMap; 
    int preIndex = 0;
    
    TreeNode* constructBT(vector<int>& preorder,int inStart, int inEnd){
        if(inStart > inEnd) {return NULL;} 
        
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        if(inStart == inEnd) {return root;}
        
        int inRoot = inMap[root->val]; 
        root->left = constructBT(preorder, inStart, inRoot - 1); 
        root->right = constructBT(preorder, inRoot + 1, inEnd);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++) inMap[inorder[i]] = i;
        return constructBT(preorder, 0, inorder.size()-1);
    }
};
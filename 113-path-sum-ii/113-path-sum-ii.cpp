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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> resPaths; 
        vector<int> addPath;  
        findPaths(root, targetSum, addPath, resPaths);
        return resPaths;
    }
    
    void findPaths(TreeNode *root, int sum, vector<int> addPath, vector<vector<int>> &resPaths) {
        if(!root){ return;} 
        addPath.push_back(root->val);    
        if(root->val == sum && !root->left && !root->right) {  
		    resPaths.push_back(addPath); 
            return;
        }
        sum -= root->val; 
        findPaths(root->left, sum, addPath, resPaths);
        findPaths(root->right, sum, addPath, resPaths);
    }
};
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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int deepSum = root->val;  //*** to store the sum of last level
        int curSum = 0;
        
        while(q.size()!=0){    //*** loop for simple level order traversal
            
            TreeNode *cur = q.front();
            q.pop();
            
            if(cur==NULL){
                
                deepSum = curSum;
                curSum = 0;
                 q.push(NULL);
                
                if(q.front()==NULL)break;
              
                continue;
            }
            
            
            curSum += cur->val;
            
            if(cur->left)q.push(cur->left);
            if(cur->right)q.push(cur->right);
            
            
        }
        
        
        return deepSum;
    }
};
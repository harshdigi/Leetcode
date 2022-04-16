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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
       vector<int> view;
        if (!root) return view;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        
        
        TreeNode *temp = nullptr, *prev = nullptr;
        while (q.size() != 0) {
            temp = q.front();
            if (temp == nullptr) {  
                view.push_back(prev->val);
                if (q.size() == 1) {return view;}
                q.push(nullptr);
            }
            else {
                prev = temp;
                if (temp->left){ q.push(temp->left);}
                if (temp->right){ q.push(temp->right);}
            }
            q.pop();
        }
        return view;
    }
};
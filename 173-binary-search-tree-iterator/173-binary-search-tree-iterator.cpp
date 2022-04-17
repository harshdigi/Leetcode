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
class BSTIterator {
stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        findLeft(root);
    }
    void findLeft(TreeNode* root){
        TreeNode* temp = root;
        while(temp){
            st.push(temp);
            temp = temp->left;
        }
    }
    int next() {
        TreeNode* top = st.top();
        st.pop();
        if(top->right){
            findLeft(top->right);
        }
        return top->val;
    }
    
    bool hasNext() {
        if(!st.empty()) {return true;}
        else {return false;}
    }
};

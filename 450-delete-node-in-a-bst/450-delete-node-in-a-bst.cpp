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
    TreeNode *rearrange(TreeNode *root)
    {
        if (root->left == NULL and root->right == NULL)
            return NULL;
        else if (root->left == NULL)
            return root->right;
        else if (root->right == NULL)
            return root->left;
        return insert(root->left, root->right);
    }
    TreeNode *insert(TreeNode *left, TreeNode *right)
    {
        TreeNode *temp = right;
        while (1)
        {
            if (temp->left == NULL)
            {
                temp->left = left;
                return right;
            }
            temp = temp->left;
        }
        return right;
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return NULL;
        TreeNode *temp = root;
        if (temp->val == key)
            return rearrange(temp);
        while (temp != NULL)
        {
            if (key > temp->val)
            {
                if (temp->right && temp->right->val == key)
                {
                    temp->right = rearrange(temp->right);
                    return root;
                }
                else
                    temp = temp->right;
            }
            else
            {
                if (temp->left && temp->left->val == key)
                {
                    temp->left = rearrange(temp->left);
                    return root;
                }
                else
                    temp = temp->left;
            }
        }
        return root;
    
    }
};
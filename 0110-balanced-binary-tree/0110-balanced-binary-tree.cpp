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
    int findLH(TreeNode* root)
    {
        if(root==NULL)
        return  0;

        return 1+max(findLH(root->left),findLH(root->right));
    }
    int findRH(TreeNode* root)
    {
         if(root==NULL)
        return  0;

        return 1+max(findRH(root->left),findRH(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;

        int lh=findLH(root->left);
        int rh=findRH(root->right);

        if(abs(rh-lh)>1)
        return false;

        bool left= isBalanced(root->left);
        bool right= isBalanced(root->right);

        if(!(left&right))
        return false;

        return true;
    }
};
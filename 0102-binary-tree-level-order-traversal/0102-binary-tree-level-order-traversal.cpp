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
    
    void levl(vector<vector<int>>& ans,TreeNode* root,int level)
    {
        if(root==NULL)
        {
            return ;
        }
        if(level==ans.size())
        {
            ans.push_back({});
        }
        ans[level].push_back(root->val);
        levl(ans,root->left,level+1);
        levl(ans,root->right,level+1);

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levl(ans,root,0);
        return ans;
    }
};
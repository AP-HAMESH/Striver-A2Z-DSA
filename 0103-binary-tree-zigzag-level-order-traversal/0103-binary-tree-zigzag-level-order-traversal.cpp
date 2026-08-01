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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;

        //intialisation of varaibles needed
        queue<TreeNode*> Q;
        Q.push(root);
        bool L2R=true;

        //while loop where the traversal happens from r2l or l2r
        while(!Q.empty())
        {
            //initialisation for the current orders elements row
            int size=Q.size();
            vector<int> row(size);

            for(int i=0;i<size;i++)
            {   
                TreeNode* node=Q.front();
                Q.pop();
                int index=(L2R? i:size-1-i);
                row[index]=node->val;

                if(node->left)
                Q.push(node->left);
                if(node->right)
                Q.push(node->right);

            }
            L2R=!L2R;
            ans.push_back(row);

        }
        return ans;
    }
};
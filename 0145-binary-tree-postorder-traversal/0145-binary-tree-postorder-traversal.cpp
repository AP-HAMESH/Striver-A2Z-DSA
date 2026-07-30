class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* curr=root;
        TreeNode* prev=nullptr;

        while(curr||!st.empty()) {
            while(curr) {
                st.push(curr);
                curr=curr->left;
            }

            TreeNode* node=st.top();

            if(node->right&&node->right!=prev) {
                curr=node->right;
            } else {
                ans.push_back(node->val);
                prev=node;
                st.pop();
            }
        }

        return ans;
    }
};
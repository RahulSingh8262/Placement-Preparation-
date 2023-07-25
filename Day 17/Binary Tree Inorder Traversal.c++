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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        stack<TreeNode *>st;
        while(root){
            st.push(root);
            root=root->left;
        }
        while(st.size()!=0){
            TreeNode * x=st.top();
            st.pop();
            ans.push_back(x->val);
            if(x->right){
                x=x->right;
                while(x){
                    st.push(x);
                    x=x->left;
                }
            }
        }
        return ans;
    }
};
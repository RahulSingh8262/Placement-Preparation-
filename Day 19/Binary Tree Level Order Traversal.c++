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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode *>q;
        q.push(root);
        vector<vector<int>>ans;
       
        while(!q.empty()){
            vector<int>sol= {};
            int m =q.size();
            for(int i =0;i<m;i++){
                TreeNode * x =q.front();
                q.pop();
                if(x->left!=NULL){
                q.push(x->left);
                                    }
                if(x->right!=NULL){
                    q.push(x->right);
                }
                sol.push_back(x->val);

            }
            ans.push_back(sol);
        }
        return ans;
    }
};
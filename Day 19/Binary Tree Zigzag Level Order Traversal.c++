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
         if(root==NULL){
            return {};
        }
        queue<TreeNode *>q;
        q.push(root);
        vector<vector<int>>ans;
        int index,flag=1;
        
        while(!q.empty()){
             vector<int>sol(q.size());
            int m =q.size();
            for(int i =0;i<m;i++){

                if(flag%2==0){
                    index=m-i-1;
                }
                else{
                    index=i;
                }
                TreeNode * x =q.front();
                q.pop();
                if(x->left!=NULL){
                q.push(x->left);
                                    }
                if(x->right!=NULL){
                    q.push(x->right);
                }
                sol[index]=x->val;

            }
            ans.push_back(sol);
            flag++;
        }
        return ans;
    }
};
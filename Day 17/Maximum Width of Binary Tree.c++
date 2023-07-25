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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,long long int>>q;
        q.push({root,0});
        long long int ans=0;
        while(!q.empty()){
            long long int min=q.front().second;
            long long int n=q.size();
            long long int start,end;
            for(int i=0;i<n;i++){
                long long int index=q.front().second-min;
                TreeNode * x=q.front().first;
                if(i==0){
                    start=q.front().second;
                }
                if(i==n-1){
                    end=q.front().second;
                }
                q.pop();
                if(x->left!=NULL){
                    q.push({x->left,2*index+1});
                }
                if(x->right!=NULL){
                    q.push({x->right,2*index+2});
                }
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};
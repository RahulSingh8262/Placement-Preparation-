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
    int solve(TreeNode* root,int& max_diameter){
        if(root==NULL){
            return 0;
        }
        int left=solve(root->left,max_diameter);
        int right=solve(root->right,max_diameter);
        max_diameter=max(max_diameter,left+right);

        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter=0;
        solve(root,max_diameter);
        return max_diameter;
    }
};
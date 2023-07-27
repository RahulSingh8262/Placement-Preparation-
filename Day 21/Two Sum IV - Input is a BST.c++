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

class iter{
    private:
        stack<TreeNode *>st;
        bool reverse;

    public:
        iter(TreeNode * root,bool reverse){
            this->reverse=reverse;
            pushall(root);
        }

        int value(){
            TreeNode * x=st.top();
            st.pop();
            if(!reverse){
                pushall(x->right);
            }
            if(reverse){
                pushall(x->left);
            }
            return x->val;
        }



    private:
        void pushall(TreeNode * root){
            while(root!=NULL){
                if(reverse==false){
                    st.push(root);
                    root=root->left;
                }
                if(reverse){
                    st.push(root);
                    root=root->right;
                }
            }
        }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        iter next(root,false);
        iter prev(root,true);
        int x=next.value();
        int y=prev.value();
        while(x!=y){
            if(x+y==k){
                return true;
            }
            else if(x+y>k){
                y=prev.value();
            }
            else if(x+y<k){
                x=next.value();
            }
        }
        return false;

    }
};
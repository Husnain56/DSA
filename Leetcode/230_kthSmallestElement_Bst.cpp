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

    void findkthSmallest(TreeNode * root, int k , int &i, int &val ){

        if(root==nullptr){
            return;
        }

        findkthSmallest(root->left,k,i,val);
        i++;
        if(i == k){ 

           val = root->val;
           return;
        }
        findkthSmallest(root->right,k,i,val);
    }

    int kthSmallest(TreeNode* root, int k) {
        
       int val;
       int i = 0;
       findkthSmallest(root,k,i,val);
        return val;
    }
};
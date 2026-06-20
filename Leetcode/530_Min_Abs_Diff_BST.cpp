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

    void findMin(TreeNode* root, int &prev,int &value){
        
        if(root == nullptr){ 
            return;
        }

        findMin(root->left,prev,value);
        
        if(prev!=INT_MIN){
            value = min(value,abs(prev-root->val));
        }
        prev = root->val;

        findMin(root->right,prev,value);

    }

    int getMinimumDifference(TreeNode* root) {
        
        int value = INT_MAX;
        int prev = INT_MIN;
        findMin(root, prev ,value);
        return value;
    }
};
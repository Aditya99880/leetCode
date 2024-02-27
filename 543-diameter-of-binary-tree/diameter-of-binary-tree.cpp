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
    int diameterOfBinaryTree(TreeNode* root){
        int maxi=0;
        diameterOfBinary(root,maxi);
        return maxi;
    }
    int diameterOfBinary(TreeNode* root,int & maxi) {
        if(root==nullptr) return 0;
        
        int lDepth = diameterOfBinary(root->left,maxi);
        int rDepth = diameterOfBinary(root->right,maxi);
        maxi=max(maxi,lDepth+rDepth);
        return 1+max(lDepth,rDepth);
        
    }
};
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
    bool isSameTree(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr)
        return 1;
 
    /* 2. both non-empty -> compare them */
    if (a != nullptr && b != nullptr) {
        return (a->val == b->val && isSameTree(a->left, b->left) && isSameTree(a->right, b->right));
    }
 
    /* 3. one empty, one not -> false */
    return 0;
    }
};
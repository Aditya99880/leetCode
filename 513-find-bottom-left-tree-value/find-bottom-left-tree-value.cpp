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
    int findBottomLeftValue(TreeNode* root) {
         if (root == NULL)
        return -1;
 
    // Create an empty queue for level order traversal
    queue<TreeNode*> q;
 
    // Enqueue Root and initialize height
    q.push(root);
    TreeNode* node;
    while (q.empty() == false) {
       
        node = q.front();
        q.pop();
        if (node->right != NULL)
            q.push(node->right);
        if (node->left != NULL)
            q.push(node->left);
        
    }
    return node->val;
    }
};
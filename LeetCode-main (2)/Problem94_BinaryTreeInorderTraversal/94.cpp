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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> traversal;

        if(!root)
            return traversal;
        
        vector<int> left = inorderTraversal(root->left);
        vector<int> right = inorderTraversal(root->right);

        traversal.insert(traversal.end(),left.begin(),left.end());
        traversal.push_back(root->val);
        traversal.insert(traversal.end(),right.begin(),right.end());

        return traversal;

    }
};

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preTraversal;
        if(!root)
            return preTraversal;
        
        
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);

        preTraversal.push_back(root->val);
        preTraversal.insert(preTraversal.end(),left.begin(),left.end());
        preTraversal.insert(preTraversal.end(),right.begin(),right.end());

        return preTraversal;
    }
};

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
    int minDepth(TreeNode* root) {
        int cnt=0;
        if(root==NULL) return cnt;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            cnt++;
            for(int i=1;i<=sz;i++){
                TreeNode *tem= q.front();
                q.pop();
                if(tem->left==NULL&&tem->right==NULL){
                    return cnt;
                }
                if(tem->left){
                    q.push(tem->left);
                }
                if(tem->right){
                    q.push(tem->right);
                }
            }
        }
        return cnt;
    }
};

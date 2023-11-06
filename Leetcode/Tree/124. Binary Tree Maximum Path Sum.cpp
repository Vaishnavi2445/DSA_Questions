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
    int maxPath(TreeNode* root, int &result) {
        
        if(root == nullptr){
            return 0;
        }
        int left = maxPath(root->left, result);
        int right = maxPath(root->right, result);

        int M = max(max(left,right)+root->val, root->val);
        int N = max(M, left+right+root->val);
         result = max (N, result);

        return M;
    }
    int maxPathSum(TreeNode* root) {
        int result = INT_MIN;
        maxPath(root, result);
        return result;
    }
};

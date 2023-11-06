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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*>q;
        int count_level = 0;

        if(root == nullptr) {
            return count_level;
        }

        q.push(root);
        
        while(!q.empty()){
            int sizeOfQueue = q.size();

            while(sizeOfQueue > 0){
             root = q.front();
             q.pop();

             if(root->left != nullptr){
                 q.push(root->left);
             }

              if(root->right != nullptr){
                 q.push(root->right);
             }

             sizeOfQueue--;
            }
            count_level++;
        }
        return count_level;
    }
};

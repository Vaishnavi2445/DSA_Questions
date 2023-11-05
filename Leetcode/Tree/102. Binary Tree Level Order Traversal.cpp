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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> result;
        queue<TreeNode*>q;

        if(root == nullptr){
            return result;
        }

        q.push(root);
        while(!q.empty()){
            int size = q.size();

            vector<int>level;

            for(int i=0;i<size;i++){
                root = q.front();
                q.pop();

                level.push_back(root->val);

                if(root->left!=0){
                    q.push(root->left);
                }
                if(root->right!=0){
                    q.push(root->right);
                }
            }

         result.push_back(level);
        
        }
        return result;
    }
};


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

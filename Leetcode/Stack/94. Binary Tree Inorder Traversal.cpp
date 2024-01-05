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

//  Intuition
// The goal is to traverse a binary tree in an inorder fashion, visiting nodes in the order: left, root, right.

// Approach
// Utilize a stack to simulate the recursion process.
// While the current node exists or the stack isn't empty:
// If the current node exists:
// Push the node onto the stack.
// Move to its left child.
// If the current node doesn’t exist:
// Pop the top node from the stack.
// Append its value to the result vector.
// Move to the right child of the popped node.
// Complexity
// Time complexity: O(n) where n is the number of nodes in the tree, as each node is visited once.
// Space complexity: O(n) in the worst-case scenario of a skewed tree, as the stack may hold all nodes in such cases.

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
        vector<int> result;
        stack<TreeNode*> nodes;
        while (root || !nodes.empty()) {
            if (root) {
                nodes.push(root);
                root = root->left;
            } else {
                root = nodes.top();
                nodes.pop();
                result.push_back(root->val);
                root = root->right;
            }
        }
        return result;
    }
};

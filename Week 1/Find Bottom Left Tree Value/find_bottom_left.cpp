
// Leet Code - Find Bottom Left Tree Value solution in C++
// https://leetcode.com/problems/find-bottom-left-tree-value/
// Recursive Solution

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
private:
    int deepestValue = 0;
    int deepestDepth = 0;
    
    void traverse(TreeNode *node, int depthCounter) {
        if (node == NULL) return;
        depthCounter++;
        if (node->left == NULL && node->right == NULL) {
            if (depthCounter >= deepestDepth) {
                deepestValue = node->val;
                deepestDepth = depthCounter;
            }
            depthCounter = 0;
            return;
        }
        traverse(node->right, depthCounter);
        traverse(node->left, depthCounter);
    };
    
public:
    int findBottomLeftValue(TreeNode *root) {
        traverse(root, 0);
        return deepestValue;
    }
};
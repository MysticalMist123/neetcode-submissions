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
    int maxLen = 0;

    int LongestLen(TreeNode* root){
        if(!root) return 0;
        int left = LongestLen(root->left);
        int right = LongestLen(root->right);

        if(left>maxLen) maxLen = left;
        if(right>maxLen) maxLen = right;
        if(left+right+1>maxLen) maxLen = left+right+1;

        return max(left,right) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        LongestLen(root);
        return maxLen-1;
    }
};

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
    bool final = true;
    int heightOf(TreeNode* node){
        if(!node) return 0;
        int left = 0, right = 0;
        left = heightOf(node->left);
        right = heightOf(node->right);
        cout<<left<<" "<<right<<"\n";
        int diff = left-right;
        if(final){
            if(diff == 1 || diff == 0 || diff == -1) final = true;
            else final = false;
        }
        return max(left,right)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = heightOf(root->left), right = heightOf(root->right);
        cout<<left<<" "<<right<<"\n";
        int diff = left-right;
        if(final){
            if(diff == 1 || diff == 0 || diff == -1) final = true;
            else final = false;
        }
        return final;
    }
};

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
        if(root == nullptr)
        {
            return 0;
        }
        int lh = minDepth(root->left)+1;
        int rh = minDepth(root->right)+1;
        if (root->left == nullptr) return rh;
        if (root->right == nullptr) return lh;

        return min(rh,lh);
    }
};

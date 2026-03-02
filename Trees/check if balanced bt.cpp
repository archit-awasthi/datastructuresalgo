class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return treeHeight(root) != -1;
    }

    int treeHeight(TreeNode* root)
    {
        if(!root) return 0;

        int lh = treeHeight(root->left);
        if(lh == -1) return -1;
        int rh = treeHeight(root->right);
        if(rh == -1) return -1;

        if(abs(lh-rh) > 1) return -1;

        return 1+max(lh,rh);
    }
};

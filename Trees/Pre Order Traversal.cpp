class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* n = st.top(); st.pop();
            res.push_back(n->val);
            if(n->right) st.push(n->right);
            if(n->left) st.push(n->left);
        }
        return res;
    }
};
//this is iterative approach 

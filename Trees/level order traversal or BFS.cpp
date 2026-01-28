class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> result;

        if(root == NULL) return result;   // CHANGE 1

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();          // CHANGE 2
            vector<int> level;            // CHANGE 3

            for(int i = 0; i < size; i++) // CHANGE 4
            {
                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }

            result.push_back(level);      // CHANGE 5
        }

        return result;                    // CHANGE 6
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == nullptr) return ans;

        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int>current_level;

            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                current_level.push_back(curr -> val);

                if(curr-> left != nullptr) q.push(curr->left);
                if(curr -> left != nullptr) q.push(curr -> right);

            }
            ans.push_back(current_level);
        }
        return ans;
    }};
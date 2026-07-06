class Solution {
    public: 
    bool validate(TreeNode* root, long long min_val, long long max_val){
        if(root == nullptr) return false;

        if(root->val <= min_val || root->val >= max_val) return false;

        return validate(root->left, min_val, root->val) && validate(root->right, root->val, max_val);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
}
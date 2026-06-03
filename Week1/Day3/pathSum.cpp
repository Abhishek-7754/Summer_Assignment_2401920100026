class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        if(root->left == NULL && root->right==NULL){
            return targetSum == root-> val;

        }
        bool left_sum=hasPathSum(root->left,targetSum-root->val);
        bool right_sum=hasPathSum(root->right,targetSum-root->val);
       return left_sum || right_sum; 
    }
};

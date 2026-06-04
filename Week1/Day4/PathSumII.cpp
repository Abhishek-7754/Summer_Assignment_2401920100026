class Solution {
public:
vector<vector<int>>result;
void fill(TreeNode* root, int sum,vector<int> temp,int& targetsum){
    if(!root)
    return;
    sum+=root->val;
    temp.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
        if(sum==targetsum){
            result.push_back(temp);
        }
        return;
    }
    fill(root->left,sum,temp,targetsum);
    fill(root->right,sum,temp,targetsum);
}
    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
       int sum=0;
       vector<int> temp;
       fill(root,sum,temp,targetsum);
       return result; 
    }
};

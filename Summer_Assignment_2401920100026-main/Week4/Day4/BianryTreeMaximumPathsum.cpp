#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int ans = INT_MIN;

    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }

private:
    int helper(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = max(0, helper(root->left));
        int right = max(0, helper(root->right));

        ans = max(ans, root->val + left + right);

        return root->val + max(left, right);
    }
};

int main() {
    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(2);
    root->right = new TreeNode(10);

    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(1);

    root->right->right = new TreeNode(-25);
    root->right->right->left = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    Solution obj;

    cout << obj.maxPathSum(root);

    return 0;
}
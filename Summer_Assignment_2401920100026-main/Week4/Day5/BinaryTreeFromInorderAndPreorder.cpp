#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

unordered_map<int, int> mp;
int preIndex = 0;

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int start, int end) {
    if (start > end)
        return NULL;

    int val = preorder[preIndex++];
    TreeNode* root = new TreeNode(val);

    int index = mp[val];

    root->left = buildTree(preorder, inorder, start, index - 1);
    root->right = buildTree(preorder, inorder, index + 1, end);

    return root;
}

void postorder(TreeNode* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    for (int i = 0; i < inorder.size(); i++)
        mp[inorder[i]] = i;

    TreeNode* root = buildTree(preorder, inorder, 0, inorder.size() - 1);

    cout << "Postorder Traversal: ";
    postorder(root);

    return 0;
}
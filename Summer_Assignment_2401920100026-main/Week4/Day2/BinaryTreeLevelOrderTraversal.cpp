#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node*right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
vector<vector<int>> levelorderTraversal(Node* root){
    vector<vector<int>> result;
    if(root==NULL) return result;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> level;
        for(int i=0;i<n;i++){
            Node* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node->val);
        }
        result.push_back(level);
    }
    return result;
}

int main(){
  
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    vector<vector<int>> res = levelorderTraversal(root);

for(int i = 0; i < res.size(); i++) {
    for(int j = 0; j < res[i].size(); j++) {
        cout << res[i][j] << " ";
    }
    cout << endl;
}

    
    return 0;
}
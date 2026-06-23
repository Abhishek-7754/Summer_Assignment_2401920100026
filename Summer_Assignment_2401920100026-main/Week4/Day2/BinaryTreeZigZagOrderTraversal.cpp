#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x){
       val=x;
        left=NULL;
        right=NULL;
    }
};
vector<vector<int>> zigzagordertraversal(Node* root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue<Node*>q;
    q.push(root);
    bool lefttoright=true;
    while(!q.empty()){
        int n=q.size();
        vector<int>level;
        for(int i=0;i<n;i++){
        Node* node=q.front();
        q.pop();
        level.push_back(node->val);
        if(node->left!=NULL) q.push(node->left);
        if(node->right!=NULL) q.push(node->right);
        }
        if(!lefttoright){
            reverse(level.begin(),level.end());
        }
        ans.push_back(level);
        lefttoright = !lefttoright;
    }
    return ans;
}
int main(){
    Node* root=new Node(5);
    Node* node2=new Node(4);
    Node* node3=new Node(7);
    Node* node4=new Node(8);
     Node* node5=new Node(12);
    root->left=node2;
    node2->left=node3;
    root->right=node4;
    node4->right=node5;
    vector<vector<int>>res=zigzagordertraversal(root);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }

}
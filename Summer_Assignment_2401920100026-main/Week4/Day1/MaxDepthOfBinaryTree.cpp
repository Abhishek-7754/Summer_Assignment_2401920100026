#include<iostream>
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
int MaxDepthTree(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+ max(MaxDepthTree(root->left),MaxDepthTree(root->right));
}
int main(){
    Node* root=new Node(10);
    Node* node2=new Node(12);
    Node* node3=new Node(8);
    root->left=node2;
    node2->right=node3;
    
    int result = MaxDepthTree(root);
    cout << "the maximum depth of a binary tree is: " << result;
}


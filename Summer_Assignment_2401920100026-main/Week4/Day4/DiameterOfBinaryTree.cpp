#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node*      right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
int height(Node* root){
    if(root==NULL)return 0;
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    return max(leftheight,rightheight)+1;
}

int diameterOfBinaryTree(Node* root) {
    if(root == NULL){
        return 0;
    }
        int leftDiam = diameterOfBinaryTree(root->left);
        int rightDiam = diameterOfBinaryTree(root->right);
        int currDiam = height(root->left)+height(root->right);
        return max(currDiam,max(leftDiam,rightDiam));
    }
    int main(){
    Node* root=new Node(1);
    root->right=new Node(3);
    
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"diameter of binary tree:"<<diameterOfBinaryTree(root);
    }


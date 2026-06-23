#include<iostream>
#include<vector>
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
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

}

int main(){
    Node* root=new Node(5);
    Node* node2=new Node(3);
    Node* node3=new Node(4);
    Node* node4=new Node(2);
    Node* node5=new Node(6);
    root->left=node2;
    node2->left=node3;
    root ->right=node4;
    node4->right=node5;
    
    cout <<"inorder treversal of binary tree:"<<endl;
    inorder(root);
}
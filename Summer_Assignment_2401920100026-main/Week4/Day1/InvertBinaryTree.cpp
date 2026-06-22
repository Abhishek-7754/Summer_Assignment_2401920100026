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
Node* InvertTree(Node* root){
    if(root==NULL){
        return NULL; 
    }
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    InvertTree(root->left);
    InvertTree(root->right);
    return root; 
}
void inorder(Node* root){
    if(root==NULL){
        return;

    }
    inorder(root->left);
    cout<<root->val<<" "<<endl;
    inorder(root->right);
}
int main(){
    Node* root=new Node(14);
    Node* node2=new Node(2);
    Node* node3=new Node(5);
    root->left=node2;
    root->right=node3;
    cout<<"tree before inversion: "<<endl;
    inorder(root);
    InvertTree(root);
        cout<<"the value after inverting tree: "<<endl;
        inorder(root);
        cout<<endl;
    
    return 0;
}

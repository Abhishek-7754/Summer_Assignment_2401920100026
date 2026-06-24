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
Node* BST(Node* root,int val){
    while(root && root->val!=val){
        root=(val<root->val)?root->left:root->right;
    }
    return root;
}
int main(){
    Node* root=new Node(22);
    root->left=new Node(14);
    root->left->right=new Node(12);
    root->right=new Node(24);
    int key;
    cout<<"enter the value to be searched:"<<endl;
    cin>>key;
    Node* result=BST(root,key);
    if(result!=NULL){
        cout<<"element found: "<<key;
    }
    else{
        cout<<"not found:"<<endl;
    }
    return 0;
}
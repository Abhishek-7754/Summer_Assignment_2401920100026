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
bool Search(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(x==root->val){
        return true;
    }
    if(x>root->val){
        return Search(root->right, x);
    } else {
        return Search(root->left, x);
    }
}
int main(){
    Node*root=new Node(10);
    Node* Node2=new Node(12);
    Node* Node3=new Node(14);

    root->right=Node2;
    Node2->right=Node3;

    int x;
    cout<<"Enter the value to be searched: "<<endl;
    cin>>x;
    bool result=Search(root,x);
    if(Search(root,x)){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not"<<endl;
    }
    return 0;
}
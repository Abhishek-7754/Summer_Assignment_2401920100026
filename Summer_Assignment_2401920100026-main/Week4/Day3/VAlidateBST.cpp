#include<iostream>
#include<climits>
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
bool validBST(Node* root,long long min,long long max){
    if(root==NULL) return true;
    if(root->val<=min || root->val>=max){
        return false;
    }
    else{
        return validBST(root->left,min,root->val) && validBST(root->right,root->val,max);
    }
}
bool isvalidBST(Node* root){
  return  validBST(root,LLONG_MIN,LLONG_MAX);
}
int main(){
    Node* root=new Node(22);
    root->left=new Node(14);
    root->left->right=new Node(12);
    root->right=new Node(24);
    bool result=isvalidBST(root);
    if(result){
        cout<<"valid binary search tree:"<<endl;
    }
    else{
        cout<<"not valid: "<<endl;
    }
    return 0;
}
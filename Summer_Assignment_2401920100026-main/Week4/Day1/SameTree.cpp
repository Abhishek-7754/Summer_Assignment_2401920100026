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
bool sameTree(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    if(root1->val != root2->val){
        return false;
    }
    bool isLeftSame = sameTree(root1->left, root2->left);
    bool isRightSame = sameTree(root1->right, root2->right);
    return isLeftSame && isRightSame;
}
int main(){
    Node* root1=new Node(12);
    Node* node2=new Node(8);
    Node* node3=new Node(11);
    root1->left=node2;
    root1->right=node3;
    Node* root2=new Node(12);
    Node* node4=new Node(8);
    Node* node5=new Node(11);
    root2->left=node4;
    root2->right=node5;
    
    bool result=sameTree(root1,root2);
    if(sameTree(root1,root2)){
        cout<<"same tree"<<endl;

    }
    else{
        cout<<"not same "<<endl;
    }
}
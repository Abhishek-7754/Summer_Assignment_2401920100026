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
bool pathsum(Node* root,int targetsum){
    if(root==NULL) return false;
    if(root->left==NULL && root->right==NULL){
        return targetsum==root->val;
    }
    bool left_sum=pathsum(root->left,targetsum-root->val);
    bool right_sum=pathsum(root->right,targetsum-root->val);
    return left_sum || right_sum;
}
int main(){
    Node* root=new Node(11);
    root->right=new Node(4);
    root->right->left=new Node(2);
    root->left=new Node(7);
    root->left->right=new Node(9);
    int targetsum;
    cout<<"enter the value of target sum:"<<endl;
    cin>>targetsum;
    bool result=pathsum(root,targetsum);
    if(result){
cout<<"targetsum found"<<targetsum<<"found\n";
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}
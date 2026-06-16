#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};
ListNode* MergeTwoLists(ListNode* L1,ListNode* L2){
    if(L1==NULL) return  L2;
    if(L2==NULL) return L1;
    ListNode* result;
    if(L1-> val<=L2->val){
        result=L1;
        result->next=MergeTwoLists(L1->next,L2);
    }
    else{
        result=L2;
        result->next=MergeTwoLists(L1,L2->next);
    }
    return result;
}
int main(){
    ListNode* L1=new ListNode(1);
    ListNode* node2=new ListNode(3);
    ListNode* node3=new ListNode(5);
    L1->next=node2;
    node2->next=node3;
    ListNode* L2=new ListNode(2);
    ListNode* node5=new ListNode(4);
    ListNode* node6=new ListNode(6);
    L2->next=node5;
    node5->next=node6;
    ListNode* merged=MergeTwoLists(L1,L2);
    cout<<"MergedList: ";
    while(merged!=NULL){
        cout<<merged->val<<" ";
        merged=merged->next;
    }
    return 0;
}
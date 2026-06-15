#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) {
        val=x;
        next=NULL;
    }
};
ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
       return prev;
    }
    int main(){
    ListNode* head=new ListNode(1);
    ListNode* node2=new ListNode(2);    
   ListNode* node3=new ListNode(3);
    ListNode* node4=new ListNode(4);

    head->next=node2;
    node2->next=node3;
    node3->next=node4;
    ListNode* reversedHead=reverseList(head);
    ListNode* temp=reversedHead;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}
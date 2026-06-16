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
ListNode* reverse(ListNode* head){
    ListNode* prev= NULL;
    ListNode* curr = head;
    ListNode* next= NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
return prev;
}
bool Palindrome(ListNode* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    ListNode*slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* secondhalf=reverse(slow);
    ListNode* firsthalf=head;
    while(secondhalf!=NULL){
        if(firsthalf->val!=secondhalf->val){
            return false;
        }
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;

    }
    return true;
}
int main(){
    ListNode* head=new ListNode(1);
    ListNode* node2=new ListNode(2);
    ListNode* node3=new ListNode(1);
    head->next=node2;
    node2->next=node3;
    bool res = Palindrome(head);
    if(res){
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
    return 0;
}
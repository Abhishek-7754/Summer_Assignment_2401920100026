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
ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!= NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    int main(){
        ListNode* head=new ListNode(1);
        ListNode* node2=new ListNode(2);
        ListNode* node3=new ListNode(3);
        ListNode* node4=new ListNode(4);
        head->next=node2;
        node2->next=node3;
        node3->next=node4;
        ListNode* middle=middleNode(head);
        cout<<"Middle node value: "<<middle->val<<endl;
        return 0;
    }
#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;

    ListNode(int x){
        val=x;
        next=nullptr;
    }
};
bool hasCycle(ListNode* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    ListNode* head=new ListNode(1);
    ListNode* node2=new ListNode(2);
    ListNode* node3=new ListNode(3);
    ListNode* node4=new ListNode(4);


    head->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node2;
    if(hasCycle(head)){
        cout<<"Cycle detected"<<endl;
    }
    else{
        cout<<"No cycle detected"<<endl;
    }

}
